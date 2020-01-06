//
//  __BlockBlock.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "__BlockBlock.h"
#import "Person.h"

@implementation __BlockBlock


// 当block在栈上时，不会对变量产生强引用
// MRC下，用__block不会对变量产生强引用
// 所以在MRC下，用__block修饰self，self强引用block，不会造成循环引用


// block内部修改auto变量值用__block
// __block不能修饰静态变量和全局变量
// 对于NSArray和NSDictionary 里面的元素加减不算修改
- (void)test {
      
    __block int autoAge = 10;
     
    __block Person *obj = [[Person alloc] init];
    
    // ARC下会自动执行copy
    void (^mallocBlock)(void) = ^{
        
        NSLog(@"autoAge=%d %@",autoAge,obj);
    };
    
    mallocBlock();
      
}

// MRC环境
- (void)forwardTest {
    
    __block int autoAge = 10;
     
    Person *obj = [[Person alloc] init];
   
     
    int *p = &autoAge;
    NSLog(@"p=%p",p);
    {
       NSLog(@"autoAge=%p",&autoAge);
            
       void (^stackBlock)(void) = ^{
           
           autoAge = 20;
           NSLog(@"autoAge=%d %@",autoAge,obj);
           NSLog(@"block autoAge=%p",&autoAge);
       };
       
        void (^mallocBlock)(void) = [stackBlock copy];
      
    
        NSLog(@"%@=%p,%@=%p",stackBlock,stackBlock,mallocBlock,mallocBlock);
        
        stackBlock();
        mallocBlock();
      
        [mallocBlock release];
       
        stackBlock();
        
        [obj release];
    }
    
    NSLog(@"autoAge=%p",&autoAge);
    NSLog(@"p=%p %d",p,*p);
}

@end
