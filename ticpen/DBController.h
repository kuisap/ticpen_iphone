//
//  DBController.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#include "Spot_.h"
#import <Foundation/Foundation.h>


@interface DBController : NSObject

- (tpn::Spot_) getAllColumns : (int) pId;

@end
