//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <CardinalMobile/WKNavigationDelegate-Protocol.h>

@class NSError, NSObject, NSString, NSURLRequest, NSURLResponse, WKWebView;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface CMWebBrowserOperation : NSOperation <WKNavigationDelegate>
{
    WKWebView *_webView;
    NSObject<OS_dispatch_semaphore> *_okToCompleteOperation;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSError *_error;
    CDUnknownBlockType _responseHandler;
}

@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *okToCompleteOperation; // @synthesize okToCompleteOperation=_okToCompleteOperation;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)main;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (_Bool)isAsynchronous;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

