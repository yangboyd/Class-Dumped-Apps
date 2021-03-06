//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSArray, UIImage, UIImageView;

@interface IESLiveAnchorRankListAvatarView : UIView
{
    UIImage *_decorationImage;
    NSArray *_gradientColors;
    double _livinIconWidth;
    double _avatarPadding;
    CAGradientLayer *_gradientLayer;
    UIImageView *_avatarDecorationView;
    UIImageView *_avatarImageView;
    UIView *_livingAnimationView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *livingAnimationView; // @synthesize livingAnimationView=_livingAnimationView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *avatarDecorationView; // @synthesize avatarDecorationView=_avatarDecorationView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double avatarPadding; // @synthesize avatarPadding=_avatarPadding;
@property(nonatomic) double livinIconWidth; // @synthesize livinIconWidth=_livinIconWidth;
@property(copy, nonatomic) NSArray *gradientColors; // @synthesize gradientColors=_gradientColors;
@property(retain, nonatomic) UIImage *decorationImage; // @synthesize decorationImage=_decorationImage;
- (void)setupConstraints;
- (void)updateWithURLs:(id)arg1 living:(_Bool)arg2 showDecoration:(_Bool)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

