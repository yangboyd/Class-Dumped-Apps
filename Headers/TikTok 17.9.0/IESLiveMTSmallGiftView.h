//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CALayer, HTSLiveAvatarImageView, IESLiveMTArtTextLabel, NSArray, NSString, UIImageView, UILabel;
@protocol HTSLivePluginLayoutMachineProvider, IESLiveLandscapeService, IESLiveRoomService, IESLiveUserService;

@interface IESLiveMTSmallGiftView : UIView
{
    _Bool _isAnimating;
    _Bool _isGroup;
    _Bool _disableComboCount;
    NSString *_giftKey;
    CDUnknownBlockType _onAnimationEnd;
    CDUnknownBlockType _onTouchViewTap;
    UIView *_containerView;
    UIView *_gradientView;
    CAGradientLayer *_gradientViewLayer;
    UIView *_touchView;
    HTSLiveAvatarImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_descLabel;
    UIImageView *_giftView;
    IESLiveMTArtTextLabel *_groupCountLabel;
    IESLiveMTArtTextLabel *_groupXLabel;
    UIView *_comboContainerView;
    IESLiveMTArtTextLabel *_comboXLabel;
    IESLiveMTArtTextLabel *_comboNumberLabel;
    id <IESLiveRoomService> _roomService;
    id <IESLiveUserService> _userService;
    CDUnknownBlockType _stopAnimationTask;
    NSArray *_groupColorArr;
    long long _groupIndex;
    unsigned long long _animationLevel;
    CAGradientLayer *_flashLayer;
    UIView *_outlineView;
    CALayer *_outlineMaskLayer;
    CALayer *_maskLayer;
    id <IESLiveLandscapeService> _landscapeService;
    id <HTSLivePluginLayoutMachineProvider> _layoutProvider;
    double _leftMargin;
}

- (void).cxx_destruct;
@property(nonatomic) double leftMargin; // @synthesize leftMargin=_leftMargin;
@property(retain, nonatomic) id <HTSLivePluginLayoutMachineProvider> layoutProvider; // @synthesize layoutProvider=_layoutProvider;
@property(retain, nonatomic) id <IESLiveLandscapeService> landscapeService; // @synthesize landscapeService=_landscapeService;
@property(retain, nonatomic) CALayer *maskLayer; // @synthesize maskLayer=_maskLayer;
@property(retain, nonatomic) CALayer *outlineMaskLayer; // @synthesize outlineMaskLayer=_outlineMaskLayer;
@property(retain, nonatomic) UIView *outlineView; // @synthesize outlineView=_outlineView;
@property(retain, nonatomic) CAGradientLayer *flashLayer; // @synthesize flashLayer=_flashLayer;
@property(nonatomic) unsigned long long animationLevel; // @synthesize animationLevel=_animationLevel;
@property(nonatomic) long long groupIndex; // @synthesize groupIndex=_groupIndex;
@property(copy, nonatomic) NSArray *groupColorArr; // @synthesize groupColorArr=_groupColorArr;
@property(copy, nonatomic) CDUnknownBlockType stopAnimationTask; // @synthesize stopAnimationTask=_stopAnimationTask;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveRoomService> roomService; // @synthesize roomService=_roomService;
@property(nonatomic) _Bool disableComboCount; // @synthesize disableComboCount=_disableComboCount;
@property(retain, nonatomic) IESLiveMTArtTextLabel *comboNumberLabel; // @synthesize comboNumberLabel=_comboNumberLabel;
@property(retain, nonatomic) IESLiveMTArtTextLabel *comboXLabel; // @synthesize comboXLabel=_comboXLabel;
@property(retain, nonatomic) UIView *comboContainerView; // @synthesize comboContainerView=_comboContainerView;
@property(retain, nonatomic) IESLiveMTArtTextLabel *groupXLabel; // @synthesize groupXLabel=_groupXLabel;
@property(retain, nonatomic) IESLiveMTArtTextLabel *groupCountLabel; // @synthesize groupCountLabel=_groupCountLabel;
@property(retain, nonatomic) UIImageView *giftView; // @synthesize giftView=_giftView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) HTSLiveAvatarImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *touchView; // @synthesize touchView=_touchView;
@property(retain, nonatomic) CAGradientLayer *gradientViewLayer; // @synthesize gradientViewLayer=_gradientViewLayer;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onTouchViewTap; // @synthesize onTouchViewTap=_onTouchViewTap;
@property(copy, nonatomic) CDUnknownBlockType onAnimationEnd; // @synthesize onAnimationEnd=_onAnimationEnd;
@property(nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(copy, nonatomic) NSString *giftKey; // @synthesize giftKey=_giftKey;
- (id)messageListView;
- (_Bool)shouldUseSideStyle;
- (void)setupLeftMargin;
- (double)p_timeIntervalWithAnimationLevel:(unsigned long long)arg1;
- (void)p_updateAnimationLevelWithGroupIndex:(long long)arg1;
- (void)p_updateColorIndexWithPrice:(unsigned long long)arg1;
- (void)p_renderComboCount:(id)arg1;
- (void)touchViewDidTap;
- (_Bool)isAudience;
- (void)refreshUI;
- (void)startFlashAnimation;
- (void)startComboAnimation:(id)arg1 groupCount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 shouldAutoStop:(_Bool)arg4;
- (void)startComboAnimation:(id)arg1 groupCount:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)stopAnimation;
- (void)stopAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAnimationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)startAnimationWithCompletionHandler:(CDUnknownBlockType)arg1 shouldAutoStop:(_Bool)arg2;
- (void)startAnimation;
- (void)updateWithGiftMessageNode:(id)arg1 isGiftViewVisible:(_Bool)arg2;
- (void)setUpGroup;
- (void)addSubviews;
- (void)layoutUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

