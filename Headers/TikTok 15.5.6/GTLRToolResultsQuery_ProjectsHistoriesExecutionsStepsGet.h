//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRToolResultsQuery.h"

@class NSString;

@interface GTLRToolResultsQuery_ProjectsHistoriesExecutionsStepsGet : GTLRToolResultsQuery
{
}

+ (id)queryWithProjectId:(id)arg1 historyId:(id)arg2 executionId:(id)arg3 stepId:(id)arg4;

// Remaining properties
@property(copy, nonatomic) NSString *executionId; // @dynamic executionId;
@property(copy, nonatomic) NSString *historyId; // @dynamic historyId;
@property(copy, nonatomic) NSString *projectId; // @dynamic projectId;
@property(copy, nonatomic) NSString *stepId; // @dynamic stepId;

@end

