//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MPUBMoatBridge.h"

#import "MPUBMoatBridgeProtocol-Protocol.h"

@class NSMutableArray, NSString, WKWebView;

@interface MPUBMoatWKWebViewBridge : MPUBMoatBridge <MPUBMoatBridgeProtocol>
{
    NSString *_videoTrackerName;
    WKWebView *_webView;
    NSMutableArray *_queuedCalls;
}

@property(retain) NSMutableArray *queuedCalls; // @synthesize queuedCalls=_queuedCalls;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(retain) NSString *videoTrackerName; // @synthesize videoTrackerName=_videoTrackerName;
- (void).cxx_destruct;
- (void)flushQueue;
- (void)queueEvent:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (id)serializeEvent:(id)arg1;
- (id)checkAndFormatEvent:(id)arg1;
- (void)handleJSResponse:(id)arg1;
- (void)checkAndSendJS:(id)arg1;
- (id)initWithWebView:(id)arg1 forNativeAd:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

