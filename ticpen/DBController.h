//
//  DBController.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Spot.h"

@interface DBController : NSObject

- (Spot*) getAllColumns : (int) pId;

@end
