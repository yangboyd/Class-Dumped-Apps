//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"

@class NSString;
@protocol DYNAnalyticsLogEvent, DYNSharedLayerService;

@protocol DYNAnalyticsData <NSCopying>
- (long long)latency;
- (void)invalidateAnalyticsDataForReason:(NSString *)arg1;
- (id <DYNAnalyticsLogEvent>)analyticsEventWithSharedLayerService:(id <DYNSharedLayerService>)arg1;
@end

