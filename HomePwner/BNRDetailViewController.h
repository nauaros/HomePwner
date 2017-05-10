//
//  BNRImageTransformer.m
//  HomePwner
//
//  Created by Naufal Aros El Morabet on 2/11/15.
//  Copyright © 2015 Big Nerd Ranch. All rights reserved.
//

#import <UIKit/UIKit.h>

@class BNRItem;

@interface BNRDetailViewController : UIViewController <UIViewControllerRestoration>

@property (nonatomic, strong) BNRItem *item;
@property (nonatomic, copy) void (^dismissBlock)(void);

- (instancetype)initForNewItem:(BOOL)isNew;

@end
