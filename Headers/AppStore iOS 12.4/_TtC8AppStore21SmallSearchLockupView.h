//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC8AppStore14BaseLockupView.h"

@class UIButton, _TtC8AppStore16DynamicTypeLabel, _TtC8AppStore16ReviewRatingView;

@interface _TtC8AppStore21SmallSearchLockupView : _TtC8AppStore14BaseLockupView
{
    // Error parsing type: , name: adSystemGrayAlternate
    // Error parsing type: , name: adSystemMidGrayAlternate
    // Error parsing type: , name: metadataRegularMargin
    // Error parsing type: , name: metadataSmallMargin
    // Error parsing type: , name: metadataTextSpace
    // Error parsing type: , name: regularWidthColumnSpacing
    // Error parsing type: , name: isAd
    // Error parsing type: , name: adButton
    // Error parsing type: , name: includeRatings
    // Error parsing type: , name: userRatingView
    // Error parsing type: , name: ratingCountLabel
    // Error parsing type: , name: includeEditorsChoice
    // Error parsing type: , name: editorsChoiceView
    // Error parsing type: , name: descriptionLabel
    // Error parsing type: , name: adButtonClickHandler
}

- (void).cxx_destruct;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityDescriptionLabel;
@property(nonatomic, readonly) UIButton *accessibilityAdButton;
@property(nonatomic, readonly) _Bool accessibilityIsAd;
@property(nonatomic, readonly) _TtC8AppStore16DynamicTypeLabel *accessibilityRatingCountLabel;
@property(nonatomic, readonly) _TtC8AppStore16ReviewRatingView *accessibilitytUserRatingView;
- (void)darkerSystemColorsStatusDidChange;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)adButtonTrampolineWithSender:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

