//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GLUEStyleable-Protocol.h"

@class GLUEButton, GLUEGradientView, NSLayoutConstraint, NSString, SPTLanguageOnboardingGridView, SPTLanguageOnboardingHeaderView, SPTLanguageOnboardingOfflineView, UIActivityIndicatorView, UICollectionView;

@interface SPTLanguageOnboardingContainerView : UIView <GLUEStyleable>
{
    long long _containerViewState;
    GLUEGradientView *_backgroundGradientView;
    GLUEGradientView *_backgroundOverlayGradientView;
    SPTLanguageOnboardingHeaderView *_headerView;
    SPTLanguageOnboardingGridView *_gridView;
    SPTLanguageOnboardingOfflineView *_offlineView;
    UIActivityIndicatorView *_activityIndicatorView;
    NSLayoutConstraint *_headerViewTopConstraint;
    NSLayoutConstraint *_headerViewLeadingConstraint;
    NSLayoutConstraint *_headerViewTrailingConstraint;
    NSLayoutConstraint *_offlineViewWidthConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *offlineViewWidthConstraint; // @synthesize offlineViewWidthConstraint=_offlineViewWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTrailingConstraint; // @synthesize headerViewTrailingConstraint=_headerViewTrailingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewLeadingConstraint; // @synthesize headerViewLeadingConstraint=_headerViewLeadingConstraint;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(readonly, nonatomic) SPTLanguageOnboardingOfflineView *offlineView; // @synthesize offlineView=_offlineView;
@property(readonly, nonatomic) SPTLanguageOnboardingGridView *gridView; // @synthesize gridView=_gridView;
@property(readonly, nonatomic) SPTLanguageOnboardingHeaderView *headerView; // @synthesize headerView=_headerView;
@property(readonly, nonatomic) GLUEGradientView *backgroundOverlayGradientView; // @synthesize backgroundOverlayGradientView=_backgroundOverlayGradientView;
@property(readonly, nonatomic) GLUEGradientView *backgroundGradientView; // @synthesize backgroundGradientView=_backgroundGradientView;
@property(nonatomic) long long containerViewState; // @synthesize containerViewState=_containerViewState;
- (void).cxx_destruct;
- (void)glue_applyStyle:(id)arg1;
- (void)setNextButtonTitle:(id)arg1;
- (void)setHeaderSubtitle:(id)arg1;
- (void)setHeaderTitle:(id)arg1;
- (double)gridRowHeight;
- (struct CGSize)sizeForItemAtIndexPath:(id)arg1;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (void)updateContainerViewState;
- (void)setUpConstraints;
@property(readonly, nonatomic) GLUEButton *nextButton;
- (id)initWithFrame:(struct CGRect)arg1 theme:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

