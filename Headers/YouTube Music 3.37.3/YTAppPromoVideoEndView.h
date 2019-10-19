//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, YTButton, YTImageView, YTRatingView;

@interface YTAppPromoVideoEndView : UIView
{
    UIButton *_titleButton;
    UIButton *_preratingButton;
    UIButton *_postratingButton;
    YTButton *_actionButton;
    YTRatingView *_ratingView;
    YTImageView *_iconImageView;
    YTImageView *_backgroundImageView;
}

@property(readonly, nonatomic) YTImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) YTImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
- (void).cxx_destruct;
- (void)setRatingBarStyle:(int)arg1;
- (void)setTitleTarget:(id)arg1 selector:(SEL)arg2 clickable:(_Bool)arg3;
- (void)setIconTarget:(id)arg1 selector:(SEL)arg2 clickable:(_Bool)arg3;
- (void)setDescriptionTarget:(id)arg1 selector:(SEL)arg2 clickable:(_Bool)arg3;
- (void)setAdCtaButtonRenderer:(id)arg1 imageService:(id)arg2;
- (void)setActionTarget:(id)arg1 selector:(SEL)arg2;
- (void)setActionText:(id)arg1;
- (void)setPostratingText:(id)arg1;
- (void)setRating:(float)arg1;
- (void)setPreratingText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)layoutSubviews;
- (id)init;

@end

