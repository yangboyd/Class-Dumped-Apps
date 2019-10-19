//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MDMTransitionController-Protocol.h"
#import "MDMViewControllerTransitionCoordinatorDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class MDMViewControllerTransitionCoordinator, NSString, UIPresentationController, UIViewController;
@protocol MDMTransition;

@interface MDMViewControllerTransitionController : NSObject <MDMViewControllerTransitionCoordinatorDelegate, MDMTransitionController, UIViewControllerTransitioningDelegate>
{
    UIViewController *_associatedViewController;
    UIPresentationController *_presentationController;
    MDMViewControllerTransitionCoordinator *_coordinator;
    UIViewController *_source;
    id <MDMTransition> _transition;
}

@property(retain, nonatomic) id <MDMTransition> transition; // @synthesize transition=_transition;
- (void).cxx_destruct;
- (void)prepareForTransitionWithSourceViewController:(id)arg1 backViewController:(id)arg2 foreViewController:(id)arg3 direction:(unsigned long long)arg4;
- (void)transitionDidCompleteWithCoordinator:(id)arg1;
- (id)presentationControllerForPresentedViewController:(id)arg1 presentingViewController:(id)arg2 sourceViewController:(id)arg3;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)presentationTransition;
- (id)activeTransitions;
@property(readonly, nonatomic) id <MDMTransition> activeTransition;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

