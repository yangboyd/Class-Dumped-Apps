//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, YTEditCameraFocusIndicatorView;
@protocol YTEditCameraFocusViewDelegate;

@interface YTEditCameraFocusView : UIView <UIGestureRecognizerDelegate>
{
    YTEditCameraFocusIndicatorView *_focusIndicatorView;
    _Bool _mirrored;
    _Bool _doubleTapToContinuousAutoFocus;
    id <YTEditCameraFocusViewDelegate> _delegate;
    NSString *_videoGravity;
    struct CGRect _cleanAperture;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool doubleTapToContinuousAutoFocus; // @synthesize doubleTapToContinuousAutoFocus=_doubleTapToContinuousAutoFocus;
@property(nonatomic) struct CGRect cleanAperture; // @synthesize cleanAperture=_cleanAperture;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic, getter=isMirrored) _Bool mirrored; // @synthesize mirrored=_mirrored;
@property(nonatomic) __weak id <YTEditCameraFocusViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)continuousAutoFocusAtCenter;
- (void)handleDoubleTap:(id)arg1;
- (void)handleSingleTap:(id)arg1;
- (struct CGPoint)pointOfInterestFromViewCoordinates:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

