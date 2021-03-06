//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplTasksApiInternalInternalTaskEdit-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition, ComGoogleAppsBigtopServicesTasksBigTopTask, ComGoogleAppsBigtopServicesTasksBigTopTask_Builder, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncTaskUpdateHelper, JBTLoggingUserActionRecorder, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplConversationsApiInternalThreadStateManager, ComGoogleAppsBigtopSyncClientImplSnoozeApiInternalSnoozePresets, ComGoogleAppsBigtopSyncClientImplSnoozeApiLastSnoozeTracker, ComGoogleAppsBigtopSyncClientImplSnoozeApiSnoozeCommandResultFactory, ComGoogleAppsBigtopSyncClientImplSnoozeApiSnoozeConfigs, ComGoogleAppsBigtopSyncClientImplTasksApiInternalInternalTask, ComGoogleAppsBigtopSyncClientImplTasksApiInternalTaskDueDateFactory, ComGoogleCommonTimeClock, JBTSnoozeConfig;

@interface ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncTaskEditImpl : NSObject <ComGoogleAppsBigtopSyncClientImplTasksApiInternalInternalTaskEdit>
{
    id <ComGoogleCommonTimeClock> clock_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    id <ComGoogleAppsBigtopSyncClientImplSnoozeApiLastSnoozeTracker> lastSnoozeTracker_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    id <ComGoogleAppsBigtopSyncClientImplSnoozeApiInternalSnoozePresets> snoozePresets_;
    id <ComGoogleAppsBigtopSyncClientImplSnoozeApiSnoozeCommandResultFactory> snoozeCommandResultFactory_;
    id <ComGoogleAppsBigtopSyncClientImplSnoozeApiSnoozeConfigs> snoozeConfigs_;
    id <ComGoogleAppsBigtopSyncClientImplTasksApiInternalTaskDueDateFactory> taskDueDateFactory_;
    ComGoogleAppsBigtopSyncClientImplTaskssupportAsyncTaskUpdateHelper *taskUpdateHelper_;
    id <ComGoogleAppsBigtopSyncClientImplConversationsApiInternalThreadStateManager> threadStateManager_;
    JBTLoggingUserActionRecorder *userActionRecorder_;
    id <ComGoogleAppsBigtopSyncClientImplTasksApiInternalInternalTask> task_;
    ComGoogleAppsBigtopServicesTasksBigTopTask_Builder *builder_;
    ComGoogleAppsBigtopServicesTasksBigTopTask *updatedTaskProto_;
    ComGoogleAppsBigtopServicesGmailUpdateTaskCommand_StateTransition *transition_;
    id <JBTSnoozeConfig> snoozeConfig_;
    long long modifiedTimeMs_;
    _Bool isModified_;
}

+ (void)initialize;
- (void)dealloc;
- (id)setModifiedTimeMsWithLong:(long long)arg1;
- (void)saveToTransactionWithComGoogleAppsBigtopSyncClientImplItemsTransactionApiTransaction:(id)arg1;
- (id)scheduleSnoozeWithJBTSpan:(id)arg1;
- (void)scheduleSnoozeWithComGoogleAppsBigtopSyncClientImplCommonSapiCallback:(id)arg1 withJBTSpan:(id)arg2;
- (void)saveWithJBTCallback:(id)arg1 withJBTSpan:(id)arg2;
- (long long)getCompletedTimeSec;
- (_Bool)hasCompletedTimeSec;
- (id)getDueDate;
- (_Bool)hasDueDate;
- (id)getTitle;
- (id)clearRecurrence;
- (id)setRecurrenceWithJBTRecurrence:(id)arg1;
- (_Bool)canSetRecurrence;
- (_Bool)isRecurrenceMaster;
- (id)getRecurrence;
- (_Bool)hasRecurrence;
- (id)clearDueDate;
- (id)unsnooze;
- (id)setSnoozeConfigWithJBTSnoozeConfig:(id)arg1;
- (id)setDueDateWithLong:(long long)arg1 withJBTTaskDueDate_Type:(id)arg2;
- (id)setDueDateSecWithLong:(long long)arg1;
- (id)moveToInbox;
- (id)markAsDone;
- (id)trash;
- (id)clearDisplayedTitle;
- (id)setTitleWithNSString:(id)arg1;
- (_Bool)canSave;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

