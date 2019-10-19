//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NSLayoutConstraint, UIStackView;

@interface NFUIPlaybackAdvisoryView : UIView
{
    NFUILabel *_ratingLabel;
    NFUILabel *_advisories;
    UIStackView *_advisoryStackView;
    UIView *_LTRRedStrip;
    NSLayoutConstraint *_redStripHeight;
    UIView *_redView;
}

+ (id)advisoryView;
@property(retain, nonatomic) UIView *redView; // @synthesize redView=_redView;
@property(nonatomic) __weak NSLayoutConstraint *redStripHeight; // @synthesize redStripHeight=_redStripHeight;
@property(nonatomic) __weak UIView *LTRRedStrip; // @synthesize LTRRedStrip=_LTRRedStrip;
@property(nonatomic) __weak UIStackView *advisoryStackView; // @synthesize advisoryStackView=_advisoryStackView;
@property(nonatomic) __weak NFUILabel *advisories; // @synthesize advisories=_advisories;
@property(nonatomic) __weak NFUILabel *ratingLabel; // @synthesize ratingLabel=_ratingLabel;
- (void).cxx_destruct;
- (void)animateOut;
- (void)animateInWithDelay:(double)arg1;
- (void)configureWithDictionary:(id)arg1;

@end

