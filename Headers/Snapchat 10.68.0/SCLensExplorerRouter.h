//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerCategoryViewControllerDelegate-Protocol.h"
#import "SCLensExplorerRouting-Protocol.h"
#import "SCLensExplorerSearchViewControllerDelegate-Protocol.h"
#import "SCLensExplorerTransitionControllerDelegate-Protocol.h"
#import "SCLensLiveLensPreviewCameraPresenterDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class NSString, SCLazy, SCLensExplorerAnalytics, SCLensExplorerCreatorRouter, SCLensExplorerEventsControllerManager, SCLensExplorerFactory, SCLensExplorerInteractiveTransition, SCLensExplorerModalTransitionController, SCLensExplorerTransitionController, SCLensExplorerViewController, SCMusicLensChallengesViewController, UINavigationController, UIViewController, UIVisualEffectView;
@protocol SCLensChallengesScheduleProtocol, SCLensExplorerDependencyProviderProtocol, SCLensExplorerPrompter, SCLensExplorerRouterDelegate, SCLensLiveLensPreviewCameraPresenterProtocol;

@interface SCLensExplorerRouter : NSObject <SCLensExplorerSearchViewControllerDelegate, UINavigationControllerDelegate, SCLensExplorerTransitionControllerDelegate, SCLensLiveLensPreviewCameraPresenterDelegate, SCLensExplorerCategoryViewControllerDelegate, SCLensExplorerRouting>
{
    SCLensExplorerViewController *_lensFeedMainViewController;
    SCLazy *_searchViewController;
    id <SCLensExplorerDependencyProviderProtocol> _lensExplorerDependencyProvider;
    SCLensExplorerCreatorRouter *_creatorRouter;
    SCLensExplorerAnalytics *_lensExplorerLoggingSession;
    SCLensExplorerFactory *_lensExplorerFactory;
    SCLensExplorerEventsControllerManager *_eventsControllerManager;
    SCMusicLensChallengesViewController *_musicLensChallengesViewController;
    id <SCLensLiveLensPreviewCameraPresenterProtocol> _cameraPresenter;
    UIViewController *_rootViewController;
    id <SCLensExplorerPrompter> _lensExplorerPrompter;
    UIVisualEffectView *_navigationControllersBlurView;
    id <SCLensChallengesScheduleProtocol> _lensChallengesSchedule;
    id <SCLensExplorerRouterDelegate> _delegate;
    UINavigationController *_navigationController;
    SCLensExplorerModalTransitionController *_childVCTransition;
    SCLensExplorerTransitionController *_rootVCTransition;
    SCLensExplorerInteractiveTransition *_interactiveTransition;
}

@property(retain, nonatomic) SCLensExplorerInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(retain, nonatomic) SCLensExplorerTransitionController *rootVCTransition; // @synthesize rootVCTransition=_rootVCTransition;
@property(retain, nonatomic) SCLensExplorerModalTransitionController *childVCTransition; // @synthesize childVCTransition=_childVCTransition;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <SCLensExplorerRouterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)transitWithVerticalOffset:(double)arg1 velocity:(double)arg2 panGestureState:(long long)arg3;
- (void)swipeTransitionController:(id)arg1 didCancelTransitionPresenting:(_Bool)arg2;
- (void)swipeTransitionController:(id)arg1 didCompleteTransitionPresenting:(_Bool)arg2;
- (void)lensExplorerTransitionController:(id)arg1 didBeginTransitionPresenting:(_Bool)arg2;
- (void)lensCameraPresenter:(id)arg1 didUseLens:(id)arg2;
- (void)lensCameraPresenterDidComplete:(id)arg1;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)refreshSubscriptionSection;
- (void)presentLensChallengesDisclaimerAlert;
- (void)updateLiveLensPreviewWithLens:(id)arg1;
- (void)presentLiveLensPreviewCameraWithLensItem:(id)arg1 lens:(id)arg2;
- (void)presentLensChallengeCameraWithLens:(id)arg1;
- (void)dismissLensChallengesChildViewControllers;
- (void)dismissMusicLensChallengesViewController;
- (void)presentMusicLensChallengesViewControllerWithItem:(id)arg1;
- (void)presentChallengesViewControllerWithChallengeId:(id)arg1 fromViewController:(id)arg2 configuration:(id)arg3;
- (id)_currentlyPresentingLensExplorerViewController;
- (void)presentDebugViewControllerForStoryId:(id)arg1 debugHtml:(id)arg2 lastStreamToken:(id)arg3;
- (void)presentCreatorViewControllerWithCreator:(id)arg1 sourcePageType:(long long)arg2;
- (void)lensExplorerSearchControllerDidPressBackButton:(id)arg1;
- (void)didUpdateContentForViewController:(id)arg1;
- (void)didEndDragingViewController:(id)arg1;
- (void)didScrollViewController:(id)arg1;
- (void)didBeginDragingViewController:(id)arg1;
- (void)finishDismissWorkflow;
- (void)handleApplicationDidEnterBackground;
- (void)removeViewController;
- (void)dismissIfNeededAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentLensExplorerViewControllerFromViewController:(id)arg1 configuration:(id)arg2;
- (id)navigationControllersBlurView;
@property(readonly, nonatomic) _Bool isPresentingLensChallenges;
@property(readonly, nonatomic) _Bool isPresenting;
- (id)initWithLensExplorerFactory:(id)arg1 searchViewController:(id)arg2 lensExplorerDependencyProvider:(id)arg3 lensChallengesSchedule:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

