//
//  BlockTips.h
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface BlockTips : NSObject

@property (nonatomic, copy) void(^copyPropertyBlock)(void);

- (void)blockTips;

@end

NS_ASSUME_NONNULL_END
