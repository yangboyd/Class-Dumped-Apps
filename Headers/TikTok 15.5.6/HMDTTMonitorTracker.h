//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDPerformanceReporterDataSource-Protocol.h"

@class HMDMonitorDataManager, HMDReportLimitSizeTool, NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface HMDTTMonitorTracker : NSObject <HMDPerformanceReporterDataSource>
{
    long long hmdCountLimit;
    double _startTimestamp;
    NSMutableArray *_trackersArray;
    NSMutableArray *_metricsArray;
    NSMutableArray *_trackersCacheArray;
    NSObject<OS_dispatch_queue> *_syncQueue;
    HMDMonitorDataManager *_dataManager;
    NSArray *_normalCondition;
    NSArray *_metricCountCondition;
    NSArray *_metricTimerCondition;
    HMDReportLimitSizeTool *_sizeLimitTool;
    struct HMDRecordLocalIDRange _uploadingRange;
    struct HMDRecordLocalIDRange _metricCountRange;
    struct HMDRecordLocalIDRange _metricTimerRange;
}

+ (id)logTypeStrForType:(long long)arg1;
+ (id)generateUploadID;
+ (id)generateLogID;
@property(retain, nonatomic) HMDReportLimitSizeTool *sizeLimitTool; // @synthesize sizeLimitTool=_sizeLimitTool;
@property(retain) NSArray *metricTimerCondition; // @synthesize metricTimerCondition=_metricTimerCondition;
@property(retain) NSArray *metricCountCondition; // @synthesize metricCountCondition=_metricCountCondition;
@property(retain) NSArray *normalCondition; // @synthesize normalCondition=_normalCondition;
@property(nonatomic) struct HMDRecordLocalIDRange metricTimerRange; // @synthesize metricTimerRange=_metricTimerRange;
@property(nonatomic) struct HMDRecordLocalIDRange metricCountRange; // @synthesize metricCountRange=_metricCountRange;
@property(nonatomic) struct HMDRecordLocalIDRange uploadingRange; // @synthesize uploadingRange=_uploadingRange;
@property(retain, nonatomic) HMDMonitorDataManager *dataManager; // @synthesize dataManager=_dataManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property(retain, nonatomic) NSMutableArray *trackersCacheArray; // @synthesize trackersCacheArray=_trackersCacheArray;
@property(retain, nonatomic) NSMutableArray *metricsArray; // @synthesize metricsArray=_metricsArray;
@property(retain, nonatomic) NSMutableArray *trackersArray; // @synthesize trackersArray=_trackersArray;
- (void).cxx_destruct;
- (void)cleanupWithConfig:(id)arg1;
- (void)willResignActive:(id)arg1;
- (void)applicationWillEnterBackground:(id)arg1;
- (_Bool)checkArrayDataFormat:(id)arg1;
- (_Bool)checkDictionaryDataFormat:(id)arg1;
- (void)cleanupRecords:(struct HMDRecordLocalIDRange)arg1 andConditions:(id)arg2 storeClass:(Class)arg3;
- (void)performanceDataDidReportSuccess:(_Bool)arg1;
- (void)cleanupNotUploadAndReportedPerformanceData;
- (void)cleanupPerformanceDataWithConfig:(id)arg1;
- (id)debugRealPerformanceDataWithConfig:(id)arg1;
- (id)performanceCacheDataImmediatelyUpload;
- (void)performanceDataSaveImmediately;
- (id)fetchTTMonitorRecordsStartTime:(double)arg1 endTime:(double)arg2 limitCount:(long long)arg3;
- (id)performanceDataWithLimitSizeFromTime:(double)arg1 endTime:(double)arg2 limitCount:(long long)arg3;
- (id)performanceDataWithCountLimit:(long long)arg1;
- (id)metricTimerPerformanceData;
- (id)metricCountPerformanceData;
- (void)hmd_uploadMonitorDataImmediatelyWithRetryCount:(long long)arg1;
- (id)filterTrackerReservedKeysWithDataDict:(id)arg1;
- (id)getMetricDataWithRecords:(id)arg1;
- (id)getTracksDataWithRecords:(id)arg1;
- (void)tracksCountChangedWithSyncWrite:(_Bool)arg1;
- (void)timerEvent:(id)arg1 label:(id)arg2 value:(float)arg3 needAggregate:(_Bool)arg4 appID:(id)arg5;
- (void)countEvent:(id)arg1 label:(id)arg2 value:(float)arg3 needAggregate:(_Bool)arg4 appID:(id)arg5;
- (void)trackData:(id)arg1 logType:(id)arg2 serviceType:(id)arg3 appID:(id)arg4 actionType:(unsigned long long)arg5;
- (void)trackData:(id)arg1 logType:(id)arg2 serviceType:(id)arg3 appID:(id)arg4 syncWrite:(_Bool)arg5;
- (void)trackData:(id)arg1 logType:(id)arg2 serviceType:(id)arg3 appID:(id)arg4;
- (void)trackData:(id)arg1 type:(long long)arg2 serviceType:(id)arg3 appID:(id)arg4;
- (id)customConfig;
- (_Bool)performanceDataSource;
- (void)setupWithHeimdallrReportSizeLimimt:(id)arg1;
- (Class)trackerStoreClass;
- (Class)metricStoreClass;
- (id)initWithMonitorDataManager:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

