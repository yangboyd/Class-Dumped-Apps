//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTMultiSizeViewController.h"

#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "YTMPlayerViewControllerParent-Protocol.h"

@class NSString, UIViewController;
@protocol YTMPlayerViewControllerParent, YTPlaybackController;

@interface YTMFullscreenVideoViewController : YTMultiSizeViewController <UIViewControllerTransitioningDelegate, YTMPlayerViewControllerParent>
{
    UIViewController<YTPlaybackController> *_playerViewController;
    _Bool _rotating;
    long long _currentOrientation;
    UIViewController<YTMPlayerViewControllerParent> *_sourceViewController;
}

@property(retain, nonatomic) UIViewController<YTMPlayerViewControllerParent> *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
@property(readonly, nonatomic, getter=isRotating) _Bool rotating; // @synthesize rotating=_rotating;
@property(nonatomic) long long currentOrientation; // @synthesize currentOrientation=_currentOrientation;
- (void).cxx_destruct;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)playerContainerView;
- (id)detachPlayerViewController;
- (void)attachPlayerViewController:(id)arg1;
- (void)didTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)willTransitionFromSize:(struct CGSize)arg1 toSize:(struct CGSize)arg2;
- (void)updatePlayerViewController:(id)arg1;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

