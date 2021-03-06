//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AriaObjC/ACTIStats-Protocol.h>

@class ACTObjCTaskScheduler, NSMutableDictionary, NSString;

@interface ACTStats : NSObject <ACTIStats>
{
    NSString *statsTentantToken;
    NSString *tenantId;
    ACTObjCTaskScheduler *storeStatsScheduler;
    ACTObjCTaskScheduler *sendStatsScheduler;
    NSMutableDictionary *statsCounters;
    int storeFrequency;
    int sendFrequency;
}

+ (long long)lowTimer;
+ (long long)normalTimer;
+ (long long)highTimer;
+ (int)power;
+ (id)nameForProfile;
+ (void)reset;
+ (void)setHighTimer:(long long)arg1 normalTimer:(long long)arg2 lowTimer:(long long)arg3;
+ (void)setPower:(int)arg1;
+ (void)setNamedProfile:(id)arg1;
+ (void)setProfile:(int)arg1;
+ (id)retrieveInitialDiskSize;
+ (void)storeInitialDiskSize:(id)arg1;
+ (id)allStatsTenants;
+ (id)firstStatsTenant;
+ (id)statsForTenant:(id)arg1;
+ (id)statInstanceFromTenantId:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onFlushAndTearDown:(id)arg1;
- (void)onUpdateStatsFromUserInfo:(id)arg1;
- (id)statsCounterWithName:(id)arg1 andType:(id)arg2;
- (void)restartWithInterval:(long long)arg1;
- (void)enforceSendFrequencyLimit:(long long)arg1;
- (void)start;
- (void)onTimerElapsedStoreStats;
- (void)onTimerElapsedSendStats;
- (id)statsValueString;
- (id)statsDictionaryForString:(id)arg1;
- (void)sendStatsUsingLogger:(id)arg1 isTearingDown:(_Bool)arg2;
- (void)populateStartAndStopStatsCounter:(id)arg1 forEventProperties:(id)arg2;
- (void)populateStatsCounter:(id)arg1 forStatsValueString:(id)arg2;
- (void)populateStatsCounter:(id)arg1 forEventProperties:(id)arg2;
- (id)mapStatToStatName:(id)arg1 priority:(int *)arg2;
- (void)getStatsFromDBAndUpdateCounters;
- (long long)nextSendTimeForTenant:(id)arg1;
- (long long)accumulatedCount:(id)arg1;
- (unsigned long long)currentCount:(id)arg1 ForPriority:(int)arg2;
- (unsigned long long)currentCount:(id)arg1;
- (void)reset;
- (void)unregisterForEvents;
- (id)initWithStatsTenant:(id)arg1 collectStatsForTenant:(id)arg2 sendFrequencyInSec:(int)arg3 storeFrequencyInSec:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

