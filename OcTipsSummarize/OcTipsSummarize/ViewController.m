//
//  ViewController.m
//  OcTipsSummarize
//
//  Created by suhua zhou on 2020/1/6.
//  Copyright © 2020 suhua zhou. All rights reserved.
//

#import "ViewController.h"
#import "TypeOfBlock.h"
#import "autoObjcBlock.h"
#import "__BlockBlock.h"
#import "BlockTips.h"

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    
    BlockTips *tips = [[BlockTips alloc] init];
    [tips blockTips];
    [tips release];
    

    [[[TypeOfBlock alloc] init] test];
    
    [[[autoObjcBlock alloc] init] test];
    
    NSLog(@"------__BlockBlock start----------");
    [[[__BlockBlock alloc] init] forwardTest];
    // Do any additional setup after loading the view.
}


- (void)setRepresentedObject:(id)representedObject {
    [super setRepresentedObject:representedObject];

    // Update the view, if already loaded.
}


@end
