//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSSyncApiSmartReplyManager-Protocol.h"
#import "DYNSSyncPrefetchApiSmartReplyPrefetcher-Protocol.h"

@class DYNSSyncGetSmartRepliesSyncLauncher, DYNSSyncSmartRepliesSaverLauncher, DYNSSyncV2SubscriptionsEventDispatcher, DYNSSyncV2SubscriptionsUiSubscriptionManager, NSString;
@protocol DYNSAnalyticsClearcutEventsLogger, JavaUtilMap, JavaUtilSet;

@interface DYNSSyncSmartReplyManagerImpl : NSObject <DYNSSyncApiSmartReplyManager, DYNSSyncPrefetchApiSmartReplyPrefetcher>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    DYNSSyncGetSmartRepliesSyncLauncher *getSmartRepliesSyncLauncher_;
    DYNSSyncSmartRepliesSaverLauncher *smartRepliesSaverLauncher_;
    DYNSSyncV2SubscriptionsUiSubscriptionManager *uiSubscriptionManager_;
    id <JavaUtilMap> topicReplyCache_;
    id <JavaUtilMap> dmReplyCache_;
    id <JavaUtilSet> updatedTopicIds_;
    id <JavaUtilSet> updatedDmIds_;
    id <JavaUtilSet> syncedOrSyncingTopics_;
    id <JavaUtilSet> syncedOrSyncingDms_;
    id <JavaUtilSet> messagesFromWebchannel_;
    _Bool disableSyncForTesting_;
}

+ (void)initialize;
- (void)dealloc;
- (void)disableSyncForTesting;
- (id)prefetchSmartRepliesForTopicsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)prefetchSmartRepliesForDmsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)writeToDb;
- (void)handleWebchannelMessagePostEventWithDYNSCommonMessageId:(id)arg1;
- (void)handlePostedMessagesWithComGoogleCommonCollectImmutableList:(id)arg1;
- (void)handleEditedOrDeletedMessageWithDYNSCommonMessageId:(id)arg1 withBoolean:(_Bool)arg2;
- (_Bool)invalidateForSpecificMessageWithDYNSCommonMessageId:(id)arg1;
- (_Bool)isUpdatedWithDYNSCommonTopicId:(id)arg1;
- (_Bool)isUpdatedWithDYNSCommonDmId:(id)arg1;
- (void)invalidateSmartRepliesWithDYNSCommonTopicId:(id)arg1;
- (void)invalidateSmartRepliesWithDYNSCommonDmId:(id)arg1;
- (id)getSmartRepliesWithDYNSCommonMessageId:(id)arg1;
- (id)getSmartRepliesWithDYNSCommonTopicId:(id)arg1;
- (id)getSmartRepliesWithDYNSCommonDmId:(id)arg1;
- (void)updateSmartRepliesWithJavaUtilMap:(id)arg1 withJavaUtilMap:(id)arg2 withDYNProtoDynamiteClientMetadata_SmartReplySource:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

