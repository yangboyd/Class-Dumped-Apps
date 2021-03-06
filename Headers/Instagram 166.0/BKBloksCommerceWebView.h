//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <InstagramAppCoreFramework/WKNavigationDelegate-Protocol.h>

@class NSString, WKWebView;
@protocol BKBloksCommerceWebViewDelegate;

@interface BKBloksCommerceWebView : UIView <WKNavigationDelegate>
{
    WKWebView *_webView;
    id <BKBloksCommerceWebViewDelegate> _delegate;
    NSString *_sourceURI;
}

+ (_Bool)dynamicallyLoadWebKitIfAvailable;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)visitSource;
- (void)didMoveToWindow;
- (void)setDelegate:(id)arg1;
- (void)setSourceURI:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

