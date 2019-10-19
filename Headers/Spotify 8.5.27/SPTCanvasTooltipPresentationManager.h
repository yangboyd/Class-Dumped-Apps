//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTCanvasNowPlayingViewStateObserver-Protocol.h"

@class NSString, SPTCanvasNowPlayingViewState, SPTCanvasTestManager, UIViewController;
@protocol SPTFreeTierTooltipConditionalPresenter, SPTLocalSettings;

@interface SPTCanvasTooltipPresentationManager : NSObject <SPTCanvasNowPlayingViewStateObserver>
{
    _Bool _tooltipWasPresented;
    id <SPTFreeTierTooltipConditionalPresenter> _tooltipPresenter;
    id <SPTLocalSettings> _localSettings;
    SPTCanvasTestManager *_testManager;
    SPTCanvasNowPlayingViewState *_nowPlayingState;
    UIViewController *_lastViewControllerWithTooltip;
}

@property(nonatomic) _Bool tooltipWasPresented; // @synthesize tooltipWasPresented=_tooltipWasPresented;
@property(nonatomic) __weak UIViewController *lastViewControllerWithTooltip; // @synthesize lastViewControllerWithTooltip=_lastViewControllerWithTooltip;
@property(readonly, nonatomic) SPTCanvasNowPlayingViewState *nowPlayingState; // @synthesize nowPlayingState=_nowPlayingState;
@property(readonly, nonatomic) SPTCanvasTestManager *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFreeTierTooltipConditionalPresenter> tooltipPresenter; // @synthesize tooltipPresenter=_tooltipPresenter;
- (void).cxx_destruct;
- (void)resetUserPreferences;
@property(readonly, nonatomic) long long tooltipDisplayCount;
- (void)incrementTooltipDisplayCount;
@property(readonly, nonatomic) _Bool reachedMaxTooltipDisplayed;
- (_Bool)didShutdownOnce;
- (void)shutdown;
- (void)nowPlayingViewWillAppear;
- (void)nowPlayingViewWillDisappear;
@property(readonly, nonatomic) _Bool shouldShowTooltip;
- (void)dismissToolTipFromViewController:(id)arg1 forceDismiss:(_Bool)arg2;
- (void)presentToolTipFromViewController:(id)arg1;
- (struct CGPoint)tooltipPositionForViewController:(id)arg1;
- (id)initWithTooltipPresenter:(id)arg1 localSettings:(id)arg2 testManager:(id)arg3 nowPlayingState:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

