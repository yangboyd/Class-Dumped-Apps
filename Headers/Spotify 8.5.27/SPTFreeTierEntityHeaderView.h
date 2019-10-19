//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUEHeaderBackgroundView, GLUEImageView, GLUELabel, NSAttributedString, NSLayoutConstraint, NSString, SPTFreeTierTrackEntityTextView, UIImage, UIImageView, UILabel, UIStackView;
@protocol GLUETheme;

@interface SPTFreeTierEntityHeaderView : UIView
{
    UIView *_mainbutton;
    UIView *_secondaryButton;
    UIImageView *_backgroundImageView;
    GLUEHeaderBackgroundView *_backgroundHeaderView;
    UILabel *_collapsedTitleLabel;
    UIView *_containerView;
    UIStackView *_stackView;
    GLUEImageView *_imgView;
    GLUELabel *_titleLabel;
    SPTFreeTierTrackEntityTextView *_subtitleView;
    id <GLUETheme> _theme;
    NSLayoutConstraint *_topConstraint;
    double _contentOffSetY;
}

@property(nonatomic) double contentOffSetY; // @synthesize contentOffSetY=_contentOffSetY;
@property(retain, nonatomic) NSLayoutConstraint *topConstraint; // @synthesize topConstraint=_topConstraint;
@property(retain, nonatomic) id <GLUETheme> theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTFreeTierTrackEntityTextView *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) GLUEImageView *imgView; // @synthesize imgView=_imgView;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) UILabel *collapsedTitleLabel; // @synthesize collapsedTitleLabel=_collapsedTitleLabel;
@property(readonly, nonatomic) GLUEHeaderBackgroundView *backgroundHeaderView; // @synthesize backgroundHeaderView=_backgroundHeaderView;
@property(readonly, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *secondaryButton; // @synthesize secondaryButton=_secondaryButton;
@property(retain, nonatomic) UIView *mainbutton; // @synthesize mainbutton=_mainbutton;
- (void).cxx_destruct;
- (double)calculateMinimumHeight;
- (void)scrollViewContentOffsetDidChange:(struct CGPoint)arg1 originalFrameHeight:(double)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)constrain:(id)arg1 within:(id)arg2;
- (void)setBackgroundImage:(id)arg1;
@property(readonly, nonatomic) struct CGSize imageSize;
@property(retain, nonatomic) UIImage *image;
- (id)subtitle;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle;
@property(copy, nonatomic) NSString *title;
- (double)statusBarHeight;
- (double)minimalDistanceFromTop;
- (void)setUpConstraints;
- (void)applySubtitleLayout;
- (void)applyCollapsedTitleLabelLayout;
- (void)applyTitleLabelLayout;
- (void)setupCollapsedTitleLabel;
- (void)setupDefaultSubtitleTextView;
- (void)setupDefaultTitleLabel;
- (void)setupDefaultImageView;
- (void)setupDefaultStackView;
- (void)setupDefaultContainer;
- (void)setupdefaultBackgroundHeaderView;
- (void)setupDefaultBackgroundImageView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

@end

