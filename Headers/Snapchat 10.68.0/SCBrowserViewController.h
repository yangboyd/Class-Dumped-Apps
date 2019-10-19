//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCDownSwipableViewController.h"

#import "SCOperaWebViewDelegate-Protocol.h"
#import "SCSafeBrowsingWarningViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSSet, NSString, NSTimer, NSURL, NSURLRequest, SCBrowserLocationBarView, SCOperaWebView, SCSafeBrowsingWarningView, SCUserSession, UIButton, UIView, UIWebView;
@protocol SCBrowserViewControllerDelegate;

@interface SCBrowserViewController : SCDownSwipableViewController <SCOperaWebViewDelegate, UIScrollViewDelegate, SCSafeBrowsingWarningViewDelegate>
{
    _Bool _originalStatusBarHidden;
    _Bool _preLoadOK;
    NSSet *_validLoginHostNames;
    double _timeEnteredBackground;
    SCUserSession *_userSession;
    _Bool _navButtonsEnabled;
    _Bool _safebrowsingEnabled;
    _Bool _safeBrowsingisLoadingLearnMoreUrl;
    SCOperaWebView *_webView;
    UIWebView *_textWebView;
    id <SCBrowserViewControllerDelegate> _delegate;
    SCSafeBrowsingWarningView *_safeBrowsingWarningView;
    UIView *_preloadWrapperView;
    NSURLRequest *_request;
    NSString *_htmlString;
    NSString *_escapedText;
    NSURL *_baseURL;
    NSString *_defaultLocationBarText;
    SCBrowserLocationBarView *_currentLocationBar;
    UIButton *_backButton;
    UIButton *_forwardButton;
    UIButton *_exitButton;
    UIButton *_shareButton;
    double _scrollOffsetY;
    NSMutableArray *_safeBrowsingMaliciousUrlsBypassedThisSession;
    double _browserStartTime;
    long long _fromSource;
    NSMutableDictionary *_visitedURLs;
    double _progressBarValue;
    NSTimer *_progressBarTimer;
}

+ (_Bool)canOpenURL:(id)arg1;
@property(retain, nonatomic) NSTimer *progressBarTimer; // @synthesize progressBarTimer=_progressBarTimer;
@property(nonatomic) double progressBarValue; // @synthesize progressBarValue=_progressBarValue;
@property(retain) NSMutableDictionary *visitedURLs; // @synthesize visitedURLs=_visitedURLs;
@property(nonatomic) long long fromSource; // @synthesize fromSource=_fromSource;
@property(nonatomic) double browserStartTime; // @synthesize browserStartTime=_browserStartTime;
@property(nonatomic) _Bool safeBrowsingisLoadingLearnMoreUrl; // @synthesize safeBrowsingisLoadingLearnMoreUrl=_safeBrowsingisLoadingLearnMoreUrl;
@property(retain, nonatomic) NSMutableArray *safeBrowsingMaliciousUrlsBypassedThisSession; // @synthesize safeBrowsingMaliciousUrlsBypassedThisSession=_safeBrowsingMaliciousUrlsBypassedThisSession;
@property(nonatomic) double scrollOffsetY; // @synthesize scrollOffsetY=_scrollOffsetY;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) UIButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) SCBrowserLocationBarView *currentLocationBar; // @synthesize currentLocationBar=_currentLocationBar;
@property(retain, nonatomic) NSString *defaultLocationBarText; // @synthesize defaultLocationBarText=_defaultLocationBarText;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property(retain, nonatomic) NSString *escapedText; // @synthesize escapedText=_escapedText;
@property(retain, nonatomic) NSString *htmlString; // @synthesize htmlString=_htmlString;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) UIView *preloadWrapperView; // @synthesize preloadWrapperView=_preloadWrapperView;
@property(retain, nonatomic) SCSafeBrowsingWarningView *safeBrowsingWarningView; // @synthesize safeBrowsingWarningView=_safeBrowsingWarningView;
@property(nonatomic) _Bool safebrowsingEnabled; // @synthesize safebrowsingEnabled=_safebrowsingEnabled;
@property(nonatomic) _Bool navButtonsEnabled; // @synthesize navButtonsEnabled=_navButtonsEnabled;
@property(nonatomic) __weak id <SCBrowserViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIWebView *textWebView; // @synthesize textWebView=_textWebView;
@property(retain, nonatomic) SCOperaWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)learnMoreFromSafeBrowsing;
- (void)goBackFromSafeBrowsing;
- (void)hideSafeBrowsingWarning;
- (void)showSafeBrowsingWarning:(long long)arg1;
- (void)preloadSafeBrowsingWarningView;
- (void)runSafeBrowsingCheckOnUrl:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webView:(id)arg1 didUpdateProgress:(float)arg2;
- (void)webViewDidStartLoad:(id)arg1;
- (void)methodToUpdateProgress;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)exitPressed;
- (void)sharePressed;
- (void)forwardPressed;
- (void)backPressed;
- (void)hideView:(id)arg1 animated:(_Bool)arg2;
- (void)showView:(id)arg1 animated:(_Bool)arg2;
- (void)downSwipeSucceed;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)handlePanGestureRecognizer:(id)arg1;
- (double)downSwipeContentOffsetY;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)showInitialUrl;
- (void)updateUrl:(id)arg1;
- (void)presentButtons;
- (void)presentWebView:(id)arg1;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)prefersStatusBarHidden;
- (void)showLocationBar;
- (void)hideLocationBar;
- (void)preloadLocationBar;
- (void)preloadView;
- (void)preloadViewWithConfiguration:(id)arg1;
- (void)viewWillEnterForeground;
- (void)viewDidEnterBackground;
- (void)dismissToRootViewController;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)updateURLRequest:(id)arg1;
- (id)initWithUserSession:(id)arg1;
- (id)initWithPlainText:(id)arg1 titleText:(id)arg2 userSession:(id)arg3;
- (id)initWithHTMLString:(id)arg1 titleText:(id)arg2 baseURL:(id)arg3 userSession:(id)arg4;
- (id)initWithURLRequest:(id)arg1 fromSource:(long long)arg2 userSession:(id)arg3;
- (id)initWithURL:(id)arg1 fromSource:(long long)arg2 userSession:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

