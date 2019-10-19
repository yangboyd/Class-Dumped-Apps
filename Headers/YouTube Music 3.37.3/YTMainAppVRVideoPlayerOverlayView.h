//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTAutonavEndscreenViewProtocol-Protocol.h"
#import "YTResponder-Protocol.h"

@class NSString, YTVRCaptionOverlayView;
@protocol YTAutonavEndscreenViewDelegate, YTCaptionViewProtocol, YTResponder, YTVROverlayAdapter;

@interface YTMainAppVRVideoPlayerOverlayView : UIView <YTAutonavEndscreenViewProtocol, YTResponder>
{
    id <YTVROverlayAdapter> _adapter;
    YTVRCaptionOverlayView *_VRCaptionOverlayView;
    UIView<YTCaptionViewProtocol> *_captionOverlayView;
    id <YTAutonavEndscreenViewDelegate> _endscreenViewDelegate;
    id <YTResponder> _parentResponder;
    struct UIEdgeInsets _effectiveSafeAreaInsets;
}

@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(nonatomic) __weak id <YTAutonavEndscreenViewDelegate> endscreenViewDelegate; // @synthesize endscreenViewDelegate=_endscreenViewDelegate;
@property(nonatomic) struct UIEdgeInsets effectiveSafeAreaInsets; // @synthesize effectiveSafeAreaInsets=_effectiveSafeAreaInsets;
- (void).cxx_destruct;
- (void)stopCountdown;
- (void)startCountDownForSeconds:(double)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)setPausedLabelHidden:(_Bool)arg1;
- (void)setPausedLabelText:(id)arg1;
- (void)setCancelButtonHidden:(_Bool)arg1;
- (void)setCancelButtonRenderer:(id)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setBylineString:(id)arg1;
- (void)setVideoTitleString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)removeDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressNextTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPreviousTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressReplayTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPauseTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressPlayTarget:(id)arg1 action:(SEL)arg2;
- (void)setCaptionOverlayView:(id)arg1;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setPreviousButtonEnabled:(_Bool)arg1;
- (void)showReplayButton;
- (void)showPauseButton;
- (void)showPlayButton;
- (void)showSpinner;
- (void)layoutSubviews;
- (void)setVROverlayAdapter:(id)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

