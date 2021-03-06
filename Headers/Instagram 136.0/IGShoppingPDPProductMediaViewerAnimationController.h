//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/UIGestureRecognizerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerAnimatedTransitioning-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerInteractiveTransitioning-Protocol.h>
#import <InstagramAppCoreFramework/UIViewControllerTransitioningDelegate-Protocol.h>

@class IGDirectionalPanGestureRecognizer, NSString, UIView, UIViewController;
@protocol UIViewControllerContextTransitioning;

@interface IGShoppingPDPProductMediaViewerAnimationController : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning, UIViewControllerTransitioningDelegate>
{
    _Bool _isPresenting;
    _Bool _isInteracting;
    UIView *_transitioningMediaSnapshot;
    UIViewController *_presentedViewController;
    id <UIViewControllerContextTransitioning> _activeTransitionContext;
    IGDirectionalPanGestureRecognizer *_dismissingPanGestureRecognizer;
    UIView *_presentingMediaView;
    UIView *_presentedMediaView;
}

@property(retain, nonatomic) UIView *presentedMediaView; // @synthesize presentedMediaView=_presentedMediaView;
@property(retain, nonatomic) UIView *presentingMediaView; // @synthesize presentingMediaView=_presentingMediaView;
- (void).cxx_destruct;
- (void)_finishAnimationWithIsPresenting:(_Bool)arg1 isCancelling:(_Bool)arg2 velocity:(struct CGPoint)arg3;
- (void)_prepareForAnimationWithTransitionContext:(id)arg1 isPresenting:(_Bool)arg2;
- (void)_didPan:(id)arg1;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)initWithPresentedViewController:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) long long completionCurve;
@property(readonly, nonatomic) double completionSpeed;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wantsInteractiveStart;

@end

