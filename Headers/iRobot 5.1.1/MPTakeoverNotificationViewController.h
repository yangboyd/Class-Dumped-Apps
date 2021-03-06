//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Mixpanel/MPNotificationViewController.h>

@class MPAlphaMaskView, NSLayoutConstraint, UIButton, UIImageView, UILabel, UIView, UIWindow;

@interface MPTakeoverNotificationViewController : MPNotificationViewController
{
    UIImageView *_backgroundImageView;
    UIImageView *_imageView;
    NSLayoutConstraint *_bottomImageSpacing;
    MPAlphaMaskView *_fadingView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    UIButton *_firstButton;
    UIButton *_secondButton;
    UIView *_secondButtonContainer;
    UIView *_viewMask;
    UIButton *_closeButton;
    UIWindow *_window;
}

@property(retain, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *viewMask; // @synthesize viewMask=_viewMask;
@property(retain, nonatomic) UIView *secondButtonContainer; // @synthesize secondButtonContainer=_secondButtonContainer;
@property(retain, nonatomic) UIButton *secondButton; // @synthesize secondButton=_secondButton;
@property(retain, nonatomic) UIButton *firstButton; // @synthesize firstButton=_firstButton;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MPAlphaMaskView *fadingView; // @synthesize fadingView=_fadingView;
@property(retain, nonatomic) NSLayoutConstraint *bottomImageSpacing; // @synthesize bottomImageSpacing=_bottomImageSpacing;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)tappedClose:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (void)hide:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)show;
- (void)buttonTapped:(id)arg1;
- (void)setUpButtonView:(id)arg1 withData:(id)arg2 forIndex:(long long)arg3;
- (void)viewDidLoad;
- (id)init;

@end

