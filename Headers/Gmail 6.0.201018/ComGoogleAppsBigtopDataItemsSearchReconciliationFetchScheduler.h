//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleAppsBigtopDataItemsSearchReconciliationFetchScheduler_LatestReconciliationFetchFutureTracker;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopDataItemsSearchReconciliationFetchScheduler : NSObject
{
    id lock_;
    id <JavaxInjectProvider> executor_;
    id <JavaxInjectProvider> servicesScheduledExecutorService_;
    ComGoogleAppsBigtopDataItemsSearchReconciliationFetchScheduler_LatestReconciliationFetchFutureTracker *latestReconciliationFetchFutureTracker_;
}

+ (void)initialize;
- (void)dealloc;
- (id)scheduleWithComGoogleCommonUtilConcurrentAsyncCallable:(id)arg1;

@end

