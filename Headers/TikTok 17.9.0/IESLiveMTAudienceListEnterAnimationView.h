//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAGradientLayer, IESLiveMTAudienceListEnterDouplusItem, IESLiveMTAudienceListEnterItem, NSString, UIImageView;

@interface IESLiveMTAudienceListEnterAnimationView : UIView <CAAnimationDelegate>
{
    CDUnknownBlockType _animationComplete;
    IESLiveMTAudienceListEnterItem *_enterBtn;
    UIImageView *_divideView;
    IESLiveMTAudienceListEnterDouplusItem *_douPlusBtn;
    CAGradientLayer *_gradientLayer;
    struct CGRect _toFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) struct CGRect toFrame; // @synthesize toFrame=_toFrame;
@property(retain, nonatomic) IESLiveMTAudienceListEnterDouplusItem *douPlusBtn; // @synthesize douPlusBtn=_douPlusBtn;
@property(retain, nonatomic) UIImageView *divideView; // @synthesize divideView=_divideView;
@property(retain, nonatomic) IESLiveMTAudienceListEnterItem *enterBtn; // @synthesize enterBtn=_enterBtn;
@property(copy, nonatomic) CDUnknownBlockType animationComplete; // @synthesize animationComplete=_animationComplete;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)playDouplusEndAnimation:(struct CGRect)arg1;
- (void)playDouplusStartAnimation:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)didSetAttachingDIContext;
- (id)initWithFrame:(struct CGRect)arg1 douPlusBtnText:(id)arg2 enterListBtnText:(id)arg3 animationComplete:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

