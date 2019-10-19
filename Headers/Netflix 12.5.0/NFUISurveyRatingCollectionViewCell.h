//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSLayoutConstraint, NSString, UIView;

@interface NFUISurveyRatingCollectionViewCell : UICollectionViewCell
{
    NSString *_ratingValue;
    UIView *_circleView;
    NSLayoutConstraint *_widthConstraint;
    NSLayoutConstraint *_heightConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *widthConstraint; // @synthesize widthConstraint=_widthConstraint;
@property(nonatomic) __weak UIView *circleView; // @synthesize circleView=_circleView;
@property(retain) NSString *ratingValue; // @synthesize ratingValue=_ratingValue;
- (void).cxx_destruct;
- (id)accessibilityLabel;
- (void)restoreInitialState;
- (void)performSelectionWithCompletion:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (void)awakeFromNib;

@end

