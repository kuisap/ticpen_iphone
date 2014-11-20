//
//  DBController.m
//  ticpen
//
//  Created by ポイフル on 2014/11/20.
//  Copyright (c) 2014年 KUISAP. All rights reserved.
//

#import "DBController.h"
#import "FMDB.h"
#import "Spot.h"

#define DB_NAME @""

@implementation DBController


/**
        テーブル名・カラム数を実際のDBファイルに沿って変更すること
 **/
- (Spot *) getAllColumns:(int)pId {
    Spot * spot = [[Spot alloc] init:pId];
    
    // DBの読み込み
    NSArray *paths = NSSearchPathForDirectoriesInDomains( NSDocumentDirectory, NSUserDomainMask, YES );
    NSString *dir = [paths objectAtIndex:0];
    
    FMDatabase *db = [FMDatabase databaseWithPath:[dir stringByAppendingPathComponent:DB_NAME]];
    NSString *select = [NSString stringWithFormat:@"select * from TABLE_NAME where id = %d", pId];
    [db open];
    
    //クエリの実行
    FMResultSet *rs = [db executeQuery:select];
    while([rs next]) {
        for (int i=0;i<7;i++){
            NSLog(@"%@",[rs stringForColumnIndex:i]);
        }
    }
    
    //[db executeUpdate:sql];
    [db close];
    
    return spot;
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
