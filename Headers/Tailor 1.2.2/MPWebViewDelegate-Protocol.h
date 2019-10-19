//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MPWebView, NSError, NSURLRequest;

@protocol MPWebViewDelegate <NSObject>

@optional
- (void)webView:(MPWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webViewDidFinishLoad:(MPWebView *)arg1;
- (void)webViewDidStartLoad:(MPWebView *)arg1;
- (_Bool)webView:(MPWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
@end

