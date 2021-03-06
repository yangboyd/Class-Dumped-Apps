//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "SMASHNavigationController-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AWWebViewPopAnimator, AWWebViewPushAnimator, NSMapTable, NSMutableArray, NSString;
@protocol UINavigationControllerDelegate;

@interface AWWebNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate, SMASHNavigationController>
{
    _Bool _disableTransitioningStateTracking;
    _Bool _isTransitioning;
    id <UINavigationControllerDelegate> _clientDelegate;
    NSMutableArray *_delegateProxies;
    NSMutableArray *_transitionCompleteBlocks;
    NSMapTable *_viewControllerCache;
    AWWebViewPushAnimator *_pushAnimator;
    AWWebViewPopAnimator *_popAnimator;
}

@property(retain, nonatomic) AWWebViewPopAnimator *popAnimator; // @synthesize popAnimator=_popAnimator;
@property(retain, nonatomic) AWWebViewPushAnimator *pushAnimator; // @synthesize pushAnimator=_pushAnimator;
@property(retain, nonatomic) NSMapTable *viewControllerCache; // @synthesize viewControllerCache=_viewControllerCache;
@property(retain, nonatomic) NSMutableArray *transitionCompleteBlocks; // @synthesize transitionCompleteBlocks=_transitionCompleteBlocks;
@property(retain, nonatomic) NSMutableArray *delegateProxies; // @synthesize delegateProxies=_delegateProxies;
@property(nonatomic) __weak id <UINavigationControllerDelegate> clientDelegate; // @synthesize clientDelegate=_clientDelegate;
@property(nonatomic) _Bool isTransitioning; // @synthesize isTransitioning=_isTransitioning;
@property(nonatomic) _Bool disableTransitioningStateTracking; // @synthesize disableTransitioningStateTracking=_disableTransitioningStateTracking;
- (void).cxx_destruct;
- (double)getTransitionDuration:(id)arg1;
- (id)getAnimationlessPageTransitionWeblabTreatment;
- (void)executeBlockOnTransitionComplete:(CDUnknownBlockType)arg1;
- (unsigned long long)stackDepthThreshold;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)aw_allDelegates;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)performWillPopOntoTopOfNavStackWithController:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 onlyAfterTransition:(_Bool)arg3 cacheID:(id)arg4;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 onlyAfterTransition:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2 cacheID:(id)arg3;
- (void)setDelegate:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)callbackForEachDelegateUsingBlock:(CDUnknownBlockType)arg1;
- (id)allCallbackDelegates;
- (void)unregisterDelegate:(id)arg1;
- (void)registerDelegate:(id)arg1;
- (void)logErrorForNavigationWhileAlreadyAnimating;
- (_Bool)shouldAlwaysAllowLeftNavigationButton;
- (_Bool)shouldUseInternalHistory;
- (_Bool)shouldHideNavigationButtons;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

