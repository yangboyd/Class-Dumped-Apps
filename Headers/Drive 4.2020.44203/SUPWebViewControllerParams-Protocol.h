//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/NSObject-Protocol.h>

@class MDCAppBarViewController, NSString, NSURL, WKWebViewConfiguration;
@protocol SUPContainerScheming, WKNavigationDelegate;

@protocol SUPWebViewControllerParams <NSObject>
@property(retain, nonatomic) id <SUPContainerScheming> containerScheme;
@property(nonatomic) __weak id <WKNavigationDelegate> webViewNavigationDelegate;
@property(retain, nonatomic) WKWebViewConfiguration *webViewConfig;
@property(retain, nonatomic) NSURL *baseURL;
@property(retain, nonatomic) NSString *HTML;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) MDCAppBarViewController *appBarViewController;
@end

