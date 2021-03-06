//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Funny/MPBannerAdManagerDelegate-Protocol.h>
#import <Funny/MPMoPubAd-Protocol.h>

@class CLLocation, MPBannerAdManager, NSDictionary, NSString;
@protocol MPAdViewDelegate;

@interface MPAdView : UIView <MPBannerAdManagerDelegate, MPMoPubAd>
{
    int _allowedNativeAdOrientation;
    id <MPAdViewDelegate> _delegate;
    NSString *_adUnitId;
    NSString *_keywords;
    NSString *_userDataKeywords;
    CLLocation *_location;
    NSDictionary *_localExtras;
    MPBannerAdManager *_adManager;
    UIView *_adContentView;
    struct CGSize _maxAdSize;
}

+ (struct CGSize)sizeForContainer:(id)arg1 adSize:(struct CGSize)arg2 adUnitId:(id)arg3;
+ (id)defaultKeywords;
+ (id)ageAndGenderUserDataKeywords;
- (void).cxx_destruct;
@property(nonatomic) int allowedNativeAdOrientation; // @synthesize allowedNativeAdOrientation=_allowedNativeAdOrientation;
@property(nonatomic) __weak UIView *adContentView; // @synthesize adContentView=_adContentView;
@property(retain, nonatomic) MPBannerAdManager *adManager; // @synthesize adManager=_adManager;
@property(copy, nonatomic) NSDictionary *localExtras; // @synthesize localExtras=_localExtras;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *userDataKeywords; // @synthesize userDataKeywords=_userDataKeywords;
@property(copy, nonatomic) NSString *keywords; // @synthesize keywords=_keywords;
@property(nonatomic) struct CGSize maxAdSize; // @synthesize maxAdSize=_maxAdSize;
@property(copy, nonatomic) NSString *adUnitId; // @synthesize adUnitId=_adUnitId;
@property(nonatomic) __weak id <MPAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)impressionDidFireWithImpressionData:(id)arg1 adResponseData:(id)arg2;
- (void)userWillLeaveApplication;
- (void)userActionDidFinish;
- (void)userActionWillBegin;
- (void)managerDidLoadAd:(id)arg1;
- (void)managerDidFailToLoadAdWithError:(id)arg1;
- (void)invalidateContentView;
- (id)adTargeting;
- (id)viewControllerForPresentingModalView;
- (struct CGSize)containerSize;
- (id)bannerDelegate;
- (id)banner;
- (int)allowedNativeAdsOrientation;
- (void)unlockNativeAdsOrientation;
- (void)lockNativeAdsToOrientation:(int)arg1;
- (void)startAutomaticallyRefreshingContents;
- (void)stopAutomaticallyRefreshingContents;
- (void)forceRefreshAd;
- (void)refreshAd;
- (void)loadAdWithMaxAdSize:(struct CGSize)arg1;
- (void)loadAd;
- (void)rotateToOrientation:(long long)arg1;
- (struct CGSize)adContentViewSize;
- (void)centerAdContentView;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithAdUnitId:(id)arg1 size:(struct CGSize)arg2;
- (id)initWithAdUnitId:(id)arg1;
@property(nonatomic) unsigned long long if_headerBidderParameterIndex;
- (_Bool)isFirstLook;
@property(nonatomic) _Bool isSecondInstance;
- (void)if_nofityAboutDidLoadAd:(id)arg1;
- (void)if_invalidate;
- (void)if_present;
- (void)if_cancelLoadingAd;
@property(nonatomic) _Bool if_manuallyControlPresenting;
- (id)valueForKey:(id)arg1 key:(id)arg2;
- (id)dataFromView:(id)arg1;
- (id)if_tierRotationRateInMilliseconds;
- (id)if_screenshotData;
- (id)if_adManager;
- (id)if_cachedBannerCustomEvent;
- (id)if_bannerCustomEvent;
- (id)if_cachedTierOriginalId;
- (id)if_tierOriginalId;
- (id)if_cachedTierId;
- (id)if_tierId;
- (id)if_cachedNetworkName;
- (id)if_networkName;
- (id)if_cachedTierName;
- (id)if_tierName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

