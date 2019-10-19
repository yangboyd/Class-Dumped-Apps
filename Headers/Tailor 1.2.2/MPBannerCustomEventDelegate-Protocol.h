//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CLLocation, MPBannerCustomEvent, NSError, UIView, UIViewController;

@protocol MPBannerCustomEventDelegate <NSObject>
- (void)trackClick;
- (void)trackImpression;
- (void)bannerCustomEventWillLeaveApplication:(MPBannerCustomEvent *)arg1;
- (void)bannerCustomEventDidFinishAction:(MPBannerCustomEvent *)arg1;
- (void)bannerCustomEventWillBeginAction:(MPBannerCustomEvent *)arg1;
- (void)bannerCustomEvent:(MPBannerCustomEvent *)arg1 didFailToLoadAdWithError:(NSError *)arg2;
- (void)bannerCustomEvent:(MPBannerCustomEvent *)arg1 didLoadAd:(UIView *)arg2;
- (CLLocation *)location;
- (UIViewController *)viewControllerForPresentingModalView;
@end

