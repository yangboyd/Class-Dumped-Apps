//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGListDiffable-Protocol.h>
#import <FBSharedFramework/IGUnitItemInformationProviding-Protocol.h>

@class IGAdPlatformGapRules, IGCameraEffectChainingContext, IGLiveBroadcast, IGStoryAdPodRulesModel, IGStoryCarouselModel, IGStoryEmojiReactorsPinningMetadata, IGStoryNetegoModel, IGStoryViewerCoverItemModel, IGStoryViewerPivotModel, IGUser, NSArray, NSAttributedString, NSDate, NSString;
@protocol IGStoryItemType><IGUnitItemInformationProviding, IGStoryReelOwnerType, IGStoryViewerViewContextual;

@interface IGStoryViewerViewModel : NSObject <IGListDiffable, IGUnitItemInformationProviding>
{
    NSString *_diffIdentifier;
    _Bool _isNux;
    _Bool _canReply;
    _Bool _canReshare;
    _Bool _supportsFollowing;
    _Bool _isLive;
    _Bool _openViewerListAtLaunch;
    _Bool _fetchable;
    _Bool _isSponsored;
    _Bool _isArchive;
    _Bool _isStoryHighlight;
    _Bool _isInsights;
    _Bool _allowExpiredStories;
    _Bool _hideFooter;
    _Bool _hideHeaderAvatar;
    _Bool _isPrideReel;
    _Bool _isDirectMemory;
    _Bool _shouldOpenFactCheckFlowDeeplinkedIGStory;
    NSString *_reelPK;
    id <IGStoryReelOwnerType> _owner;
    long long _type;
    NSArray *_items;
    id <IGStoryItemType><IGUnitItemInformationProviding> _startingItem;
    NSDate *_itemFilterTimestamp;
    NSString *_sourceToken;
    id <IGStoryViewerViewContextual> _context;
    NSString *_focusBroadcastID;
    NSArray *_broadcasts;
    IGLiveBroadcast *_startingBroadcast;
    IGCameraEffectChainingContext *_arEffectChainingContext;
    IGUser *_currentUser;
    NSString *_discussionStickerTargetCommentID;
    NSString *_uniqueReelID;
    IGStoryViewerPivotModel *_pivotModel;
    NSString *_reelTitle;
    NSAttributedString *_attributedReelTitle;
    IGStoryViewerCoverItemModel *_reelCoverModel;
    IGStoryNetegoModel *_storyNetegoModel;
    IGAdPlatformGapRules *_gapRules;
    IGStoryAdPodRulesModel *_adPodRulesModel;
    IGStoryCarouselModel *_carouselModel;
    NSArray *_videoToCarouselCutSecs;
    NSArray *_carouselTransformationCards;
    long long _highlightsHeaderDesign;
    NSString *_unitItemId;
    unsigned long long _unitItemType;
    unsigned long long _archiveNavButtonStyle;
    IGStoryEmojiReactorsPinningMetadata *_emojiReactorPinningMetadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStoryEmojiReactorsPinningMetadata *emojiReactorPinningMetadata; // @synthesize emojiReactorPinningMetadata=_emojiReactorPinningMetadata;
@property(readonly, nonatomic) unsigned long long archiveNavButtonStyle; // @synthesize archiveNavButtonStyle=_archiveNavButtonStyle;
@property(readonly, nonatomic) unsigned long long unitItemType; // @synthesize unitItemType=_unitItemType;
@property(readonly, nonatomic) NSString *unitItemId; // @synthesize unitItemId=_unitItemId;
@property(nonatomic) _Bool shouldOpenFactCheckFlowDeeplinkedIGStory; // @synthesize shouldOpenFactCheckFlowDeeplinkedIGStory=_shouldOpenFactCheckFlowDeeplinkedIGStory;
@property(nonatomic) _Bool isDirectMemory; // @synthesize isDirectMemory=_isDirectMemory;
@property(readonly, nonatomic) long long highlightsHeaderDesign; // @synthesize highlightsHeaderDesign=_highlightsHeaderDesign;
@property(readonly, copy, nonatomic) NSArray *carouselTransformationCards; // @synthesize carouselTransformationCards=_carouselTransformationCards;
@property(readonly, copy, nonatomic) NSArray *videoToCarouselCutSecs; // @synthesize videoToCarouselCutSecs=_videoToCarouselCutSecs;
@property(readonly, nonatomic) IGStoryCarouselModel *carouselModel; // @synthesize carouselModel=_carouselModel;
@property(readonly, nonatomic) IGStoryAdPodRulesModel *adPodRulesModel; // @synthesize adPodRulesModel=_adPodRulesModel;
@property(readonly, nonatomic) IGAdPlatformGapRules *gapRules; // @synthesize gapRules=_gapRules;
@property(readonly, nonatomic) IGStoryNetegoModel *storyNetegoModel; // @synthesize storyNetegoModel=_storyNetegoModel;
@property(readonly, nonatomic) IGStoryViewerCoverItemModel *reelCoverModel; // @synthesize reelCoverModel=_reelCoverModel;
@property(readonly, copy, nonatomic) NSAttributedString *attributedReelTitle; // @synthesize attributedReelTitle=_attributedReelTitle;
@property(readonly, copy, nonatomic) NSString *reelTitle; // @synthesize reelTitle=_reelTitle;
@property(readonly, nonatomic) IGStoryViewerPivotModel *pivotModel; // @synthesize pivotModel=_pivotModel;
@property(readonly, copy, nonatomic) NSString *uniqueReelID; // @synthesize uniqueReelID=_uniqueReelID;
@property(readonly, copy, nonatomic) NSString *discussionStickerTargetCommentID; // @synthesize discussionStickerTargetCommentID=_discussionStickerTargetCommentID;
@property(readonly, nonatomic) _Bool isPrideReel; // @synthesize isPrideReel=_isPrideReel;
@property(readonly, nonatomic) _Bool hideHeaderAvatar; // @synthesize hideHeaderAvatar=_hideHeaderAvatar;
@property(readonly, nonatomic) _Bool hideFooter; // @synthesize hideFooter=_hideFooter;
@property(readonly, nonatomic) _Bool allowExpiredStories; // @synthesize allowExpiredStories=_allowExpiredStories;
@property(readonly, nonatomic) IGUser *currentUser; // @synthesize currentUser=_currentUser;
@property(readonly, nonatomic) _Bool isInsights; // @synthesize isInsights=_isInsights;
@property(readonly, nonatomic) _Bool isStoryHighlight; // @synthesize isStoryHighlight=_isStoryHighlight;
@property(readonly, nonatomic) _Bool isArchive; // @synthesize isArchive=_isArchive;
@property(readonly, nonatomic) _Bool isSponsored; // @synthesize isSponsored=_isSponsored;
@property(readonly, nonatomic) _Bool fetchable; // @synthesize fetchable=_fetchable;
@property(readonly, copy, nonatomic) IGCameraEffectChainingContext *arEffectChainingContext; // @synthesize arEffectChainingContext=_arEffectChainingContext;
@property(readonly, nonatomic) IGLiveBroadcast *startingBroadcast; // @synthesize startingBroadcast=_startingBroadcast;
@property(readonly, copy, nonatomic) NSArray *broadcasts; // @synthesize broadcasts=_broadcasts;
@property(readonly, copy, nonatomic) NSString *focusBroadcastID; // @synthesize focusBroadcastID=_focusBroadcastID;
@property(readonly, nonatomic) id <IGStoryViewerViewContextual> context; // @synthesize context=_context;
@property(readonly, copy, nonatomic) NSString *sourceToken; // @synthesize sourceToken=_sourceToken;
@property(readonly, nonatomic) NSDate *itemFilterTimestamp; // @synthesize itemFilterTimestamp=_itemFilterTimestamp;
@property(readonly, nonatomic) _Bool openViewerListAtLaunch; // @synthesize openViewerListAtLaunch=_openViewerListAtLaunch;
@property(readonly, nonatomic) id <IGStoryItemType><IGUnitItemInformationProviding> startingItem; // @synthesize startingItem=_startingItem;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) _Bool isLive; // @synthesize isLive=_isLive;
@property(readonly, nonatomic) _Bool supportsFollowing; // @synthesize supportsFollowing=_supportsFollowing;
@property(readonly, nonatomic) _Bool canReshare; // @synthesize canReshare=_canReshare;
@property(readonly, nonatomic) _Bool canReply; // @synthesize canReply=_canReply;
@property(readonly, nonatomic) _Bool isNux; // @synthesize isNux=_isNux;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) id <IGStoryReelOwnerType> owner; // @synthesize owner=_owner;
@property(readonly, copy, nonatomic) NSString *reelPK; // @synthesize reelPK=_reelPK;
- (_Bool)isEqualToDiffableObject:(id)arg1;
- (id)diffIdentifier;
@property(readonly, nonatomic) _Bool isStoryNetego;
@property(readonly, nonatomic) _Bool isTypeStory;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithItemFilterTimestamp:(id)arg1;
- (id)initWithReelPK:(id)arg1 type:(long long)arg2 owner:(id)arg3 isNux:(_Bool)arg4 canReply:(_Bool)arg5 canReshare:(_Bool)arg6 supportsFollowing:(_Bool)arg7 items:(id)arg8 startingItem:(id)arg9 openViewerListAtLaunch:(_Bool)arg10 itemFilterTimestamp:(id)arg11 sourceToken:(id)arg12 context:(id)arg13 broadcasts:(id)arg14 startingBroadcast:(id)arg15 fetchable:(_Bool)arg16 isSponsored:(_Bool)arg17 isArchive:(_Bool)arg18 isStoryHighlight:(_Bool)arg19 isInsights:(_Bool)arg20 currentUser:(id)arg21 pivotModel:(id)arg22 reelTitle:(id)arg23 attributedReelTitle:(id)arg24 uniqueReelID:(id)arg25 reelCoverModel:(id)arg26 allowExpiredStories:(_Bool)arg27 hideFooter:(_Bool)arg28 hideHeaderAvatar:(_Bool)arg29 focusBroadcastID:(id)arg30 arEffectChainingContext:(id)arg31 carouselModel:(id)arg32 storyNetegoModel:(id)arg33 gapRules:(id)arg34 adPodRulesModel:(id)arg35 videoToCarouselCutSecs:(id)arg36 carouselTransformationCards:(id)arg37 isPrideReel:(_Bool)arg38 highlightsHeaderDesign:(long long)arg39 presentDiscussionStickerCommentsToTargetComment:(id)arg40 archiveNavButtonStyle:(unsigned long long)arg41 emojiReactorPinningMetadata:(id)arg42;
- (id)initWithReelPK:(id)arg1 type:(long long)arg2 owner:(id)arg3 isNux:(_Bool)arg4 canReply:(_Bool)arg5 canReshare:(_Bool)arg6 supportsFollowing:(_Bool)arg7 items:(id)arg8 startingItem:(id)arg9 openViewerListAtLaunch:(_Bool)arg10 itemFilterTimestamp:(id)arg11 sourceToken:(id)arg12 context:(id)arg13 broadcasts:(id)arg14 startingBroadcast:(id)arg15 fetchable:(_Bool)arg16 isSponsored:(_Bool)arg17 isArchive:(_Bool)arg18 isStoryHighlight:(_Bool)arg19 isInsights:(_Bool)arg20 currentUser:(id)arg21 pivotModel:(id)arg22 reelTitle:(id)arg23 attributedReelTitle:(id)arg24 uniqueReelID:(id)arg25 reelCoverModel:(id)arg26 allowExpiredStories:(_Bool)arg27 hideFooter:(_Bool)arg28 hideHeaderAvatar:(_Bool)arg29 carouselModel:(id)arg30 storyNetegoModel:(id)arg31 gapRules:(id)arg32 adPodRulesModel:(id)arg33 videoToCarouselCutSecs:(id)arg34 carouselTransformationCards:(id)arg35 isPrideReel:(_Bool)arg36 highlightsHeaderDesign:(long long)arg37 presentDiscussionStickerCommentsToTargetComment:(id)arg38;
- (id)initWithReelPK:(id)arg1 type:(long long)arg2 owner:(id)arg3 isNux:(_Bool)arg4 canReply:(_Bool)arg5 canReshare:(_Bool)arg6 supportsFollowing:(_Bool)arg7 items:(id)arg8 itemFilterTimestamp:(id)arg9 sourceToken:(id)arg10 context:(id)arg11 broadcasts:(id)arg12 startingBroadcast:(id)arg13 fetchable:(_Bool)arg14 isSponsored:(_Bool)arg15 isArchive:(_Bool)arg16 isStoryHighlight:(_Bool)arg17 isInsights:(_Bool)arg18 currentUser:(id)arg19 pivotModel:(id)arg20 uniqueReelID:(id)arg21 focusBroadcastID:(id)arg22;
- (id)initWithReelPK:(id)arg1 type:(long long)arg2 owner:(id)arg3 isNux:(_Bool)arg4 canReply:(_Bool)arg5 canReshare:(_Bool)arg6 supportsFollowing:(_Bool)arg7 items:(id)arg8 itemFilterTimestamp:(id)arg9 sourceToken:(id)arg10 context:(id)arg11 broadcasts:(id)arg12 startingBroadcast:(id)arg13 fetchable:(_Bool)arg14 isSponsored:(_Bool)arg15 isArchive:(_Bool)arg16 isStoryHighlight:(_Bool)arg17 isInsights:(_Bool)arg18 currentUser:(id)arg19 pivotModel:(id)arg20 uniqueReelID:(id)arg21 shouldOpenViewerListAtLaunch:(_Bool)arg22 allowExpiredStories:(_Bool)arg23 isPrideReel:(_Bool)arg24 emojiReactorPinningMetadata:(id)arg25;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

