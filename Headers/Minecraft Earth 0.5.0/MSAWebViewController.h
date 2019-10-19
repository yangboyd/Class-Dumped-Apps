//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSAViewController.h"

#import "UIWebViewDelegate.h"

@class NSMutableDictionary, NSString, NSURLRequest, UIActivityIndicatorView, UIWebView;

@interface MSAWebViewController : MSAViewController <UIWebViewDelegate>
{
    UIWebView *_web;
    UIActivityIndicatorView *_progress;
    unsigned long long _activityCounter;
    _Bool _initialPageDisplayed;
    NSString *_authSessionScope;
    NSString *_domain;
    NSMutableDictionary *_callbackData;
    CDUnknownBlockType _callback;
    NSURLRequest *_request;
}

@property(retain) UIActivityIndicatorView *progress; // @synthesize progress=_progress;
@property(retain) UIWebView *webView; // @synthesize webView=_web;
- (void).cxx_destruct;
- (void)stopActivity;
- (void)showActivity;
- (void)readyToShow;
- (void)onReadyToDismissWithCallbackData:(id)arg1;
- (void)deleteCookiesFromView;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)cancel:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithDomain:(id)arg1 scope:(id)arg2 request:(id)arg3 callback:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

