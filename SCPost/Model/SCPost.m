//
//  SCPost.m
//  SCPost
//
//  Created by Xiao Han on 9/20/17.
//  Copyright © 2017 IOS Club. All rights reserved.
//

#import "SCPost.h"

@implementation SCPost

- (instancetype)initWithDictionary:(NSDictionary *)dict
{
    if (self = [super init]) {
        self.name = dict[@"user"];
        self.message = dict[@"message"];
        return self;
    }
    return nil;
}



@end
