//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTGlassContainerView.h>

#import "YTMainAppPlayerToastDisplayer-Protocol.h"
#import "YTMainAppSeekAccessibilityButtonDelegate-Protocol.h"

@class ABCSwitch, NSInvocation, NSString, UILongPressGestureRecognizer, UIView, YTControlsOverlayMagicWindowEduView, YTFormattedStringLabel, YTIAutoplaySwitchButtonRenderer, YTLabel, YTMainAppSeekAccessibilityButton, YTPlaybackButton, YTQTMButton, YTTimedAction;
@protocol YTMainAppControlsOverlayViewDelegate, YTMainAppControlsOverlayViewEventsDelegate, YTMainAppPlayerToastDisplayerDelegate;

@interface YTMainAppControlsOverlayView : YTGlassContainerView <YTMainAppPlayerToastDisplayer, YTMainAppSeekAccessibilityButtonDelegate>
{
    YTLabel *_titleLabel;
    YTFormattedStringLabel *_formattedTitleLabel;
    YTFormattedStringLabel *_subtitleLabel;
    YTLabel *_playerToastLabel;
    YTQTMButton *_watchCollapseButton;
    YTQTMButton *_overflowButton;
    YTQTMButton *_playbackRouteButton;
    YTQTMButton *_infocardButton;
    YTQTMButton *_addToButton;
    YTQTMButton *_shareButton;
    YTQTMButton *_chatButton;
    YTQTMButton *_previousButton;
    YTQTMButton *_nextButton;
    YTQTMButton *_replayButton;
    YTPlaybackButton *_playPauseButton;
    long long _collapseButtonStyle;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    NSInvocation *_playInvocation;
    NSInvocation *_pauseInvocation;
    int _playerViewLayout;
    id <YTMainAppControlsOverlayViewDelegate> _delegate;
    _Bool _isOverlayVisible;
    UIView *_autonavSwitchHighlightView;
    UIView *_topControlsAccessibilityContainerView;
    UIView *_playerControlsAccessibilityContainerView;
    _Bool _infoCardButtonVisible;
    _Bool _isErrorMessageVisible;
    YTIAutoplaySwitchButtonRenderer *_autoplaySwitchButtonRenderer;
    _Bool _voiceOverEnabled;
    _Bool _enableProminentCaptions;
    _Bool _enableProminentCaptionsWithToggle;
    _Bool _isUserInteractionEnabledAfterTimer;
    YTTimedAction *_temporarilyDisableUserInteractionTimer;
    _Bool _forceAutonavSwitchHidden;
    _Bool _shouldStartDragDrop;
    _Bool _captionsEnabled;
    _Bool _captionsAvailable;
    id <YTMainAppPlayerToastDisplayerDelegate> _toastDisplayerDelegate;
    YTLabel *_remoteScreenLabel;
    ABCSwitch *_autonavSwitch;
    YTControlsOverlayMagicWindowEduView *_magicWindowEduView;
    long long _videoControlsVisibility;
    id <YTMainAppControlsOverlayViewEventsDelegate> _eventsDelegate;
    YTQTMButton *_closedCaptionsOrSubtitlesButton;
    YTMainAppSeekAccessibilityButton *_seekBackwardAccessibilityButton;
    YTMainAppSeekAccessibilityButton *_seekForwardAccessibilityButton;
    struct CGSize _playbackButtonTapTargetSize;
}

