//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PNPPushNotificationMetrics;

@interface PNPReportingMetrics : NSObject
{
    PNPPushNotificationMetrics *_pushMetrics;
}

@property(retain, nonatomic) PNPPushNotificationMetrics *pushMetrics; // @synthesize pushMetrics=_pushMetrics;
- (void).cxx_destruct;
- (id)failureMetricTriggerForEvent:(id)arg1;
- (id)successMetricTriggerForEvent:(id)arg1;
- (void)emitMetricFailureForEvent:(id)arg1;
- (void)emitMetricSuccessForEvent:(id)arg1;
- (void)registerReportingMetrics;
- (id)init;

@end

