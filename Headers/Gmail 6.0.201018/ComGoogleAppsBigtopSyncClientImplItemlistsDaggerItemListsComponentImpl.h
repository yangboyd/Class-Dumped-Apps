//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsBigtopSyncClientImplItemlistsItemListsComponentImpl-Protocol.h"

@class NSString;
@protocol JavaxInjectProvider;

@interface ComGoogleAppsBigtopSyncClientImplItemlistsDaggerItemListsComponentImpl : NSObject <ComGoogleAppsBigtopSyncClientImplItemlistsItemListsComponentImpl>
{
    id <JavaxInjectProvider> getLiveListsManagerProvider_;
    id <JavaxInjectProvider> provideSchedulerProvider_;
    id <JavaxInjectProvider> getTimeHelperProvider_;
    id <JavaxInjectProvider> provideSapiSpanFactoryProvider_;
    id <JavaxInjectProvider> clockProvider_;
    id <JavaxInjectProvider> randomProvider_;
    id <JavaxInjectProvider> itemListRefresherProvider_;
    id <JavaxInjectProvider> getContactFetchingListenerFactoryProvider_;
    id <JavaxInjectProvider> provideSapiMainExecutorProvider_;
    id <JavaxInjectProvider> provideContactFetchingListenerFactoryProvider_;
    id <JavaxInjectProvider> getClusterFetcherProvider_;
    id <JavaxInjectProvider> getItemListAdaptorProvider_;
    id <JavaxInjectProvider> provideReverseChronologicalSectionsFactoryProvider_;
    id <JavaxInjectProvider> provideSnoozedSectionsFactoryProvider_;
    id <JavaxInjectProvider> adsEnabledProvider_;
    id <JavaxInjectProvider> topPromoEnabledProvider_;
    id <JavaxInjectProvider> provideClassicGmailInboxSectionsFactoryProvider_;
    id <JavaxInjectProvider> providePromotionsInboxSectionsFactoryProvider_;
    id <JavaxInjectProvider> provideItemComparatorProvider_;
    id <JavaxInjectProvider> provideRankedInboxSectionsFactoryProvider_;
    id <JavaxInjectProvider> getInboxChangeBatchingDelayMsProvider_;
    id <JavaxInjectProvider> transientAccountIdProvider_;
    id <JavaxInjectProvider> postPreloadedInitialLoadFutureProvider_;
    id <JavaxInjectProvider> enableStandaloneTasksAndLocationProvider_;
    id <JavaxInjectProvider> getItemListsServiceProvider_;
    id <JavaxInjectProvider> servicesSystemProvider_;
    id <JavaxInjectProvider> provideServiceFactoryProvider_;
    id <JavaxInjectProvider> getItemListSnapshotObserversProvider_;
    id <JavaxInjectProvider> getObservableProvider_;
    id <JavaxInjectProvider> getItemListIdGeneratorProvider_;
    id <JavaxInjectProvider> getSettingsClientProvider_;
    id <JavaxInjectProvider> itemListUnifiedInboxConfigProvider_;
    id <JavaxInjectProvider> getConversationFactoryProvider_;
    id <JavaxInjectProvider> getClusterConfigFactoryProvider_;
    id <JavaxInjectProvider> getQueryMetadataFactoryProvider_;
    id <JavaxInjectProvider> getAdItemFactoryProvider_;
    id <JavaxInjectProvider> getPromoFactoryProvider_;
    id <JavaxInjectProvider> getTaskFactoryProvider_;
    id <JavaxInjectProvider> getItemListCardFactoryProvider_;
    id <JavaxInjectProvider> getClusteredItemsFactoryProvider_;
    id <JavaxInjectProvider> getDetailedItemsElementProducerFactoryProvider_;
    id <JavaxInjectProvider> getTranslationEngineProvider_;
    id <JavaxInjectProvider> translatorProvider_;
    id <JavaxInjectProvider> getPostUsageSnapshotsProducerSetProvider_;
    id <JavaxInjectProvider> getMessageVisibilityHelperFactoryProvider_;
    id <JavaxInjectProvider> getLockerEnabledProvider_;
    id <JavaxInjectProvider> propagateFetchAndBackfillErrorsProvider_;
    id <JavaxInjectProvider> getSnippetUtilProvider_;
    id <JavaxInjectProvider> getVisibleLabelFactoryProvider_;
    id <JavaxInjectProvider> itemListElementProducerFactoryProvider_;
    id <JavaxInjectProvider> getMarkAllAsSeenHelperProvider_;
    id <JavaxInjectProvider> getPermanentlyDeleteAllHelperProvider_;
    id <JavaxInjectProvider> getSelectAllApplierProvider_;
    id <JavaxInjectProvider> getTransactionFactoryForItemsProvider_;
    id <JavaxInjectProvider> inboxSectionTeasersProvider_;
    id <JavaxInjectProvider> inboxSectionsHelperProvider_;
    id <JavaxInjectProvider> getUserActionRecorderProvider_;
    id <JavaxInjectProvider> labelCountsCacheProvider_;
    id <JavaxInjectProvider> getClassicGmailInboxConfigSettingsProvider_;
    id <JavaxInjectProvider> getMessageBasedUiEnabledProvider_;
    id <JavaxInjectProvider> itemListCountProviderImplProvider_;
    id <JavaxInjectProvider> remoteOnlyItemListsProvider_;
    id <JavaxInjectProvider> suppressSnapshotsForViewHeldItemsInPriorityInboxProvider_;
    id <JavaxInjectProvider> suppressSnapshotsForViewHeldItemsInSearchProvider_;
    id <JavaxInjectProvider> unreadInboxSectionItemListsProvider_;
    id <JavaxInjectProvider> isImapAccountProvider_;
    id <JavaxInjectProvider> isExchangeAccountProvider_;
    id <JavaxInjectProvider> useSearchForLabelsProvider_;
    id <JavaxInjectProvider> getRankLockedItemUpdateEnabledProvider_;
    id <JavaxInjectProvider> getStarStatePendingChangeObserverHolderProvider_;
    id <JavaxInjectProvider> assistiveLabelsMoveToLabelAsEnabledProvider_;
    id <JavaxInjectProvider> getInternalPrefetchersProvider_;
    id <JavaxInjectProvider> itemListsImplProvider_;
}

- (void)dealloc;
- (id)getContactFetchingListenerFactory;
- (id)getElementRankComparatorForItems;
- (id)getReverseChronologicalSectionsFactory;
- (id)getElementProducerFactoryForUnifiedInboxItemLists;
- (id)getElementProducerFactoryForItemLists;
- (id)getItemListSnapshotVisitor;
- (id)getItemLists;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

