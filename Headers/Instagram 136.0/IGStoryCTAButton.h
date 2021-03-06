//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGTapButton.h>

@class CAShapeLayer, UIColor, UIImageView, UILabel;

@interface IGStoryCTAButton : IGTapButton
{
    UIImageView *_defaultChevronImageView;
    UIImageView *_filledChevronImageView;
    CAShapeLayer *_ovalBackgroundLayer;
    _Bool _filled;
    _Bool _shouldShowHollowBackground;
    UILabel *_destinationContextLabel;
    UIImageView *_iconImageView;
    double _iconImageViewYOffset;
    UIColor *_ovalBackgroundFillColor;
}

@property(retain, nonatomic) UIColor *ovalBackgroundFillColor; // @synthesize ovalBackgroundFillColor=_ovalBackgroundFillColor;
@property(nonatomic) _Bool shouldShowHollowBackground; // @synthesize shouldShowHollowBackground=_shouldShowHollowBackground;
@property(nonatomic) double iconImageViewYOffset; // @synthesize iconImageViewYOffset=_iconImageViewYOffset;
@property(readonly, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) UILabel *destinationContextLabel; // @synthesize destinationContextLabel=_destinationContextLabel;
@property(nonatomic, getter=isFilled) _Bool filled; // @synthesize filled=_filled;
- (void).cxx_destruct;
- (double)_iconImageViewWidth;
- (void)stopAllAnimations;
- (void)animateBounceWithCompletion:(CDUnknownBlockType)arg1;
- (void)_updateButtonAppearance;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