+ (double)topButtonAdditionalPadding;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTMainAppSeekAccessibilityButton *seekForwardAccessibilityButton; // @synthesize seekForwardAccessibilityButton=_seekForwardAccessibilityButton;
@property(readonly, nonatomic) YTMainAppSeekAccessibilityButton *seekBackwardAccessibilityButton; // @synthesize seekBackwardAccessibilityButton=_seekBackwardAccessibilityButton;
@property(nonatomic) _Bool captionsAvailable; // @synthesize captionsAvailable=_captionsAvailable;
@property(nonatomic) _Bool captionsEnabled; // @synthesize captionsEnabled=_captionsEnabled;
@property(readonly, nonatomic) YTQTMButton *closedCaptionsOrSubtitlesButton; // @synthesize closedCaptionsOrSubtitlesButton=_closedCaptionsOrSubtitlesButton;
@property(nonatomic) _Bool shouldStartDragDrop; // @synthesize shouldStartDragDrop=_shouldStartDragDrop;
@property(nonatomic) struct CGSize playbackButtonTapTargetSize; // @synthesize playbackButtonTapTargetSize=_playbackButtonTapTargetSize;
@property(nonatomic) __weak id <YTMainAppControlsOverlayViewEventsDelegate> eventsDelegate; // @synthesize eventsDelegate=_eventsDelegate;
@property(nonatomic) long long videoControlsVisibility; // @synthesize videoControlsVisibility=_videoControlsVisibility;
@property(readonly, nonatomic) YTControlsOverlayMagicWindowEduView *magicWindowEduView; // @synthesize magicWindowEduView=_magicWindowEduView;
@property(nonatomic) _Bool forceAutonavSwitchHidden; // @synthesize forceAutonavSwitchHidden=_forceAutonavSwitchHidden;
@property(readonly, nonatomic) ABCSwitch *autonavSwitch; // @synthesize autonavSwitch=_autonavSwitch;
@property(readonly, nonatomic) YTLabel *remoteScreenLabel; // @synthesize remoteScreenLabel=_remoteScreenLabel;
@property(readonly, nonatomic) YTQTMButton *overflowButton; // @synthesize overflowButton=_overflowButton;
@property(readonly, nonatomic) YTQTMButton *chatButton; // @synthesize chatButton=_chatButton;
@property(nonatomic) __weak id <YTMainAppPlayerToastDisplayerDelegate> toastDisplayerDelegate; // @synthesize toastDisplayerDelegate=_toastDisplayerDelegate;
- (struct CGRect)dragDropHitTarget;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)addAccessibleViews:(id)arg1 toMutableArray:(id)arg2;
- (void)setPlayerControlsAccessibilityElements;
- (void)setInfoCardButtonVisible:(_Bool)arg1;
- (id)topControls;
- (double)textPaddingLeft;
- (double)topButtonEdgePaddingY;
- (double)topButtonsXOffset;
- (double)topButtonEdgePaddingRight;
- (double)topButtonPadding;
- (id)playerButtonWithImage:(id)arg1 selectedImage:(id)arg2 accessibilityLabel:(id)arg3 verticalContentPadding:(double)arg4 minHitTargetSize:(double)arg5;
- (id)playerButtonWithImage:(id)arg1 selectedImage:(id)arg2 accessibilityLabel:(id)arg3;
- (id)seekButtonWithDirection:(long long)arg1 image:(id)arg2 verticalContentPadding:(double)arg3 minHitTargetSize:(double)arg4;
- (id)buttonWithImage:(id)arg1 accessibilityLabel:(id)arg2 verticalContentPadding:(double)arg3;
- (id)buttonWithImage:(id)arg1 accessibilityLabel:(id)arg2;
- (void)updateTitleVisibility_regular;
- (void)updateTitleVisibility_compact;
- (void)updateTitleVisibility;
- (_Bool)watchCollapseButtonHidden;
- (void)onPlayPauseButton;
- (void)updateOverlayVisibility;
- (void)cleanupAutonavSwitchHighlightView;
- (void)updateAutonavSwitchAvailability;
- (void)addNewTouchFeedbackToButton:(id)arg1;
- (void)temporarilyDisableUserInteractionTimerDidFire;
- (void)setPlayerToastText:(id)arg1;
- (_Bool)isToastDisplayerVisible;
- (id)seekButtonAccessibilityLabelWithDirection:(long long)arg1;
- (void)didPressShare:(id)arg1;
- (void)didPressChat:(id)arg1;
- (void)didLongPressAddTo:(id)arg1;
- (void)didPressAddTo:(id)arg1;
- (void)didPressClosedCaptions:(id)arg1;
- (void)didPressWatchCollapse:(id)arg1;
- (void)didPressOverflow:(id)arg1;
- (void)didPressSeekForwardAccessibility:(id)arg1;
- (void)didPressSeekBackwardAccessibility:(id)arg1;
- (void)didPressNext:(id)arg1;
- (void)didPressPrevious:(id)arg1;
- (void)didPressReplay:(id)arg1;
- (void)didPressPause:(id)arg1;
- (void)didPressPlay:(id)arg1;
- (void)setupButtonTargets;
- (id)seekBackwardImage;
- (id)seekForwardImage;
- (id)skipPreviousImage;
- (id)skipNextImage;
- (double)playPauseWidthHeight;
- (double)seekForwardBackwardButtonPadding;
- (double)previousNextButtonPadding;
- (void)setSeekAccessibilityButtonsVisible:(_Bool)arg1;
- (void)setMiddleOverlayVisible:(_Bool)arg1;
- (void)setTopOverlayVisible:(_Bool)arg1 isAutonavCanceledState:(_Bool)arg2;
- (void)setOverlayVisible:(_Bool)arg1;
- (void)setMagicWindowEduEnabled:(_Bool)arg1;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setPreviousButtonEnabled:(_Bool)arg1;
- (void)disableUserInteractionForTimeInterval:(double)arg1;
- (void)setInfoCardButtonHidden:(_Bool)arg1;
- (void)setWatchCollapseButtonAvailable:(_Bool)arg1;
- (void)setChatButtonAvailable:(_Bool)arg1;
- (void)setShareButtonAvailable:(_Bool)arg1;
- (void)setAddToButtonAvailable:(_Bool)arg1;
- (void)setClosedCaptionsOrSubtitlesButtonAvailable:(_Bool)arg1;
- (void)setVoiceOverEnabled:(_Bool)arg1;
- (void)setAutoplaySwitchButtonRenderer:(id)arg1;
- (void)setChatButton:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setFormattedTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setAddToIcon:(id)arg1;
- (void)setCollapseButtonStyle:(long long)arg1;
- (void)setInfoCardButton:(id)arg1;
- (void)setErrorMessageVisible:(_Bool)arg1;
- (void)setPlayPauseReplayState:(long long)arg1;
- (void)setPlayPauseButtonTapTargetSize:(struct CGSize)arg1;
- (void)setPlayerViewLayout:(int)arg1;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)cancelAutonavSwitchHighlightAnimation;
- (void)showAutonavSwitchHighlightAnimation;
@property(readonly, nonatomic) UIView *playPauseButton;
@property(readonly, nonatomic) YTQTMButton *playbackRouteButton;
@property(readonly, nonatomic) YTQTMButton *watchCollapseButton;
@property(readonly, nonatomic) YTQTMButton *infoCardButton;
- (_Bool)isChatButtonVisible;
- (_Bool)isInfoCardButtonVisible;
- (double)topButtonEdgePaddingLeft;
- (void)layoutSubviews;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

