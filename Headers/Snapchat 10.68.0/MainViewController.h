//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NavigationDelegate-Protocol.h"
#import "SCActionToolbarDelegate-Protocol.h"
#import "SCCameraViewControllerDelegate-Protocol.h"
#import "SCCommerceOperaPresenterDelegate-Protocol.h"
#import "SCDataCoordinatorListener-Protocol.h"
#import "SCFailedStoryPostTooltipDelegate-Protocol.h"
#import "SCFastPagingDelegate-Protocol.h"
#import "SCFeatureCameraToolbarDelegate-Protocol.h"
#import "SCHovaNavigationBarDataSource-Protocol.h"
#import "SCHovaNavigationBarDelegate-Protocol.h"
#import "SCHovaOverscrollControllerDelegate-Protocol.h"
#import "SCHovaStatusBarControllerDataSource-Protocol.h"
#import "SCIdleMonitorScrollController-Protocol.h"
#import "SCPageNameLogging-Protocol.h"
#import "SCProfileTransitionCoordinatorDataSource-Protocol.h"
#import "SCProfileTransitionCoordinatorDelegate-Protocol.h"
#import "SCProfileViewControllerDelegate-Protocol.h"
#import "SCReplyDelegate-Protocol.h"
#import "SCRequestManagerDelegate-Protocol.h"
#import "SCSearchCameraDismissing-Protocol.h"
#import "SCSearchResultsViewControllerDelegate-Protocol.h"
#import "SCSearchStoriesPresenterDelegate-Protocol.h"
#import "SCSearchViewDelegate-Protocol.h"
#import "SCSpectaclesPairingDelegate-Protocol.h"
#import "SCStartChatDelegate-Protocol.h"
#import "SCSwipeViewParentDelegate-Protocol.h"
#import "SCTCKNavigationServices-Protocol.h"
#import "SCTabBarViewDataSource_DEPRECATED-Protocol.h"
#import "SCTabBarViewDelegate_DEPRECATED-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SSTabBarDelegate-Protocol.h"
#import "SearchTransitionControllerDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class MainViewControllerInternalState, MainViewControllerStartupWorkflow, NSMutableSet, NSString, SCAddFriendsButtonBadgeUpdater, SCChatMainViewController, SCCommerceOperaPresenter, SCDiscoverFeedDeeplinkHandler, SCFeedToChatTapDetectionView, SCHovaNavigationBar, SCHovaStatusBarController, SCHovaTabBarView, SCMainCameraViewController, SCMainScrollView, SCOpenAddFriendsCardActionHandler, SCUserSession, UIPanGestureRecognizer, UIPinchGestureRecognizer, UIView;
@protocol SCFeedPage><SCPageNameLogging, SCStoriesPage><SCPageNameLogging, SwipeView, SwipeView><SCPageNameLogging;

