//
//  autoObjcBlock.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "autoObjcBlock.h"

@implementation autoObjcBlock


- (void)strongTest {
    
    // ARC下会自动执行copy

       void (^mallocBlock)(void) = ^{
 
           NSLog(@"autoObject=%@",self); // self是一个局部变量
        };
       mallocBlock();
}

// 如果用了__weak 生成c++报错解决办法
// xcrun -sdk iphoneos clang -arch arm64 -rewrite-objc -fobjc-arc -fobjc-runtime=ios-8.0.0 main.m
- (void)test {
      
    __weak __typeof(self)weakSelf = self;
    // ARC下会自动执行copy
    void (^mallocBlock)(void) = ^{
        
        NSLog(@"autoObject=%@",weakSelf); // self是一个局部变量
    };
    
    mallocBlock();
}

@end
