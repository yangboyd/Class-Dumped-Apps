//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsXplatSubscribePublisher-Protocol.h"

@class ComGoogleAppsXplatJobsJobJoiningExecutor, JavaUtilConcurrentAtomicAtomicReference, NSString, XPTLifecycle;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, ComGoogleAppsXplatObserveObservable, ComGoogleAppsXplatObserveObserver, ComGoogleAppsXplatObserveSettable, DYNSCommonDynamiteClock, DYNSNetworkApiRequestManager, DYNSStorageApiGroupStorageController, JavaUtilMap, JavaxInjectProvider;

@interface DYNSSyncV2SubscriptionsBlockedRoomSummaryListPublisher : NSObject <ComGoogleAppsXplatSubscribePublisher>
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    ComGoogleAppsXplatJobsJobJoiningExecutor *jobJoiningExecutor_;
    id <DYNSStorageApiGroupStorageController> groupStorageController_;
    id <ComGoogleAppsXplatObserveObservable> blockStateChangedEventObservable_;
    id <ComGoogleAppsXplatObserveObserver> blockStateChangedEventObserver_;
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    id <ComGoogleAppsXplatObserveSettable> snapshotSettable_;
    id <JavaUtilMap> blockedRoomCache_;
    XPTLifecycle *lifecycle_;
    JavaUtilConcurrentAtomicAtomicReference *lastKnownResult_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getLifecycle;
- (id)changeConfigurationWithId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

