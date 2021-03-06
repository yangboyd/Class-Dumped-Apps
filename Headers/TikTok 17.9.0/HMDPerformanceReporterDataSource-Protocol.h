//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class HMDDebugRealConfig, NSArray, NSString;

@protocol HMDPerformanceReporterDataSource <NSObject>

@optional
- (double)properLimitSizeWeight;
- (void)performanceSizeLimitedDataDidReportSuccess:(_Bool)arg1;
- (NSArray *)performanceDataWithLimitSize:(unsigned long long)arg1 limitCount:(long long)arg2 currentSize:(unsigned long long *)arg3;
- (NSArray *)performanceCacheDataImmediatelyUpload;
- (NSArray *)performanceSDKDataWitLimitCount:(long long)arg1 sdkAid:(NSString *)arg2;
- (void)performanceDataDidReportSuccess:(_Bool)arg1;
- (void)cleanupPerformanceDataWithConfig:(HMDDebugRealConfig *)arg1;
- (NSArray *)debugRealPerformanceDataWithConfig:(HMDDebugRealConfig *)arg1;
- (NSArray *)metricTimerPerformanceData;
- (NSArray *)metricCountPerformanceData;
- (NSArray *)performanceDataWithCountLimit:(long long)arg1;
- (unsigned long long)properLimitCount;
- (unsigned long long)reporterPriority;
@end

