//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HUBViewContentOffsetObserver-Protocol.h"
#import "SPTBrowseViewModelProviderObserver-Protocol.h"
#import "SPTNavigationControllerNavigationBarState-Protocol.h"
#import "SPTPageController-Protocol.h"

@class NSString, NSURL, SPTHubViewController, SPTProgressView, SPTTheme;
@protocol SPTBrowseLoadingLogger, SPTBrowseViewModelProvider, SPTPageContainer, SPTPodcastUtteranceSurveyManager, VISREFIntegrationManager;

@interface SPTBrowseViewController : UIViewController <SPTBrowseViewModelProviderObserver, SPTNavigationControllerNavigationBarState, HUBViewContentOffsetObserver, SPTPageController>
{
    SPTProgressView *_progressView;
    id <SPTBrowseViewModelProvider> _viewModelProvider;
    SPTHubViewController *_hubsViewController;
    unsigned long long _preferredNavigationBarState;
    SPTTheme *_theme;
    id <SPTBrowseLoadingLogger> _loadingLogger;
    id <VISREFIntegrationManager> _visualRefreshIntegrationManager;
    id <SPTPodcastUtteranceSurveyManager> _podcastUtteranceSurveyManager;
    struct CGRect _lastKnownHubContainerViewFrame;
}

@property(readonly, nonatomic) id <SPTPodcastUtteranceSurveyManager> podcastUtteranceSurveyManager; // @synthesize podcastUtteranceSurveyManager=_podcastUtteranceSurveyManager;
@property(readonly, nonatomic) id <VISREFIntegrationManager> visualRefreshIntegrationManager; // @synthesize visualRefreshIntegrationManager=_visualRefreshIntegrationManager;
@property(readonly, nonatomic) id <SPTBrowseLoadingLogger> loadingLogger; // @synthesize loadingLogger=_loadingLogger;
@property(nonatomic) struct CGRect lastKnownHubContainerViewFrame; // @synthesize lastKnownHubContainerViewFrame=_lastKnownHubContainerViewFrame;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(nonatomic) unsigned long long preferredNavigationBarState; // @synthesize preferredNavigationBarState=_preferredNavigationBarState;
@property(readonly, nonatomic) SPTHubViewController *hubsViewController; // @synthesize hubsViewController=_hubsViewController;
@property(readonly, nonatomic) id <SPTBrowseViewModelProvider> viewModelProvider; // @synthesize viewModelProvider=_viewModelProvider;
- (void).cxx_destruct;
- (void)performIgnoringOffsetChangeCallbacks:(CDUnknownBlockType)arg1;
- (unsigned long long)navigationBarStateForViewModel:(id)arg1;
- (struct CGRect)statusBarFrame;
- (void)updateWithViewModel:(id)arg1;
- (void)hubView:(id)arg1 contentOffsetDidChange:(struct CGPoint)arg2;
- (void)sp_updateContentInsets;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
- (void)viewModelProvider:(id)arg1 didUpdateStateFrom:(unsigned long long)arg2;
- (void)viewModelProvider:(id)arg1 didUpdateFromViewModel:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
@property(readonly, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
- (id)initWithViewModelProvider:(id)arg1 theme:(id)arg2 pageIdentifier:(id)arg3 pageURI:(id)arg4 componentRegistry:(id)arg5 componentLayoutManager:(id)arg6 imageLoaderFactory:(id)arg7 commandHandler:(id)arg8 impressionLogger:(id)arg9 loadingLogger:(id)arg10 visualRefreshIntegrationManager:(id)arg11 podcastUtteranceSurveyManager:(id)arg12 shareDragDelegateFactory:(id)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

