//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MDCFlexibleHeaderViewDelegate-Protocol.h"
#import "MDCFlexibleHeaderViewScrollDelegate-Protocol.h"

@class GSCAvatarView, GSCProfileConfig, NSLayoutConstraint, NSString, PSTHeaderResizeDelegate, PSTHeaderViewModel, PSTNameLabel, PSTProfileDataViewController, UIButton, UIImageView, UIView;
@protocol CSTTracer, PSTHeaderInteractionDelegate, PSTProfileServiceDependencies;

@interface PSTHeaderViewController : UIViewController <MDCFlexibleHeaderViewDelegate, MDCFlexibleHeaderViewScrollDelegate>
{
    PSTProfileDataViewController *_profileDataVC;
    PSTHeaderViewModel *_headerViewModel;
    GSCProfileConfig *_config;
    id <PSTProfileServiceDependencies> _profileServiceDependencies;
    id <PSTHeaderInteractionDelegate> _delegate;
    _Bool _ignoreHeaderFrameChangeDelegateCalls;
    _Bool _isScollAnimating;
    struct CGPoint _previousContentOffset;
    struct CGPoint _scrollSpeed;
    _Bool _stickyHeaderEnabled;
    id <CSTTracer> _tracer;
    double _expandedHeight;
    unsigned long long _presentationStyle;
    UIView *_divider;
    GSCAvatarView *_avatar;
    UIView *_trustedUserIconContainer;
    UIImageView *_trustedUserIconImageView;
    UIButton *_moreButton;
    UIButton *_backButton;
    PSTNameLabel *_dropDownNameLabel;
    UIView *_dataContainerView;
    UIView *_collapsedModeBackgroundView;
    NSLayoutConstraint *_dataHeightConstraint;
    NSLayoutConstraint *_avatarSideConstraint;
    NSLayoutConstraint *_dropDownNameLabelMaxWidthConstraint;
    NSLayoutConstraint *_dropDownNameLabelTopConstraint;
    NSLayoutConstraint *_dropDownNameLabelCenterConstraint;
    NSLayoutConstraint *_avatarHCenterConstraint;
    NSLayoutConstraint *_avatarDataVDistanceConstraint;
    NSLayoutConstraint *_dataBottomSpacingTallConstraint;
    NSLayoutConstraint *_avatarLeftConstraint;
    NSLayoutConstraint *_avatarVCenterConstraint;
    NSLayoutConstraint *_avatarDataHSpacingConstraint;
    NSLayoutConstraint *_avatarMinBottomSpacingConstraint;
    NSLayoutConstraint *_dataBottomSpacingWideConstraint;
    PSTHeaderResizeDelegate *_resizeDelegate;
}

+ (id)blockedAvatarImage;
+ (id)defaultAvatarImage;
+ (id)backOtherIcon;
+ (id)backNavIcon;
+ (id)moreIcon;
- (void).cxx_destruct;
@property(retain, nonatomic) PSTHeaderResizeDelegate *resizeDelegate; // @synthesize resizeDelegate=_resizeDelegate;
@property(nonatomic) __weak NSLayoutConstraint *dataBottomSpacingWideConstraint; // @synthesize dataBottomSpacingWideConstraint=_dataBottomSpacingWideConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarMinBottomSpacingConstraint; // @synthesize avatarMinBottomSpacingConstraint=_avatarMinBottomSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarDataHSpacingConstraint; // @synthesize avatarDataHSpacingConstraint=_avatarDataHSpacingConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarVCenterConstraint; // @synthesize avatarVCenterConstraint=_avatarVCenterConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarLeftConstraint; // @synthesize avatarLeftConstraint=_avatarLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *dataBottomSpacingTallConstraint; // @synthesize dataBottomSpacingTallConstraint=_dataBottomSpacingTallConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarDataVDistanceConstraint; // @synthesize avatarDataVDistanceConstraint=_avatarDataVDistanceConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarHCenterConstraint; // @synthesize avatarHCenterConstraint=_avatarHCenterConstraint;
@property(nonatomic) __weak NSLayoutConstraint *dropDownNameLabelCenterConstraint; // @synthesize dropDownNameLabelCenterConstraint=_dropDownNameLabelCenterConstraint;
@property(nonatomic) __weak NSLayoutConstraint *dropDownNameLabelTopConstraint; // @synthesize dropDownNameLabelTopConstraint=_dropDownNameLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *dropDownNameLabelMaxWidthConstraint; // @synthesize dropDownNameLabelMaxWidthConstraint=_dropDownNameLabelMaxWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *avatarSideConstraint; // @synthesize avatarSideConstraint=_avatarSideConstraint;
@property(nonatomic) __weak NSLayoutConstraint *dataHeightConstraint; // @synthesize dataHeightConstraint=_dataHeightConstraint;
@property(nonatomic) __weak UIView *collapsedModeBackgroundView; // @synthesize collapsedModeBackgroundView=_collapsedModeBackgroundView;
@property(nonatomic) __weak UIView *dataContainerView; // @synthesize dataContainerView=_dataContainerView;
@property(nonatomic) __weak PSTNameLabel *dropDownNameLabel; // @synthesize dropDownNameLabel=_dropDownNameLabel;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) __weak UIImageView *trustedUserIconImageView; // @synthesize trustedUserIconImageView=_trustedUserIconImageView;
@property(nonatomic) __weak UIView *trustedUserIconContainer; // @synthesize trustedUserIconContainer=_trustedUserIconContainer;
@property(nonatomic) __weak GSCAvatarView *avatar; // @synthesize avatar=_avatar;
@property(nonatomic) __weak UIView *divider; // @synthesize divider=_divider;
@property(nonatomic) _Bool stickyHeaderEnabled; // @synthesize stickyHeaderEnabled=_stickyHeaderEnabled;
@property(nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property double expandedHeight; // @synthesize expandedHeight=_expandedHeight;
@property(retain, nonatomic) id <CSTTracer> tracer; // @synthesize tracer=_tracer;
- (void)updateColorsWithStyle:(id)arg1;
- (double)calculateExpandedHeight;
- (struct CGSize)calculatePreferredContentSize;
- (void)setupColorsInActionSheet:(id)arg1;
- (void)flexibleHeaderViewNeedsStatusBarAppearanceUpdate:(id)arg1;
- (void)flexibleHeaderViewFrameDidChange:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1 headerView:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2 headerView:(id)arg3;
- (void)stickHeader:(id)arg1 inScrollView:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1 headerView:(id)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1 headerView:(id)arg2;
- (void)dismissContactSheet:(id)arg1;
- (void)presentMenu;
@property(nonatomic) __weak id <PSTHeaderInteractionDelegate> delegate;
@property(nonatomic) __weak id <PSTProfileServiceDependencies> profileServiceDependencies;
@property(nonatomic) __weak GSCProfileConfig *config;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)prepareForSegue:(id)arg1 sender:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setTrustedIconAlphaIfVisisble:(double)arg1;
- (void)updateWithHeaderData:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)updatePresentationStyle;
- (id)trustedIconColor;
- (id)trustedUserImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

