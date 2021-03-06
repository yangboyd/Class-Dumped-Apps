//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SLChannelsViewControllerDelegate-Protocol.h"
#import "SLKDirectMessageViewControllerDelegate-Protocol.h"
#import "SLKViewControllerLeakDetectorOwnership-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "_TtP5Slack32NetworkConnectionMonitorObserver_-Protocol.h"
#import "_TtP5Slack32QuickSwitcherCoordinatorDelegate_-Protocol.h"
#import "_TtP5Slack37SLKTeamSwitcherViewControllerDelegate_-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, SLChannelsViewController, SLKAddWorkspacesCoordinator, SLKDependencies, SLKDirectMessageViewController, SLKQuickSwitcherCoordinator, SLNavigationController_Deprecated, UIImageView, UILabel, UIScrollView, UITapGestureRecognizer, UIView, _TtC15SlackFoundation10Disposable, _TtC5Slack21SLKSidebarPageControl, _TtC5Slack29SLKTeamSwitcherViewController;
@protocol SLKSidebarViewControllerDelegate, SLKUserGenerics, _TtP18SlackDataProviders29RecentConversationVisitsStore_, _TtP5Slack11Coordinator_, _TtP5Slack33NetworkConnectionMonitorInterface_;

@interface SLKSidebarViewController : UIViewController <SLChannelsViewControllerDelegate, SLKDirectMessageViewControllerDelegate, _TtP5Slack37SLKTeamSwitcherViewControllerDelegate_, _TtP5Slack32NetworkConnectionMonitorObserver_, SLKViewControllerLeakDetectorOwnership, UIViewControllerTransitioningDelegate, _TtP5Slack32QuickSwitcherCoordinatorDelegate_, UIGestureRecognizerDelegate>
{
    _Bool _sidebarIsOpen;
    _Bool _isPaging;
    _Bool _isScrolling;
    _Bool _quickSwitcherFullscreenPresentation;
    _Bool _useNewQuickSwitcher;
    _Bool _isTeamSwitcherExpandedFullscreen;
    _Bool _isDirectMessageVCRewriteEnabled;
    id <SLKSidebarViewControllerDelegate> _delegate;
    SLChannelsViewController *_channelsViewController;
    SLKDirectMessageViewController *_directMessageViewController;
    SLKDependencies *_dependencies;
    _TtC5Slack29SLKTeamSwitcherViewController *_teamSwitcherViewController;
    id <SLKUserGenerics> _currentUser;
    NSArray *_viewControllers;
    unsigned long long _currentScrollPage;
    UIView *_fakeNavbarView;
    UIView *_fakeNavbarBackgroundView;
    UIScrollView *_scrollView;
    NSLayoutConstraint *_fakeNavbarTopConstraint;
    NSLayoutConstraint *_scrollViewTopConstraint;
    NSLayoutConstraint *_pageControlContainerBottomConstraint;
    NSLayoutConstraint *_pageControlCenterConstraint;
    UIView *_pageControlContainer;
    _TtC5Slack21SLKSidebarPageControl *_pageControl;
    UIImageView *_pageControlBackgroundView;
    UIView *_pageControlDimView;
    NSLayoutConstraint *_fakeNavbarHeightConstraint;
    SLKQuickSwitcherCoordinator *_quickSwitcherCoordinator;
    UIViewController *_quickSwitcherViewController;
    UITapGestureRecognizer *_quickSwitcherDismissalTapGestureRecognizer;
    SLKAddWorkspacesCoordinator *_addWorkspacesCoordinator;
    UILabel *_offlineBanner;
    NSLayoutConstraint *_offlineBannerHeightConstraint;
    SLNavigationController_Deprecated *_channelCreationNavigationController;
    id <_TtP5Slack33NetworkConnectionMonitorInterface_> _networkMonitor;
    double _previousScrollOffset;
    id <_TtP18SlackDataProviders29RecentConversationVisitsStore_> _recentConversationVisitsStore;
    _TtC15SlackFoundation10Disposable *_panelPresentationDisposable;
    id <_TtP5Slack11Coordinator_> _composeCoordinator;
    id <_TtP5Slack11Coordinator_> _createChannelCoordinator;
    id <_TtP5Slack11Coordinator_> _channelPickerCoordinator;
}

