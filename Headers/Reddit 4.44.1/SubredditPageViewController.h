//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PagedTabViewController.h"

#import "CarouselDelegatorDelegate-Protocol.h"
#import "FeedScrollEventObserver-Protocol.h"
#import "FlairSelectionSourceViewProtocol-Protocol.h"
#import "FloatingHeaderCallbackProtocol-Protocol.h"
#import "PagedTabControllerParentCallback-Protocol.h"
#import "ParallaxHeaderViewCallback-Protocol.h"
#import "PillContainerNodeDelegate-Protocol.h"
#import "REDSearchBarDelegate-Protocol.h"
#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "RoadblockCoordinatorDelegate-Protocol.h"
#import "SubredditContextProvider-Protocol.h"
#import "SubredditPagePresentable-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BaseBarButtonItem, CarouselDelegator, ChatSubredditChannelListViewController, FeedSpinnerView, FloatingHeaderManager, ListingViewController, MetaSubredditMembershipViewController, NSDictionary, NSLayoutConstraint, NSString, NSURL, NotificationActionSheetPresenter, ParallaxHeaderView, PreviewAnimationController, REDSearchBar, REDSearchInputView, RecentChatPostBubbleViewController, RedditService, RoadblockCoordinator, SortBarView, Subreddit, SubredditAboutViewController, SubredditMenuViewController, SubredditPageNavigator, SubredditPagePresenter;
@protocol SubredditFeedViewControllerInterface;

@interface SubredditPageViewController : PagedTabViewController <RUIActionSheetViewControllerDelegate, PagedTabControllerParentCallback, ParallaxHeaderViewCallback, PillContainerNodeDelegate, SubredditPagePresentable, FloatingHeaderCallbackProtocol, UIViewControllerTransitioningDelegate, FeedScrollEventObserver, UIGestureRecognizerDelegate, REDSearchBarDelegate, RoadblockCoordinatorDelegate, CarouselDelegatorDelegate, SubredditContextProvider, FlairSelectionSourceViewProtocol>
{
    _Bool _previewModeEnabled;
    SubredditPagePresenter *_presenter;
    SubredditPageNavigator *_navigator;
    ParallaxHeaderView *_headerView;
    SortBarView *_sortBarView;
    NSString *_subredditName;
    NSLayoutConstraint *_headerViewTopConstraint;
    RoadblockCoordinator *_roadblockCoordinator;
    NotificationActionSheetPresenter *_notificationPresenter;
    FloatingHeaderManager *_floatingHeaderManager;
    PreviewAnimationController *_previewAnimationController;
    FeedSpinnerView *_firstLoadSpinner;
    REDSearchBar *_searchBar;
    REDSearchInputView *_searchInputView;
    ListingViewController<SubredditFeedViewControllerInterface> *_subredditFeedViewController;
    SubredditMenuViewController *_subredditMenuViewController;
    SubredditAboutViewController *_subredditAboutViewController;
    ChatSubredditChannelListViewController *_roomsListViewController;
    MetaSubredditMembershipViewController *_metaSubredditMembershipViewController;
    BaseBarButtonItem *_shareBarButtonItem;
    RecentChatPostBubbleViewController *_chatPostBubbleViewController;
    CarouselDelegator *_carouselDelegator;
}

