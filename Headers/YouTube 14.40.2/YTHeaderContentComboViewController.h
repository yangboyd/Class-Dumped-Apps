//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTStyledViewController.h"

#import "YTColorObserver.h"
#import "YTContentViewController.h"
#import "YTGraftingViewController.h"
#import "YTGuideServiceCoordinatorObserver.h"
#import "YTHelpKitContextProvider.h"
#import "YTHidePivotBarOnSearchProtocol.h"
#import "YTNavigationalLatencyProtocol.h"
#import "YTPageStyling.h"
#import "YTPlaybackRouteButtonVisibilityObserver.h"
#import "YTRendererController.h"
#import "YTTopBarResponderProvider.h"
#import "YTTopController.h"
#import "YTTopScrolling.h"
#import "YTUserChangedObserver.h"

@class NSObject, NSString, YTIButtonRenderer, YTICommand, YTIMultiPageMenuRenderer, YTITopbarMenuButtonRenderer, YTInteractionLoggingProxyButton, YTLeftNavigationButtons, YTNavigationalLatencyEventInfo, YTQTMButton, YTRightNavigationButtons, YTThumbnailController, YTTopbarMenuButton, YTVEVisibilityUpdateResponderEventGate;

@interface YTHeaderContentComboViewController : YTStyledViewController <YTPlaybackRouteButtonVisibilityObserver, YTColorObserver, YTGuideServiceCoordinatorObserver, YTTopBarResponderProvider, YTUserChangedObserver, YTRendererController, YTContentViewController, YTGraftingViewController, YTHelpKitContextProvider, YTHidePivotBarOnSearchProtocol, YTNavigationalLatencyProtocol, YTPageStyling, YTTopController, YTTopScrolling>
{
    id <YTServices> _services;
    YTThumbnailController *_avatarController;
    YTQTMButton *_MDXButton;
    YTTopbarMenuButton *_accountPanelButton;
    YTQTMButton *_cameraButton;
    YTQTMButton *_plusButton;
    YTQTMButton *_overflowButton;
    YTIButtonRenderer *_cameraButtonRenderer;
    YTIButtonRenderer *_plusButtonRenderer;
    YTIMultiPageMenuRenderer *_menuRenderer;
    YTVEVisibilityUpdateResponderEventGate *_visibilityUpdateGate;
    YTInteractionLoggingProxyButton *_settingsButton;
    _Bool _buttonsInitialized;
    YTITopbarMenuButtonRenderer *_topBarMenuButtonRenderer;
    YTICommand *_creationNavigationEndpoint;
    YTLeftNavigationButtons *_leftNavigationButtons;
    YTRightNavigationButtons *_rightNavigationButtons;
    long long _numberOfLoads;
    _Bool _searchButtonAttached;
    long long _pageStyle;
    _Bool _showTitleButton;
    NSObject *_content;
}

@property(retain, nonatomic) NSObject *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (void)headerDidBind:(id)arg1;
- (void)didPressDynamicHeaderButton:(id)arg1;
- (void)handleUpdateNavBarEvent:(id)arg1;
- (_Bool)shouldHideRightNavigationButtons;
- (void)setupNavigationButtons;
- (void)creationButtonPressed;
- (void)reset;
- (void)handleLongPress:(id)arg1;
- (void)loadOfflineImages:(id)arg1;
- (void)loadAccountPanelImages;
- (void)didPressPlusButton:(id)arg1;
- (void)didPressCameraButton:(id)arg1;
- (void)didPressOverflowButton:(id)arg1;
- (void)didPressAccountPanelButton:(id)arg1;
- (void)didPressSearchButton:(id)arg1;
- (void)loadTopbar:(id)arg1;
- (void)setRightButtons;
- (_Bool)hasBackButton;
- (void)setupLogo;
- (void)initializeButtons;
@property(retain, nonatomic) YTNavigationalLatencyEventInfo *navigationalLatencyEventInfo;
- (void)scrollToTopAndPullToRefresh;
- (void)scrollToTop;
- (id)helpKitContext;
- (_Bool)canReloadWithModel:(id)arg1;
- (_Bool)hasEqualModel:(id)arg1;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (void)relogScreen;
- (CDUnknownBlockType)clientDataBlockForInteractionType:(unsigned long long)arg1;
- (id)navEndpoint;
- (_Bool)shouldHidePivotBarOnSearch;
- (void)userDidChange;
- (void)userWillChange;
- (void)updateVisibility;
- (void)accountButtonPresentationStyleDidChange:(_Bool)arg1;
- (void)showAccountButtonNotificationHint:(id)arg1;
- (void)topbarDidChange:(id)arg1;
- (void)refreshPivotBar;
- (void)playbackRouteButtonVisibilityDidChange;
- (void)themeColorDidChange:(id)arg1 titleColor:(id)arg2 iconColor:(id)arg3 animated:(_Bool)arg4;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didTapBack:(id)arg1;
- (_Bool)isLeftNavigationButtonHidden;
- (void)didTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (id)viewController;
- (void)showAccountPanel;
- (void)loadWithModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder;
@property(readonly) Class superclass;

@end

