//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEAdWebViewController.h"

#import "AWEPageSheetPresentationObserving-Protocol.h"
#import "AWEPageSheetPresentationPhaseTransitionDelegate-Protocol.h"

@class AWEAdLandingTrackEvents, AWEAdPanelNavigationBar, NSString;

@interface AWEAdLandingWebViewController : AWEAdWebViewController <AWEPageSheetPresentationObserving, AWEPageSheetPresentationPhaseTransitionDelegate>
{
    _Bool _isPreviewEnabled;
    Class _trackEventsClass;
    AWEAdPanelNavigationBar *_navigationBar;
    AWEAdLandingTrackEvents *_trackEvents;
}

@property(retain, nonatomic) AWEAdLandingTrackEvents *trackEvents; // @synthesize trackEvents=_trackEvents;
@property(retain, nonatomic) AWEAdPanelNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) Class trackEventsClass; // @synthesize trackEventsClass=_trackEventsClass;
@property(nonatomic) _Bool isPreviewEnabled; // @synthesize isPreviewEnabled=_isPreviewEnabled;
- (void).cxx_destruct;
- (void)showDebugActionSheet;
- (void)trackTappingDismissal;
- (void)trackDraggingRightDismissal;
- (void)trackDraggingDownDismissal;
- (void)trackReportButton;
- (void)trackButtonDismissal;
- (void)trackPageView;
- (struct CGRect)pageSheetPresentation:(id)arg1 frameOfPresentedViewForPhase:(long long)arg2;
- (long long)initialPhaseForPageSheetPresentation:(id)arg1;
- (void)pageSheetDidHorizontalPan:(id)arg1;
- (_Bool)pageSheet:(id)arg1 shouldDismissForReason:(long long)arg2;
- (void)pageSheetPresentationWillBegin:(id)arg1;
- (id)aweui_emptyPageBelowView;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)updateTopBannerPositionWithOffset:(double)arg1;
- (void)animateOutTopBanner;
- (void)animateInTopBanner;
- (void)moreButtonAction:(id)arg1;
- (void)reportButtonAction:(id)arg1;
- (void)closeButtonAction:(id)arg1;
- (void)backButtonAction:(id)arg1;
- (void)handlePageSheetPresentationNotification:(id)arg1;
- (void)showViewController:(id)arg1 withRouteInfo:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)observeScrollIfNeeded;
- (void)updateBackButton;
- (void)setUpNavigationBar;
- (void)setUpTrackEventsWithAweme:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

