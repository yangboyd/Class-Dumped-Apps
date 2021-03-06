//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPPersistentCache;

@interface SUPMetricsReportCache : NSObject
{
    GIPPersistentCache *_failedMetricRequestsCache;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)gunzipAndRetrieveDataForKey:(id)arg1;
- (void)gzipAndStoreData:(id)arg1 forKey:(id)arg2;
- (void)clearCache;
- (id)retrieveAndClearFailedMetricReportsForKey:(id)arg1;
- (void)storeFailedMetricReport:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

