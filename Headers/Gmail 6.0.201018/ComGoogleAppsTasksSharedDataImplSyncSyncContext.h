//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ComGoogleAppsTasksSharedDataImplSyncSyncContext : NSObject
{
}

+ (void)initialize;
- (_Bool)isCompatibleWithSyncOptionsWithTDLSyncControl_SyncOptions:(id)arg1;
- (int)getSyncLatencyMsWithComGoogleAppsXplatUtilPerformanceclockPerformanceClock:(id)arg1;
- (void)propagateSyncExceptionWithJavaLangThrowable:(id)arg1;
- (void)propagateSyncResultWithTDLSyncResult:(id)arg1;
- (id)copySyncContextForNextPage;
- (id)copySyncContextWithReasonWithComGoogleAppsTasksSharedDataImplSyncSyncReason:(id)arg1;
- (id)ticklePayload;
- (id)tickleVersion;
- (id)allCompletedTasksListId;

@end

