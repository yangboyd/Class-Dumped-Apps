//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IFGuidePage.h>

@class UIButton, UILabel, UIView;
@protocol IFAnimationViewProtocol;

@interface IFNewDesignCommentsPage : IFGuidePage
{
    UIButton *_closeButton;
    UIView<IFAnimationViewProtocol> *_lottieAnimationView;
    CDUnknownBlockType _completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) UIView<IFAnimationViewProtocol> *lottieAnimationView; // @synthesize lottieAnimationView=_lottieAnimationView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeTapped:(id)arg1;
- (void)configureAsContentPage;
- (void)startAnimation;
- (void)setUpAnimationView;
- (void)setUpSubtitle;
- (void)setUpTitle;
- (void)setUpBottomButton;
- (void)setUpView;
- (void)didMoveToSuperview;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;

// Remaining properties
@property(retain, nonatomic) UILabel *subtitleLabel;

@end