@interface MainViewController : UIViewController <SCRequestManagerDelegate, NavigationDelegate, SCStartChatDelegate, SCTraceEnabled, SCTabBarViewDelegate_DEPRECATED, SCTabBarViewDataSource_DEPRECATED, SCHovaNavigationBarDataSource, SCSearchViewDelegate, SCSearchResultsViewControllerDelegate, SCHovaStatusBarControllerDataSource, SCHovaOverscrollControllerDelegate, SCProfileTransitionCoordinatorDelegate, SCProfileTransitionCoordinatorDataSource, SCIdleMonitorScrollController, SearchTransitionControllerDelegate, SCSearchStoriesPresenterDelegate, SCProfileViewControllerDelegate, SCSearchCameraDismissing, SCSpectaclesPairingDelegate, SCFailedStoryPostTooltipDelegate, SCHovaNavigationBarDelegate, SCFastPagingDelegate, SCTCKNavigationServices, SCDataCoordinatorListener, SCFeatureCameraToolbarDelegate, SCActionToolbarDelegate, SSTabBarDelegate, UIScrollViewDelegate, SCCameraViewControllerDelegate, SendSnapNavigationControllerDelegate, SCSwipeViewParentDelegate, SCReplyDelegate, UIGestureRecognizerDelegate, SCCommerceOperaPresenterDelegate, SCPageNameLogging>
{
    MainViewControllerStartupWorkflow *_startupWorkflow;
    SCChatMainViewController *_farLeftVC;
    SCFeedToChatTapDetectionView *_feedToChatTapDetectionView;
    long long _viewControllersCount;
    SCDiscoverFeedDeeplinkHandler *_discoverDeeplinkHandler;
    SCCommerceOperaPresenter *_commercePresenter;
    _Bool _isFailedStoryTooltipInitialized;
    double _lastContentOffset;
    long long _exitEvent;
    _Bool _tabBarItemExcludingCameraItemHidden;
    _Bool _searchBarAndBitmojiHidden;
    SCAddFriendsButtonBadgeUpdater *_addFriendsButtonBadgeUpdater;
    _Bool _animatingScroll;
    _Bool _replyingToStoryWithChat;
    _Bool _didReplyToStory;
    _Bool _viewDidScroll;
    _Bool _searchLongPressAnimate;
    SCMainCameraViewController<SwipeView> *_middleVC;
    UIViewController<SCFeedPage><SCPageNameLogging> *_leftVC;
    UIViewController<SCStoriesPage><SCPageNameLogging> *_rightVC;
    UIViewController<SwipeView><SCPageNameLogging> *_visibleVC;
    MainViewControllerInternalState *_state;
    UIView *_containerView;
    SCHovaTabBarView *_tabBarView;
    SCHovaNavigationBar *_navigationBar;
    SCHovaStatusBarController *_hovaStatusBarController;
    UIViewController<SwipeView><SCPageNameLogging> *_partiallyVisibleVC;
    SCMainScrollView *_scrollView;
    NSMutableSet *_lockScrollRequestIds;
    long long _feedBadgeCountVersion;
    SCOpenAddFriendsCardActionHandler *_openAddFriendsCardActionHandler;
}

