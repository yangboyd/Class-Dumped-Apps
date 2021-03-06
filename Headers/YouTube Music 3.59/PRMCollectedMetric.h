//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "PRMTransmittable-Protocol.h"

@class NSString, PRMMetricExtension;

@interface PRMCollectedMetric : NSObject <PRMTransmittable, NSCopying>
{
    long long _applicationState;
    long long _lowPowerMode;
    PRMMetricExtension *_metricExtension;
}

+ (id)baseSystemHealthMetrics;
@property(readonly, nonatomic) long long lowPowerMode; // @synthesize lowPowerMode=_lowPowerMode;
@property(readonly, nonatomic) long long applicationState; // @synthesize applicationState=_applicationState;
- (void).cxx_destruct;
- (unsigned long long)hashedCustomEventNameForEventNameString:(id)arg1;
- (int)protoEventCodeFromPrimesEventCode:(unsigned long long)arg1;
- (id)baseSystemHealthMetricsWithEventContext:(id)arg1;
- (_Bool)shouldUseUnknownValueBackwardsCompatibility;
- (id)metricsSystemHealthMessageWithEventContext:(id)arg1;
- (id)metricsProperties;
@property(readonly, nonatomic) PRMMetricExtension *metricExtension;
@property(readonly, nonatomic) _Bool lowPowerModeEnabled;
@property(readonly, nonatomic) long long uiApplicationState;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)initWithApplicationState:(long long)arg1 lowPowerMode:(long long)arg2 metricExtension:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

