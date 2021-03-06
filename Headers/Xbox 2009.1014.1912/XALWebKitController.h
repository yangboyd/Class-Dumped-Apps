//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Xal/WKNavigationDelegate-Protocol.h>

@class NSString, NSURL;
@protocol XALWebKitControllerDelegate;

__attribute__((visibility("hidden")))
@interface XALWebKitController : NSObject <WKNavigationDelegate>
{
    id <XALWebKitControllerDelegate> _delegate;
    NSURL *_finalUrl;
}

+ (void)deleteCookiesFromViewForDomains:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
@property(readonly) NSURL *finalUrl; // @synthesize finalUrl=_finalUrl;
@property __weak id <XALWebKitControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)handleFailedNavigation:(id)arg1 error:(id)arg2;
- (id)initWithFinalURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

