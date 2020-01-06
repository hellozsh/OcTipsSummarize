//
//  BlockTips.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "BlockTips.h"
int gloablTipAge = 40;

@implementation BlockTips
// MRC环境
- (void)blockTips {
    
    int autoAge = 10;
    static int staticAge = 20;
    __block int blockAge = 30;
    __block __weak NSObject *obj = [[NSObject alloc] init];
    
    int *blockAgeP = &blockAge;
    
    void (^blockTip)(void) = [^{
        
        staticAge = 21;
        gloablTipAge = 41;
        blockAge = 31;
        NSLog(@"gloablAge=%d, autoAge=%d, staticAge=%d, blockAge =%d ",gloablTipAge,autoAge,staticAge,blockAge);
    } copy];
     
    autoAge = 12;
    staticAge = 22;
    gloablTipAge = 42;
    blockAge = 32;
    
    blockTip();
    NSLog(@"gloablAge=%d, autoAge=%d, staticAge=%d, blockAge =%d ",gloablTipAge,autoAge,staticAge,blockAge);
    NSLog(@"%p,%p,%d",&blockAge,blockAgeP,*blockAgeP);

    [blockTip release];
    
    __block id blockSelf = self;
    self.copyPropertyBlock = ^{
         
        NSLog(@"%@",blockSelf);
    };
}

- (void)dealloc {
    
    [super dealloc];
    NSLog(@"%s",__func__);
}

@end
