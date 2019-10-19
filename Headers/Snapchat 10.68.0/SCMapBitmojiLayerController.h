//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCMapPersonLocationStringsListener-Protocol.h"
#import "SCMapPersonLocationsListener-Protocol.h"
#import "SCMapStatusViewedStateListener-Protocol.h"
#import "SCXBitmojiLayerInteractionDelegate-Protocol.h"
#import "SCXBitmojiLayerModelProvider-Protocol.h"

@class NSDictionary, NSSet, NSString, SCMapBitmojiSticker, SCXBitmojiLayerModelProviderListenerAnnouncer;
@protocol SCMapBitmojiLayerControllerDelegate, SCMapPeopleFriendsProvider, SCMapPersonLocationStringsProvider, SCMapPersonLocationsProviding, SCMapStatusViewedStateProvider;

@interface SCMapBitmojiLayerController : NSObject <SCMapPersonLocationsListener, SCMapPersonLocationStringsListener, SCMapStatusViewedStateListener, SCXBitmojiLayerInteractionDelegate, SCXBitmojiLayerModelProvider>
{
    id <SCMapPersonLocationsProviding> _clustersProvider;
    id <SCMapBitmojiLayerControllerDelegate> _delegate;
    id <SCMapPeopleFriendsProvider> _peopleFriendsProvider;
    id <SCMapStatusViewedStateProvider> _statusViewedStateProvider;
    id <SCMapPersonLocationStringsProvider> _stringsProvider;
    NSString *_currentUserId;
    SCXBitmojiLayerModelProviderListenerAnnouncer *_announcer;
    _Bool _showingGhostModeAvatarForCurrentUser;
    _Bool _showingProps;
    NSSet *_visibleUserIdsWhitelist;
    NSString *_selectedUserId;
    long long _selectionStyle;
    NSString *_depressedUserId;
    NSSet *_visibleSpeechBubbleUserIdsWhitelist;
    SCMapBitmojiSticker *_currentUserSticker;
    NSString *_currentUserSpeechText;
    NSSet *_bitmojiClusters;
    NSDictionary *_bitmojiClustersByUserId;
}

@property(retain, nonatomic) NSDictionary *bitmojiClustersByUserId; // @synthesize bitmojiClustersByUserId=_bitmojiClustersByUserId;
@property(retain, nonatomic) NSSet *bitmojiClusters; // @synthesize bitmojiClusters=_bitmojiClusters;
@property(readonly, copy, nonatomic) NSString *currentUserSpeechText; // @synthesize currentUserSpeechText=_currentUserSpeechText;
@property(readonly, copy, nonatomic) SCMapBitmojiSticker *currentUserSticker; // @synthesize currentUserSticker=_currentUserSticker;
@property(readonly, copy, nonatomic) NSSet *visibleSpeechBubbleUserIdsWhitelist; // @synthesize visibleSpeechBubbleUserIdsWhitelist=_visibleSpeechBubbleUserIdsWhitelist;
@property(readonly, nonatomic, getter=isShowingProps) _Bool showingProps; // @synthesize showingProps=_showingProps;
@property(readonly, nonatomic, getter=isShowingGhostModeAvatarForCurrentUser) _Bool showingGhostModeAvatarForCurrentUser; // @synthesize showingGhostModeAvatarForCurrentUser=_showingGhostModeAvatarForCurrentUser;
@property(readonly, copy, nonatomic) NSString *depressedUserId; // @synthesize depressedUserId=_depressedUserId;
@property(readonly, nonatomic) long long selectionStyle; // @synthesize selectionStyle=_selectionStyle;
@property(readonly, copy, nonatomic) NSString *selectedUserId; // @synthesize selectedUserId=_selectedUserId;
@property(readonly, copy, nonatomic) NSSet *visibleUserIdsWhitelist; // @synthesize visibleUserIdsWhitelist=_visibleUserIdsWhitelist;
- (void).cxx_destruct;
- (_Bool)_canShowSpeechBubbleForUserId:(id)arg1;
- (_Bool)_isUserId:(id)arg1 clusteredWithUserId2:(id)arg2;
- (CDUnknownBlockType)_clusteredPersonLocationComparator;
- (CDUnknownBlockType)_clusteredBitmojiComparator;
- (_Bool)_isBitmojiFadedForPersonLocation:(id)arg1;
- (id)_speechTextForPersonLocation:(id)arg1;
- (id)_bitmojiStickerForPersonLocation:(id)arg1 personLocationCluster:(id)arg2;
- (id)_bitmojiClustersForPersonLocationClusters:(id)arg1;
- (id)_personLocationClustersForBitmojiClusters:(id)arg1;
- (void)_updateModelsWithDuration:(double)arg1;
- (void)setCurrentUserSpeechText:(id)arg1 animated:(_Bool)arg2;
- (void)setCurrentUserSticker:(id)arg1 animated:(_Bool)arg2;
- (void)setVisibleSpeechBubbleUserIdsWhitelist:(id)arg1 duration:(double)arg2;
- (void)setVisibleSpeechBubbleUserIdsWhitelist:(id)arg1 animated:(_Bool)arg2;
- (void)setShowingProps:(_Bool)arg1 duration:(double)arg2;
- (void)setShowingProps:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setShowingGhostModeAvatarForCurrentUser:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setDepressedUserId:(id)arg1 duration:(double)arg2;
- (void)setDepressedUserId:(id)arg1 animated:(_Bool)arg2;
- (void)setSelectedUserId:(id)arg1 selectionStyle:(long long)arg2 duration:(double)arg3;
- (void)setSelectedUserId:(id)arg1 selectionStyle:(long long)arg2 animated:(_Bool)arg3;
- (void)setSelectedUserId:(id)arg1 duration:(double)arg2;
- (void)setSelectedUserId:(id)arg1 animated:(_Bool)arg2;
- (void)setVisibleUserIdsWhitelist:(id)arg1 duration:(double)arg2;
- (void)setVisibleUserIdsWhitelist:(id)arg1 animated:(_Bool)arg2;
- (void)mapStatusViewedStateProvider:(id)arg1 didUpdateStatusIds:(id)arg2;
- (void)personLocationStringsProviderDidUpdate:(id)arg1;
- (void)personLocationsProviderDidUpdate:(id)arg1;
- (void)bitmojiLayerDidCancelTouches:(id)arg1 didPanOrZoomMap:(_Bool)arg2;
- (void)bitmojiLayer:(id)arg1 didLongPressClusters:(id)arg2;
- (void)bitmojiLayer:(id)arg1 didTouchUpOnClusters:(id)arg2;
- (void)bitmojiLayer:(id)arg1 didTouchDownOnClusters:(id)arg2;
- (id)announcer;
- (id)selectedBitmojiCluster;
- (id)initWithClustersProvider:(id)arg1 delegate:(id)arg2 peopleFriendsProvider:(id)arg3 statusViewedStateProvider:(id)arg4 stringsProvider:(id)arg5 userId:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

