//
//  BNRImageTransformer.m
//  HomePwner
//
//  Created by Naufal Aros El Morabet on 15/11/15.
//  Copyright © 2015 Big Nerd Ranch. All rights reserved.
//

#import "BNRImageTransformer.h"

@implementation BNRImageTransformer

// Tells the transformer what type of value will receive from
// the transformedValue: method
+ (Class)transformedValueClass
{
    return [NSData class];
}

- (id)transformedValue:(id)value
{
    if (!value) {
        return nil;
    }
    
    if ([value isKindOfClass:[NSData class]]) {
        return value;
    }
    
    return UIImagePNGRepresentation(value);
}

- (id)reverseTransformedValue:(id)value
{
    return [UIImage imageWithData:value];
}

@end
