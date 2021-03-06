//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTGraftingViewController-Protocol.h"
#import "YTInlineMutedPlaybackWatchControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTScrollFocusItem-Protocol.h"

@class GIMMe, NSString, YTHotConfig, YTInlineMutedPlaybackStateController, YTInlineMutedPlaybackViewControllerManager, YTInlineMutedPlaybackWatchController, YTInteractionLoggingProxyButton, YTTimedAction;
@protocol YTInlineMutedPlaybackItem, YTPlayableEntry, YTResponder, YTScrollFocusItem, YTScrollFocusUpdater;

@interface YTInlineMutedPlaybackContainerController : NSObject <YTGraftingViewController, YTInlineMutedPlaybackWatchControllerDelegate, YTResponder, YTScrollFocusItem>
{
    YTInlineMutedPlaybackViewControllerManager *_impVCManager;
    YTHotConfig *_hotConfig;
    double _watchRestartThreshold;
    _Bool _isImpVeTrackingEnabled;
    _Bool _veLoggingTracked;
    YTInteractionLoggingProxyButton *_veTrackingButtonProxy;
    id <YTPlayableEntry> _entry;
    _Bool _hostCellIsNotElements;
    id <YTScrollFocusUpdater> _scrollFocusUpdater;
    id <YTScrollFocusItem> _scrollFocusItemDelegate;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTInlineMutedPlaybackItem> _playbackItem;
    YTInlineMutedPlaybackWatchController *_inlineMutedPlaybackWatchController;
    YTInlineMutedPlaybackStateController *_impStateController;
    long long _inlinePlaybackState;
    long long _playerState;
    NSString *_videoID;
    YTTimedAction *_dwellTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTTimedAction *dwellTimer; // @synthesize dwellTimer=_dwellTimer;
@property(retain, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) long long playerState; // @synthesize playerState=_playerState;
@property(nonatomic) long long inlinePlaybackState; // @synthesize inlinePlaybackState=_inlinePlaybackState;
@property(nonatomic) __weak YTInlineMutedPlaybackStateController *impStateController; // @synthesize impStateController=_impStateController;
@property(retain, nonatomic) YTInlineMutedPlaybackWatchController *inlineMutedPlaybackWatchController; // @synthesize inlineMutedPlaybackWatchController=_inlineMutedPlaybackWatchController;
@property(retain, nonatomic) id <YTInlineMutedPlaybackItem> playbackItem; // @synthesize playbackItem=_playbackItem;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) __weak id <YTScrollFocusItem> scrollFocusItemDelegate; // @synthesize scrollFocusItemDelegate=_scrollFocusItemDelegate;
@property(nonatomic) __weak id <YTScrollFocusUpdater> scrollFocusUpdater; // @synthesize scrollFocusUpdater=_scrollFocusUpdater;
- (void)updateWatchEndpointForCommand:(id)arg1 startTimeSeconds:(double)arg2;
- (id)dwellTimerForDelay:(double)arg1;
- (CDUnknownBlockType)clientDataBlock;
- (void)updateVeVisibilityTracking;
- (void)resignWatchController;
- (void)resetStartTimes;
- (void)updateCellContainer:(id)arg1;
- (void)disableOnActive;
- (void)saveMediaTime;
- (void)updateNavEndpoint:(id)arg1;
- (void)updateInlinePlaybackEndpoint;
- (_Bool)isVideoIDExcluded;
- (_Bool)isInlineMutedPlayBackEnabled;
- (void)disable;
- (void)handleReverseInception;
- (void)resetPlaybackControls;
- (void)disablePlayback;
- (void)pausePlayback;
- (void)preloadPlayback;
- (void)startPlaybackImmediately;
- (void)startPlayback;
- (void)overlayDidChangeWithStatusUpdate:(id)arg1;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (id)navEndpoint;
- (_Bool)willProcessSelectionForInception;
- (_Bool)willProcessSelectionForInception:(id)arg1;
- (void)didClearDismissalState;
- (void)dismissedViewWillShow;
- (void)willRemoveEntry;
- (void)cellDidPrepareForReuse;
- (id)visibilityCriteria;
- (void)scrollFocusDidChangeWithContext:(id)arg1;
- (_Bool)isScrollFocusSelectableForTypes:(id)arg1;
- (void)setScrollFocusItemDelegate:(id)arg1;
@property(readonly, nonatomic) long long scrollFocusItemType;
- (void)watchController:(id)arg1 playerStateDidChange:(long long)arg2;
- (void)excludeCurrentVideo;
- (void)handleFinishedPlayback;
- (void)dealloc;
- (void)containerDidBecomeHiddenWithVisibilityEventType:(int)arg1;
- (void)containerWillBecomeVisibleWithVisibilityEventType:(int)arg1;
- (id)initWithEntry:(id)arg1 parentResponder:(id)arg2 playbackItem:(id)arg3 hostCellIsNotElements:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool hiddenEnclosed;
@property(readonly) Class superclass;

@end