+ (double)sidebarWidth;
- (void).cxx_destruct;
@property(nonatomic) _Bool isDirectMessageVCRewriteEnabled; // @synthesize isDirectMessageVCRewriteEnabled=_isDirectMessageVCRewriteEnabled;
@property(retain, nonatomic) id <_TtP5Slack11Coordinator_> channelPickerCoordinator; // @synthesize channelPickerCoordinator=_channelPickerCoordinator;
@property(retain, nonatomic) id <_TtP5Slack11Coordinator_> createChannelCoordinator; // @synthesize createChannelCoordinator=_createChannelCoordinator;
@property(retain, nonatomic) id <_TtP5Slack11Coordinator_> composeCoordinator; // @synthesize composeCoordinator=_composeCoordinator;
@property(retain, nonatomic) _TtC15SlackFoundation10Disposable *panelPresentationDisposable; // @synthesize panelPresentationDisposable=_panelPresentationDisposable;
@property(retain, nonatomic) id <_TtP18SlackDataProviders29RecentConversationVisitsStore_> recentConversationVisitsStore; // @synthesize recentConversationVisitsStore=_recentConversationVisitsStore;
@property(nonatomic) double previousScrollOffset; // @synthesize previousScrollOffset=_previousScrollOffset;
@property(nonatomic) __weak id <_TtP5Slack33NetworkConnectionMonitorInterface_> networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) SLNavigationController_Deprecated *channelCreationNavigationController; // @synthesize channelCreationNavigationController=_channelCreationNavigationController;
@property(nonatomic) _Bool isTeamSwitcherExpandedFullscreen; // @synthesize isTeamSwitcherExpandedFullscreen=_isTeamSwitcherExpandedFullscreen;
@property(retain, nonatomic) NSLayoutConstraint *offlineBannerHeightConstraint; // @synthesize offlineBannerHeightConstraint=_offlineBannerHeightConstraint;
@property(retain, nonatomic) UILabel *offlineBanner; // @synthesize offlineBanner=_offlineBanner;
@property(retain, nonatomic) SLKAddWorkspacesCoordinator *addWorkspacesCoordinator; // @synthesize addWorkspacesCoordinator=_addWorkspacesCoordinator;
@property(retain, nonatomic) UITapGestureRecognizer *quickSwitcherDismissalTapGestureRecognizer; // @synthesize quickSwitcherDismissalTapGestureRecognizer=_quickSwitcherDismissalTapGestureRecognizer;
@property(nonatomic) _Bool useNewQuickSwitcher; // @synthesize useNewQuickSwitcher=_useNewQuickSwitcher;
@property(nonatomic) _Bool quickSwitcherFullscreenPresentation; // @synthesize quickSwitcherFullscreenPresentation=_quickSwitcherFullscreenPresentation;
@property(retain, nonatomic) UIViewController *quickSwitcherViewController; // @synthesize quickSwitcherViewController=_quickSwitcherViewController;
@property(retain, nonatomic) SLKQuickSwitcherCoordinator *quickSwitcherCoordinator; // @synthesize quickSwitcherCoordinator=_quickSwitcherCoordinator;
@property(retain, nonatomic) NSLayoutConstraint *fakeNavbarHeightConstraint; // @synthesize fakeNavbarHeightConstraint=_fakeNavbarHeightConstraint;
@property(retain, nonatomic) UIView *pageControlDimView; // @synthesize pageControlDimView=_pageControlDimView;
@property(retain, nonatomic) UIImageView *pageControlBackgroundView; // @synthesize pageControlBackgroundView=_pageControlBackgroundView;
@property(retain, nonatomic) _TtC5Slack21SLKSidebarPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *pageControlContainer; // @synthesize pageControlContainer=_pageControlContainer;
@property(retain, nonatomic) NSLayoutConstraint *pageControlCenterConstraint; // @synthesize pageControlCenterConstraint=_pageControlCenterConstraint;
@property(retain, nonatomic) NSLayoutConstraint *pageControlContainerBottomConstraint; // @synthesize pageControlContainerBottomConstraint=_pageControlContainerBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *scrollViewTopConstraint; // @synthesize scrollViewTopConstraint=_scrollViewTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *fakeNavbarTopConstraint; // @synthesize fakeNavbarTopConstraint=_fakeNavbarTopConstraint;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *fakeNavbarBackgroundView; // @synthesize fakeNavbarBackgroundView=_fakeNavbarBackgroundView;
@property(retain, nonatomic) UIView *fakeNavbarView; // @synthesize fakeNavbarView=_fakeNavbarView;
@property(nonatomic) unsigned long long currentScrollPage; // @synthesize currentScrollPage=_currentScrollPage;
@property(nonatomic) _Bool isScrolling; // @synthesize isScrolling=_isScrolling;
@property(nonatomic) _Bool isPaging; // @synthesize isPaging=_isPaging;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(retain, nonatomic) id <SLKUserGenerics> currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) _TtC5Slack29SLKTeamSwitcherViewController *teamSwitcherViewController; // @synthesize teamSwitcherViewController=_teamSwitcherViewController;
@property(nonatomic) __weak SLKDependencies *dependencies; // @synthesize dependencies=_dependencies;
@property(nonatomic) _Bool sidebarIsOpen; // @synthesize sidebarIsOpen=_sidebarIsOpen;
@property(retain, nonatomic) SLKDirectMessageViewController *directMessageViewController; // @synthesize directMessageViewController=_directMessageViewController;
@property(retain, nonatomic) SLChannelsViewController *channelsViewController; // @synthesize channelsViewController=_channelsViewController;
@property(nonatomic) __weak id <SLKSidebarViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSArray *slk_ownedViewControllers;
- (void)updateOfflineBannerDisplayState;
- (void)networkConnectionChangedWithIsConnected:(_Bool)arg1 connectionMonitor:(id)arg2;
- (void)setOfflineBannerHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setOfflineBannerBackground;
- (void)configureOfflineBannerLayout;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)handleUpdatedKeyboardHeight:(double)arg1;
- (void)ami_handleInputHeightChangeNotification:(id)arg1;
- (void)updateLayoutForKeyboardNotification:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (id)currentViewController;
- (void)adjustContentTransform:(double)arg1;
- (void)resetContentTransform;
- (void)didFinishClosingSidebar;
- (void)didFinishOpeningSidebar;
- (void)willCloseSidebar;
- (void)willOpenSidebar;
- (void)draggingSidebarProgress:(double)arg1;
- (void)setupPresentationNavController:(id)arg1;
- (void)createChannelForPublic:(_Bool)arg1;
- (void)updatePageControlAccessibilityLabel;
- (void)updatePageControl;
- (void)pageSrcollViewToCurrentPage;
- (void)pageControlValueChanged:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollToTop:(id)arg1;
- (void)didRequestDismissalWithCompletion:(CDUnknownBlockType)arg1;
- (void)didRequestNavigationToModulesSearchWithSearchString:(id)arg1;
- (void)didRequestNavigationToWorkspaceWithWorkspaceId:(id)arg1;
- (void)didRequestNavigationToNonLocalChannelWithChannelId:(id)arg1 workspaceId:(id)arg2;
- (void)didRequestNavigationToLocalChannelWithChannelId:(id)arg1;
- (void)didRequestNavigationToMpdmWithMpdmId:(id)arg1;
- (void)didRequestNavigationToImWithUserId:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)presentNewAddWorkspaces;
- (void)possibleQuickSwitcherDismissalTapDetected:(id)arg1;
- (void)applicationWillChangeHorizontalSizeClass;
- (void)dismissQuickSwitcherCompletion:(CDUnknownBlockType)arg1;
- (void)dismissQuickSwitcher;
- (void)presentNewQuickSwitcher;
- (void)showQuickSwitcher;
- (_Bool)isIPhoneQuickSwitcherShowing;
- (_Bool)isQuickSwitcherShowing;
- (void)showRegularSizeTeamSwitcher;
- (void)showFullSizeTeamSwitcher;
- (void)didSelectAddWorkspacesCell;
- (void)rightHeaderButtonTapped:(_Bool)arg1;
- (void)didSelectSameTeam:(id)arg1;
- (void)channelsViewControllerComposeMessage:(id)arg1;
- (void)channelsViewControllerSwitchedChannel:(id)arg1;
- (void)channelsViewControllerCreateDirectMessage:(id)arg1;
- (void)channelsViewControllerShowTeamSwitcher:(id)arg1;
- (void)channelsViewControllerShowQuickSwitcher:(id)arg1;
- (void)channelsViewControllerCreateChannel:(id)arg1 public:(_Bool)arg2;
- (void)channelsViewController:(id)arg1 quickSwitcherTapped:(id)arg2;
- (void)scrollToContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToTeamSwitcher:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)scrollToChannelsAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateForTheme;
- (void)removeViewControllers;
- (void)setupViewControllers;
- (id)accessibilityLabelForPage:(unsigned long long)arg1;
- (void)updateTeamSwitcherViewController;
- (_Bool)isTeamSwitcherInEditMode;
- (_Bool)isTeamSwitcherShowing;
@property(readonly, nonatomic) _Bool isExpandedFullscreen;
- (void)updateTeamIcon;
- (void)rtmStartFinished;
- (void)teamSwitched;
- (id)visibleViewController;
- (void)showChannelsPanelAnimated:(_Bool)arg1;
- (void)layoutViewControllersWithWidth:(double)arg1;
- (void)viewDidLayoutSubviews;
- (void)sizeScrollViewContent;
- (long long)preferredStatusBarUpdateAnimation;
- (_Bool)prefersStatusBarHidden;
- (void)deregisterKeyboardNotifications;
- (void)registerKeyboardNotifications;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)positionPageControl;
- (void)handleSettingsButtonTapped;
- (void)composeMessage;
- (void)createDirectMessage;
- (void)handleComposeButtonTapped;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDependencies:(id)arg1 recentConversationVisitsStore:(id)arg2 networkMonitor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

