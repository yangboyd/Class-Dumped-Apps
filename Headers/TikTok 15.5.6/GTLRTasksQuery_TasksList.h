//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRTasksQuery.h"

@class NSString;

@interface GTLRTasksQuery_TasksList : GTLRTasksQuery
{
}

+ (id)queryWithTasklist:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *completedMax; // @dynamic completedMax;
@property(copy, nonatomic) NSString *completedMin; // @dynamic completedMin;
@property(copy, nonatomic) NSString *dueMax; // @dynamic dueMax;
@property(copy, nonatomic) NSString *dueMin; // @dynamic dueMin;
@property(nonatomic) long long maxResults; // @dynamic maxResults;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(nonatomic) _Bool showCompleted; // @dynamic showCompleted;
@property(nonatomic) _Bool showDeleted; // @dynamic showDeleted;
@property(nonatomic) _Bool showHidden; // @dynamic showHidden;
@property(copy, nonatomic) NSString *tasklist; // @dynamic tasklist;
@property(copy, nonatomic) NSString *updatedMin; // @dynamic updatedMin;

@end

