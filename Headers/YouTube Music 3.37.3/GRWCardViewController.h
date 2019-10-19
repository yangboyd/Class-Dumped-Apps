//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GRWDismissablePresentedViewController-Protocol.h"
#import "MDCBottomSheetPresentationControllerDelegate-Protocol.h"

@class GIPAnimatedGIFImageView, GRWCardAction, GRWCardActionContainerView, GRWCircularShadowedImageView, GRWShadowedView, GRWUntouchableView, NSLayoutConstraint, NSObject, NSString, UIColor, UIImage, UILabel, UIScrollView, UIView;
@protocol UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate;

@interface GRWCardViewController : UIViewController <MDCBottomSheetPresentationControllerDelegate, GRWDismissablePresentedViewController>
{
    UIImage *_image;
    UIColor *_backgroundColor;
    UIColor *_titleColor;
    UIColor *_bodyColor;
    UIColor *_scrimColor;
    unsigned long long _presentationStyle;
    unsigned long long _titleScale;
    NSString *_titleText;
    NSString *_bodyText;
    unsigned long long _imageStyle;
    GRWCardAction *_dismissAction;
    GRWUntouchableView *_containerView;
    UIView *_cardView;
    GRWShadowedView *_cardShadowView;
    GIPAnimatedGIFImageView *_imageView;
    GRWCircularShadowedImageView *_iconView;
    UIScrollView *_scrollView;
    UIView *_scrollContainer;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    GRWCardActionContainerView *_actionContainer;
    NSLayoutConstraint *_cardMaxWidthConstraint;
    NSLayoutConstraint *_cardPreferredWidthConstraint;
    NSLayoutConstraint *_contentAspectRatioConstraint;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    NSObject<UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate> *_transitionController;
}

+ (double)cardWidthFittingWidth:(double)arg1 presentationStyle:(unsigned long long)arg2;
@property(readonly, nonatomic) NSObject<UIViewControllerAnimatedTransitioning><UIViewControllerTransitioningDelegate> *transitionController; // @synthesize transitionController=_transitionController;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginConstraint; // @synthesize bottomMarginConstraint=_bottomMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topMarginConstraint; // @synthesize topMarginConstraint=_topMarginConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentAspectRatioConstraint; // @synthesize contentAspectRatioConstraint=_contentAspectRatioConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cardPreferredWidthConstraint; // @synthesize cardPreferredWidthConstraint=_cardPreferredWidthConstraint;
@property(retain, nonatomic) NSLayoutConstraint *cardMaxWidthConstraint; // @synthesize cardMaxWidthConstraint=_cardMaxWidthConstraint;
@property(readonly, nonatomic) GRWCardActionContainerView *actionContainer; // @synthesize actionContainer=_actionContainer;
@property(retain, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *scrollContainer; // @synthesize scrollContainer=_scrollContainer;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) GRWCircularShadowedImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) GIPAnimatedGIFImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) GRWShadowedView *cardShadowView; // @synthesize cardShadowView=_cardShadowView;
@property(retain, nonatomic) UIView *cardView; // @synthesize cardView=_cardView;
@property(retain, nonatomic) GRWUntouchableView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) GRWCardAction *dismissAction; // @synthesize dismissAction=_dismissAction;
@property(readonly, nonatomic) unsigned long long imageStyle; // @synthesize imageStyle=_imageStyle;
@property(readonly, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(readonly, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, nonatomic) unsigned long long titleScale; // @synthesize titleScale=_titleScale;
@property(readonly, nonatomic) unsigned long long presentationStyle; // @synthesize presentationStyle=_presentationStyle;
@property(retain, nonatomic) UIColor *scrimColor; // @synthesize scrimColor=_scrimColor;
@property(retain, nonatomic) UIColor *bodyColor; // @synthesize bodyColor=_bodyColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)grw_dismissAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)textSizeDidChange:(id)arg1;
- (_Bool)accessibilityPerformEscape;
- (void)bottomSheetPresentationControllerDidDismissBottomSheet:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)cardDismissed;
- (void)updatePreferredContentSize;
- (void)updateDialogMargins;
- (void)updateWidthConstraint;
- (void)configureColor;
- (void)configureViewStyle;
- (void)applyImageToAppropriateImageView;
- (void)configureViewContents;
- (void)createViewLayoutConstraints;
- (void)createViewHeirarchy;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLoad;
- (void)loadView;
@property(nonatomic) _Bool dismissesOnBackgroundTap;
- (id)initWithTitle:(id)arg1 body:(id)arg2 titleScale:(unsigned long long)arg3 image:(id)arg4 imageStyle:(unsigned long long)arg5 actions:(id)arg6 preferredActionAlignment:(long long)arg7 preferredActionAxis:(long long)arg8 presentationStyle:(unsigned long long)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

