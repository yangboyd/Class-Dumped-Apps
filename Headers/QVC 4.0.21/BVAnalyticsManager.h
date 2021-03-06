//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol NSObject, OS_dispatch_queue, OS_dispatch_source;

@interface BVAnalyticsManager : NSObject
{
    _Bool _isDryRunAnalytics;
    NSLocale *_analyticsLocale;
    NSMutableDictionary *_testImpressionEventCompletionQueue;
    NSMutableDictionary *_testPageViewEventCompletionQueue;
    NSNumber *_isStagingServer;
    NSString *_clientId;
    NSMutableArray *_eventQueue;
    NSMutableArray *_pageviewQueue;
    NSObject<OS_dispatch_queue> *_concurrentEventQueue;
    NSObject<OS_dispatch_source> *_queueFlushTimer;
    double _queueFlushInterval;
    NSObject<OS_dispatch_queue> *_timerEventQueue;
    NSObject<OS_dispatch_queue> *_localeUpdateNotificationTokenQueue;
    id <NSObject> _localeUpdateNotificationCenterToken;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <NSObject> localeUpdateNotificationCenterToken; // @synthesize localeUpdateNotificationCenterToken=_localeUpdateNotificationCenterToken;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *localeUpdateNotificationTokenQueue; // @synthesize localeUpdateNotificationTokenQueue=_localeUpdateNotificationTokenQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *timerEventQueue; // @synthesize timerEventQueue=_timerEventQueue;
@property(nonatomic) double queueFlushInterval; // @synthesize queueFlushInterval=_queueFlushInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *queueFlushTimer; // @synthesize queueFlushTimer=_queueFlushTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *concurrentEventQueue; // @synthesize concurrentEventQueue=_concurrentEventQueue;
@property(retain, nonatomic) NSMutableArray *pageviewQueue; // @synthesize pageviewQueue=_pageviewQueue;
@property(retain, nonatomic) NSMutableArray *eventQueue; // @synthesize eventQueue=_eventQueue;
@property(nonatomic) _Bool isDryRunAnalytics; // @synthesize isDryRunAnalytics=_isDryRunAnalytics;
@property(retain, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(retain, nonatomic) NSNumber *isStagingServer; // @synthesize isStagingServer=_isStagingServer;
- (void).cxx_destruct;
- (void)flushPageViewEventCompletionQueue;
- (void)flushImpressionEventCompletionQueue;
- (void)enqueuePageViewTestWithName:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)enqueueImpressionTestWithName:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (id)baseUrl;
- (id)formatDate:(id)arg1;
- (void)unregisterForCurrentLocaleDidChangeNotifications;
- (void)registerForCurrentLocaleDidChangeNotifications;
- (void)logAnalyticsLocaleUnsafe;
- (void)logAnalyticsLocale;
@property(retain, nonatomic) NSLocale *analyticsLocale; // @synthesize analyticsLocale=_analyticsLocale;
- (void)sendBatchedPOSTEvent:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)flushQueueUnsafe;
- (void)flushQueue;
- (void)queuePageViewEventDict:(id)arg1;
- (void)scheduleEventQueueFlush;
- (void)processEvent:(id)arg1 isAnonymous:(_Bool)arg2;
- (void)queueAnonymousEvent:(id)arg1;
- (void)queueEvent:(id)arg1;
- (void)invalidateTimer;
- (void)setTimer;
- (void)sendAppStateEvent:(id)arg1 appSubState:(id)arg2;
- (void)sendAppStateEvent:(id)arg1;
- (void)sendAppInBackgroundEvent:(id)arg1;
- (void)sendAppActiveEvent:(id)arg1;
- (void)sendAppLaunchedEvent:(id)arg1;
- (id)getAppStateEventParams;
- (void)setUpApplicationDidEnterBackground;
- (void)setUpApplicationDidBecomeActive;
- (void)setUpApplicationDidFinishLaunching;
- (void)registerForAppStateChanges;
- (id)getMobileDiagnosticParams;
- (id)init;
@property(readonly, nonatomic) NSMutableDictionary *testPageViewEventCompletionQueue; // @synthesize testPageViewEventCompletionQueue=_testPageViewEventCompletionQueue;
@property(readonly, nonatomic) NSMutableDictionary *testImpressionEventCompletionQueue; // @synthesize testImpressionEventCompletionQueue=_testImpressionEventCompletionQueue;
- (void)setFlushInterval:(double)arg1;

@end

