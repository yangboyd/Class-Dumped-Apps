//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, SPTFreeTierPlaylistHeaderViewStyle, UILayoutGuide;
@protocol SPTFreeTierPlaylistHeaderContent, UILayoutSupport;

@interface SPTFreeTierPlaylistHeaderView : UIView
{
    _Bool _showSearchBar;
    _Bool _filterBarReadyForInteraction;
    UIView *_navigationTitleView;
    UIView *_containerView;
    UIView *_backgroundView;
    UIView<SPTFreeTierPlaylistHeaderContent> *_contentView;
    NSLayoutConstraint *_containerTopLayoutConstraint;
    NSLayoutConstraint *_containerHeightLayoutConstraint;
    NSLayoutConstraint *_headerHeightConstraint;
    NSLayoutConstraint *_accessoryViewMarginConstraint;
    UIView *_filterSearchBar;
    double _heightOfHalfAccessoryView;
    SPTFreeTierPlaylistHeaderViewStyle *_style;
    double _safeAreaMinY;
    UILayoutGuide *_parentLayoutGuide;
    id <UILayoutSupport> _legacyLayoutSupport;
}

@property(retain, nonatomic) id <UILayoutSupport> legacyLayoutSupport; // @synthesize legacyLayoutSupport=_legacyLayoutSupport;
@property(retain, nonatomic) UILayoutGuide *parentLayoutGuide; // @synthesize parentLayoutGuide=_parentLayoutGuide;
@property(nonatomic) double safeAreaMinY; // @synthesize safeAreaMinY=_safeAreaMinY;
@property(retain, nonatomic) SPTFreeTierPlaylistHeaderViewStyle *style; // @synthesize style=_style;
@property(nonatomic) double heightOfHalfAccessoryView; // @synthesize heightOfHalfAccessoryView=_heightOfHalfAccessoryView;
@property(nonatomic) _Bool filterBarReadyForInteraction; // @synthesize filterBarReadyForInteraction=_filterBarReadyForInteraction;
@property(retain, nonatomic) UIView *filterSearchBar; // @synthesize filterSearchBar=_filterSearchBar;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewMarginConstraint; // @synthesize accessoryViewMarginConstraint=_accessoryViewMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerHeightConstraint; // @synthesize headerHeightConstraint=_headerHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerHeightLayoutConstraint; // @synthesize containerHeightLayoutConstraint=_containerHeightLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *containerTopLayoutConstraint; // @synthesize containerTopLayoutConstraint=_containerTopLayoutConstraint;
@property(readonly, nonatomic) UIView<SPTFreeTierPlaylistHeaderContent> *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UIView *navigationTitleView; // @synthesize navigationTitleView=_navigationTitleView;
@property(nonatomic) _Bool showSearchBar; // @synthesize showSearchBar=_showSearchBar;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)entityHeaderViewController:(id)arg1 didUpdateVisibleRect:(struct CGRect)arg2 isDragging:(_Bool)arg3;
- (void)entityHeaderViewController:(id)arg1 didUpdateBounceOffsets:(struct UIEdgeInsets)arg2;
- (double)entityHeaderViewControllerMinimumHeight:(id)arg1;
@property(readonly, nonatomic) double additionalHeightUsedForSearchBar;
- (double)additionalHeightNeededForSearchBar;
- (void)updateAccessoryHeight:(double)arg1;
- (double)minimumHeight;
- (void)updateConstraints;
- (void)layoutSubviews;
- (void)viewDidAppear;
- (void)addOrRemoveSearchBarFromViewHierarchy;
- (void)setupSearchIfNeeded;
- (void)setContentView:(id)arg1;
- (void)setBackgroundView:(id)arg1;
- (void)configureWithParentLayoutGuide:(id)arg1 legacyLayoutSupport:(id)arg2;
- (id)initWithBackgroundView:(id)arg1 contentView:(id)arg2 navigationTitleView:(id)arg3 filterSearchBar:(id)arg4 headerViewStyle:(id)arg5;

@end

