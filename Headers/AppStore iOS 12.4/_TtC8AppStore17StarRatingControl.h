//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIControl.h>

@class NSArray, NSString;

@interface _TtC8AppStore17StarRatingControl : UIControl
{
    // Error parsing type: , name: rating
    // Error parsing type: , name: lastSentRating
    // Error parsing type: , name: touchOutsideMargin
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)accessibilitySetStarRatingFive;
- (void)accessibilitySetStarRatingFour;
- (void)accessibilitySetStarRatingThree;
- (void)accessibilitySetStarRatingTwo;
- (void)accessibilitySetStarRatingOne;
- (void)accessibilitySetStarRatingZero;
@property(nonatomic, copy) NSArray *accessibilityCustomActions;
@property(nonatomic, copy) NSString *accessibilityValue;
@property(nonatomic, copy) NSString *accessibilityHint;
@property(nonatomic, copy) NSString *accessibilityLabel;
@property(nonatomic) _Bool isAccessibilityElement;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCoder:(id)arg1;

@end

