//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataUiMessageConverter, DYNSNetworkConnectivityOfflineExceptionHandler, DYNSSyncV2CoordinatorsTopicPaginationHelper, DYNSSyncV2EntitiesCacheResultVerifier, DYNSSyncV2EntitiesEntityManagerUtils, DYNSSyncV2SubscriptionsUiSubscriptionManager;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSFlagsSharedConfiguration, DYNSNetworkConnectivityNetworkConnectionState, DYNSStorageApiFlatGroupStorageCoordinator, DYNSStorageApiTopicMessageStorageController, DYNSSyncApiSmartReplyManager, DYNSSyncStateLocalGroupViewedState, DYNSSyncStatePendingMessagesState, JavaxInjectProvider;

@interface DYNSActionsGetInitialMessagesInFlatGroupAction : NSObject
{
    DYNSSyncV2EntitiesCacheResultVerifier *cacheResultVerifier_;
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSStorageApiFlatGroupStorageCoordinator> flatGroupStorageCoordinator_;
    DYNSSyncV2EntitiesEntityManagerUtils *entityManagerUtils_;
    id <JavaxInjectProvider> executorProvider_;
    id <ComGoogleAppsXplatObserveSettable> messageEventsSettable_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    DYNSNetworkConnectivityOfflineExceptionHandler *offlineExceptionHandler_;
    id <DYNSSyncStatePendingMessagesState> pendingMessagesState_;
    id <DYNSSyncApiSmartReplyManager> smartReplyManager_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    id <DYNSStorageApiTopicMessageStorageController> topicMessageStorageController_;
    DYNSSyncV2CoordinatorsTopicPaginationHelper *topicPaginationHelper_;
    DYNSDataUiMessageConverter *uiMessageConverter_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
    id <DYNSSyncStateLocalGroupViewedState> localGroupViewedState_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
}

+ (void)initialize;
- (void)dealloc;
- (id)executeWithDYNSCommonGroupId:(id)arg1 withInt:(int)arg2;

@end

