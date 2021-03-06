//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <VisaCheckoutSDK/WKScriptMessageHandler-Protocol.h>

@class NSString;

@interface JSBridge : NSObject <WKScriptMessageHandler>
{
    _Bool _allowSecurityCheckBypass;
}

@property(nonatomic) _Bool allowSecurityCheckBypass; // @synthesize allowSecurityCheckBypass=_allowSecurityCheckBypass;
- (void)dealloc;
- (void)sendMessageResponse:(id)arg1 message:(id)arg2 result:(id)arg3 webView:(id)arg4;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (void)forwarding:(id)arg1 receiving:(id)arg2;
- (void)observeForwardMessagesFor:(id)arg1 and:(id)arg2;
- (void)setupHandlers:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

