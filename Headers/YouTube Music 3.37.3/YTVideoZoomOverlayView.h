//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSString, UIPinchGestureRecognizer, YTFormattedStringLabel, YTLabel, YTTimedAction;
@protocol YTVideoPlayerOverlayGestureRecognizerDelegate, YTVideoZoomOverlayViewDelegate;

@interface YTVideoZoomOverlayView : UIView <UIGestureRecognizerDelegate>
{
    double _lastScaledPinchDistance;
    YTLabel *_snapStateLabel;
    YTTimedAction *_removeSnapStateLabelAction;
    YTTimedAction *_removeUserEduTooltipAction;
    UIView *_userEduLabelBackground;
    YTFormattedStringLabel *_userEduLabel;
    UIView *_backgroundBorderView;
    _Bool _enabled;
    _Bool _snapIndicatorVisible;
    id <YTVideoZoomOverlayViewDelegate> _delegate;
    id <YTVideoPlayerOverlayGestureRecognizerDelegate> _overlayGestureRecognizerDelegate;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
}

+ (struct CGColor *)snapStateLabelBackgroundColor;
+ (struct CGColor *)borderColorFlash;
+ (struct CGColor *)borderColorVisible;
+ (struct CGColor *)borderColorHidden;
@property(nonatomic, getter=isSnapIndicatorVisible) _Bool snapIndicatorVisible; // @synthesize snapIndicatorVisible=_snapIndicatorVisible;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer; // @synthesize pinchGestureRecognizer=_pinchGestureRecognizer;
@property(nonatomic) __weak id <YTVideoPlayerOverlayGestureRecognizerDelegate> overlayGestureRecognizerDelegate; // @synthesize overlayGestureRecognizerDelegate=_overlayGestureRecognizerDelegate;
@property(nonatomic) __weak id <YTVideoZoomOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideUserEduTooltip;
- (id)animationToTransitionUserEduToVisible:(_Bool)arg1;
- (void)layoutUserEduLabel;
- (void)hideSnapStateLabel;
- (double)screenDistanceBetweenPoint:(struct CGPoint)arg1 andPoint:(struct CGPoint)arg2;
- (void)didRecognizePinch:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)showUserEduTooltip;
- (void)showLabelForSnapState:(long long)arg1;
- (void)flashAndHideSnapIndicator;
- (void)updateSnapStateLabelPosition;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

