//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFUILabel, NFUIViewConstraintCacheObject, NSNumber, UIColor, UILabel;
@protocol NFUIDisplayPagePlayButtonViewDelegateProtocol;

@interface NFUIDisplayPagePlayButtonView : UIView
{
    _Bool _upperCaseText;
    id <NFUIDisplayPagePlayButtonViewDelegateProtocol> _delegate;
    NSNumber *_playId;
    long long _buttonState;
    long long _buttonStyle;
    UIColor *_color;
    UIColor *_textColor;
    NFUIViewConstraintCacheObject *_playButtonConstraintCache;
    NFUILabel *_playLabel;
    UILabel *_playIconLabel;
}

@property(retain, nonatomic) UILabel *playIconLabel; // @synthesize playIconLabel=_playIconLabel;
@property(retain, nonatomic) NFUILabel *playLabel; // @synthesize playLabel=_playLabel;
@property(retain, nonatomic) NFUIViewConstraintCacheObject *playButtonConstraintCache; // @synthesize playButtonConstraintCache=_playButtonConstraintCache;
@property(nonatomic) _Bool upperCaseText; // @synthesize upperCaseText=_upperCaseText;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
@property(nonatomic) long long buttonState; // @synthesize buttonState=_buttonState;
@property(retain, nonatomic) NSNumber *playId; // @synthesize playId=_playId;
@property(nonatomic) __weak id <NFUIDisplayPagePlayButtonViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)updateView;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)areTeeEllifyLayout;
- (void)layoutSubviews;
- (void)handleTap:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

@end

