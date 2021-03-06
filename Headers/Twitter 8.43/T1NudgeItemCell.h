//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TFNUI/TFNTableViewCell.h>

@class NSArray, NSLayoutConstraint, T1NudgeCondensedView, UIColor, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface T1NudgeItemCell : TFNTableViewCell
{
    _Bool _contextViewShouldFillWidth;
    _Bool _forceContextViewAllowsUserInteraction;
    _Bool _isCondensedViewSelectable;
    double _contentVerticalSpacing;
    NSLayoutConstraint *_expandedStackViewTopAnchor;
    UIColor *_nudgeBackgroundColor;
    T1NudgeCondensedView *_condensedView;
    UIView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_learnMoreLabel;
    CDUnknownBlockType _learnMoreAction;
    UIView *_contextView;
    CDUnknownBlockType _contextAction;
    CDUnknownBlockType _contextActionCompletion;
    UIView *_nudgeContainerView;
    UIStackView *_expandedStackView;
    NSArray *_expandedStackViewConstraints;
    UITapGestureRecognizer *_contextViewTapGesture;
    UITapGestureRecognizer *_learnMoreLabelTapGesture;
    struct UIEdgeInsets _nudgeContentInsets;
    struct UIEdgeInsets _contentEdgeInsets;
    struct UIEdgeInsets _containerEdgeInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITapGestureRecognizer *learnMoreLabelTapGesture; // @synthesize learnMoreLabelTapGesture=_learnMoreLabelTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *contextViewTapGesture; // @synthesize contextViewTapGesture=_contextViewTapGesture;
@property(readonly, nonatomic) struct UIEdgeInsets containerEdgeInsets; // @synthesize containerEdgeInsets=_containerEdgeInsets;
@property(readonly, nonatomic) struct UIEdgeInsets contentEdgeInsets; // @synthesize contentEdgeInsets=_contentEdgeInsets;
@property(retain, nonatomic) NSArray *expandedStackViewConstraints; // @synthesize expandedStackViewConstraints=_expandedStackViewConstraints;
@property(retain, nonatomic) UIStackView *expandedStackView; // @synthesize expandedStackView=_expandedStackView;
@property(retain, nonatomic) UIView *nudgeContainerView; // @synthesize nudgeContainerView=_nudgeContainerView;
@property(copy, nonatomic) CDUnknownBlockType contextActionCompletion; // @synthesize contextActionCompletion=_contextActionCompletion;
@property(copy, nonatomic) CDUnknownBlockType contextAction; // @synthesize contextAction=_contextAction;
@property(retain, nonatomic) UIView *contextView; // @synthesize contextView=_contextView;
@property(copy, nonatomic) CDUnknownBlockType learnMoreAction; // @synthesize learnMoreAction=_learnMoreAction;
@property(retain, nonatomic) UILabel *learnMoreLabel; // @synthesize learnMoreLabel=_learnMoreLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) T1NudgeCondensedView *condensedView; // @synthesize condensedView=_condensedView;
@property(retain, nonatomic) UIColor *nudgeBackgroundColor; // @synthesize nudgeBackgroundColor=_nudgeBackgroundColor;
@property(nonatomic) _Bool isCondensedViewSelectable; // @synthesize isCondensedViewSelectable=_isCondensedViewSelectable;
@property(retain, nonatomic) NSLayoutConstraint *expandedStackViewTopAnchor; // @synthesize expandedStackViewTopAnchor=_expandedStackViewTopAnchor;
@property(nonatomic) _Bool forceContextViewAllowsUserInteraction; // @synthesize forceContextViewAllowsUserInteraction=_forceContextViewAllowsUserInteraction;
@property(nonatomic) _Bool contextViewShouldFillWidth; // @synthesize contextViewShouldFillWidth=_contextViewShouldFillWidth;
@property(nonatomic) struct UIEdgeInsets nudgeContentInsets; // @synthesize nudgeContentInsets=_nudgeContentInsets;
@property(nonatomic) double contentVerticalSpacing; // @synthesize contentVerticalSpacing=_contentVerticalSpacing;
- (void)_t1_setArrangedSubviews;
- (void)_t1_learnMoreLabelTapped:(id)arg1;
- (void)_t1_contextViewTapped:(id)arg1;
- (double)_t1_labelPreferredMaxLayoutWidthForSize:(struct CGSize)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)_t1_addAndConstrainSubviews;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willChangeToStyle:(unsigned long long)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

