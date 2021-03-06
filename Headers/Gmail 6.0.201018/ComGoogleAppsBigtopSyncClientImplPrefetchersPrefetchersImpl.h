//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplPrefetchersApiInternalInternalPrefetchers-Protocol.h"

@class ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory, ComGoogleAppsBigtopSyncClientImplCommonItemListIdGenerator, ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor, ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory, ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager, NSString;
@protocol ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor, ComGoogleAppsXplatDaggerAsyncProvider, ComGoogleCommonUtilConcurrentListenableFuture, JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplPrefetchersPrefetchersImpl : NSObject <ComGoogleAppsBigtopSyncClientImplPrefetchersApiInternalInternalPrefetchers>
{
    ComGoogleAppsBigtopSyncClientImplCommonSapiMainExecutor *sapiMainExecutor_;
    ComGoogleAppsBigtopSyncClientImplLivelistLiveListsManager *liveListsManager_;
    ComGoogleAppsBigtopSyncClientImplCommonSapiSpan_Factory *sapiSpanFactory_;
    ComGoogleAppsBigtopServicesGmailCommonComponentMessageVisibilityHelperFactory *messageVisibilityHelperFactory_;
    id <ComGoogleAppsBigtopSyncClientImplCommonLiveListAdaptor> liveListAdaptor_;
    id <JavaxInjectProvider> rankLockedItemUpdateEnabled_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> snapshotsGettingVisitor_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> snapshotsSettingVisitor_;
    id <ComGoogleAppsXplatDaggerAsyncProvider> detailedItemsElementProducerFactory_;
    id <ComGoogleCommonUtilConcurrentListenableFuture> postPreloadedInitialLoadFuture_;
    ComGoogleAppsBigtopSyncClientImplCommonItemListIdGenerator *itemListIdGenerator_;
}

+ (void)initialize;
- (void)dealloc;
- (id)createElementProducerForDefaultPrefetcherWithBoolean:(_Bool)arg1;
- (id)createPrefetcherWithComGoogleAppsBigtopSyncClientImplProducersElementProducer:(id)arg1;
- (id)prefetchRemoteDetailedItemsWithJavaUtilList:(id)arg1;
- (id)prefetchDetailedItemsWithJavaUtilList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

