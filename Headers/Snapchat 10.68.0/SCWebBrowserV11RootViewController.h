//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SIGSubscreenViewController.h"

#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"
#import "SCWebBrowser-Protocol.h"
#import "SCWebBrowserV11ToolbarDelegate-Protocol.h"
#import "SCWebBrowsingURLInterceptorDelegate-Protocol.h"
#import "SIGActionSheetDelegate-Protocol.h"
#import "SIGHeaderDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSDictionary, NSMutableSet, NSNumber, NSOperationQueue, NSString, NSURL, SCSafeBrowsingWarningView, SCWebBrowserConfig, SCWebBrowserV11Toolbar, SCWebBrowsingJavaScriptBridge, SCWebBrowsingScriptPerformanceMetrics, SIGActionSheet, UILayoutGuide, UIProgressView, WKWebView;
@protocol SCWebBrowserDelegate, SCWebBrowsingURLChecker, SCWebBrowsingURLInterceptor;

@interface SCWebBrowserV11RootViewController : SIGSubscreenViewController <WKUIDelegate, WKNavigationDelegate, SCWebBrowserV11ToolbarDelegate, SCSafeBrowsingWarningViewDelegate, SIGActionSheetDelegate, SCWebBrowsingURLInterceptorDelegate, SIGHeaderDelegate, SCWebBrowser>
{
    _Bool _didCompleteInitialLoad;
    _Bool _isViewVisible;
    _Bool _isOffScreen;
    _Bool _isNavigationInProgress;
    WKWebView *_webview;
    SCWebBrowserConfig *_config;
    SCWebBrowsingJavaScriptBridge *_jsBridge;
    SCWebBrowsingScriptPerformanceMetrics *_performanceMetricsScript;
    id <SCWebBrowserDelegate> _delegate;
    id <SCWebBrowsingURLInterceptor> _urlInterceptor;
    id <SCWebBrowsingURLChecker> _safeBrowsingChecker;
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    NSURL *_desiredURL;
    NSNumber *_initialLoadStatusCode;
    NSOperationQueue *_queueRunningWhileVisible;
    unsigned long long _committedNavigationCount;
    NSMutableSet *_navigationDecisionHandlers;
    UIProgressView *_progressView;
    SCWebBrowserV11Toolbar *_bottomBar;
    UILayoutGuide *_bottomToolbarLayoutGuide;
    SIGActionSheet *_connectionErrorActionSheet;
    NSDictionary *_javaScriptMetrics;
}

+ (_Bool)isPreloadingSupported;
+ (id)browserName;
@property(retain, nonatomic) NSDictionary *javaScriptMetrics; // @synthesize javaScriptMetrics=_javaScriptMetrics;
@property(nonatomic) __weak SIGActionSheet *connectionErrorActionSheet; // @synthesize connectionErrorActionSheet=_connectionErrorActionSheet;
@property(retain, nonatomic) UILayoutGuide *bottomToolbarLayoutGuide; // @synthesize bottomToolbarLayoutGuide=_bottomToolbarLayoutGuide;
@property(retain, nonatomic) SCWebBrowserV11Toolbar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSMutableSet *navigationDecisionHandlers; // @synthesize navigationDecisionHandlers=_navigationDecisionHandlers;
@property(nonatomic) unsigned long long committedNavigationCount; // @synthesize committedNavigationCount=_committedNavigationCount;
@property(nonatomic) _Bool isNavigationInProgress; // @synthesize isNavigationInProgress=_isNavigationInProgress;
@property(nonatomic) _Bool isOffScreen; // @synthesize isOffScreen=_isOffScreen;
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(retain, nonatomic) NSOperationQueue *queueRunningWhileVisible; // @synthesize queueRunningWhileVisible=_queueRunningWhileVisible;
@property(nonatomic) _Bool didCompleteInitialLoad; // @synthesize didCompleteInitialLoad=_didCompleteInitialLoad;
@property(retain, nonatomic) NSNumber *initialLoadStatusCode; // @synthesize initialLoadStatusCode=_initialLoadStatusCode;
@property(retain, nonatomic) NSURL *desiredURL; // @synthesize desiredURL=_desiredURL;
@property(retain, nonatomic) SCSafeBrowsingWarningView *safeBrowsingWarningView; // @synthesize safeBrowsingWarningView=_safeBrowsingWarningView;
@property(retain, nonatomic) id <SCWebBrowsingURLChecker> safeBrowsingChecker; // @synthesize safeBrowsingChecker=_safeBrowsingChecker;
@property(retain, nonatomic) id <SCWebBrowsingURLInterceptor> urlInterceptor; // @synthesize urlInterceptor=_urlInterceptor;
@property(nonatomic) __weak id <SCWebBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCWebBrowsingScriptPerformanceMetrics *performanceMetricsScript; // @synthesize performanceMetricsScript=_performanceMetricsScript;
@property(retain, nonatomic) SCWebBrowsingJavaScriptBridge *jsBridge; // @synthesize jsBridge=_jsBridge;
@property(readonly, nonatomic) SCWebBrowserConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) WKWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)webBrowsingURLInterceptorDidClickCancel:(id)arg1;
- (void)webBrowsingURLInterceptorDidClickOk:(id)arg1;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)_safeBrowsingFailedWithDecisionHandler:(CDUnknownBlockType)arg1;
- (void)_safeBrowsingSucceededWithURLType:(long long)arg1 decisionHandler:(CDUnknownBlockType)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webViewDidClose:(id)arg1;
- (void)learnMoreFromSafeBrowsing;
- (void)goBackFromSafeBrowsing;
- (void)actionSheetDidDismiss:(id)arg1;
- (void)_navigationFailed;
- (void)_connectionErrorExitPressed:(id)arg1;
- (void)_connectionErrorIgnorePressed:(id)arg1;
- (void)_connectionErrorRetryPressed:(id)arg1;
- (void)_showConnectionError;
- (void)updateScrollViewInsets;
- (id)scrollViewBottomAnchor;
- (id)scrollViewTopAnchor;
- (id)loadScrollView;
- (void)didSelectDismissalActionWithHeader:(id)arg1;
- (void)_createWebviewIfNeeded;
- (void)_hideProgressBar;
- (void)_showProgressBar;
- (void)_showShareActivity;
- (void)moreButtonPressed:(id)arg1;
- (void)_cancelCellPressed:(id)arg1;
- (void)_browserCellPressed:(id)arg1;
- (void)_shareCellPressed:(id)arg1;
- (void)toolbarShareButtonPressed;
- (void)toolbarSendButtonPressed;
- (void)toolbarForwardButtonPressed;
- (void)toolbarBackButtonPressed;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (void)_updateProgress;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) double estimatedProgress;
- (void)_updateVisibleQueueStatus;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)reset;
- (void)_showUnsafeURLViewForType:(long long)arg1;
- (void)loadURL:(id)arg1;
@property(readonly, nonatomic) NSNumber *visibleContentYOffset;
- (id)initWithConfig:(id)arg1 delegate:(id)arg2 safeBrowsingChecker:(id)arg3 urlInterceptor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

