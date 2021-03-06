//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TwitchCoreUI/TWBaseViewController.h>

__attribute__((visibility("hidden")))
@interface _TtC6Twitch21ProfileViewController : TWBaseViewController
{
    // Error parsing type: , name: displayContext
    // Error parsing type: , name: analyticsContext
    // Error parsing type: , name: prefixDiscoveryPath
    // Error parsing type: , name: profileIdentifier
    // Error parsing type: , name: loadState
    // Error parsing type: , name: initialPartialProfileInfo
    // Error parsing type: , name: subscriptionState
    // Error parsing type: , name: followingState
    // Error parsing type: , name: subscriptionStatusListenerToken
    // Error parsing type: , name: subscriptionToken
    // Error parsing type: , name: subscriptionPresentationState
    // Error parsing type: , name: analyticsController
    // Error parsing type: , name: isFriend
    // Error parsing type: , name: useNewProfileInfoView
    // Error parsing type: , name: profileInfoView
    // Error parsing type: , name: topTabBarViewControllerContainerView
    // Error parsing type: , name: followingButtonItem
    // Error parsing type: , name: spinner
    // Error parsing type: , name: reloadButton
    // Error parsing type: , name: profileViews
    // Error parsing type: , name: settingsBarButtonItem
    // Error parsing type: , name: collapseHeaderOnViewDidAppear
    // Error parsing type: , name: headerCollapsed
    // Error parsing type: , name: scrollViewKVOObservation
    // Error parsing type: , name: scrollViewCurrentlyObservingForContentOffset
    // Error parsing type: , name: isInitialScrollOffset
    // Error parsing type: , name: lastScrollContentOffset
    // Error parsing type: , name: topTabBarConstraints
    // Error parsing type: , name: loadingSpinnerVisible
    // Error parsing type: , name: retryButtonVisible
    // Error parsing type: , name: profileInfoRequest
    // Error parsing type: , name: hasShownAlertIfChannelIsBlocked
    // Error parsing type: , name: sentTrackingData
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 themeManager:(id)arg3;
- (_Bool)tw_shouldPushViewControllerOnTop:(id)arg1;
- (void)applyTheme:(id)arg1;
- (void)moreButtonTapped;
- (void)dismissButtonTapped;
- (void)showSettingsPanel;
- (void)userUpdated;
- (void)friendListUpdated;
- (void)backButtonTapped;
- (void)reloadButtonTapped;
- (void)traitCollectionDidChange:(id)arg1;
- (void)keyboardVisibilityStateChanged;
- (void)viewDidLayoutSubviews;
@property(nonatomic, readonly) struct UIEdgeInsets tw_floatingViewLayoutInsets;
@property(nonatomic, readonly) unsigned long long navigationBarStyle;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithOfflineUser:(id)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5 collapseHeaderOnViewDidAppear:(_Bool)arg6;
- (id)initWithUser:(id)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5;
- (id)initWithChannel:(id)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5;
- (id)initWithChannelIdentity:(id)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5;
- (id)initWithChannelName:(id)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5;
- (id)initWithChannelIdentifier:(unsigned int)arg1 displayContext:(long long)arg2 analyticsContext:(id)arg3 discoveryPath:(id)arg4 themeManager:(id)arg5;

@end

