//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GOOWebViewController, NSError, NSURL, NSURLRequest, UIView;

@protocol GOOWebViewControllerDelegate <NSObject>

@optional
- (void)webViewControllerShouldDismiss:(GOOWebViewController *)arg1;
- (_Bool)webViewController:(GOOWebViewController *)arg1 openURLInExternalBrowser:(NSURL *)arg2;
- (void)webViewController:(GOOWebViewController *)arg1 showActionsForURL:(NSURL *)arg2 fromRect:(struct CGRect)arg3 inView:(UIView *)arg4;
- (void)webViewController:(GOOWebViewController *)arg1 didFailWithError:(NSError *)arg2;
- (long long)webViewController:(GOOWebViewController *)arg1 shouldHandleAgeRestrictedURLRequest:(NSURLRequest *)arg2;
- (_Bool)webViewController:(GOOWebViewController *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webViewControllerDidFinishLoad:(GOOWebViewController *)arg1;
- (void)webViewControllerDidStartLoad:(GOOWebViewController *)arg1;
@end

