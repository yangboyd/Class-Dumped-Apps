//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TWWebKitModalDismissWorkAroundViewController.h"

@class UIViewController;

__attribute__((visibility("hidden")))
@interface _TtC6Twitch30PictureInPictureViewController : TWWebKitModalDismissWorkAroundViewController
{
    // Error parsing type: , name: contentViewController
    // Error parsing type: , name: presenterViewController
    // Error parsing type: , name: pictureInPictureWindow
    // Error parsing type: , name: chromecastManager
    // Error parsing type: , name: passthroughView
    // Error parsing type: , name: presentedView
    // Error parsing type: , name: osPictureInPictureActive
    // Error parsing type: , name: toastViewFrame
    // Error parsing type: , name: presentationCorner
    // Error parsing type: , name: _docked
    // Error parsing type: , name: initialSetDockCalled
    // Error parsing type: , name: previousInterfaceOrientationBeforeGoingFullScreen
    // Error parsing type: , name: _currentCorner
    // Error parsing type: , name: _suggestedPictureInPictureWidth
    // Error parsing type: , name: tapGestureRecognizer
    // Error parsing type: , name: panGestureRecognizer
    // Error parsing type: , name: pinchGestureRecognizer
    // Error parsing type: , name: chromecastTapGestureRecognizer
    // Error parsing type: , name: cornerBeforePanningStarted
    // Error parsing type: , name: dismissGestureInProgress
    // Error parsing type: , name: centerWhenPanningStarted
    // Error parsing type: , name: _chromecastViewController
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 themeManager:(id)arg3;
@property(nonatomic, readonly) UIViewController *presentingViewController;
- (void)applyTheme:(id)arg1;
- (void)keyboardWillAppear;
- (void)pinchGestureDidRecognize;
- (void)panGestureDidRecognize;
- (void)tapGestureDidRecognize;
@property(nonatomic, readonly) UIViewController *childViewControllerForScreenEdgesDeferringSystemGestures;
@property(nonatomic, readonly) UIViewController *childViewControllerForHomeIndicatorAutoHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarHidden;
@property(nonatomic, readonly) UIViewController *childViewControllerForStatusBarStyle;
@property(nonatomic, readonly) unsigned long long supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)floatingViewLayoutInsetsDidChange;
@property(nonatomic, readonly) _Bool postsAppWideStatusBarUpdateNotifications;
@property(nonatomic, readonly) struct UIEdgeInsets tw_floatingViewLayoutInsets;
- (void)dealloc;

@end

