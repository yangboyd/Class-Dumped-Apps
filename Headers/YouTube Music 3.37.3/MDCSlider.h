//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MDCElevatable-Protocol.h"
#import "MDCElevationOverriding-Protocol.h"
#import "MDCThumbTrackDelegate-Protocol.h"

@class MDCThumbTrack, NSMutableDictionary, NSString, UIColor, UIImpactFeedbackGenerator;
@protocol MDCSliderDelegate;

@interface MDCSlider : UIControl <MDCThumbTrackDelegate, MDCElevatable, MDCElevationOverriding>
{
    MDCThumbTrack *_thumbTrack;
    NSMutableDictionary *_thumbColorsForState;
    NSMutableDictionary *_trackFillColorsForState;
    NSMutableDictionary *_trackBackgroundColorsForState;
    NSMutableDictionary *_filledTickColorsForState;
    NSMutableDictionary *_backgroundTickColorsForState;
    _Bool _statefulAPIEnabled;
    _Bool _hapticsEnabled;
    _Bool _shouldEnableHapticsForAllDiscreteValues;
    double _mdc_overrideBaseElevation;
    CDUnknownBlockType _mdc_elevationDidChangeBlock;
    id <MDCSliderDelegate> _delegate;
    CDUnknownBlockType _traitCollectionDidChangeBlock;
    UIImpactFeedbackGenerator *_feedbackGenerator;
    double _previousValue;
}

+ (id)defaultDisabledColor;
+ (id)defaultTrackOffColor;
+ (id)ytm_sliderWithPageStyle:(long long)arg1;
+ (id)gmdc_slider;
@property(nonatomic) double previousValue; // @synthesize previousValue=_previousValue;
@property(retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
@property(nonatomic) _Bool shouldEnableHapticsForAllDiscreteValues; // @synthesize shouldEnableHapticsForAllDiscreteValues=_shouldEnableHapticsForAllDiscreteValues;
@property(nonatomic) _Bool hapticsEnabled; // @synthesize hapticsEnabled=_hapticsEnabled;
@property(copy, nonatomic) CDUnknownBlockType traitCollectionDidChangeBlock; // @synthesize traitCollectionDidChangeBlock=_traitCollectionDidChangeBlock;
@property(nonatomic) __weak id <MDCSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isStatefulAPIEnabled) _Bool statefulAPIEnabled; // @synthesize statefulAPIEnabled=_statefulAPIEnabled;
@property(copy, nonatomic) CDUnknownBlockType mdc_elevationDidChangeBlock; // @synthesize mdc_elevationDidChangeBlock=_mdc_elevationDidChangeBlock;
@property(nonatomic) double mdc_overrideBaseElevation; // @synthesize mdc_overrideBaseElevation=_mdc_overrideBaseElevation;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color;
@property(retain, nonatomic) UIColor *disabledColor;
@property(retain, nonatomic) UIColor *trackBackgroundColor;
- (void)thumbTrackTouchCanceled:(id)arg1;
- (void)thumbTrackTouchUpOutside:(id)arg1;
- (void)thumbTrackTouchUpInside:(id)arg1;
- (void)thumbTrackTouchDown:(id)arg1;
- (void)thumbTrackValueChanged:(id)arg1;
- (_Bool)accessibilityActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)layoutSubviews;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)setExclusiveTouch:(_Bool)arg1;
- (_Bool)isTracking;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)thumbTrack:(id)arg1 shouldJumpToValue:(double)arg2;
- (id)thumbTrack:(id)arg1 stringForValue:(double)arg2;
@property(retain, nonatomic) UIColor *valueLabelBackgroundColor;
@property(retain, nonatomic) UIColor *valueLabelTextColor;
@property(retain, nonatomic) UIColor *rippleColor;
@property(nonatomic) _Bool enableRippleBehavior;
- (id)inkColor;
- (void)setInkColor:(id)arg1;
@property(nonatomic, getter=isThumbHollowAtStart) _Bool thumbHollowAtStart;
@property(nonatomic) _Bool shouldDisplayDiscreteValueLabel;
@property(nonatomic) double filledTrackAnchorValue;
@property(nonatomic) double maximumValue;
@property(nonatomic) double minimumValue;
- (void)setValue:(double)arg1 animated:(_Bool)arg2;
@property(nonatomic) double value;
@property(nonatomic, getter=isContinuous) _Bool continuous;
@property(nonatomic) unsigned long long numberOfDiscreteValues;
@property(retain, nonatomic) UIColor *thumbShadowColor;
@property(readonly, nonatomic) double mdc_currentElevation;
@property(nonatomic) double thumbElevation;
@property(nonatomic) double thumbRadius;
- (void)updateColorsForState;
- (id)backgroundTrackTickColorForState:(unsigned long long)arg1;
- (void)setBackgroundTrackTickColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)filledTrackTickColorForState:(unsigned long long)arg1;
- (void)setFilledTrackTickColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)thumbColorForState:(unsigned long long)arg1;
- (void)setThumbColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)trackBackgroundColorForState:(unsigned long long)arg1;
- (void)setTrackBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)trackFillColorForState:(unsigned long long)arg1;
- (void)setTrackFillColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)commonMDCSliderInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) MDCThumbTrack *thumbTrack;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

