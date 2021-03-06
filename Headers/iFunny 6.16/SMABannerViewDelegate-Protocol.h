//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class NSError, SMABannerView, UIViewController;

@protocol SMABannerViewDelegate <NSObject>
- (void)bannerViewDidTTLExpire:(SMABannerView *)arg1;
- (UIViewController *)presentingViewControllerForBannerView:(SMABannerView *)arg1;

@optional
- (void)bannerViewDidImpress:(SMABannerView *)arg1;
- (void)bannerWillLeaveApplicationFromAd:(SMABannerView *)arg1;
- (void)bannerViewDidDismissModalContent:(SMABannerView *)arg1;
- (void)bannerViewDidPresentModalContent:(SMABannerView *)arg1;
- (void)bannerViewWillPresentModalContent:(SMABannerView *)arg1;
- (void)bannerView:(SMABannerView *)arg1 didFailWithError:(NSError *)arg2;
- (void)bannerViewDidClick:(SMABannerView *)arg1;
- (void)bannerViewDidLoad:(SMABannerView *)arg1;
@end

