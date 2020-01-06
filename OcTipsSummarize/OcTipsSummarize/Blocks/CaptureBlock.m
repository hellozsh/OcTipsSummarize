//
//  CaptureBlock.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "CaptureBlock.h"

int gloablAge = 30;

@implementation CaptureBlock

- (void)test {
    
    int autoAge = 10;
    static int staticAge = 20;
    void (^stackBlock)(void) = ^{
        
        NSLog(@"autoAge=%d, staticAge=%d, gloablAge=%d",autoAge,staticAge,gloablAge);
    };
    
    stackBlock();
}

@end
