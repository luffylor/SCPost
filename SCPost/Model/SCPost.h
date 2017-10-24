//
//  SCPost.h
//  SCPost
//
//  Created by Xiao Han on 9/20/17.
//  Copyright © 2017 IOS Club. All rights reserved.
//


#import <Foundation/Foundation.h>


@interface SCPost : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, strong) NSDate *postDate;

- (instancetype)initWithDictionary:(NSDictionary *)dict;

@end
