//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NFUIKit/NFUIContentNavigationController.h>

#import "DisplayPageCollectionViewDragProtocol-Protocol.h"
#import "NFUIDisplayPageStackControllerProtocol-Protocol.h"
#import "NFUIStackNavigationControllerDelegate-Protocol.h"
#import "TransitioningOptionsProtocol-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NFUIDisplayPageInteractionPop, NSArray, NSLayoutConstraint, NSString, UIButton, UIGestureRecognizer, UIImageView, UIViewController;
@protocol NFUIDisplayPageNavigationProtocol, UIViewControllerAnimatedTransitioning;

@interface WD40DisplayPageNavigationController : NFUIContentNavigationController <TransitioningOptionsProtocol, DisplayPageCollectionViewDragProtocol, UIViewControllerTransitioningDelegate, NFUIDisplayPageStackControllerProtocol, NFUIStackNavigationControllerDelegate>
{
    _Bool _forceFullScreen;
    id <NFUIDisplayPageNavigationProtocol> _dpNav;
    UIImageView *_backButtonGradient;
    UIImageView *_closeButtonGradient;
    UIButton *_backButton;
    UIButton *_closeButton;
    NSLayoutConstraint *_contentLeadingContraint;
    NSLayoutConstraint *_contentTrailingContraint;
    NSLayoutConstraint *_contentViewGuideConstraint;
    NSLayoutConstraint *_backButtonWidth;
    NSLayoutConstraint *_backButtonHeight;
    NSLayoutConstraint *_closeButtonWidth;
    NSLayoutConstraint *_closeButtonHeight;
    long long _activeContraintType;
    NFUIDisplayPageInteractionPop *_popInteractionController;
    id <UIViewControllerAnimatedTransitioning> _presentationAnimator;
    id <UIViewControllerAnimatedTransitioning> _dismissalAnimator;
}

+ (id)newDisplayPageNavigationController;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> dismissalAnimator; // @synthesize dismissalAnimator=_dismissalAnimator;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> presentationAnimator; // @synthesize presentationAnimator=_presentationAnimator;
@property(retain, nonatomic) NFUIDisplayPageInteractionPop *popInteractionController; // @synthesize popInteractionController=_popInteractionController;
@property(nonatomic) _Bool forceFullScreen; // @synthesize forceFullScreen=_forceFullScreen;
@property(nonatomic) long long activeContraintType; // @synthesize activeContraintType=_activeContraintType;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonHeight; // @synthesize closeButtonHeight=_closeButtonHeight;
@property(nonatomic) __weak NSLayoutConstraint *closeButtonWidth; // @synthesize closeButtonWidth=_closeButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *backButtonHeight; // @synthesize backButtonHeight=_backButtonHeight;
@property(nonatomic) __weak NSLayoutConstraint *backButtonWidth; // @synthesize backButtonWidth=_backButtonWidth;
@property(nonatomic) __weak NSLayoutConstraint *contentViewGuideConstraint; // @synthesize contentViewGuideConstraint=_contentViewGuideConstraint;
@property(nonatomic) __weak NSLayoutConstraint *contentTrailingContraint; // @synthesize contentTrailingContraint=_contentTrailingContraint;
@property(nonatomic) __weak NSLayoutConstraint *contentLeadingContraint; // @synthesize contentLeadingContraint=_contentLeadingContraint;
@property(nonatomic) __weak UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) __weak UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak UIImageView *closeButtonGradient; // @synthesize closeButtonGradient=_closeButtonGradient;
@property(nonatomic) __weak UIImageView *backButtonGradient; // @synthesize backButtonGradient=_backButtonGradient;
@property(nonatomic) __weak id <NFUIDisplayPageNavigationProtocol> dpNav; // @synthesize dpNav=_dpNav;
- (void).cxx_destruct;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)accessibilityPerformEscape;
- (id)headerButtonMaskForBounds:(struct CGRect)arg1;
- (void)updateBackButtonHidden:(_Bool)arg1;
- (id)transitionSourceSnapshot;
- (struct UIEdgeInsets)transitionSourceInsets;
- (struct CGRect)transitionSourceRect;
- (void)updateWithDraggingOffset:(double)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (long long)preferredStatusBarUpdateAnimation;
- (long long)preferredStatusBarStyle;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setActiveConstraintsForSize:(struct CGSize)arg1;
- (void)setActiveConstraintsForType:(long long)arg1;
- (void)backButtonPressed:(id)arg1;
- (void)closeButtonPressed:(id)arg1;
- (void)pressedOutside:(id)arg1;
- (void)handeDismissGesture:(id)arg1;
- (void)dismissActionNavigate;
- (void)backActionNavigate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UIViewController *topViewController;
@property(copy, nonatomic) NSArray *viewControllers;
@property(readonly, nonatomic) UIViewController *visibleViewController;

@end

