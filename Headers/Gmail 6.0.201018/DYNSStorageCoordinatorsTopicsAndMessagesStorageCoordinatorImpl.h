//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSStorageApiTopicsAndMessagesStorageCoordinator-Protocol.h"

@class ComGoogleAppsXplatSqlSqlDatabase, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2SubscriptionsEventDispatcher, DYNSSyncV2SubscriptionsUiSubscriptionManager, NSString;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSAnalyticsStopwatchFactory, DYNSCommonDynamiteClock, DYNSCommonLowPriorityTaskStateTracker, DYNSFlagsSharedConfiguration, DYNSStorageControllersGroupStorageControllerInternal, DYNSStorageControllersTopicMessageStorageControllerInternal, DYNSStorageControllersTopicStorageControllerInternal, JavaxInjectProvider;

@interface DYNSStorageCoordinatorsTopicsAndMessagesStorageCoordinatorImpl : NSObject <DYNSStorageApiTopicsAndMessagesStorageCoordinator>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSFlagsSharedConfiguration> sharedConfiguration_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    id <DYNSStorageControllersGroupStorageControllerInternal> groupStorageController_;
    id <DYNSCommonLowPriorityTaskStateTracker> lowPriorityTaskStateTracker_;
    ComGoogleAppsXplatSqlSqlDatabase *sqlDatabase_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    id <DYNSStorageControllersTopicStorageControllerInternal> topicStorageController_;
    id <DYNSStorageControllersTopicMessageStorageControllerInternal> topicMessageStorageController_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
    id <ComGoogleAppsXplatObserveSettable> messageEventsSettable_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getGroupsForRetentionCleanup;
- (id)getGroupsForClearHistoryCleanup;
- (id)deleteTopicsAndMessagesOlderThanRetentionHorizon;
- (id)deleteTopicsAndMessagesOlderThanClearHistoryTime;
- (id)deleteExpiredTopicsAndMessagesWithLong:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

