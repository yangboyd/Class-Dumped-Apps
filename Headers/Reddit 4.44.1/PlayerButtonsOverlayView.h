//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseView.h>

#import "RUIThemeUpdateCallbackProtocol-Protocol.h"

@class BaseButton, CAShapeLayer, NSString, NSTimer, UIImage;

@interface PlayerButtonsOverlayView : BaseView <RUIThemeUpdateCallbackProtocol>
{
    _Bool _isBuffering;
    _Bool _iconsVisible;
    _Bool _shouldDisableInteraction;
    _Bool _bufferingAnimationScheduled;
    _Bool _translucentBackgroundHidden;
    unsigned long long _state;
    BaseButton *_playPauseButton;
    BaseButton *_callToActionButton;
    NSString *_callToActionString;
    UIImage *_callToActionImage;
    unsigned long long _callToActionType;
    CAShapeLayer *_bufferingCircleShape;
    NSTimer *_bufferInitiationTimer;
    CDUnknownBlockType _onPlayTappedBlock;
    CDUnknownBlockType _onPauseTappedBlock;
    CDUnknownBlockType _onReplayTappedBlock;
    CDUnknownBlockType _onCallToActionTappedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType onCallToActionTappedBlock; // @synthesize onCallToActionTappedBlock=_onCallToActionTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onReplayTappedBlock; // @synthesize onReplayTappedBlock=_onReplayTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onPauseTappedBlock; // @synthesize onPauseTappedBlock=_onPauseTappedBlock;
@property(copy, nonatomic) CDUnknownBlockType onPlayTappedBlock; // @synthesize onPlayTappedBlock=_onPlayTappedBlock;
@property(retain, nonatomic) NSTimer *bufferInitiationTimer; // @synthesize bufferInitiationTimer=_bufferInitiationTimer;
@property(nonatomic) _Bool translucentBackgroundHidden; // @synthesize translucentBackgroundHidden=_translucentBackgroundHidden;
@property(nonatomic) _Bool bufferingAnimationScheduled; // @synthesize bufferingAnimationScheduled=_bufferingAnimationScheduled;
@property(retain, nonatomic) CAShapeLayer *bufferingCircleShape; // @synthesize bufferingCircleShape=_bufferingCircleShape;
@property(nonatomic) unsigned long long callToActionType; // @synthesize callToActionType=_callToActionType;
@property(retain, nonatomic) UIImage *callToActionImage; // @synthesize callToActionImage=_callToActionImage;
@property(copy, nonatomic) NSString *callToActionString; // @synthesize callToActionString=_callToActionString;
@property(retain, nonatomic) BaseButton *callToActionButton; // @synthesize callToActionButton=_callToActionButton;
@property(retain, nonatomic) BaseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) _Bool shouldDisableInteraction; // @synthesize shouldDisableInteraction=_shouldDisableInteraction;
@property(nonatomic) _Bool iconsVisible; // @synthesize iconsVisible=_iconsVisible;
@property(nonatomic) _Bool isBuffering; // @synthesize isBuffering=_isBuffering;
@property unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)onCallToActionTapped:(CDUnknownBlockType)arg1;
- (void)onReplayTapped:(CDUnknownBlockType)arg1;
- (void)onPauseTapped:(CDUnknownBlockType)arg1;
- (void)onPlayTapped:(CDUnknownBlockType)arg1;
- (void)tapped:(id)arg1;
- (void)transitionToReplayAnimated:(_Bool)arg1;
- (void)transitionToPlayAnimated:(_Bool)arg1;
- (void)transitionToPauseAnimated:(_Bool)arg1;
- (void)transitionToNone;
- (void)restoreToNone;
- (void)configureWithCallToActionType:(unsigned long long)arg1 withCallToActionString:(id)arg2 callToActionImage:(id)arg3;
- (void)prepareForReuse;
- (void)stopBuffer;
- (void)startBuffer;
- (void)initiateBuffer;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (_Bool)isVisible;
- (void)animateReplay:(double)arg1;
- (void)restoreToReplay;
- (void)animatePauseToPlay:(double)arg1;
- (void)restoreToPlay;
- (void)animatePlayToPause:(double)arg1;
- (void)restoreToPause;
- (void)restoreToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)layoutBufferingCicle;
- (void)themeDidChange:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

