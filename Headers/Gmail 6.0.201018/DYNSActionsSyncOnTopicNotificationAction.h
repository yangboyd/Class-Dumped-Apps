//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSSyncV2CoordinatorsCatchUpManager, DYNSSyncV2EntitiesEntityManagerUtils, DYNSSyncV2EntitiesGroupEntityManagerRegistry, DYNSSyncV2EntitiesUserEntityManagerRegistry, DYNSSyncV2SingleTopicSyncLauncher;
@protocol DYNSAnalyticsStopwatchFactory, DYNSNetworkApiWebChannelPushService, DYNSStorageApiTopicStorageController, JavaxInjectProvider;

@interface DYNSActionsSyncOnTopicNotificationAction : NSObject
{
    DYNSSyncV2CoordinatorsCatchUpManager *catchUpManager_;
    DYNSSyncV2EntitiesEntityManagerUtils *entityManagerUtils_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    DYNSSyncV2SingleTopicSyncLauncher *singleTopicSyncLauncher_;
    id <DYNSAnalyticsStopwatchFactory> stopwatchFactory_;
    id <DYNSStorageApiTopicStorageController> topicStorageController_;
    DYNSSyncV2EntitiesUserEntityManagerRegistry *userEntityManagerRegistry_;
    id <DYNSNetworkApiWebChannelPushService> webChannelPushService_;
}

+ (void)initialize;
- (void)dealloc;
- (id)executeWithDYNSCommonTopicId:(id)arg1;

@end

