//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class TDLCountTasks, TDLGetTask, TDLGetTaskList, TDLGetTaskRecurrence, TDLGetUserExperimental, TDLGetUserMetadata, TDLGetUserPrefs, TDLListTaskLists, TDLListTaskRecurrences, TDLListTasks, TDLQuery_QueryCase;

@protocol TDLQueryOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (TDLQuery_QueryCase *)getQueryCase;
- (TDLListTaskRecurrences *)getListTaskRecurrences;
- (_Bool)hasListTaskRecurrences;
- (TDLGetTaskRecurrence *)getGetTaskRecurrence;
- (_Bool)hasGetTaskRecurrence;
- (TDLCountTasks *)getCountTasks;
- (_Bool)hasCountTasks;
- (TDLListTasks *)getListTasks;
- (_Bool)hasListTasks;
- (TDLGetTask *)getGetTask;
- (_Bool)hasGetTask;
- (TDLListTaskLists *)getListTaskLists;
- (_Bool)hasListTaskLists;
- (TDLGetTaskList *)getGetTaskList;
- (_Bool)hasGetTaskList;
- (TDLGetUserExperimental *)getGetUserExperimental;
- (_Bool)hasGetUserExperimental;
- (TDLGetUserPrefs *)getGetUserPrefs;
- (_Bool)hasGetUserPrefs;
- (TDLGetUserMetadata *)getGetUserMetadata;
- (_Bool)hasGetUserMetadata;
@end

