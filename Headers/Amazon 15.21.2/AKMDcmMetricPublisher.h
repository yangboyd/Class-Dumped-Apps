//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AKMMetricPublisher-Protocol.h"

@class CMIDefaultMetricsFactory, NSSet, NSString;

@interface AKMDcmMetricPublisher : NSObject <AKMMetricPublisher>
{
    CMIDefaultMetricsFactory *_metricsFactory;
    NSSet *_dimensionMatrix;
    NSString *_fullOsName;
    NSString *_clientProgram;
}

+ (id)cleanMetricName:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *clientProgram; // @synthesize clientProgram=_clientProgram;
@property(retain, nonatomic) NSString *fullOsName; // @synthesize fullOsName=_fullOsName;
@property(retain, nonatomic) NSSet *dimensionMatrix; // @synthesize dimensionMatrix=_dimensionMatrix;
@property(retain, nonatomic) CMIDefaultMetricsFactory *metricsFactory; // @synthesize metricsFactory=_metricsFactory;
- (void).cxx_destruct;
- (id)getOs:(id)arg1;
- (id)getAppVersion:(id)arg1;
- (id)getShortAppName:(id)arg1;
- (id)getAppIdEntries:(id)arg1;
- (id)buildDimensionMatrix:(id)arg1;
- (id)getApplicationId;
- (void)addCount:(id)arg1;
- (void)logMetricEvent:(unsigned long long)arg1;
- (id)initWithMetricsFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

