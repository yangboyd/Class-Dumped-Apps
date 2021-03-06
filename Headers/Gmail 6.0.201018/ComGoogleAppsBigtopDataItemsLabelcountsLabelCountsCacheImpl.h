//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopDataItemsLabelcountsApiLabelCountsCache-Protocol.h"
#import "XPTHasLifecycle-Protocol.h"

@class ComGoogleAppsBigtopDataSnapshotsSnapshotsProducerSet, NSString, XPTLifecycle;
@protocol ComGoogleAppsBigtopDataSnapshotsSnapshotsProducer, ComGoogleAppsXplatObserveSettable, ComGoogleCommonUtilConcurrentListenableFuture, JavaUtilMap;

@interface ComGoogleAppsBigtopDataItemsLabelcountsLabelCountsCacheImpl : NSObject <ComGoogleAppsBigtopDataItemsLabelcountsApiLabelCountsCache, XPTHasLifecycle>
{
    id <JavaUtilMap> counts_;
    id <ComGoogleAppsXplatObserveSettable> countsChangedSettable_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> snapshotFuture_;
    ComGoogleAppsBigtopDataSnapshotsSnapshotsProducerSet *snapshotsProducers_;
    XPTLifecycle *lifecycle_;
    id <ComGoogleAppsBigtopDataSnapshotsSnapshotsProducer> snapshotsProducer_;
}

+ (void)initialize;
- (void)dealloc;
- (void)applyUpdatedLabelCountsWithJavaUtilList:(id)arg1;
- (void)replaceLabelCountsWithJavaUtilList:(id)arg1;
- (id)onChangeObservable;
- (id)getTotalCountWithNSString:(id)arg1;
- (id)getUnreadCountWithNSString:(id)arg1;
- (id)getUnseenCountWithNSString:(id)arg1;
- (id)getLifecycle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

