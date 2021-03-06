//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTMultiSizeViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "YTAppRootContainerPageStyleDelegate-Protocol.h"
#import "YTAppRootSlice-Protocol.h"
#import "YTColorObserver-Protocol.h"
#import "YTConnectionStatusControllerDelegate-Protocol.h"
#import "YTInnerTubeCollectionAppearanceResponderProvider-Protocol.h"
#import "YTModalPlaybackChangeResponderProvider-Protocol.h"
#import "YTNavigationProtocol-Protocol.h"
#import "YTPageStyleControllerObserver-Protocol.h"
#import "YTPivotBarProvider-Protocol.h"
#import "YTResponderRoot-Protocol.h"
#import "YTScrollBubbleBehaviorProvider-Protocol.h"
#import "YTScrollableNavigationControllerDelegate-Protocol.h"
#import "YTSlimStatusBarControllerObserver-Protocol.h"
#import "YTStorageControllerObserver-Protocol.h"
#import "YTStyleContextResponderProvider-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTTopViewControllerProvider-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, NSArray, NSMutableArray, NSString, UIView, YTAdFeedbackController, YTAppEventHandler, YTAppModalController, YTAppPivotBarController, YTAppPopoverController, YTAppPushController, YTAppWatchController, YTBottomOffsetController, YTConfirmDialogController, YTConnectionStatusController, YTDarkThemePromoViewController, YTFancyDismissibleDialogController, YTKeyCommandController, YTPageStyleController, YTPivotBarViewController, YTPromosheetController, YTScrollableNavigationController, YTSearchViewController, YTSlideBackController, YTSlimStatusBarController, YTThemeEntityManager, YTVoiceSearchViewController;
@protocol MDXServices, YTAppRootContainer, YTColorStyle, YTDataServices, YTEventLogger, YTMinimizePlayerCommandProtocol, YTNavigationProtocol, YTResponder, YTServices;

