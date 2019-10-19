//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSDate, NSDictionary, NSString, SCArroyoConversationIdsManager, SCCheetahTooltipManagerFeed, SCExperimentManager, SCFriendsFeedSnapReplayAnimationStateManager, SCFriendsFeedSubstituteAnimationStateManager, SCGroupInviteStore, SCLazy, SCQueuePerformer, SCScopedAccess, SCStoriesReplayManager;

@interface SCFriendsFeedViewModelCoordinator : NSObject
{
    SCQueuePerformer *_performer;
    NSString *_currentUsername;
    NSString *_currentUserId;
    NSDate *_currentUserBirthday;
    SCStoriesReplayManager *_storiesReplayManager;
    SCFriendsFeedSubstituteAnimationStateManager *_substituteAnimationStateManager;
    SCScopedAccess *_friendmojiPresenter;
    SCFriendsFeedSnapReplayAnimationStateManager *_replayAnimationStateManager;
    SCLazy *_mapStatusStore;
    SCExperimentManager *_experimentManager;
    SCArroyoConversationIdsManager *_arroyoConversationIdsManager;
    SCGroupInviteStore *_groupInviteStore;
    NSDictionary *_cachedViewModelInfos;
    NSDictionary *_cachedViewModels;
    NSCache *_friendmojiSizeCache;
    NSString *_lastPlayedSnapIdentifier;
    SCCheetahTooltipManagerFeed *_tooltipManager;
}

- (void).cxx_destruct;
- (id)_avatarAccessoryIconForFriendsFeedItem:(id)arg1 eventGroupIds:(id)arg2;
- (void)_updateLastPlayedSnapIdentifierWithFriendsFeedItem:(id)arg1;
- (id)_viewModelInfoForFeedItems:(id)arg1;
- (id)_viewModelsByDiffUpdateWithInfo:(id)arg1;
- (void)_performViewModelGenerationForFriendsFeedItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performResetLastPlayedSnap;
- (void)resetLastPlayedSnap;
- (void)viewModelForFriendsFeedItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPerformer:(id)arg1 currentUsername:(id)arg2 currentUserId:(id)arg3 currentUserBirthday:(id)arg4 storiesReplayManager:(id)arg5 substituteAnimationStateManager:(id)arg6 friendmojiPresenter:(id)arg7 replayAnimationStateManager:(id)arg8 mapStatusStore:(id)arg9 experimentManager:(id)arg10 arroyoConversationIdsManager:(id)arg11 groupInvitesStore:(id)arg12 tooltipManager:(id)arg13;

@end

