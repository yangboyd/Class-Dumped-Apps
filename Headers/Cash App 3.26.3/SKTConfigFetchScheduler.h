//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Smooch/SKTRemoteOperationScheduler.h>

@class NSMutableArray, SKTConfig;
@protocol SKTConfigFetchSchedulerDelegate;

@interface SKTConfigFetchScheduler : SKTRemoteOperationScheduler
{
    _Bool _isInitializationComplete;
    int _retryCount;
    CDUnknownBlockType _fetchCompletionHandler;
    NSMutableArray *_callbacksOnInitComplete;
    id <SKTConfigFetchSchedulerDelegate> _delegate;
}

@property int retryCount; // @synthesize retryCount=_retryCount;
@property __weak id <SKTConfigFetchSchedulerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSMutableArray *callbacksOnInitComplete; // @synthesize callbacksOnInitComplete=_callbacksOnInitComplete;
@property(copy) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property _Bool isInitializationComplete; // @synthesize isInitializationComplete=_isInitializationComplete;
- (void).cxx_destruct;
- (void)logPushTokenIfExists;
- (_Bool)isAppValid;
- (void)initializationDidComplete;
- (void)operationDidSucceed:(id)arg1;
- (void)notifyInitializationFailedWithError:(id)arg1 code:(id)arg2 statusCode:(long long)arg3 description:(id)arg4;
- (void)handleAppNotFound:(id)arg1 statusCode:(long long)arg2;
- (void)handleInvalidAuth:(id)arg1;
- (void)handleUnauthorized:(id)arg1;
- (int)baseRetryInterval:(_Bool)arg1;
- (void)handleUnknownStatus:(id)arg1;
- (void)operationDidFail:(id)arg1;
- (void)addCallbackOnInitializationComplete:(CDUnknownBlockType)arg1;
- (void)operationCompleted:(id)arg1;
- (void)scheduleImmediatelyWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)shouldIgnoreRequest;
@property(readonly) SKTConfig *config;
- (id)initWithConfig:(id)arg1 synchronizer:(id)arg2;

@end

