//
//  Spot.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

//#include "Spot_.hpp"
#import <Foundation/Foundation.h>

@interface Spot : NSObject
@property (assign) int mId;
@property NSString* mName;
@property NSString* mImg_url;



- (id) init : (int) pId;


@end
