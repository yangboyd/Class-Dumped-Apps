//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GLUELabel, NSLayoutConstraint, SPTLyricsV2FullscreenViewStyle;

@interface SPTLyricsV2FullscreenView : UIView
{
    GLUELabel *_titleLabel;
    UIView *_headerView;
    UIView *_lyricsView;
    UIView *_footerView;
    UIView *_headerContainerView;
    UIView *_lyricsContainerView;
    UIView *_footerContainerView;
    SPTLyricsV2FullscreenViewStyle *_style;
    NSLayoutConstraint *_headerContainerViewHeightConstraint;
    NSLayoutConstraint *_headerContainerViewTopConstraint;
    NSLayoutConstraint *_headerViewTopConstraint;
    NSLayoutConstraint *_headerViewLeadingConstraint;
    NSLayoutConstraint *_headerViewTrailingConstraint;
    NSLayoutConstraint *_lyricsViewTopConstraint;
    NSLayoutConstraint *_lyricsViewBottomConstraint;
    NSLayoutConstraint *_lyricsViewLeadingConstraint;
    NSLayoutConstraint *_lyricsViewTrailingConstraint;
    NSLayoutConstraint *_lyricsContainerViewTopConstraint;
    NSLayoutConstraint *_lyricsContainerViewBottomConstraint;
    NSLayoutConstraint *_lyricsContainerViewLeadingConstraint;
    NSLayoutConstraint *_lyricsContainerViewTrailingConstraint;
    NSLayoutConstraint *_footerContainerViewHeightConstraint;
    NSLayoutConstraint *_footerViewBottomConstraint;
    NSLayoutConstraint *_footerViewLeadingConstraint;
    NSLayoutConstraint *_footerViewTrailingConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *footerViewTrailingConstraint; // @synthesize footerViewTrailingConstraint=_footerViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footerViewLeadingConstraint; // @synthesize footerViewLeadingConstraint=_footerViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footerViewBottomConstraint; // @synthesize footerViewBottomConstraint=_footerViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *footerContainerViewHeightConstraint; // @synthesize footerContainerViewHeightConstraint=_footerContainerViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsContainerViewTrailingConstraint; // @synthesize lyricsContainerViewTrailingConstraint=_lyricsContainerViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsContainerViewLeadingConstraint; // @synthesize lyricsContainerViewLeadingConstraint=_lyricsContainerViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsContainerViewBottomConstraint; // @synthesize lyricsContainerViewBottomConstraint=_lyricsContainerViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsContainerViewTopConstraint; // @synthesize lyricsContainerViewTopConstraint=_lyricsContainerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewTrailingConstraint; // @synthesize lyricsViewTrailingConstraint=_lyricsViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewLeadingConstraint; // @synthesize lyricsViewLeadingConstraint=_lyricsViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewBottomConstraint; // @synthesize lyricsViewBottomConstraint=_lyricsViewBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *lyricsViewTopConstraint; // @synthesize lyricsViewTopConstraint=_lyricsViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTrailingConstraint; // @synthesize headerViewTrailingConstraint=_headerViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewLeadingConstraint; // @synthesize headerViewLeadingConstraint=_headerViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerContainerViewTopConstraint; // @synthesize headerContainerViewTopConstraint=_headerContainerViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerContainerViewHeightConstraint; // @synthesize headerContainerViewHeightConstraint=_headerContainerViewHeightConstraint;
@property(retain, nonatomic) SPTLyricsV2FullscreenViewStyle *style; // @synthesize style=_style;
@property(retain, nonatomic) UIView *footerContainerView; // @synthesize footerContainerView=_footerContainerView;
@property(retain, nonatomic) UIView *lyricsContainerView; // @synthesize lyricsContainerView=_lyricsContainerView;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
@property(readonly, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property(readonly, nonatomic) UIView *lyricsView; // @synthesize lyricsView=_lyricsView;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) GLUELabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (double)bottomMargin;
- (double)topMargin;
- (void)glue_applyStyle:(id)arg1;
- (void)collapseIntoCardFrame:(struct CGRect)arg1 lyricsFrame:(struct CGRect)arg2;
- (void)collapseToCardViewFrame:(struct CGRect)arg1 lyricsViewFrame:(struct CGRect)arg2;
- (void)expand;
- (void)startExpadingFromCardViewFrame:(struct CGRect)arg1 lyicsViewFrame:(struct CGRect)arg2;
- (void)setupConstraints;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 headerView:(id)arg2 footerView:(id)arg3 lyricsView:(id)arg4;

@end

