//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPViewController.h"

#import "SPTPageController-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, NSURL, NSURLRequest, SPTProgressView, UIWebView;
@protocol SPTAlertController, SPTPageContainer;

@interface TermsViewController : SPViewController <UIWebViewDelegate, SPTPageController>
{
    _Bool _hasLoadedFirstPage;
    UIWebView *_webView;
    NSURL *_viewURI;
    NSURLRequest *_initialRequest;
    SPTProgressView *_progressView;
    id <SPTAlertController> _alertController;
}

@property(retain, nonatomic) id <SPTAlertController> alertController; // @synthesize alertController=_alertController;
@property(retain, nonatomic) SPTProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSURLRequest *initialRequest; // @synthesize initialRequest=_initialRequest;
@property(retain, nonatomic) NSURL *viewURI; // @synthesize viewURI=_viewURI;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (id)URI;
- (_Bool)automaticallyAdjustsScrollViewInsets;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)refresh;
- (void)loadURL:(id)arg1;
- (void)showSCTAInformation;
- (void)showLicensingInformation;
- (void)showVoiceTermsAndConditions;
- (void)showPrivacyPolicy;
- (void)showTermsAndConditions;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithAlertController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

