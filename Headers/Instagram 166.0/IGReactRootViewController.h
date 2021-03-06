//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/FBReactPerfLoggerSessionHolder-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class FBReactPerfLoggerSession, IGFullscreenErrorView, IGNavigationTitleIconView, IGReactRootViewControllerConfiguration, IGUserSession, NSString, RCTRootView, UIScrollView;

@interface IGReactRootViewController : IGViewController <FBReactPerfLoggerSessionHolder, IGGestureHandler, UIScrollViewDelegate>
{
    UIScrollView *_topLevelScrollView;
    IGFullscreenErrorView *_errorView;
    IGUserSession *_userSession;
    IGNavigationTitleIconView *_navigationTitleView;
    _Bool _navigationBarHidden;
    _Bool _navigationGestureDisabled;
    int _tabBarVisibility;
    NSString *_appKey;
    RCTRootView *_rootView;
    IGReactRootViewControllerConfiguration *_configuration;
    FBReactPerfLoggerSession *_perfLoggerSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBReactPerfLoggerSession *perfLoggerSession; // @synthesize perfLoggerSession=_perfLoggerSession;
@property(readonly, nonatomic) IGReactRootViewControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) int tabBarVisibility; // @synthesize tabBarVisibility=_tabBarVisibility;
@property(nonatomic) _Bool navigationGestureDisabled; // @synthesize navigationGestureDisabled=_navigationGestureDisabled;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(retain, nonatomic) RCTRootView *rootView; // @synthesize rootView=_rootView;
@property(copy, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
- (void)_adjustRootViewFrame;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)didUpdateTopLevelScrollView:(id)arg1 rootViewReactTag:(id)arg2;
- (void)_sendViewEvent:(id)arg1 extraArgs:(id)arg2;
- (void)_sendViewEvent:(id)arg1;
- (void)_onViewDidAppear;
- (void)_didTapRightBarButton;
- (void)_didTapLeftBarButton;
- (void)_onBackModal;
- (void)onCancelModal;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)preferredTabBarBehavior;
- (_Bool)allowsNavigationGestureForGestureOrigin:(struct CGPoint)arg1;
- (void)setRightAction:(id)arg1 enabled:(_Bool)arg2 title:(id)arg3;
- (void)_setLeftAction:(id)arg1 enabled:(_Bool)arg2 action:(SEL)arg3 title:(id)arg4;
- (void)setLeftAction:(id)arg1 enabled:(_Bool)arg2 title:(id)arg3;
- (void)_setLeftAction:(id)arg1 enabled:(_Bool)arg2 action:(SEL)arg3;
- (void)setLeftAction:(id)arg1 enabled:(_Bool)arg2;
- (void)_didTapBackAfterError;
- (void)_bridgeDidFatal:(id)arg1;
- (void)setTitleIcon:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setLogoAsTitle;
- (_Bool)wantsLayoutOnKeyboardChanges;
- (_Bool)prefersNavigationBarHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)initWithRootView:(id)arg1 perfLoggerSession:(id)arg2 configuration:(id)arg3 userSession:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

