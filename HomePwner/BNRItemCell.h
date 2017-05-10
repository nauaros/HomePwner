//
//  BNRImageTransformer.m
//  HomePwner
//
//  Created by Naufal Aros El Morabet on 9/10/15.
//  Copyright © 2015 Big Nerd Ranch. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface BNRItemCell : UITableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *thumbnailView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *serialNumberLabel;
@property (weak, nonatomic) IBOutlet UILabel *valueLabel;

@property (copy, nonatomic) void (^actionBlock)(void);

@end
