//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCMultiScreenViewController.h"

#import "CCFlowDelegate-Protocol.h"
#import "CCFlowObserver-Protocol.h"
#import "SCMultiScreenSlideInTransitioning-Protocol.h"

@class CCFlow, UIColor, _TtC10UIControls29RotatingActivityIndicatorView;

@interface _TtC4Cash18FlowViewController : SCMultiScreenViewController <CCFlowDelegate, CCFlowObserver, SCMultiScreenSlideInTransitioning>
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: flow
    // Error parsing type: , name: tintColor
    // Error parsing type: , name: confirmationScreenSpinnerToAnimateFrom
    // Error parsing type: , name: urlOpener
    // Error parsing type: , name: presentedSteps
    // Error parsing type: , name: presentedBlockerDescriptorIDs
    // Error parsing type: , name: stepsByScreen
    // Error parsing type: , name: blockerDescriptorIDsByScreen
    // Error parsing type: , name: personManager
    // Error parsing type: , name: pendingScreenToPresent
    // Error parsing type: , name: alertConfirmationCompletion
}

- (void).cxx_destruct;
- (id)initWithLogger:(id)arg1;
- (_Bool)useWithConfirmationCode:(id)arg1;
- (void)submitUserInputIfReadyToSubmitWithStep:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)didBecomePresentedScreen;
- (void)flowNeedsToCompleteClientScenario:(int)arg1;
- (void)flowNeedsToBeManuallyCanceled:(id)arg1;
- (void)flow:(id)arg1 needsToPresentMessage:(id)arg2;
- (void)flow:(id)arg1 currentStep:(long long)arg2 changedFromInputState:(long long)arg3 toInputState:(long long)arg4;
- (void)flow:(id)arg1 didMoveFromStep:(long long)arg2 toStep:(long long)arg3 nextBlockerDescriptor:(id)arg4;
- (id)slideInTransitionBottomContentColor;
- (void)didPresentScreen:(id)arg1 oldScreen:(id)arg2;
- (void)presentScreen:(id)arg1 transitionStyle:(long long)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
@property(nonatomic, retain) _TtC10UIControls29RotatingActivityIndicatorView *confirmationScreenSpinnerToAnimateFrom; // @synthesize confirmationScreenSpinnerToAnimateFrom;
@property(nonatomic, readonly) UIColor *tintColor; // @synthesize tintColor;
@property(nonatomic, readonly) CCFlow *flow; // @synthesize flow;

@end

