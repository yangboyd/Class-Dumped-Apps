//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IWKPluginHandleResultObj, NSArray, NSString, UIViewController, WKFrameInfo, WKNavigationAction, WKPreviewElementInfo, WKWebView, WKWebViewConfiguration, WKWindowFeatures;

@protocol IWKPluginUIDelegate <NSObject>

@optional
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 commitPreviewingViewController:(UIViewController *)arg2;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 previewingViewControllerForElement:(WKPreviewElementInfo *)arg2 defaultActions:(NSArray *)arg3;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 shouldPreviewElement:(WKPreviewElementInfo *)arg2;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 runJavaScriptTextInputPanelWithPrompt:(NSString *)arg2 defaultText:(NSString *)arg3 initiatedByFrame:(WKFrameInfo *)arg4 completionHandler:(void (^)(NSString *))arg5;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 runJavaScriptConfirmPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(_Bool))arg4;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 runJavaScriptAlertPanelWithMessage:(NSString *)arg2 initiatedByFrame:(WKFrameInfo *)arg3 completionHandler:(void (^)(void))arg4;
- (IWKPluginHandleResultObj *)webViewDidClose:(WKWebView *)arg1;
- (IWKPluginHandleResultObj *)webView:(WKWebView *)arg1 createWebViewWithConfiguration:(WKWebViewConfiguration *)arg2 forNavigationAction:(WKNavigationAction *)arg3 windowFeatures:(WKWindowFeatures *)arg4;
@end

