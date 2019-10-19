//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MDCInkTouchControllerDelegate-Protocol.h"

@class CALayer, CAShapeLayer, MDCInkTouchController, NSString, QTMThumbView, UIColor, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;
@protocol QTMThumbTrackDelegate;

@interface QTMThumbTrack : UIControl <MDCInkTouchControllerDelegate>
{
    UIPanGestureRecognizer *_panRecognizer;
    double _panThumbGrabPosition;
    UITapGestureRecognizer *_tapRecognizer;
    double _lastDispatchedValue;
    UIColor *_clearColor;
    MDCInkTouchController *_touchController;
    UIView *_trackView;
    CAShapeLayer *_trackMaskLayer;
    CALayer *_trackOnLayer;
    _Bool _isTrackingTouches;
    _Bool _shouldDisplayInk;
    _Bool _disabledTrackHasThumbGaps;
    _Bool _trackEndsAreRounded;
    _Bool _trackEndsAreInset;
    _Bool _continuousUpdateEvents;
    _Bool _panningAllowedOnEntireControl;
    _Bool _tapsAllowedOnThumb;
    id <QTMThumbTrackDelegate> _delegate;
    UIColor *_thumbOffColor;
    UIColor *_thumbOnColor;
    UIColor *_trackOffColor;
    UIColor *_trackOnColor;
    UIColor *_thumbDisabledColor;
    UIColor *_trackDisabledColor;
    unsigned long long _numDiscreteValues;
    double _value;
    double _minimumValue;
    double _maximumValue;
    double _trackHeight;
    double _thumbRadius;
    double _filledTrackAnchorValue;
    QTMThumbView *_thumbView;
}

@property(nonatomic) _Bool tapsAllowedOnThumb; // @synthesize tapsAllowedOnThumb=_tapsAllowedOnThumb;
@property(nonatomic) _Bool panningAllowedOnEntireControl; // @synthesize panningAllowedOnEntireControl=_panningAllowedOnEntireControl;
@property(nonatomic) _Bool continuousUpdateEvents; // @synthesize continuousUpdateEvents=_continuousUpdateEvents;
@property(retain, nonatomic) QTMThumbView *thumbView; // @synthesize thumbView=_thumbView;
@property(nonatomic) double filledTrackAnchorValue; // @synthesize filledTrackAnchorValue=_filledTrackAnchorValue;
@property(nonatomic) _Bool trackEndsAreInset; // @synthesize trackEndsAreInset=_trackEndsAreInset;
@property(nonatomic) _Bool trackEndsAreRounded; // @synthesize trackEndsAreRounded=_trackEndsAreRounded;
@property(nonatomic) _Bool disabledTrackHasThumbGaps; // @synthesize disabledTrackHasThumbGaps=_disabledTrackHasThumbGaps;
@property(nonatomic) _Bool shouldDisplayInk; // @synthesize shouldDisplayInk=_shouldDisplayInk;
@property(nonatomic) double thumbRadius; // @synthesize thumbRadius=_thumbRadius;
@property(nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) unsigned long long numDiscreteValues; // @synthesize numDiscreteValues=_numDiscreteValues;
@property(retain, nonatomic) UIColor *trackDisabledColor; // @synthesize trackDisabledColor=_trackDisabledColor;
@property(retain, nonatomic) UIColor *thumbDisabledColor; // @synthesize thumbDisabledColor=_thumbDisabledColor;
@property(retain, nonatomic) UIColor *trackOnColor; // @synthesize trackOnColor=_trackOnColor;
@property(retain, nonatomic) UIColor *trackOffColor; // @synthesize trackOffColor=_trackOffColor;
@property(retain, nonatomic) UIColor *thumbOnColor; // @synthesize thumbOnColor=_thumbOnColor;
@property(retain, nonatomic) UIColor *thumbOffColor; // @synthesize thumbOffColor=_thumbOffColor;
@property(nonatomic) __weak id <QTMThumbTrackDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)interruptAnimation;
- (_Bool)isTracking;
- (void)sendDiscreteChangeAction;
- (void)sendContinuousChangeAction;
- (void)setValueFromThumbPosition:(struct CGPoint)arg1 isTap:(_Bool)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)handleTapGesture:(id)arg1;
- (void)updatePanRecognizerTarget;
- (double)closestValueToTargetValue:(double)arg1;
- (double)relativeValueForValue:(double)arg1;
- (void)updateTrackMask;
- (void)updateViewsAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateColorsAnimated:(_Bool)arg1 withDuration:(double)arg2;
- (void)updateThumbTrackAnimated:(_Bool)arg1 previousValue:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (double)thumbPanRange;
- (double)thumbPanOffset;
- (_Bool)isThumbAtStart;
- (_Bool)inkTouchController:(id)arg1 shouldProcessInkTouchesAtTouchLocation:(struct CGPoint)arg2;
- (void)setEnabled:(_Bool)arg1;
- (double)valueForThumbPosition:(struct CGPoint)arg1;
- (struct CGPoint)thumbPositionForValue:(double)arg1;
@property(readonly, nonatomic) struct CGPoint thumbPosition;
@property(nonatomic) double thumbMaxRippleRadius;
- (void)setValue:(double)arg1 animated:(_Bool)arg2 userGenerated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIColor *inkColor;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