+ (id)keyPathsForValuesAffectingSubreddit;
@property(retain, nonatomic) CarouselDelegator *carouselDelegator; // @synthesize carouselDelegator=_carouselDelegator;
@property(retain, nonatomic) RecentChatPostBubbleViewController *chatPostBubbleViewController; // @synthesize chatPostBubbleViewController=_chatPostBubbleViewController;
@property(retain, nonatomic) BaseBarButtonItem *shareBarButtonItem; // @synthesize shareBarButtonItem=_shareBarButtonItem;
@property(retain, nonatomic) MetaSubredditMembershipViewController *metaSubredditMembershipViewController; // @synthesize metaSubredditMembershipViewController=_metaSubredditMembershipViewController;
@property(retain, nonatomic) ChatSubredditChannelListViewController *roomsListViewController; // @synthesize roomsListViewController=_roomsListViewController;
@property(retain, nonatomic) SubredditAboutViewController *subredditAboutViewController; // @synthesize subredditAboutViewController=_subredditAboutViewController;
@property(retain, nonatomic) SubredditMenuViewController *subredditMenuViewController; // @synthesize subredditMenuViewController=_subredditMenuViewController;
@property(retain, nonatomic) ListingViewController<SubredditFeedViewControllerInterface> *subredditFeedViewController; // @synthesize subredditFeedViewController=_subredditFeedViewController;
@property(retain, nonatomic) REDSearchInputView *searchInputView; // @synthesize searchInputView=_searchInputView;
@property(retain, nonatomic) REDSearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) FeedSpinnerView *firstLoadSpinner; // @synthesize firstLoadSpinner=_firstLoadSpinner;
@property(retain, nonatomic) PreviewAnimationController *previewAnimationController; // @synthesize previewAnimationController=_previewAnimationController;
@property(retain, nonatomic) FloatingHeaderManager *floatingHeaderManager; // @synthesize floatingHeaderManager=_floatingHeaderManager;
@property(retain, nonatomic) NotificationActionSheetPresenter *notificationPresenter; // @synthesize notificationPresenter=_notificationPresenter;
@property(retain, nonatomic) RoadblockCoordinator *roadblockCoordinator; // @synthesize roadblockCoordinator=_roadblockCoordinator;
@property(retain, nonatomic) NSLayoutConstraint *headerViewTopConstraint; // @synthesize headerViewTopConstraint=_headerViewTopConstraint;
@property(copy, nonatomic) NSString *subredditName; // @synthesize subredditName=_subredditName;
@property(nonatomic) _Bool previewModeEnabled; // @synthesize previewModeEnabled=_previewModeEnabled;
@property(retain, nonatomic) SortBarView *sortBarView; // @synthesize sortBarView=_sortBarView;
@property(retain, nonatomic) ParallaxHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SubredditPageNavigator *navigator; // @synthesize navigator=_navigator;
@property(retain, nonatomic) SubredditPagePresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)removeCarousel:(id)arg1;
- (void)didResizeCarousel:(id)arg1;
@property(readonly, nonatomic) NSString *analyticsPageType;
- (id)tabControlNameForIndex:(long long)arg1;
- (void)pageSegmentedControl:(id)arg1 didSelectItem:(id)arg2 atIndex:(long long)arg3 previousIndex:(long long)arg4;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (void)pagedTabViewController:(id)arg1 transitionCompleted:(_Bool)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 navigationMethod:(long long)arg5;
- (void)updateContentScrollViewInsets;
- (void)contentScrollViewContentInsetsDidChange;
- (void)resetFloatingHeaderManagerToScrollView:(id)arg1;
- (void)setFocusToSearchBar;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)showCustomFeed:(id)arg1;
- (void)showNewCustomFeedTooltip;
- (void)handleSubscriptionResultOfSubreddit:(id)arg1 success:(_Bool)arg2;
- (void)handleStyleLoadFailureWithError:(id)arg1;
- (void)handleSubredditLoadFailureWithError:(id)arg1;
- (void)performAdditionalUpdateAfterExtraContentFetched;
- (void)performInitialUpdateWithSubreddit:(id)arg1;
- (void)updateWithCarousel:(id)arg1 discoveryUnit:(id)arg2;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)pillContainerNode:(id)arg1 didViewPill:(id)arg2 pillNode:(id)arg3;
- (void)pillContainerNode:(id)arg1 didSelectPill:(id)arg2;
- (void)parallaxHeaderViewDidTapLayersCanvas:(id)arg1;
- (void)parallaxHeaderViewDidUpdateBackground:(id)arg1;
- (void)parallaxHeaderViewDidChangeHeight:(id)arg1 heightDelta:(double)arg2;
- (void)parallaxHeaderviewDidTapNotificationButton:(id)arg1;
- (void)parallaxHeaderViewDidTapFollowButton:(id)arg1;
- (void)parallaxHeaderViewDidBecomeHidden:(id)arg1;
- (void)parallaxHeaderViewDidBecomeVisible:(id)arg1;
- (void)pagedTabControllerChildDidStopScrolling:(id)arg1 scrollView:(id)arg2;
- (void)pagedTabControllerChildDidStartReloading:(id)arg1;
- (void)roadblockCoordinator:(id)arg1 didTapConfirmForModel:(id)arg2;
- (void)navigateToSubscriptionActionSheetFromSender:(id)arg1;
- (void)addSubredditToCustomFeed;
- (void)toggleSubscription;
- (void)actionSheetViewController:(id)arg1 didSelectItem:(id)arg2;
- (void)overflowButtonTapped:(id)arg1;
- (void)modButtonTapped:(id)arg1;
- (void)shareButtonTapped:(id)arg1;
- (void)searchButtonTapped:(id)arg1;
- (id)overflowItems;
- (void)feedDidStopScrolling:(id)arg1;
- (void)floatingHeaderShouldMove:(id)arg1;
- (double)maxFloatingTransformY;
@property(readonly) double floatingHeadingSnapDistance;
- (void)configureSearchBar;
- (void)configureParallaxHeaderView;
- (void)configureNavigationBarStyle;
- (void)configureNavigationBarTintColor;
- (void)setupParallaxHeaderView;
- (void)setupRightBarButtons;
- (void)setupLoadingSpinner;
- (void)reloadContentFromNetworkSource;
- (void)resetFloatingHeaderManager;
- (id)viewControllersForSubredditTabs;
- (void)configureMultipleTabsIfNeeded;
- (_Bool)shouldShowMultipleTabs;
- (void)displaySubredditShareTooltip;
- (void)configureChatPostBubbleViewController;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)configureNavigationBarAppearance;
- (_Bool)allowNonEdgyNavigationPopGesture;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct UIEdgeInsets)preferredContentInset;
- (void)logTappedChangeUserFlairInOverflow;
@property(readonly, nonatomic) NSDictionary *analyticsScreenViewParameters;
@property(readonly, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, nonatomic) _Bool screenViewLoggingEnabled;
- (id)createSubredditFeedViewController;
- (void)configureWithSubreddit:(id)arg1;
- (void)configureWithSubredditName:(id)arg1;
@property(readonly, nonatomic) Subreddit *subreddit;
@property(readonly, nonatomic) RedditService *service;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *analyticsReason;
@property(copy, nonatomic) NSURL *analyticsReferringURL;
@property(readonly, nonatomic) NSDictionary *analyticsScrollEventParameters;
@property(copy, nonatomic) NSString *analyticsSource;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

