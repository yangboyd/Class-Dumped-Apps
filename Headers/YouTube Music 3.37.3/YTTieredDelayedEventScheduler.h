//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTDelayedEventScheduler-Protocol.h"
#import "YTReachabilityObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSMutableDictionary, NSMutableSet, NSString, YTLoggingDispatchQueue, YTReachabilityController;
@protocol YTDelayedEventConfig, YTDelayedEventSchedulerDelegate;

@interface YTTieredDelayedEventScheduler : NSObject <YTReachabilityObserver, YTSystemNotificationsObserver, YTDelayedEventScheduler>
{
    id <YTDelayedEventSchedulerDelegate> _delegate;
    YTReachabilityController *_reachabilityController;
    id <YTDelayedEventConfig> _config;
    NSMutableDictionary *_dispatchTimers;
    NSMutableSet *_enabledTiers;
    NSMutableDictionary *_runningTaskTimes;
    YTLoggingDispatchQueue *_dispatchQueue;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)maybeDispatchBlock:(CDUnknownBlockType)arg1;
- (void)cancelScheduledDispatchForAllTiers;
- (void)scheduleDispatchForAllTiers;
- (void)cancelScheduledDispatchForTier:(int)arg1;
- (void)scheduleDispatchForTier:(int)arg1;
- (void)timerDidFireForTier:(int)arg1;
- (void)reachabilityDidChange;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)didLogEventsInTiers:(id)arg1;
- (void)stopScheduler;
- (void)startScheduler;
- (void)setDelegate:(id)arg1;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

