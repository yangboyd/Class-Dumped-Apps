//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WJ2MetricsHelper.h"

@class WJ2Metrics;

@interface WJ2FFSProvisioningMetricsHelper : WJ2MetricsHelper
{
    WJ2Metrics *_ffsMetrics;
}

@property(retain, nonatomic) WJ2Metrics *ffsMetrics; // @synthesize ffsMetrics=_ffsMetrics;
- (void).cxx_destruct;
- (void)resumeService;
- (void)pauseService;
- (void)stopService;
- (void)startService;
- (id)initWithMetricsModel:(id)arg1;

@end

