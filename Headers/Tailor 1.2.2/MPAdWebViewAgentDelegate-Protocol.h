//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, MPWebView, NSString, UIViewController;

@protocol MPAdWebViewAgentDelegate <NSObject>
- (void)adActionDidFinish:(MPWebView *)arg1;
- (void)adActionWillLeaveApplication:(MPWebView *)arg1;
- (void)adActionWillBegin:(MPWebView *)arg1;
- (void)adDidFailToLoadAd:(MPWebView *)arg1;
- (void)adDidFinishLoadingAd:(MPWebView *)arg1;
- (void)adDidClose:(MPWebView *)arg1;
- (UIViewController *)viewControllerForPresentingModalView;
- (CLLocation *)location;
- (NSString *)adUnitId;
@end

