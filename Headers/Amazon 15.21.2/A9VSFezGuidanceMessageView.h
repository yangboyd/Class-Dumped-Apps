//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "A9VSFezMessageView.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel, UIView;

@interface A9VSFezGuidanceMessageView : A9VSFezMessageView
{
    NSString *_gifName;
    double _displayDuration;
    UIView *_messageContainerView;
    UIView *_imageViewBackgroundView;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSLayoutConstraint *_messageContainerMinimumHeightConstraint;
    NSLayoutConstraint *_messageContainerMaximumHeightConstraint;
    NSLayoutConstraint *_messageContainerWidthConstraint;
    NSLayoutConstraint *_imageViewHeightConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightConstraint; // @synthesize imageViewHeightConstraint=_imageViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageContainerWidthConstraint; // @synthesize messageContainerWidthConstraint=_messageContainerWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageContainerMaximumHeightConstraint; // @synthesize messageContainerMaximumHeightConstraint=_messageContainerMaximumHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *messageContainerMinimumHeightConstraint; // @synthesize messageContainerMinimumHeightConstraint=_messageContainerMinimumHeightConstraint;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *imageViewBackgroundView; // @synthesize imageViewBackgroundView=_imageViewBackgroundView;
@property(retain, nonatomic) UIView *messageContainerView; // @synthesize messageContainerView=_messageContainerView;
@property(nonatomic) double displayDuration; // @synthesize displayDuration=_displayDuration;
@property(retain, nonatomic) NSString *gifName; // @synthesize gifName=_gifName;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)transitionOffAnimator;
- (id)transitionOnAnimator;
- (void)setUpAnimators;
- (void)setUpConstraints;
- (void)setUpSubviewsWithTitle:(id)arg1 subtitle:(id)arg2;
- (id)initWithGifName:(id)arg1 title:(id)arg2 subtitle:(id)arg3 displayDuration:(double)arg4;
- (id)initWithGifName:(id)arg1 title:(id)arg2 subtitle:(id)arg3;

@end

