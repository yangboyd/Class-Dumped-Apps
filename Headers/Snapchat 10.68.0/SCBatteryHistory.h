//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SCBatteryHistory : NSObject
{
    NSMutableDictionary *_trackingCount;
    double _lastSampleTime;
    int _networkEventOccurred;
    int _diskEventOccurred;
    int _locationEventOccurred;
    NSObject *_eventLock;
    CDUnknownBlockType _cpuUsageListener;
}

@property(copy, nonatomic) CDUnknownBlockType cpuUsageListener; // @synthesize cpuUsageListener=_cpuUsageListener;
- (void).cxx_destruct;
- (id)collection;
- (void)resume;
- (void)_visualize;
- (void)_updateTrackingCount:(id)arg1 to:(_Bool)arg2;
- (void)addPerformanceEvent:(id)arg1;
- (void)_updateBitsForEvent:(int)arg1 baseName:(id)arg2 numberBits:(int)arg3;
- (_Bool)addSample:(id)arg1;
- (int)_encodedCpuUsage;
- (double)_deltaSinceLastSample;
- (_Bool)_readyForNewSample;
- (id)init;

@end

