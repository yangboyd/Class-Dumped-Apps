//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGPassthroughView.h>

@class IGBouncyButton, UIImage, UIImageView, UIImpactFeedbackGenerator, UILabel, UIView, UIVisualEffectView;
@protocol IGCameraToolsMenuSliderDelegate;

@interface IGCameraToolsMenuSlider : IGPassthroughView
{
    IGBouncyButton *_bouncyButton;
    UIImageView *_iconView;
    UILabel *_iconLabelView;
    UIVisualEffectView *_blurView;
    UIView *_valueView;
    _Bool _hasExpanded;
    double _gesturePreviousY;
    double _gesturePreviousValue;
    _Bool _gestureIsSticking;
    double _gestureStickyDistance;
    UIImpactFeedbackGenerator *_impactGenerator;
    id <IGCameraToolsMenuSliderDelegate> _delegate;
    double _value;
    double _defaultValue;
    double _minimumValue;
    double _maximumValue;
    unsigned long long _labelPrecision;
    double _expansionPercentage;
}

- (void).cxx_destruct;
@property(nonatomic) double expansionPercentage; // @synthesize expansionPercentage=_expansionPercentage;
@property(nonatomic) unsigned long long labelPrecision; // @synthesize labelPrecision=_labelPrecision;
@property(nonatomic) double maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) double minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) double defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) double value; // @synthesize value=_value;
@property(nonatomic) __weak id <IGCameraToolsMenuSliderDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_triggerHapticKick;
- (void)_handleLongPressDidChange:(id)arg1;
- (void)_handleLongPressDidBegin:(id)arg1;
- (void)_didLongPressSlider:(id)arg1;
- (void)_didTapBouncyButton:(id)arg1;
- (id)_labelTextForValue:(double)arg1;
@property(readonly, nonatomic) UIImage *image;
- (double)_accessibilityIncrementAmount;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (id)accessibilityValue;
- (_Bool)accessibilityActivate;
- (unsigned long long)accessibilityTraits;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithImage:(id)arg1;

@end

