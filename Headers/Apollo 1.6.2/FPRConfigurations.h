//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPRPhenotypeFlags, FPRRemoteConfigFlags;

@interface FPRConfigurations : NSObject
{
    _Bool _remoteConfigEnabled;
    unsigned long long _sources;
    FPRPhenotypeFlags *_phenotypeFlags;
    FPRRemoteConfigFlags *_remoteConfigFlags;
}

+ (void)reset;
+ (id)sharedInstance;
@property(nonatomic) _Bool remoteConfigEnabled; // @synthesize remoteConfigEnabled=_remoteConfigEnabled;
@property(retain, nonatomic) FPRRemoteConfigFlags *remoteConfigFlags; // @synthesize remoteConfigFlags=_remoteConfigFlags;
@property(retain, nonatomic) FPRPhenotypeFlags *phenotypeFlags; // @synthesize phenotypeFlags=_phenotypeFlags;
@property(nonatomic) unsigned long long sources; // @synthesize sources=_sources;
- (void).cxx_destruct;
- (unsigned int)memorySamplingFrequencyInBackgroundInMS;
- (unsigned int)memorySamplingFrequencyInForegroundInMS;
- (_Bool)sessionsMemoryCaptureEnabled;
- (unsigned int)cpuSamplingFrequencyInBackgroundInMS;
- (unsigned int)cpuSamplingFrequencyInForegroundInMS;
- (_Bool)sessionsCPUCaptureEnabled;
- (unsigned int)maxSessionLengthInMinutes;
- (float)sessionsSamplingPercentage;
- (_Bool)featureSessionsEnabled;
- (unsigned int)featureRolloutScreenTracesVCAnalyticsParityAutopush;
- (unsigned int)featureRolloutScreenTracesVCAnalyticsParity;
- (unsigned int)featureRolloutScreenTracesForContainerVCAutopush;
- (unsigned int)featureRolloutScreenTracesForContainerVC;
- (unsigned int)featureRolloutScreenTracesSwizzlingAutopush;
- (unsigned int)featureRolloutScreenTracesSwizzling;
- (unsigned int)featureRolloutScreenTracesAutopush;
- (unsigned int)featureRolloutScreenTraces;
- (unsigned int)featureRolloutDelegateSwizzlingAutopush;
- (unsigned int)featureRolloutNSURLConnectionAutopush;
- (unsigned int)featureRolloutDelegateSwizzling;
- (unsigned int)featureRolloutNSURLConnection;
- (unsigned int)backgroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundNetworkEventCountForLogSource:(int)arg1;
- (unsigned int)backgroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)backgroundEventCountForLogSource:(int)arg1;
- (unsigned int)foregroundEventTimeLimitForLogSource:(int)arg1;
- (unsigned int)foregroundEventCountForLogSource:(int)arg1;
- (float)logNetworkSamplingRateForLogSource:(int)arg1;
- (float)logTraceSamplingRateForLogSource:(int)arg1;
- (float)logSamplingRateForLogSource:(int)arg1;
- (id)logSamplingSeedForLogSource:(int)arg1;
@property(nonatomic, getter=isInstrumentationEnabled) _Bool instrumentationEnabled;
@property(nonatomic, getter=isDataCollectionEnabled) _Bool dataCollectionEnabled;
- (void)update;
- (id)initWithSources:(unsigned long long)arg1;

@end

