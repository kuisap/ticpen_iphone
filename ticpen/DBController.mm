//
//  DBController.m
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#import "DBController.h"
//#import "FMDB.h"
#include "Spot_.h"

@implementation DBController

- (tpn::Spot_) getAllColumns:(int)pId {
    return tpn::Spot_(1);
}

/*
- (IBAction)load:(id)sender {
    //DBの呼び出し
    NSArray *paths = NSSearchPathForDirectoriesInDomains( NSDocumentDirectory, NSUserDomainMask, YES );
    NSString *dir = [paths objectAtIndex:0];
    FMDatabase *db = [FMDatabase databaseWithPath:[dir stringByAppendingPathComponent:@"clothes.db"]];
    NSString *select = @"select * from item";
    [db open];
    //クエリの実行
    FMResultSet *rs = [db executeQuery:select];
    //NSString *uid;
    while([rs next]) {
        for (int i=0;i<7;i++)
            NSLog(@"%@",[rs stringForColumnIndex:i]);
    }
    //[db executeUpdate:sql];
    [db close];
    
}
*/

@end
