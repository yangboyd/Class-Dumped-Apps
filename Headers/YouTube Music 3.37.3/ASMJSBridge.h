//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ASMScreenContext, NSString, WKWebView;
@protocol ASMWebviewDelegate;

@interface ASMJSBridge : NSObject
{
    ASMScreenContext *_context;
    NSString *_callbackPrefix;
    id <ASMWebviewDelegate> _delegate;
    WKWebView *_webview;
}

+ (void)assertCondition:(_Bool)arg1 message:(id)arg2;
@property(nonatomic) __weak WKWebView *webview; // @synthesize webview=_webview;
@property(nonatomic) __weak id <ASMWebviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)readURLFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)readNumberFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)readStringFromObject:(id)arg1 isNullable:(_Bool)arg2 isValidData:(_Bool *)arg3;
- (id)JSObjectFromMessage:(id)arg1 withKey:(id)arg2 isOptional:(_Bool)arg3;
- (_Bool)URL:(id)arg1 isFromSecurityOrigin:(id)arg2;
- (id)JSONFromObject:(id)arg1;
- (void)callUnsupportedMessageHandlerWithMessageBody:(id)arg1;
- (void)callMessageTypesHandlerWithMessageBody:(id)arg1;
- (_Bool)shouldEnableForURL:(id)arg1 context:(id)arg2;
- (id)typeForMessage:(id)arg1;
- (id)initWithContext:(id)arg1 callbackPrefix:(id)arg2;
- (id)supportedMessageTypes;

@end

