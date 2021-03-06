//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSALTokenParameters.h>

@class MSALWebviewParameters, NSArray, NSDictionary, NSString, UIViewController, WKWebView;

@interface MSALInteractiveTokenParameters : MSALTokenParameters
{
    long long telemetryApiId;
    unsigned long long _promptType;
    NSString *_loginHint;
    NSDictionary *_extraQueryParameters;
    NSArray *_extraScopesToConsent;
    MSALWebviewParameters *_webviewParameters;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) MSALWebviewParameters *webviewParameters; // @synthesize webviewParameters=_webviewParameters;
@property(retain, nonatomic) NSArray *extraScopesToConsent; // @synthesize extraScopesToConsent=_extraScopesToConsent;
@property(retain, nonatomic) NSDictionary *extraQueryParameters; // @synthesize extraQueryParameters=_extraQueryParameters;
@property(retain, nonatomic) NSString *loginHint; // @synthesize loginHint=_loginHint;
@property(nonatomic) unsigned long long promptType; // @synthesize promptType=_promptType;
- (void)setTelemetryApiId:(long long)arg1;
- (long long)telemetryApiId;
@property(retain, nonatomic) WKWebView *customWebview;
@property(nonatomic) long long webviewType;
@property(nonatomic) long long presentationStyle;
@property(nonatomic) __weak UIViewController *parentViewController;
- (id)initWithScopes:(id)arg1;
- (id)initWithScopes:(id)arg1 webviewParameters:(id)arg2;

@end

