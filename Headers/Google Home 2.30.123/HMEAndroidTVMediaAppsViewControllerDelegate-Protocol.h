//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCAORLinkableApplication, HMEAndroidTVMediaAppsViewController, NSMutableArray, NSString, NSURL;

@protocol HMEAndroidTVMediaAppsViewControllerDelegate <NSObject>
- (void)mediaTVAppsDidTapLearnMoreButton:(HMEAndroidTVMediaAppsViewController *)arg1 requiredMediaServices:(NSString *)arg2;
- (void)mediaTVAppsDidTapRetry:(HMEAndroidTVMediaAppsViewController *)arg1;
- (void)mediaTVApps:(HMEAndroidTVMediaAppsViewController *)arg1 didTapBannerURL:(NSURL *)arg2 forMediaApp:(GCAORLinkableApplication *)arg3;
- (void)mediaTVApps:(HMEAndroidTVMediaAppsViewController *)arg1 didShowBannerForMediaApp:(GCAORLinkableApplication *)arg2;
- (void)mediaTVApps:(HMEAndroidTVMediaAppsViewController *)arg1 didTapBannerButtonForMediaApp:(GCAORLinkableApplication *)arg2;
- (void)mediaTVApps:(HMEAndroidTVMediaAppsViewController *)arg1 didTapLinkableApplication:(GCAORLinkableApplication *)arg2;
- (void)mediaTVAppsDidTapBack:(HMEAndroidTVMediaAppsViewController *)arg1;
- (void)mediaTVAppsDidTapSponsorLabel:(HMEAndroidTVMediaAppsViewController *)arg1;
- (void)mediaTVAppsDidTapNext:(HMEAndroidTVMediaAppsViewController *)arg1 withUsersSelections:(NSMutableArray *)arg2;
@end

