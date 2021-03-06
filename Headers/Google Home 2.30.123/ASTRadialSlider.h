//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "CAAnimationDelegate-Protocol.h"

@class ASTArcPanGestureRecognizer, ASTArcPanGestureRecognizerDelegate, ASTRadialSliderRenderer, CABasicAnimation, NSNumberFormatter, NSString;

@interface ASTRadialSlider : UIControl <CAAnimationDelegate>
{
    _Bool _continuous;
    _Bool _loadingAnimationActive;
    _Bool _readyForLoadingAnimation;
    float _value;
    float _minimumValue;
    float _maximumValue;
    CDUnknownBlockType _accessibilityValueBlock;
    ASTRadialSliderRenderer *_renderer;
    ASTArcPanGestureRecognizer *_gestureRecognizer;
    ASTArcPanGestureRecognizerDelegate *_gestureRecognizerDelegate;
    NSNumberFormatter *_accessibilityValueNumberFormatter;
    CABasicAnimation *_trackFillLoadingAnimation;
    CABasicAnimation *_fadeOutLoadingAnimation;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) CABasicAnimation *fadeOutLoadingAnimation; // @synthesize fadeOutLoadingAnimation=_fadeOutLoadingAnimation;
@property(retain, nonatomic) CABasicAnimation *trackFillLoadingAnimation; // @synthesize trackFillLoadingAnimation=_trackFillLoadingAnimation;
@property(nonatomic, getter=isReadyForLoadingAnimation) _Bool readyForLoadingAnimation; // @synthesize readyForLoadingAnimation=_readyForLoadingAnimation;
@property(readonly, nonatomic) NSNumberFormatter *accessibilityValueNumberFormatter; // @synthesize accessibilityValueNumberFormatter=_accessibilityValueNumberFormatter;
@property(readonly, nonatomic) ASTArcPanGestureRecognizerDelegate *gestureRecognizerDelegate; // @synthesize gestureRecognizerDelegate=_gestureRecognizerDelegate;
@property(readonly, nonatomic) ASTArcPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;
@property(readonly, nonatomic) ASTRadialSliderRenderer *renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic, getter=isLoadingAnimationActive) _Bool loadingAnimationActive; // @synthesize loadingAnimationActive=_loadingAnimationActive;
@property(nonatomic, getter=isContinuous) _Bool continuous; // @synthesize continuous=_continuous;
@property(nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property(nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property(nonatomic) float value; // @synthesize value=_value;
@property(copy, nonatomic) CDUnknownBlockType accessibilityValueBlock; // @synthesize accessibilityValueBlock=_accessibilityValueBlock;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (_Bool)isAccessibilityElement;
- (void)stopLoadingAnimation:(_Bool)arg1;
- (void)startLoadingAnimation;
- (void)cleanupLoadingAnimation;
- (void)prepareForLoadingAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)setHighlighted:(_Bool)arg1;
- (void)handleGesture:(id)arg1;
- (void)setValue:(float)arg1 animated:(_Bool)arg2;
- (void)tintColorDidChange;
- (void)createControlUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

