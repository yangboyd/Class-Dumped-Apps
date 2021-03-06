//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, IGLiveCuratorContainerView, IGLiveIndicatorView, IGStoryGradientRingView;

@interface IGLiveWithStackedTrayAvatarView : UIView
{
    unsigned long long _avatarAlignmentStyle;
    double _profileImageSizeRatioToView;
    UIView *_frontProfileBorderView;
    UIView *_backProfileBorderView;
    CAShapeLayer *_frontProfileRing;
    CAShapeLayer *_backProfileRing;
    IGLiveIndicatorView *_liveLabel;
    IGStoryGradientRingView *_frontGradientRing;
    IGStoryGradientRingView *_backGradientRing;
    CAShapeLayer *_frontGradientRingMask;
    CAShapeLayer *_backGradientRingMask;
    IGLiveCuratorContainerView *_frontProfileView;
    IGLiveCuratorContainerView *_backProfileView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGLiveCuratorContainerView *backProfileView; // @synthesize backProfileView=_backProfileView;
@property(readonly, nonatomic) IGLiveCuratorContainerView *frontProfileView; // @synthesize frontProfileView=_frontProfileView;
- (id)_avatarBezierPathWithTargetView:(id)arg1;
- (id)_gradientRingMaskPath:(id)arg1;
- (void)_layoutGradientRing;
- (void)_updateInnerRingPath:(id)arg1 profileView:(id)arg2;
- (struct CGRect)_stackedFrontUserFrame;
- (struct CGRect)_stackedBackUserFrame;
- (void)layoutSubviews;
- (void)setFrontProfileUser:(id)arg1 backProfileUser:(id)arg2 hasBadgeBorder:(_Bool)arg3 module:(id)arg4;
- (void)_setUpStackedGradientRing;
- (void)_setUpStackedProfileView;
- (id)initWithProfileImageSize:(double)arg1 viewWidth:(double)arg2 avatarAlignmentStyle:(unsigned long long)arg3;

@end

