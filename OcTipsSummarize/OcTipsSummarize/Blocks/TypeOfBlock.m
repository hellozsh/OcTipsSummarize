//
//  TypeOfBlock.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "TypeOfBlock.h"

int gloablTypeAge = 30;

@implementation TypeOfBlock

- (void)test {
    
    
    // 截获了变量的block为栈block(MRC下效果，ARC是堆block)
    int autoAge = 10;
    static int staticAge = 20;
    void (^stackBlock)(void) = ^{

        NSLog(@"autoAge=%d, staticAge=%d",autoAge,staticAge);
    };
    stackBlock();
    /*
     ARC以下情况会自动执行copy操作
     1.block作为函数返回值时
     2.将block赋值给__strong指针时
     3.block作为Cocoa API中方法名含有usingBlock的方法参数时
     4.block作为GCD API的方法参数时
     
     ARC下以上代码符合情况1，所以打印结果会为堆block
     想要看MRC下效果，去Build Settings 下 把 Objective-C Automatic Reference Counting改为NO
     
     所以MRC下block可以写成：
     @property (copy, nonatomic) void (^block)(void);
     ARC下block可以写成
     @property (strong, nonatomic) void (^block)(void);
     @property (copy, nonatomic) void (^block)(void);
      
     */
    

    // 未截获变量的block为全局block
    void (^globalBlock)(void) = ^{

        NSLog(@"gloablAge=%d",gloablTypeAge);
    };

    globalBlock();
    
    // 对栈block执行copyd为堆block
    void (^mallocBlock)(void) = [stackBlock copy];
     
    
    // 堆block再执行copy操作，引用计算器加1

    NSLog(@"%@---%@--%@",stackBlock,mallocBlock,globalBlock);
    
    // 打印结果：__NSStackBlock__ --- __NSMallocBlock__ -- __NSGlobalBlock__
    
}



@end
