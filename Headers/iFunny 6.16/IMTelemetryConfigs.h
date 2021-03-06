//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMConfig.h>

@class IMNetworkTypeConfigDict, IMTelemetryAssetReporting, IMTelemetryComponentConfigs, NSArray, NSNumber, NSString;

@interface IMTelemetryConfigs : IMConfig
{
    NSString *_telemetryUrl;
    long long _maxRetryCount;
    long long _maxEventsToPersist;
    NSNumber *_samplingFactor;
    long long _eventTTL;
    long long _processingInterval;
    long long _txLatency;
    IMNetworkTypeConfigDict *_networkType;
    NSNumber *_disableAllGeneralEvents;
    NSArray *_priorityEvents;
    IMTelemetryComponentConfigs *_base;
    IMTelemetryAssetReporting *_assetReporting;
}

@property(retain, nonatomic) IMTelemetryAssetReporting *assetReporting; // @synthesize assetReporting=_assetReporting;
@property(retain, nonatomic) IMTelemetryComponentConfigs *base; // @synthesize base=_base;
@property(retain, nonatomic) NSArray *priorityEvents; // @synthesize priorityEvents=_priorityEvents;
@property(retain, nonatomic) NSNumber *disableAllGeneralEvents; // @synthesize disableAllGeneralEvents=_disableAllGeneralEvents;
@property(retain, nonatomic) IMNetworkTypeConfigDict *networkType; // @synthesize networkType=_networkType;
@property(nonatomic) long long txLatency; // @synthesize txLatency=_txLatency;
@property(nonatomic) long long processingInterval; // @synthesize processingInterval=_processingInterval;
@property(nonatomic) long long eventTTL; // @synthesize eventTTL=_eventTTL;
@property(retain, nonatomic) NSNumber *samplingFactor; // @synthesize samplingFactor=_samplingFactor;
@property(nonatomic) long long maxEventsToPersist; // @synthesize maxEventsToPersist=_maxEventsToPersist;
@property(nonatomic) long long maxRetryCount; // @synthesize maxRetryCount=_maxRetryCount;
@property(retain, nonatomic) NSString *telemetryUrl; // @synthesize telemetryUrl=_telemetryUrl;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;
- (_Bool)isValid;
- (id)getNetworkTypeConfig;
- (id)getType;
- (void)updateWithObject:(id)arg1;
- (_Bool)updatefromDictionary:(id)arg1;
- (id)init;

@end

