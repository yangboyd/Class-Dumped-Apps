//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CMIMetricEvent, CMIMetricsFactory;

@interface OptOutMetrics : NSObject
{
    id <CMIMetricsFactory> _metricsFactory;
    id <CMIMetricEvent> _metricEvent;
    NSString *_clientName;
    NSString *_clientOS;
}

@property(retain, nonatomic) NSString *clientOS; // @synthesize clientOS=_clientOS;
@property(retain, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(retain, nonatomic) id <CMIMetricEvent> metricEvent; // @synthesize metricEvent=_metricEvent;
@property(retain, nonatomic) id <CMIMetricsFactory> metricsFactory; // @synthesize metricsFactory=_metricsFactory;
- (void).cxx_destruct;
- (id)sha256Hash:(id)arg1;
- (void)optOut:(_Bool)arg1 wifiConfiguration:(id)arg2;
- (id)initWithMetricsFactory:(id)arg1 clientName:(id)arg2 clientOS:(id)arg3;

@end

