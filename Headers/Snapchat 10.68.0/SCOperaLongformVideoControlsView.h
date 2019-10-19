//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaVideoControlsView.h"

#import "SCOperaSliderDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, SCGradientView, SCGrowingButton, SCLazy, SCOperaSlider, UITapGestureRecognizer, UIView;

@interface SCOperaLongformVideoControlsView : SCOperaVideoControlsView <UIGestureRecognizerDelegate, SCOperaSliderDelegate>
{
    SCGradientView *_backgroundGradientView;
    SCGradientView *_bottomGradientView;
    SCGrowingButton *_pauseButton;
    SCLazy *_sendButtonLazy;
    SCLazy *_sendLabelLazy;
    UIView *_pauseButtonBackground;
    SCLazy *_sendButtonBackgroundLazy;
    SCOperaSlider *_slider;
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _shouldShowSendButton;
    _Bool _isPaused;
    _Bool _wasPausedBeforeDrag;
}

- (void).cxx_destruct;
- (void)_updatePauseButtonToIsPaused:(_Bool)arg1;
- (void)_didTapSendButton;
- (void)_didTapPauseButton;
- (void)_didFinishDraggingSlider;
- (void)_didStartDraggingSlider;
- (void)_didChangeSliderValue;
- (void)_didTapView:(id)arg1;
- (void)_setupTapGesture;
- (id)_sendLabel;
- (id)_sendButtonBackground;
- (id)_sendButton;
- (void)_setupLazySendButton;
- (void)_setupPauseButton;
- (void)_setupSlider;
- (void)_setupGradientViews;
- (void)_setupViews;
- (id)slider:(id)arg1 textLabelForValue:(double)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (float)currentTime;
- (void)setAdBreakTimes:(id)arg1;
- (void)setSeekableRangeVisible:(_Bool)arg1;
- (void)setSeekableDuration:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)adjustForTime:(double)arg1;
- (void)setSendButtonVisible:(_Bool)arg1;
- (_Bool)controlsVisible;
- (void)resetControls;
- (void)showControls;
- (void)fadeControls;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

