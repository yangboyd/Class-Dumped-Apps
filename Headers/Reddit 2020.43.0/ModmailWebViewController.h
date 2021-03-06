//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseViewController.h"

#import "RUIActionSheetViewControllerDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WebNavigationControlsViewDelegate-Protocol.h"
#import "WebViewControllerProtocol-Protocol.h"
#import "_TtP18AnalyticsFramework26AnalyticsScreenViewContext_-Protocol.h"

@class AnalyticsEvent, NSString, NSURL, RedditService, Subreddit, UIProgressView, UIViewController, WKWebView, WebNavigationControlsView, WebViewInteractor;
@protocol AccountContext, _TtP18AnalyticsFramework15AnalyticsLogger_;

@interface ModmailWebViewController : BaseViewController <WKNavigationDelegate, WebNavigationControlsViewDelegate, RUIActionSheetViewControllerDelegate, _TtP18AnalyticsFramework26AnalyticsScreenViewContext_, WebViewControllerProtocol>
{
    NSString *_analyticsReason;
    NSURL *_analyticsReferringURL;
    WebViewInteractor *_interactor;
    UIViewController *_fromVC;
    id <AccountContext> _accountContext;
    Subreddit *_subreddit;
    WKWebView *_webView;
    NSURL *_webURL;
    UIProgressView *_progressView;
    WebNavigationControlsView *_navigationControlView;
    double _headerObservationOffset;
}

- (void).cxx_destruct;
@property(nonatomic) double headerObservationOffset; // @synthesize headerObservationOffset=_headerObservationOffset;
@property(retain, nonatomic) WebNavigationControlsView *navigationControlView; // @synthesize navigationControlView=_navigationControlView;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSURL *webURL; // @synthesize webURL=_webURL;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) Subreddit *subreddit; // @synthesize subreddit=_subreddit;
@property(readonly, nonatomic) id <AccountContext> accountContext; // @synthesize accountContext=_accountContext;
@property(retain, nonatomic) UIViewController *fromVC; // @synthesize fromVC=_fromVC;
@property(retain, nonatomic) WebViewInteractor *interactor; // @synthesize interactor=_interactor;
@property(copy, nonatomic) NSURL *analyticsReferringURL; // @synthesize analyticsReferringURL=_analyticsReferringURL;
@property(copy, nonatomic) NSString *analyticsReason; // @synthesize analyticsReason=_analyticsReason;
- (id)originalRequestURL;
- (void)refresh;
- (void)setWebNavigationControlsNeedUpdate;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webNavigationControlsUserDidTapForward:(id)arg1;
- (void)webNavigationControlsUserDidTapBack:(id)arg1;
- (void)loadRequest:(id)arg1;
- (void)webViewEstimatedProgressDidChange;
- (id)currentURL;
@property(readonly, nonatomic) id <_TtP18AnalyticsFramework15AnalyticsLogger_> analyticsLogger;
@property(readonly, nonatomic) AnalyticsEvent *screenViewEvent;
@property(readonly, copy, nonatomic) NSString *analyticsScreenViewName;
@property(readonly, copy, nonatomic) NSString *analyticsPageType;
- (id)analyticsURL;
- (void)didTapBack;
- (void)layoutViewsForFrame:(struct CGRect)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) RedditService *service;
- (id)initWithAccountContext:(id)arg1 subreddit:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

