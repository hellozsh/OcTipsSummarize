//
//  SimpleBlock.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "SimpleBlock.h"

@implementation SimpleBlock

- (void)test {
    
    void (^stackBlock)(void) = ^{
        
        NSLog(@"this is a block");
    };
    
    stackBlock();
}

@end
