//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonUtilConcurrentSettableFuture, JBTSConfigureSyncRequest_SyncMode;
@protocol ComGoogleCommonUtilConcurrentAsyncCallable;

@interface ComGoogleAppsBigtopDataItemsSyncAsyncSyncTaskExecutor_SyncTask : NSObject
{
    id <ComGoogleCommonUtilConcurrentAsyncCallable> syncTaskAsyncCallable_;
    JBTSConfigureSyncRequest_SyncMode *syncMode_;
    ComGoogleCommonUtilConcurrentSettableFuture *resultFuture_;
    _Bool canThrottle_;
    ComGoogleCommonUtilConcurrentSettableFuture *allPendingChangesSyncedFuture_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAllPendingChangesSyncedFuture;
- (id)getResultFuture;
- (void)submitToWithJavaUtilConcurrentExecutor:(id)arg1;
- (id)getSyncMode;
- (_Bool)canSubsumeTaskWithJBTSConfigureSyncRequest_SyncMode:(id)arg1 withBoolean:(_Bool)arg2;

@end

