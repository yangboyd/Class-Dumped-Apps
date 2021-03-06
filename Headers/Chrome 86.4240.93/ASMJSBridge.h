//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChromeInternal/WKScriptMessageHandler-Protocol.h>

@class ASMWebViewURLChecker, NSString, WKWebView;
@protocol ASMWebviewDelegate;

@interface ASMJSBridge : NSObject <WKScriptMessageHandler>
{
    NSString *_callbackPrefix;
    id <ASMWebviewDelegate> _delegate;
    WKWebView *_webview;
    ASMWebViewURLChecker *_URLChecker;
}

+ (void)assertCondition:(_Bool)arg1 message:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ASMWebViewURLChecker *URLChecker; // @synthesize URLChecker=_URLChecker;
@property(nonatomic) __weak WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <ASMWebviewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)readURLFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)readNumberFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)readStringFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)JSObjectFromMessage:(id)arg1 withKey:(id)arg2 isOptional:(_Bool)arg3;
- (_Bool)URL:(id)arg1 isFromSecurityOrigin:(id)arg2;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (id)JSONFromObject:(id)arg1;
- (void)callUnsupportedMessageHandlerWithMessageBody:(id)arg1;
- (void)callMessageTypesHandlerWithMessageBody:(id)arg1;
- (_Bool)shouldEnableForURL:(id)arg1;
- (id)typeForMessage:(id)arg1;
- (id)initWithURLChecker:(id)arg1 callbackPrefix:(id)arg2;
- (id)supportedMessageTypes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

