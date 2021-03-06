//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"

@class MDCActivityIndicator, NSString, NSURL, UIToolbar, WKWebView;
@protocol HMEWebViewControllerDelegate, SSOIdentity, SSOService;

@interface HMEWebViewController : UIViewController <WKNavigationDelegate>
{
    _Bool _showToolbar;
    id <HMEWebViewControllerDelegate> _delegate;
    NSURL *_URL;
    id <SSOIdentity> _identity;
    id <SSOService> _SSOService;
    WKWebView *_webView;
    UIToolbar *_topToolbar;
    MDCActivityIndicator *_spinner;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showToolbar; // @synthesize showToolbar=_showToolbar;
@property(readonly, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIToolbar *topToolbar; // @synthesize topToolbar=_topToolbar;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak id <HMEWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)cancelButtonTapped;
- (void)beginInitialRequest;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 identity:(id)arg2 SSOService:(id)arg3 showToolbar:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

