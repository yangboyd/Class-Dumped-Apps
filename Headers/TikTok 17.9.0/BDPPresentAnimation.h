//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPercentDrivenInteractiveTransition;

@interface BDPPresentAnimation : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _screenEdgePopMode;
    _Bool _hideBackground;
    long long _style;
    long long _operation;
    CDUnknownBlockType _backgroundClickBlk;
    UIPercentDrivenInteractiveTransition *_interactive;
}

@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactive; // @synthesize interactive=_interactive;
@property(copy, nonatomic) CDUnknownBlockType backgroundClickBlk; // @synthesize backgroundClickBlk=_backgroundClickBlk;
@property(nonatomic) long long operation; // @synthesize operation=_operation;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) _Bool hideBackground; // @synthesize hideBackground=_hideBackground;
@property(nonatomic) _Bool screenEdgePopMode; // @synthesize screenEdgePopMode=_screenEdgePopMode;
- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)doScreenEdgePopAnimation:(id)arg1;
- (void)doDismissAnimation:(id)arg1;
- (void)doPushAnimation:(id)arg1;
- (void)backgroundTaped:(id)arg1;
- (id)backgroundViewFromContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

