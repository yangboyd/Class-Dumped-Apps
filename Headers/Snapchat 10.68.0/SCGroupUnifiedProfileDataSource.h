//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"
#import "SCUpdateListener-Protocol.h"

@class NSArray, NSString, SCArroyoConversationIdsManager, SCExperimentManager, SCFriendsFeedItem, SCLazy, SCQueuePerformer, SCUnifiedProfileNonFriendFriendStoriesProvider, SCUnifiedProfileSnapchatterProvider, SCUpdateListenerAnnouncer;
@protocol SCGroupManager, SCGroupSnapchatterRepository, SCGroupsDataTracking;

@interface SCGroupUnifiedProfileDataSource : NSObject <SCGroupsDataRequestListener, SCDataCoordinatorListener, SCUpdateListener, SCUpdateAnnouncing>
{
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCQueuePerformer *_dataModelUpdatePerformer;
    id <SCGroupManager> _groupManager;
    id <SCGroupsDataTracking> _groupsDataTracker;
    id <SCGroupSnapchatterRepository> _groupSnapchatterRepository;
    SCLazy *_userInfoProvider;
    SCLazy *_friendsFeedDataAccess;
    SCExperimentManager *_experimentManager;
    SCUnifiedProfileSnapchatterProvider *_snapchatterProvider;
    NSString *_groupId;
    NSString *_selfUserId;
    NSString *_groupDisplayName;
    NSString *_groupName;
    NSArray *_cachedGroupMemberIds;
    long long _notificationStatusType;
    long long _muteStoryStatus;
    long long _cognacNotificationStatus;
    SCFriendsFeedItem *_friendsFeedItem;
    SCLazy *_snapchattersDataFetcher;
    SCLazy *_snapchatterDataTracker;
    SCLazy *_snapchatterPublicInfoFetcher;
    SCLazy *_storiesDataAccess;
    SCUnifiedProfileNonFriendFriendStoriesProvider *_nonFriendFriendStoriesProvider;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    NSString *_sessionId;
}

+ (id)announcerIdentifier;
@property(readonly, copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(readonly, nonatomic) SCArroyoConversationIdsManager *arroyoConversationIdsManager; // @synthesize arroyoConversationIdsManager=_arroyoConversationIdsManager;
@property(readonly, nonatomic) SCUnifiedProfileNonFriendFriendStoriesProvider *nonFriendFriendStoriesProvider; // @synthesize nonFriendFriendStoriesProvider=_nonFriendFriendStoriesProvider;
@property(readonly, nonatomic) SCLazy *storiesDataAccess; // @synthesize storiesDataAccess=_storiesDataAccess;
@property(readonly, nonatomic) SCLazy *snapchatterPublicInfoFetcher; // @synthesize snapchatterPublicInfoFetcher=_snapchatterPublicInfoFetcher;
@property(readonly, nonatomic) SCLazy *snapchatterDataTracker; // @synthesize snapchatterDataTracker=_snapchatterDataTracker;
@property(readonly, nonatomic) SCLazy *snapchattersDataFetcher; // @synthesize snapchattersDataFetcher=_snapchattersDataFetcher;
- (void).cxx_destruct;
- (_Bool)_isRTL;
- (void)_dispatchAnnounceUpdate:(id)arg1;
- (void)didUpdateWithAnnouncerIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_didBeginLeavingGroupWithId:(id)arg1;
- (void)_didChangeInfoForGroupWithId:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)_updateFriendsFeedItem:(id)arg1;
- (void)_updateFriendsFeedItemBasedOnFriendsFeedData;
- (void)_performUpdateCognacNotificationStatus:(long long)arg1;
- (void)_updateCognacNotificationStatus:(long long)arg1;
- (void)_handleFetchCognacNotificationStatus:(_Bool)arg1;
- (void)_updateCognacNotificationStatusBasedOnConversationInfo;
- (void)_updateMuteStoryStatus:(long long)arg1;
- (void)_updateMuteStoryStatusBasedOnGroupInfo;
- (void)_updateNotificationStatusType:(long long)arg1;
- (void)_updateNotificationStatusBasedOnGroupInfo;
- (void)_setMemberSnapchatters:(id)arg1;
- (void)_updateGroupMembers;
- (void)_setGroupDisplayName:(id)arg1 groupName:(id)arg2;
- (void)_updateGroupDisplayName;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)updateMuteStory:(_Bool)arg1;
- (void)_handleUpdateMuteCognacNotificationStateSuccess:(_Bool)arg1 isCognacNotificationMuted:(_Bool)arg2 previousStatus:(long long)arg3;
- (void)updateCognacNotificationMuted:(_Bool)arg1;
- (void)_didUpdateGroupNotificationSucceed:(_Bool)arg1 errorMessage:(id)arg2 groupIdInResponse:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)updateNotificationStatusType:(long long)arg1;
- (id)chatGroup;
- (id)friendsFeedItem;
- (_Bool)isPinned;
- (long long)cognacNotificationStatus;
- (long long)muteStoryStatus;
- (long long)notificationStatusType;
- (_Bool)userStoryPrivacyIsPublic;
- (id)groupId;
- (id)groupFormattedDisplayName;
- (id)groupName;
- (id)groupDisplayName;
- (id)groupMemberForUsername:(id)arg1;
- (id)groupMembersExcludeSelf;
- (id)groupMembers;
- (id)initWithGroupManager:(id)arg1 groupId:(id)arg2 groupMembers:(id)arg3 groupsDataTracker:(id)arg4 groupSnapchatterRepository:(id)arg5 selfUserId:(id)arg6 userInfoProvider:(id)arg7 snapchattersDataFetcher:(id)arg8 snapchattersDataTracker:(id)arg9 snapchatterPublicInfoFetcher:(id)arg10 friendsFeedDataAccess:(id)arg11 storiesDataAccess:(id)arg12 arroyoConversationIdsManager:(id)arg13 experimentManager:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

