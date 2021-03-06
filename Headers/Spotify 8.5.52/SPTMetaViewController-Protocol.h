//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPTNavigationItemsConsumer-Protocol.h"

@class NSError, SPBarViewController, SPTMenuController, UIViewController;
@protocol MetaViewControllerDelegate, SPTBarInteractiveTransitionParticipant, SPTBarOverlayViewController, SPTFullscreenPlaybackPresentationManager, SPTMetaViewControllerObserver, SPTMetaViewControllerRootViewPresenter, SPTModalPresentationController, SPTTabBarControllerProtocol;

@protocol SPTMetaViewController <SPTNavigationItemsConsumer>
@property(readonly, nonatomic) UIViewController *defaultTab;
@property(readonly, nonatomic) UIViewController *top;
@property(retain, nonatomic) id <SPTFullscreenPlaybackPresentationManager> fullscreenPlaybackPresentationManager;
@property(retain, nonatomic) UIViewController *contentViewController;
@property(readonly, nonatomic) UIViewController<SPTBarInteractiveTransitionParticipant> *nowPlayingBar;
@property(readonly, nonatomic) _Bool presentingMainViewControllerComplete;
@property(readonly, nonatomic, getter=isShowingMainView) _Bool showingMainView;
@property(readonly, nonatomic, getter=isShowingLoginView) _Bool showingLoginView;
@property(readonly, nonatomic, getter=isLoadingUIComplete) _Bool loadingUIComplete;
@property(readonly, nonatomic) UIViewController<SPTBarOverlayViewController> *nowPlaying;
@property(readonly, nonatomic) SPTMenuController *menuController;
@property(readonly, nonatomic) __weak UIViewController *rootContainer;
@property(readonly, nonatomic) SPBarViewController *barViewController;
@property(readonly, nonatomic) UIViewController<SPTTabBarControllerProtocol> *tabs;
@property(nonatomic) __weak id <MetaViewControllerDelegate> delegate;
- (void)setModalPresentationController:(id <SPTModalPresentationController>)arg1;
- (void)hideNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1 completionHandler:(void (^)(void))arg2;
- (void)showNowPlayingViewControllerAnimated:(_Bool)arg1;
- (void)switchToLoginViewForLogoutShowError:(NSError *)arg1 forgetUser:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)switchToLoginViewAnimated:(_Bool)arg1 showError:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)switchFromLoginAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)switchToMainViewAnimated:(_Bool)arg1 manualLogin:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)switchToViewController:(UIViewController *)arg1 animated:(_Bool)arg2 completion:(void (^)(void))arg3;
- (void)removeRootViewPresenter:(id <SPTMetaViewControllerRootViewPresenter>)arg1;
- (void)addRootViewPresenter:(id <SPTMetaViewControllerRootViewPresenter>)arg1;
- (void)selectTab:(UIViewController *)arg1;
- (void)removeObserver:(id <SPTMetaViewControllerObserver>)arg1;
- (void)addObserver:(id <SPTMetaViewControllerObserver>)arg1;
@end

