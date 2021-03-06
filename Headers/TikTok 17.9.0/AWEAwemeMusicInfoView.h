//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, CAGradientLayer, NSString, UIButton, UIFont, UIImageView;

@interface AWEAwemeMusicInfoView : UIView
{
    _Bool _isOriginal;
    UIFont *_musicLabelFont;
    UIImageView *_musicLogoView;
    NSString *_musicLoopString;
    UIButton *_completeMusicButton;
    NSString *_referString;
    UIView *_containerView;
    UIView *_loopContainerView;
    UIView *_musicContainerView;
    CAGradientLayer *_gradientLayer;
    double _containerViewWidth;
    double _containerViewHeight;
    double _subviewWidth;
    long long _subviewCount;
    AWEAwemeModel *_awemeModel;
    NSString *_musicIDForW;
    NSString *_urlStringForW;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *urlStringForW; // @synthesize urlStringForW=_urlStringForW;
@property(copy, nonatomic) NSString *musicIDForW; // @synthesize musicIDForW=_musicIDForW;
@property(retain, nonatomic) AWEAwemeModel *awemeModel; // @synthesize awemeModel=_awemeModel;
@property(nonatomic) long long subviewCount; // @synthesize subviewCount=_subviewCount;
@property(nonatomic) double subviewWidth; // @synthesize subviewWidth=_subviewWidth;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) double containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *musicContainerView; // @synthesize musicContainerView=_musicContainerView;
@property(retain, nonatomic) UIView *loopContainerView; // @synthesize loopContainerView=_loopContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) UIButton *completeMusicButton; // @synthesize completeMusicButton=_completeMusicButton;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSString *musicLoopString; // @synthesize musicLoopString=_musicLoopString;
@property(retain, nonatomic) UIImageView *musicLogoView; // @synthesize musicLogoView=_musicLogoView;
@property(retain, nonatomic) UIFont *musicLabelFont; // @synthesize musicLabelFont=_musicLabelFont;
- (void)configRollingAnimation_musicLogoView:(_Bool)arg1;
- (double)layoutSubview_musicLogoView;
- (id)dateTransformToTimeString;
- (void)transferToWH5Page;
- (double)widthWithLabelString:(id)arg1;
- (id)subviewItemWithLabelString:(id)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)addViewTapTarget:(id)arg1 action:(SEL)arg2;
- (void)configRollingAnimationWithLabelString:(id)arg1 isOriginal:(_Bool)arg2 awemeModel:(id)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

