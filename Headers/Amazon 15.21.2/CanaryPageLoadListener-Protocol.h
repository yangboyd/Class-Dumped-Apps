//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSError, NSString;

@protocol CanaryPageLoadListener
- (void)logMetrics:(NSString *)arg1 value:(long long)arg2;
- (void)onPageLatencyMetricsRecorded;
- (void)onPageError:(NSError *)arg1;
- (void)onPageLoaded;
- (void)onPageStarted;
@end

