//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKWebView.h>

@class AMIConfigurableWebViewDelegate;

@interface AMIConfigurableWebView : WKWebView
{
    AMIConfigurableWebViewDelegate *_configurableDelegate;
}

@property(retain, nonatomic) AMIConfigurableWebViewDelegate *configurableDelegate; // @synthesize configurableDelegate=_configurableDelegate;
- (void).cxx_destruct;
- (id)underlyingURL;
- (void)takeSnapshotWithConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)UIDelegate;
- (id)navigationDelegate;
- (id)backForwardList;
- (_Bool)allowsLinkPreview;
- (id)title;
- (struct __SecTrust *)serverTrust;
- (id)URL;
- (id)initWithDelegate:(id)arg1;

@end

