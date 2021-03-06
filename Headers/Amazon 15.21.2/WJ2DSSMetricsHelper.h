//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJ2MetricsHelper.h"

@class WJ2Metrics;

@interface WJ2DSSMetricsHelper : WJ2MetricsHelper
{
    WJ2Metrics *_dssMetrics;
    WJ2Metrics *_computeConfigMetrics;
    WJ2Metrics *_getProvisioneesStatusMetrics;
}

@property(retain, nonatomic) WJ2Metrics *getProvisioneesStatusMetrics; // @synthesize getProvisioneesStatusMetrics=_getProvisioneesStatusMetrics;
@property(retain, nonatomic) WJ2Metrics *computeConfigMetrics; // @synthesize computeConfigMetrics=_computeConfigMetrics;
@property(retain, nonatomic) WJ2Metrics *dssMetrics; // @synthesize dssMetrics=_dssMetrics;
- (void).cxx_destruct;
- (void)recordEndpointRedirection;
- (void)stopGetCustomerProvisioneesSetupStatusOperationWithError:(id)arg1;
- (void)startGetCustomerProvisioneesSetupStatusOperation;
- (void)stopComputeConfigurationMetricsOperationWithError:(id)arg1;
- (void)startComputeConfigurationMetricsOperation;
- (void)recordCanProceed:(_Bool)arg1;
- (id)initWithClientName:(id)arg1 metricsType:(long long)arg2;

@end

