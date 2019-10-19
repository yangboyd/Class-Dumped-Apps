//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, SCBackgroundPrefetchLogger, SCDisposableObserverLifecycle, SCObservable, SCQueuePerformer, SCUserSession, UIApplication;
@protocol OS_dispatch_semaphore;

@interface SCBackgroundPrefetchManager : NSObject
{
    SCUserSession *_userSession;
    UIApplication *_application;
    NSArray *_prefetchers;
    SCObservable *_backgroundPrefetchHandler;
    unsigned long long _wakeUpIntervalInSeconds;
    _Bool _requireCharging;
    SCDisposableObserverLifecycle *_appLifecycle;
    NSOperationQueue *_utilityQueue;
    SCBackgroundPrefetchLogger *_logger;
    SCQueuePerformer *_queuePerformer;
    NSObject<OS_dispatch_semaphore> *_networkStatusSignal;
}

- (void).cxx_destruct;
- (void)_saveConsumptionRecorderWithRemainTime:(unsigned long long)arg1;
- (void)_setupConsumptionRecorder;
- (id)_backgroundPrefetchDateMap;
- (void)_addFetchResultToMap:(id)arg1 fetcherName:(id)arg2 fetchResult:(unsigned long long)arg3 fetchId:(id)arg4 fetchStartTime:(double)arg5 triggerSource:(long long)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_performPrefetchWithTriggerSource:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_didEnterBackground;
- (void)_setupPrefetchObserver;
- (void)networkReachabilityChanged:(id)arg1;
- (void)setupPrefetchWakeUpInterval;
- (id)initWithUserSession:(id)arg1 application:(id)arg2 prefetchers:(id)arg3 backgroundPrefetchHandler:(id)arg4 wakeUpIntervalInMinutes:(unsigned long long)arg5 requireCharging:(_Bool)arg6;

@end