@property(retain, nonatomic) SCOpenAddFriendsCardActionHandler *openAddFriendsCardActionHandler; // @synthesize openAddFriendsCardActionHandler=_openAddFriendsCardActionHandler;
@property _Bool searchLongPressAnimate; // @synthesize searchLongPressAnimate=_searchLongPressAnimate;
@property long long feedBadgeCountVersion; // @synthesize feedBadgeCountVersion=_feedBadgeCountVersion;
@property(retain, nonatomic) NSMutableSet *lockScrollRequestIds; // @synthesize lockScrollRequestIds=_lockScrollRequestIds;
@property(nonatomic) _Bool viewDidScroll; // @synthesize viewDidScroll=_viewDidScroll;
@property(retain, nonatomic) SCMainScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) _Bool didReplyToStory; // @synthesize didReplyToStory=_didReplyToStory;
@property(nonatomic) _Bool replyingToStoryWithChat; // @synthesize replyingToStoryWithChat=_replyingToStoryWithChat;
@property(retain, nonatomic) UIViewController<SwipeView><SCPageNameLogging> *partiallyVisibleVC; // @synthesize partiallyVisibleVC=_partiallyVisibleVC;
@property(retain, nonatomic) SCHovaStatusBarController *hovaStatusBarController; // @synthesize hovaStatusBarController=_hovaStatusBarController;
@property(retain, nonatomic) SCHovaNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) SCHovaTabBarView *tabBarView; // @synthesize tabBarView=_tabBarView;
@property(nonatomic) _Bool animatingScroll; // @synthesize animatingScroll=_animatingScroll;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic) MainViewControllerInternalState *state; // @synthesize state=_state;
@property(retain, nonatomic) UIViewController<SwipeView><SCPageNameLogging> *visibleVC; // @synthesize visibleVC=_visibleVC;
@property(retain, nonatomic) UIViewController<SCStoriesPage><SCPageNameLogging> *rightVC; // @synthesize rightVC=_rightVC;
@property(retain, nonatomic) UIViewController<SCFeedPage><SCPageNameLogging> *leftVC; // @synthesize leftVC=_leftVC;
@property(retain, nonatomic) SCChatMainViewController *farLeftVC; // @synthesize farLeftVC=_farLeftVC;
@property(retain, nonatomic) SCMainCameraViewController<SwipeView> *middleVC; // @synthesize middleVC=_middleVC;
- (void).cxx_destruct;
- (void)_handleImpalaNotification:(id)arg1;
- (void)_impalaNotificationHandlerDataReady:(id)arg1;
- (void)_impalaNotificationHandlerLoaded:(id)arg1;
- (void)_openMemoriesToAllTab;
- (void)_navigateToGallerySavedTabWithSnapId:(id)arg1;
- (void)commerceOperaViewerDidDisappear:(id)arg1 unlockedLens:(id)arg2 additionalInfo:(id)arg3 wasBackgrounded:(_Bool)arg4;
- (void)didReceiveFailedStoryUploadMessage:(id)arg1;
- (void)_markCheetahOnboardingStoryTooltipCompletedIfExists;
- (void)_hideCheetahOnboardingStoryTooltipIfExists;
- (void)_showCheetahOnboardingStoryTooltipIfPossible;
- (void)_initAddFriendsBadgeUpdater;
- (_Bool)transitionCoordinator:(id)arg1 shouldPerformTransitionWithType:(unsigned long long)arg2 interactive:(_Bool)arg3;
- (id)_buildProfileViewController;
- (id)presentedViewControllerWithSwipeTransitionCoordinator:(id)arg1;
- (void)scrollToGallerySpectaclesWithPairingSessionInfo:(id)arg1;
- (void)delayBackgroundScanForSpectaclesPairingDismissed;
- (void)warmupSpectaclesOnboardingWithPairingSessionInfo:(id)arg1;
- (void)profileViewWillDisappear:(id)arg1;
- (void)profileViewDidAppear:(id)arg1;
- (void)profileViewWillAppear:(id)arg1;
- (void)profileViewDidLoad:(id)arg1;
- (void)dismissProfileViewController:(id)arg1;
- (void)transitionCoordinator:(id)arg1 didCancelWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2;
- (void)transitionCoordinator:(id)arg1 didUpdatePercentVisible:(double)arg2;
- (void)leftViewControllerDidMoveFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2 withOffset:(double)arg3;
- (void)attachStoriesToScrollView:(_Bool)arg1;
- (void)attachFeedToScrollView:(_Bool)arg1;
- (void)updateCardDimAlphaForRange:(struct _NSRange)arg1;
- (void)moveCardsToRange:(struct _NSRange)arg1;
- (void)prepareToMoveCardsFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2;
- (void)attachBarsToDefaultParentViewsIfNeeded;
- (void)attachBarsToViewController:(id)arg1;
- (void)_detectRetainCyclesWhenCameraViewDidFullyAppear:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)isPresentingNonCameraVC;
- (void)_navigateToNotification:(id)arg1;
- (_Bool)modalIsPresentAndNotBeingPresented;
- (_Bool)modalIsPresentAndNotBeingDismissed;
- (void)viewWillSwipeOutForVisibleVC:(_Bool)arg1;
- (void)viewDidFullyDisappearForVisibleVC;
- (void)viewDidFullyAppearForVisibleVC;
- (_Bool)isVisibleVCOnMainAxis;
- (id)currentViewController;
- (void)_modalChatCreatorWithNotification:(id)arg1 groupConversationId:(id)arg2 senderUsername:(id)arg3 currentVC:(id)arg4 dismissedViewController:(id)arg5;
- (void)_modalChatCreatorForAddFriendsWithNotification:(id)arg1;
- (id)pageViewName;
- (void)handleInAppNotificationDismissed:(id)arg1;
- (_Bool)_notificationHandledByCognacNotificationHandling:(id)arg1;
- (void)handleInAppNotificationPressed:(id)arg1;
- (void)handleOpenURLToAddFriend:(id)arg1;
- (void)handleOpenURL:(id)arg1;
- (void)handleApplicationWillEnterForegroundFromCallIntent:(id)arg1 isVideo:(_Bool)arg2;
- (void)handleApplicationWillEnterForegroundFromNotification:(id)arg1;
- (void)handleApplicationDidEnterBackground;
- (id)feedToChatTapDetectionView;
- (double)percentVisibleForSwipeViewControllerInModelLayerBounds:(id)arg1;
- (double)percentVisibleForSwipeViewController:(id)arg1;
- (void)childScrollViewDidScroll:(id)arg1;
- (void)cancelScroll;
@property(readonly, nonatomic) UIPinchGestureRecognizer *pinchGestureRecognizer;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (void)didHideFullscreenSubview;
- (_Bool)isVisibleViewControllerAndCapableOfPlayingSnaps;
- (_Bool)isFrameInVisibleBounds:(id)arg1;
- (_Bool)isRightOfViewController:(id)arg1;
- (_Bool)isLeftOfViewController:(id)arg1;
- (_Bool)isFullyVisible:(id)arg1;
- (_Bool)isCoveredByOtherVC;
- (_Bool)isPartiallyVisible:(id)arg1;
- (id)_visibleViewControllerExcludeDismissing;
- (void)_dismissPreviewIfPresentedWithCompletion:(CDUnknownBlockType)arg1;
- (void)dismissPreviewIfPresented;
- (void)didPostStory;
- (void)willPostStory;
- (void)didSendToGallery;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didCancelFromPreview:(id)arg1;
- (void)cleanUpStoryReply;
- (void)statusBarTapped;
- (void)didFollowThrough;
- (void)replyWithParameter:(id)arg1;
- (void)attemptToPanFeedCellIntoChat;
- (void)removeFeedToChatTapDectionView;
- (void)attachFeedToChatTapDectionViewWithCurrentTapLocation:(struct CGPoint)arg1 delegate:(id)arg2;
- (void)_setChatUsername:(id)arg1 triggeredByNotification:(_Bool)arg2 chatPageSource:(long long)arg3 deepLinkURL:(id)arg4 navigationAction:(long long)arg5 subpageName:(id)arg6;
- (void)setConversationByChatIdentifier:(id)arg1 deepLinkURL:(id)arg2 chatPageSource:(long long)arg3 navigationAction:(long long)arg4 subpageName:(id)arg5;
- (void)setChatFromNotificationSenderUsername:(id)arg1 groupConversationId:(id)arg2 triggeredByNotification:(_Bool)arg3;
- (void)navigateToChatViewAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)navigateToChatViewAnimated:(_Bool)arg1;
- (void)navigateToChatView;
- (void)fastPaging:(id)arg1 willNavigateToPageIndex:(long long)arg2 withBounceOffset:(double)arg3;
- (id)fastPaging:(id)arg1 viewForPageAtIndex:(long long)arg2;
- (id)fastPaging:(id)arg1 accessoryViewForPageAtIndex:(long long)arg2;
- (void)toggleSearchBarAndBitmojiVisibility:(_Bool)arg1;
- (void)updateHovaTabBarLayout:(_Bool)arg1 useDarkMode:(_Bool)arg2;
- (void)cameraViewController:(id)arg1 didUpdateCameraType:(long long)arg2;
- (_Bool)isAnimatingScroll;
- (void)unlockAllScroll;
- (void)unlockScrollWithRequestId:(id)arg1;
- (void)lockScrollWithRequestId:(id)arg1;
- (void)setScrollEnabled:(_Bool)arg1;
- (void)_setTabBarItemOffsetExcludingCameraItemYOffset:(double)arg1;
- (void)_setTabBarItemAlphaExcludingCameraItem:(double)arg1 animated:(_Bool)arg2;
- (void)_setTabBarItemExcludingCameraItemHidden:(_Bool)arg1 withOffset:(_Bool)arg2 animated:(_Bool)arg3;
- (id)mainSuperview;
- (void)_setSearchBarAndBitmojiYOffset:(double)arg1;
- (void)_setSearchBarAndBitmojiAlpha:(double)arg1;
- (void)_setSearchBarAndBitmojiHidden:(_Bool)arg1 withOffset:(_Bool)arg2;
- (void)setNonRecordingUIEnabled:(_Bool)arg1;
- (void)updateHovaTabBarVisibility:(double)arg1;
- (void)_setCameraVCSearchButtonAlpha:(double)arg1 textAlpha:(double)arg2;
- (void)_toggleCameraToolbar:(_Bool)arg1;
- (void)cameraToolbarWillCollapse:(id)arg1;
- (void)cameraToolbarWillExpand:(id)arg1;
- (_Bool)isAppInLowPowerMode:(id)arg1;
- (id)profileButtonView:(id)arg1;
- (void)toggleTimerMode:(_Bool)arg1;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3 showStatusBar:(_Bool)arg4;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didLensesDetected:(_Bool)arg1;
- (void)stopSearchTextAnimation;
- (void)_animateSearchTextAnimation;
- (void)didEndLongPressing:(_Bool)arg1;
- (void)didBeginLongPressing:(_Bool)arg1;
- (void)didBeginRecording;
- (void)leftCameraBackButtonPressed;
- (void)cameraViewController:(id)arg1 didPerformCameraLongPressGestureWithProfilePresented:(id)arg2;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleMapDeepLink:(id)arg1;
- (void)handleDeeplinkCommerce:(id)arg1;
- (void)sendDeepLinkViewAppearanceCalls:(id)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3;
- (void)scrollToVC:(id)arg1 animated:(_Bool)arg2 deepLinkURL:(id)arg3 additionalInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_presentAddFriendsPageForAddedBackNotification:(id)arg1;
- (_Bool)_presentAddFriendsCardForNotification:(id)arg1;
- (void)presentOnCurrentVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentMiddleVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentFarLeftVCAnimated:(_Bool)arg1 deepLinkURL:(id)arg2 additionalInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)presentRightVCAnimated:(_Bool)arg1 withFeedPageEntryType:(long long)arg2;
- (void)presentMiddleVCAnimated:(_Bool)arg1;
- (void)presentLeftVCAnimated:(_Bool)arg1;
- (void)presentFarLeftVCAnimated:(_Bool)arg1;
- (_Bool)isAtFarLeft;
- (_Bool)canPerformNavigation;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)_updateNavigationBarLayout;
- (void)handleNewScrollViewContentOffset:(struct CGPoint)arg1;
- (_Bool)_shouldPreventScrollingToChatForScrollView:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_resetViewsAfterScrollingEnd;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)visibleViewControllerRangeDidChangeFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2;
- (void)prepareToMoveVisibleViewControllerRangeFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)animateToFrame:(struct CGRect)arg1 withVelocity:(struct CGPoint)arg2 allowUserInteraction:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToFrame:(struct CGRect)arg1 withVelocity:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToAnimateFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2 withFrame:(struct CGRect)arg3;
- (void)goFromViewController:(id)arg1 direction:(long long)arg2 animated:(_Bool)arg3;
- (void)addVCToScrollViewIfNecessary:(id)arg1;
- (id)profileTransitionCoordinator;
- (void)dismissAllPresentedViews;
- (void)_stopCameraIfVisible;
- (void)_startCameraIfVisible;
- (void)addVCToView:(id)arg1 withFrame:(struct CGRect)arg2;
- (struct CGRect)frameForChildViewController:(id)arg1;
- (struct CGRect)frameForViewWithHorizontalOffset:(long long)arg1;
- (struct CGRect)rightVCFrame;
- (struct CGRect)middleVCFrame;
- (struct CGRect)leftVCFrame;
- (struct CGRect)farLeftVCFrame;
- (id)galleryVC;
- (void)addFarLeftVCToView;
- (void)addLeftVCToView;
- (void)addRightVCToView;
- (void)addMiddleVCToView;
- (void)didLogout:(id)arg1;
- (void)handleOpenAddFriendsCardWithPlacement:(long long)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)handleOpenAddFriendsCard;
- (void)handleQuickAction:(id)arg1 fromBackground:(_Bool)arg2;
- (void)handleAppNotificationReceived:(id)arg1;
- (void)dealloc;
- (void)unobserveAll;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)canShowStatusBarOverlay;
- (void)dismissSearchToMainCamera:(id)arg1 topViewController:(id)arg2;
- (_Bool)isCameraViewVisible;
- (void)_dismissSearchViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)_dismissSearchViewController:(id)arg1 animated:(_Bool)arg2;
- (void)searchResultsViewController:(id)arg1 didOverscrollWithOffset:(double)arg2;
- (void)searchResultsViewController:(id)arg1 didCancelWithDismissActionType:(long long)arg2;
- (_Bool)searchViewShouldBeginEditing:(id)arg1;
- (void)searchTransitionControllerWillDismissSearch:(id)arg1;
- (void)searchTransitionControllerWillPresentSearch:(id)arg1;
- (_Bool)searchTransitionControllerCanPresentSearch:(id)arg1;
- (void)searchStoryPresenterDidFinishDismissingStory:(id)arg1;
- (id)presentingViewControllerForSearchStoriesPresenter:(id)arg1;
- (void)_handleDiscoverDeeplinkURL:(id)arg1 additionalInfo:(id)arg2;
- (_Bool)_searchCanShowToolTip:(long long)arg1;
- (void)_showSearchToolTipIfPossible;
- (_Bool)canPullDownToSearch;
- (void)profile:(id)arg1;
- (id)createSearchSession;
- (long long)getSearchV2MetricsContext;
- (void)search:(id)arg1 isFromPullToSearch:(_Bool)arg2 initialQuery:(id)arg3;
- (void)_searchViewDidTransition:(_Bool)arg1;
- (void)updateGradientBackgroundViewFromRange:(struct _NSRange)arg1 toRange:(struct _NSRange)arg2 isTransitioning:(_Bool)arg3;
- (void)actionToolbar:(id)arg1 shouldNavigateToPageIndex:(long long)arg2 withVelocity:(struct CGPoint)arg3;
- (id)navigationViewForScrollViewOverscrollController:(id)arg1;
- (_Bool)hovaOverOverscrollControllerOverscrollDidChange:(id)arg1 shouldOverscrollForViewController:(id)arg2;
- (double)hovaStatusBarController:(id)arg1 alphaForViewControllerAtIndex:(long long)arg2;
- (_Bool)hovaStatusBarControllerIsTransitioning:(id)arg1;
- (double)hovaStatusBarController:(id)arg1 overscrollPercentVisibleForViewControllerAtIndex:(long long)arg2;
- (double)hovaStatusBarController:(id)arg1 horizontalPercentVisibleForViewControllerAtIndex:(long long)arg2;
- (id)hovaStatusBarController:(id)arg1 viewControllerAtIndex:(long long)arg2;
- (struct _NSRange)hovaStatusBarControllerVisiblePageRange:(id)arg1;
- (struct _NSRange)visibleRangeForNavigationBar:(id)arg1;
- (id)navigationBar:(id)arg1 searchPlaceholderForItemAtIndex:(long long)arg2;
- (double)navigationBar:(id)arg1 percentOverscrolledForItemAtIndex:(long long)arg2;
- (double)navigationBar:(id)arg1 percentVisibleForItemAtIndex:(long long)arg2;
- (void)navigationBar:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)tabBarViewUnderlyingHitTestView:(id)arg1;
- (double)tabBarViewVisibilityPercentForPresentedController:(id)arg1;
- (_Bool)tabBarViewIsTransitioningToPresentedController:(id)arg1;
- (_Bool)tabBarView:(id)arg1 shouldVerticallyClipItemOfType:(long long)arg2;
- (double)tabBarViewVerticalClippingHeight:(id)arg1;
- (double)tabBarView:(id)arg1 visibilityForItemViewWithItemType:(long long)arg2;
- (_Bool)tabBarView:(id)arg1 shouldKeepSpaceForItemType:(long long)arg2;
- (double)tabBarView:(id)arg1 verticalVisibilityForItemType:(long long)arg2;
- (double)tabBarView:(id)arg1 clampedHorizontalVisibilityForItemType:(long long)arg2;
- (double)tabBarView:(id)arg1 horizontalVisibilityForItemType:(long long)arg2;
- (struct CGRect)tabBarView:(id)arg1 frameForItemWithType:(long long)arg2 inView:(id)arg3;
- (struct CGRect)frameForItemWithType:(long long)arg1;
- (struct _NSRange)visibleRangeForTabBarView:(id)arg1;
- (_Bool)handleBarButtonTapIfPresentingProfile:(long long)arg1;
- (void)tabBarView:(id)arg1 didTapItemWithType:(long long)arg2;
- (void)tabBarView:(id)arg1 didLongPressItemWithType:(long long)arg2;
- (_Bool)shouldIgnoreTabBarItemInteractionForItemType:(long long)arg1;
- (void)tabBarView:(id)arg1 didSelectItem:(id)arg2;
- (void)_updateDiscoverFeedIconBadge:(id)arg1;
- (void)_resetDiscoverFeedBadgeCount:(id)arg1;
- (void)_resetFeedBadgeCountWithCount:(long long)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (double)maximumTabBarOriginX;
- (double)minimumTabBarOriginX;
- (long long)visiblePageIndex;
- (struct _NSRange)visibleViewControllerRange;
- (struct _NSRange)visibleViewControllerRangeForContentOffset:(struct CGPoint)arg1;
- (struct _NSRange)visibleHovaVCRange;
- (struct _NSRange)visibleHovaVCRangeForContentOffset:(struct CGPoint)arg1;
- (struct _NSRange)visibleHovaRangeWhenReplyingToStoryWithChat;
- (_Bool)isViewControllerVisibleForIndex:(long long)arg1 withinBounds:(struct CGRect)arg2;
- (void)updateTabBarWithBounds:(struct CGRect)arg1 layout:(_Bool)arg2 animated:(_Bool)arg3;
- (double)visibilityPercentForViewFrame:(struct CGRect)arg1;
- (double)visibilityPercentForViewFrame:(struct CGRect)arg1 inBounds:(struct CGRect)arg2;
- (struct CGRect)ngsViewControllerFrame;
- (struct CGRect)getNewTabBarFrame;
- (struct CGPoint)scrollViewContentOffset;
- (struct CGRect)scrollViewBounds;
@property(readonly, nonatomic) SCUserSession *userSession;
@property(readonly, copy) NSString *description;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2;
- (_Bool)handleDeeplink:(id)arg1;
- (void)handleDeepLinkLenses:(id)arg1;
- (void)handleDeepLinkUnlock:(id)arg1;
- (void)contextsDidSetForRequestManager:(id)arg1;
- (void)setupNetworkManagerContextObserverIfNecessary;
- (void)setHovaTabBarYOffset:(double)arg1;
- (void)setNavigationBarYOffset:(double)arg1;
- (void)setNavigationBarHidden:(_Bool)arg1;
- (void)updateActionToolbarLayout;
- (void)setHovaCameraTabAlpha:(double)arg1;
- (void)setHovaCameraTabHidden:(_Bool)arg1;
- (void)setHovaTabBarHidden:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