@interface YTAppViewController : YTMultiSizeViewController <YTAppRootContainerPageStyleDelegate, YTColorObserver, YTConnectionStatusControllerDelegate, YTSlimStatusBarControllerObserver, YTInnerTubeCollectionAppearanceResponderProvider, UINavigationControllerDelegate, YTModalPlaybackChangeResponderProvider, YTPageStyleControllerObserver, YTStorageControllerObserver, YTStyleContextResponderProvider, YTSystemNotificationsObserver, YTUserChangedObserver, YTScrollableNavigationControllerDelegate, YTAppRootSlice, YTPivotBarProvider, YTResponderRoot, YTScrollBubbleBehaviorProvider, YTTopViewControllerProvider, YTNavigationProtocol>
{
    YTBottomOffsetController *_bottomOffsetController;
    YTAppPivotBarController *_appPivotBarController;
    YTAppEventHandler *_appEventHandler;
    YTAppPushController *_appPushController;
    YTAppModalController *_appModalController;
    YTAppPopoverController *_appPopoverController;
    YTThemeEntityManager *_themeManager;
    id <YTColorStyle> _colorStyle;
    YTSlimStatusBarController *_slimStatusBarController;
    YTConnectionStatusController *_connectionStatusController;
    YTPromosheetController *_promosheetController;
    id <YTServices> _services;
    id <YTDataServices> _dataServices;
    YTSlideBackController *_slideBackController;
    NSMutableArray *_navigationBlocks;
    _Bool _isLoaded;
    _Bool _isAppRunning;
    long long _pivotBarStyle;
    _Bool _signInPending;
    YTPageStyleController *_pageStyleController;
    YTDarkThemePromoViewController *_darkThemePromoViewController;
    id <YTEventLogger> _eventLogger;
    _Bool _isScrollablePivotBarEnabled;
    YTKeyCommandController *_keyCommandController;
    _Bool _isExternalKeyboardShortcutEnabled;
    _Bool _isNavigationControllerAnimating;
    id <YTResponder> _parentResponder;
    YTScrollableNavigationController *_appNavigationController;
    GIMMe *_gimme;
    YTConfirmDialogController *_confirmDialogController;
    YTAdFeedbackController *_adFeedbackController;
    YTFancyDismissibleDialogController *_fancyDismissibleDialogController;
    YTPivotBarViewController *_pivotBarViewController;
    UIView<YTAppRootContainer> *_appView;
    YTAppWatchController *_appWatchController;
    YTSearchViewController *_searchViewController;
    YTVoiceSearchViewController *_voiceSearchViewController;
    id <YTMinimizePlayerCommandProtocol> _minimizePlayerController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <YTMinimizePlayerCommandProtocol> minimizePlayerController; // @synthesize minimizePlayerController=_minimizePlayerController;
@property(readonly, nonatomic) _Bool isNavigationControllerAnimating; // @synthesize isNavigationControllerAnimating=_isNavigationControllerAnimating;
@property(readonly, nonatomic) YTVoiceSearchViewController *voiceSearchViewController; // @synthesize voiceSearchViewController=_voiceSearchViewController;
@property(readonly, nonatomic) YTSearchViewController *searchViewController; // @synthesize searchViewController=_searchViewController;
@property(readonly, nonatomic) YTAppWatchController *appWatchController; // @synthesize appWatchController=_appWatchController;
@property(readonly, nonatomic) UIView<YTAppRootContainer> *appView; // @synthesize appView=_appView;
@property(readonly, nonatomic) YTPivotBarViewController *pivotBarViewController; // @synthesize pivotBarViewController=_pivotBarViewController;
@property(readonly, nonatomic) YTFancyDismissibleDialogController *fancyDismissibleDialogController; // @synthesize fancyDismissibleDialogController=_fancyDismissibleDialogController;
@property(readonly, nonatomic) YTAdFeedbackController *adFeedbackController; // @synthesize adFeedbackController=_adFeedbackController;
@property(readonly, nonatomic) YTConfirmDialogController *confirmDialogController; // @synthesize confirmDialogController=_confirmDialogController;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void)performKeyCommand:(id)arg1;
- (id)keyCommands;
- (_Bool)canBecomeFirstResponder;
- (void)scrollableNavigationControllerWillHideHeaderViewAfterScroll:(id)arg1;
- (void)scrollableNavigationControllerWillShowHeaderViewAfterScroll:(id)arg1;
- (void)setAppWatchController:(id)arg1;
- (id)appEventHandler;
- (void)maybeClearOldBackgroundOnboardingHintShown;
- (void)showHomeWithShouldCollapseWatch:(_Bool)arg1;
- (void)collapseWatchWithCompletion:(CDUnknownBlockType)arg1;
- (long long)statusBarStyleFromBackgroundColor:(id)arg1;
- (id)topAppViewController;
- (void)showSignInFlow;
- (void)resetAndLoadPivotBar;
- (void)setupTitleTextAttributes;
- (void)updatePivotBarStyle;
- (void)updateToastAndPromosheetAlignment;
- (void)dismissAlertsFromView:(id)arg1;
- (void)disableDelaysTouchesBeganOnWindowRecognizers;
- (void)userDidChange;
- (void)userWillChange;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)showVoiceSearchViewAsModal:(id)arg1;
- (void)showVoiceSearchView;
- (void)showSearchViewWithCompletion:(CDUnknownBlockType)arg1;
- (void)showSearchView;
- (void)setSearchViewControllerGraftingNavigationEndpoint:(id)arg1;
- (id)popoverPresentedViewController;
- (void)pushViewController:(id)arg1 navigationEndpoint:(id)arg2 fromView:(id)arg3 metadata:(id)arg4 isExternallyInitialized:(_Bool)arg5 shouldCollapseWatch:(_Bool)arg6 shouldAnimatePush:(_Bool)arg7 viewControllerToReplace:(id)arg8;
- (void)updatePromosheetStateForWatchViewLayout:(long long)arg1;
- (void)openURL:(id)arg1 fromView:(id)arg2 withCallbackURL:(id)arg3 referringApp:(id)arg4 trackingParams:(id)arg5 isOriginExternal:(_Bool)arg6 shouldResolve:(_Bool)arg7 firstResponder:(id)arg8 openerOptions:(id)arg9;
- (id)scrollsToTopFocusedViewController;
- (void)updateScrollsToTop;
- (void)openURL:(id)arg1 fromView:(id)arg2 withCallbackURL:(id)arg3 referringApp:(id)arg4 trackingParams:(id)arg5 isOriginExternal:(_Bool)arg6;
- (void)refreshTopLevel;
- (void)back;
- (void)shutdown;
- (void)load;
- (void)addNavigationBlock:(CDUnknownBlockType)arg1;
- (void)openAppWithScheme:(id)arg1 fromView:(id)arg2;
- (void)collapseWatch;
- (id)visibleViewController;
- (void)hideWatchWithIDs:(id)arg1;
- (void)presentPopoverWithContent:(id)arg1 fromRect:(struct CGRect)arg2 inView:(id)arg3 directions:(unsigned long long)arg4;
- (void)dismissAllModalViewControllersWithCompletion:(CDUnknownBlockType)arg1 animated:(_Bool)arg2;
- (void)dismissModalViewController:(id)arg1 withCompletion:(CDUnknownBlockType)arg2 animated:(_Bool)arg3 destinationReloggedAsBack:(_Bool)arg4;
- (void)presentModalViewController:(id)arg1 rootModalPresentationStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshAppWithPlayerAction:(long long)arg1;
- (_Bool)canShowScrollBubble;
- (void)dismissPopover;
- (void)refreshPivotBarWithTriggedByNotification:(_Bool)arg1;
- (void)setPivotBarStyle:(long long)arg1;
- (id)selectedPivotIdentifier;
- (void)showPivotBar;
- (void)hidePivotBar;
- (void)didReceiveRefreshActionOnCurrentPivotIdentifier:(id)arg1;
- (_Bool)isPresentingAsPopoverViewController:(id)arg1;
- (_Bool)canDismissViewController:(id)arg1;
- (id)topViewController;
- (void)modalPlaybackDidEnd;
- (void)modalPlaybackWillBegin;
- (_Bool)innerTubeCollectionViewShowsVerticalScrollIndicator;
- (id)innerTubeCollectionViewBackgroundColor;
- (int)innerTubeCollectionStatusViewStyle;
@property(readonly, nonatomic) NSArray *eventGroupHandlers;
@property(nonatomic) __weak id <MDXServices> MDXServices;
@property(nonatomic) __weak id <YTDataServices> dataServices;
@property(nonatomic) __weak id services;
@property(retain, nonatomic) id <YTNavigationProtocol> navigationProtocol;
- (void)appDidChangeDeviceOrientation;
- (void)appDidReceiveMemoryWarning:(id)arg1;
- (void)slimStatusBarDisplayStatusDidChange;
- (id)browseIDForVisibleViewController;
- (void)availableStorageDidBecomeEmpty;
- (void)willAnimateTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)willTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (long long)pageStyle;
- (void)pageStyleControllerPageStyleDidChange;
- (void)themeColorDidChange:(id)arg1 titleColor:(id)arg2 iconColor:(id)arg3 animated:(_Bool)arg4;
@property(readonly, nonatomic) NSString *styleContext;
- (void)applyThemeColorToNavigationBar:(id)arg1;
@property(readonly, nonatomic) YTScrollableNavigationController *appNavigationController; // @synthesize appNavigationController=_appNavigationController;
@property(readonly, nonatomic) _Bool isColorUpdatesAllowed;
- (void)dismissPromosheetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateAppBottomOffset;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)preferredStatusBarStyle;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)shouldControlStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)setup;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

