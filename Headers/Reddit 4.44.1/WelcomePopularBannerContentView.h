//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BaseButton, BaseImageView, BaseLabel;
@protocol WelcomePopularBannerContentViewDelegate;

@interface WelcomePopularBannerContentView : UIView
{
    _Bool _shouldHideCloseButton;
    id <WelcomePopularBannerContentViewDelegate> _delegate;
    BaseLabel *_titleLabel;
    BaseLabel *_descriptionLabel;
    BaseImageView *_rightImageView;
    BaseButton *_closeButton;
    BaseButton *_loginButton;
}

+ (struct CGSize)calculatedSizeForWidth:(double)arg1;
@property(retain, nonatomic) BaseButton *loginButton; // @synthesize loginButton=_loginButton;
@property(retain, nonatomic) BaseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) BaseImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) BaseLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) BaseLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) _Bool shouldHideCloseButton; // @synthesize shouldHideCloseButton=_shouldHideCloseButton;
@property(nonatomic) __weak id <WelcomePopularBannerContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didTapCloseButton:(id)arg1;
- (void)didTapLogIn:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

