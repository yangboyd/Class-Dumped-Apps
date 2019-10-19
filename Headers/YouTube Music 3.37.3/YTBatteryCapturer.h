//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSHashTable, NSString, YTBatteryDrainSample, YTReachabilityController;

@interface YTBatteryCapturer : NSObject <YTSystemNotificationsObserver>
{
    YTReachabilityController *_reachabilityController;
    NSHashTable *_observers;
    long long _applicationState;
    long long _batteryState;
    _Bool _backgroundTaskExpired;
    _Bool _backgroundFetchOccuredSinceEnteringBackground;
    _Bool _disabled;
    GIMMe *_gimme;
    YTBatteryDrainSample *_lastSample;
}

@property(retain, nonatomic) YTBatteryDrainSample *lastSample; // @synthesize lastSample=_lastSample;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (_Bool)shouldFillIsLowPowerMode;
- (_Bool)inValidSampleState;
- (id)createIosBatteryMetricFromStartSample:(id)arg1 endSample:(id)arg2;
- (id)sampleBatteryState;
- (void)observeBackgroundTaskActiveNotification:(id)arg1;
- (void)notifyObserversWithSample:(id)arg1;
- (void)batteryLevelDidChange;
- (void)batteryStateDidChange;
- (void)appDidEnterBackground:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)didPerformBackgroundFetch;
- (void)addBatteryMonitoringObserver:(id)arg1;
- (void)disableMonitoring;
- (void)enableMonitoring;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

