//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class TGCameraPreviewView, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface TGCameraFocusCrosshairsControl : UIControl
{
    _Bool _animatingFocusPOI;
    UIView *_wrapperView;
    UIView *_focusIndicatorView;
    UIImageView *_focusIndicatorImageView;
    UIImageView *_autoFocusIndicator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UIView *_exposureWrapperView;
    UIView *_exposureClipView;
    UIView *_exposureIndicatorView;
    UIImageView *_exposureIconView;
    UIView *_exposureTopLine;
    UIView *_exposureBottomLine;
    double _exposureValue;
    long long _interfaceOrientation;
    _Bool _hideOnStop;
    _Bool _ignoreAutofocusForExposing;
    _Bool _stopAutomatically;
    _Bool _ignoreAutofocusing;
    TGCameraPreviewView *_previewView;
    CDUnknownBlockType _focusPOIChanged;
    CDUnknownBlockType _beganExposureChange;
    CDUnknownBlockType _exposureChanged;
    CDUnknownBlockType _endedExposureChange;
}

@property(nonatomic) _Bool ignoreAutofocusing; // @synthesize ignoreAutofocusing=_ignoreAutofocusing;
@property(nonatomic) _Bool stopAutomatically; // @synthesize stopAutomatically=_stopAutomatically;
@property(copy, nonatomic) CDUnknownBlockType endedExposureChange; // @synthesize endedExposureChange=_endedExposureChange;
@property(copy, nonatomic) CDUnknownBlockType exposureChanged; // @synthesize exposureChanged=_exposureChanged;
@property(copy, nonatomic) CDUnknownBlockType beganExposureChange; // @synthesize beganExposureChange=_beganExposureChange;
@property(copy, nonatomic) CDUnknownBlockType focusPOIChanged; // @synthesize focusPOIChanged=_focusPOIChanged;
@property(nonatomic) __weak TGCameraPreviewView *previewView; // @synthesize previewView=_previewView;
- (void).cxx_destruct;
- (void)setInterfaceOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)updateExposureIndicatorPositionForOrientation:(long long)arg1;
- (void)handlePan:(id)arg1;
- (void)setExposureSliderPosition:(double)arg1;
- (void)setExposureSliderTrackHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)deactivateFocusIndicatorAnimated;
- (void)setFocusIndicatorActive:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) _Bool active;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)reset;
- (void)stopFocusPOIAnimation;
- (void)playFocusPOIAnimation;
- (void)stopAutoFocusAnimation;
- (void)playAutoFocusAnimation;
- (void)handleFocusTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

