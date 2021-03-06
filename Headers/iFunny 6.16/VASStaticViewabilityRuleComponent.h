//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/VASViewabilityWatcherRule.h>

#import <Funny/VASRuleComponent-Protocol.h>

@class NSDictionary, NSObject, NSString, VASScheduler, VASTask;
@protocol OS_dispatch_queue, VASRuleFiredDelegate;

@interface VASStaticViewabilityRuleComponent : VASViewabilityWatcherRule <VASRuleComponent>
{
    _Bool _hasFired;
    NSString *_eventId;
    NSObject<OS_dispatch_queue> *_queue;
    VASScheduler *_scheduler;
    NSDictionary *_eventArgs;
    id <VASRuleFiredDelegate> _delegate;
    VASTask *_viewableTask;
}

+ (id)logger;
- (void).cxx_destruct;
@property(retain, nonatomic) VASTask *viewableTask; // @synthesize viewableTask=_viewableTask;
@property(nonatomic) _Bool hasFired; // @synthesize hasFired=_hasFired;
@property(nonatomic) __weak id <VASRuleFiredDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *eventArgs; // @synthesize eventArgs=_eventArgs;
@property(readonly, nonatomic) VASScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(readonly, copy) NSString *description;
- (double)currentTrackingTime;
- (void)releaseResources;
- (void)reset;
- (void)queue_fire;
- (void)fire;
- (void)stopViewableTimer;
- (void)stoppedTracking;
- (void)startedTracking;
- (id)initWithView:(id)arg1 scheduler:(id)arg2 viewabilityPercent:(long long)arg3 viewedDuration:(double)arg4 viewedContinuous:(_Bool)arg5 eventId:(id)arg6 eventArgs:(id)arg7 delegate:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

