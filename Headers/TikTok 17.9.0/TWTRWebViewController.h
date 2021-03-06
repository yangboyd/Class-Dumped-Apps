//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, NSURLRequest, WKWebView;

@interface TWTRWebViewController : UIViewController <WKNavigationDelegate>
{
    _Bool _showCancelButton;
    NSURLRequest *_request;
    CDUnknownBlockType _shouldStartLoadWithRequest;
    CDUnknownBlockType _errorHandler;
    WKWebView *_webView;
    CDUnknownBlockType _cancelCompletion;
}

@property(copy, nonatomic) CDUnknownBlockType cancelCompletion; // @synthesize cancelCompletion=_cancelCompletion;
@property(nonatomic) _Bool showCancelButton; // @synthesize showCancelButton=_showCancelButton;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) CDUnknownBlockType errorHandler; // @synthesize errorHandler=_errorHandler;
@property(copy, nonatomic) CDUnknownBlockType shouldStartLoadWithRequest; // @synthesize shouldStartLoadWithRequest=_shouldStartLoadWithRequest;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
- (void)enableCancelButtonWithCancelCompletion:(CDUnknownBlockType)arg1;
- (void)cancel;
- (_Bool)whitelistedDomain:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)initWebView;
- (void)loadView;
- (void)load;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

