//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WKWebView;

@interface FMEWebviewDockableEventsNotifier : NSObject
{
    WKWebView *_webview;
}

@property(nonatomic) __weak WKWebView *webview; // @synthesize webview=_webview;
- (void).cxx_destruct;
- (void)sendJavascriptCommand:(id)arg1 withEventName:(id)arg2 withMaxRetry:(unsigned long long)arg3;
- (void)notifyInitializationEvent:(id)arg1;
- (void)notifyDockableEvent:(id)arg1;
- (id)initWithWebview:(id)arg1;

@end

