//
//  SpotAlignmenter.h
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Spot.h"
#import "DBController.h"

@interface SpotAlignmenter : NSObject
@property NSArray *spots;
@property int pointer;
//@property int pointer;

- (id) init : (int) pArraySize;
@end
