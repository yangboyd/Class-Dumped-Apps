//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor;
@protocol ComGoogleAppsBigtopDataNetworkSyncserverApiClickMetricsSender, DaggerLazy;

@interface ComGoogleAppsBigtopSyncClientImplSearchAsyncSearchInteractionRecorder_Factory : NSObject
{
    id <ComGoogleAppsBigtopDataNetworkSyncserverApiClickMetricsSender> metricsSender_;
    id <DaggerLazy> zeroStateSuggestionsCache_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
}

- (void)dealloc;
- (id)createWithJBTId:(id)arg1 withNSString:(id)arg2 withInt:(int)arg3 withComGoogleAppsBigtopServicesSearchSearchMetricsProto_Section:(id)arg4 withNSString:(id)arg5 withComGoogleAppsBigtopServicesSearchSearchMetricsProto_SearchClick_ResultSource:(id)arg6;

@end

