//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "GBTAddonsCardViewControllerDataSource-Protocol.h"
#import "GBTAddonsCardViewControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class GBTAddonsSettingsUtil, GBTConversationMessage, JAddOnsContextualAddOn, MDCActivityIndicator, NSString, UIPercentDrivenInteractiveTransition, UIView, UIViewPropertyAnimator;
@protocol GBTAddonsViewControllerDelegate, GBTAddonsViewControllerForComposeDataSource, JBTAddOn;

@interface GBTAddonsViewController : UINavigationController <GBTAddonsCardViewControllerDataSource, UIGestureRecognizerDelegate, UINavigationControllerDelegate, GBTAddonsCardViewControllerDelegate>
{
    id <GBTAddonsViewControllerForComposeDataSource> _dataSource;
    id <GBTAddonsViewControllerDelegate> _delegate;
    UIView *_loadingMask;
    MDCActivityIndicator *_spinner;
    UIViewPropertyAnimator *_dismissSpinnerAnimator;
    JAddOnsContextualAddOn *_contextualAddOnForRoot;
    GBTConversationMessage *_conversationMessage;
    _Bool _isFullscreen;
    _Bool _isDragging;
    _Bool _requiresOnDemandLoading;
    UIPercentDrivenInteractiveTransition *_interactivePopTransition;
    GBTAddonsSettingsUtil *_addOnsSettingsUtil;
    id <JBTAddOn> _addOn;
}

+ (id)addonsViewControllerWithAddOn:(id)arg1 contextualAddOn:(id)arg2 conversationMessage:(id)arg3 delegate:(id)arg4 addOnsSettingsUtil:(id)arg5;
+ (id)addonsViewControllerWithAddOn:(id)arg1 contextualAddOn:(id)arg2 dataSource:(id)arg3 delegate:(id)arg4 addOnsSettingsUtil:(id)arg5;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <JBTAddOn> addOn; // @synthesize addOn=_addOn;
- (_Bool)isLoadingIndicatorAnimatingOut;
- (_Bool)isLoadingIndicatorAnimating;
- (void)updateViewControllersFromRootRenderData;
- (void)getAddOnDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)maybeRefreshAddOn;
- (void)appDidBecomeActive;
- (void)updateSubviewsFrame;
- (void)stopSpinner;
- (void)startSpinner;
- (unsigned long long)lastIndexOfCardWithName:(id)arg1 inStack:(id)arg2;
- (void)handleEdgeSwipe:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)addonsCardViewControllerStateChanged;
- (void)addonsCardViewControllerDidReceiveUpdateDraftAction:(id)arg1;
- (void)addonsCardViewControllerDidFailToRenderData:(id)arg1;
- (void)addonsCardViewControllerDidRenderData:(id)arg1;
- (void)addonsCardViewControllerDidDismiss:(id)arg1;
- (void)addonsCardViewController:(id)arg1 didExpandCardAtIndex:(unsigned long long)arg2;
- (void)addonsCardViewControllerDidToggleFullscreen:(id)arg1;
- (void)addonsCardViewControllerDidLayoutSubviews:(id)arg1;
- (void)addonsCardViewControllerFormSubmissionFailed:(id)arg1;
- (void)addonsCardViewController:(id)arg1 didReceiveSubmitFormResponse:(id)arg2 persistFormValues:(_Bool)arg3 forAddOnWithId:(id)arg4;
- (void)addonsCardViewControllerComposeEmailResponseFailed:(id)arg1;
- (void)addonsCardViewControllerDidReceiveComposeEmailResponse:(id)arg1 composeEmailResponse:(id)arg2;
- (void)addonsCardViewControllerDidStartUniversalAction:(id)arg1;
- (void)addonsCardViewControllerDidStartFormSubmissionForAction:(id)arg1 formAction:(id)arg2;
- (void)addonsCardViewControllerDidStartComposeEmailRequest:(id)arg1;
- (id)emailDraftContextForAddOn;
- (id)addOnForFormSubmission;
- (id)conversationMessageForAddOn;
- (void)finishRefreshWithAddOn:(id)arg1 contextualAddOn:(id)arg2;
- (id)addOnsToolbar;
- (void)updateFullscreenState:(_Bool)arg1 isDragging:(_Bool)arg2;
@property(readonly, nonatomic, getter=isProcessingActions) _Bool processingActions; // @dynamic processingActions;
@property(nonatomic) double bottomInset;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithAddOn:(id)arg1 contextualAddOn:(id)arg2 conversationMessage:(id)arg3 dataSource:(id)arg4 delegate:(id)arg5 addOnsSettingsUtil:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

