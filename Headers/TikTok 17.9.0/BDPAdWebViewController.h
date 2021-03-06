//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDPBaseViewController.h"

#import "BDPAdWebViewNavigationDelegate-Protocol.h"
#import "BDPWebViewInjectProtocol-Protocol.h"

@class BDPAdWebViewComponent, BDPTrackerTimingEvent, BDPUniqueID, NSString;

@interface BDPAdWebViewController : BDPBaseViewController <BDPWebViewInjectProtocol, BDPAdWebViewNavigationDelegate>
{
    _Bool _hasRedirectDefaultPage;
    BDPAdWebViewComponent *_adWebView;
    CDUnknownBlockType _canGoBackChangedBlock;
    BDPUniqueID *_uniqueId;
    NSString *_url;
    long long _toolBarStyle;
    BDPTrackerTimingEvent *_loadTimingEvent;
}

+ (id)defaultStartPage;
@property(retain, nonatomic) BDPTrackerTimingEvent *loadTimingEvent; // @synthesize loadTimingEvent=_loadTimingEvent;
@property(nonatomic) _Bool hasRedirectDefaultPage; // @synthesize hasRedirectDefaultPage=_hasRedirectDefaultPage;
@property(nonatomic) long long toolBarStyle; // @synthesize toolBarStyle=_toolBarStyle;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) BDPUniqueID *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) CDUnknownBlockType canGoBackChangedBlock; // @synthesize canGoBackChangedBlock=_canGoBackChangedBlock;
@property(retain, nonatomic) BDPAdWebViewComponent *adWebView; // @synthesize adWebView=_adWebView;
- (void).cxx_destruct;
- (void)eventPageLoadResult:(id)arg1 errorMsg:(id)arg2;
- (void)eventPageLoadStart;
- (void)registerProtolIfNeeded;
- (void)adWebview:(id)arg1 didCheckUrl:(id)arg2 result:(unsigned long long)arg3;
- (void)adWebView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)adWebView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3 decisionHandler:(CDUnknownBlockType)arg4;
- (void)updateTitle;
- (void)updateNavigationBarStyle:(_Bool)arg1;
- (void)setupNavigationBar;
- (id)webViewController;
- (void)webViewOnDocumentReady;
- (void)loadUrl:(id)arg1;
- (void)setupWebView;
- (void)viewWillLayoutSubviews;
- (void)viewSafeAreaInsetsDidChange;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithUniqueId:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

