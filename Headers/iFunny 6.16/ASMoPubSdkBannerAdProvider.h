//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomBannerAdProvider.h>

#import <Funny/MPAdViewDelegate-Protocol.h>

@class NSString;

@interface ASMoPubSdkBannerAdProvider : ASCustomBannerAdProvider <MPAdViewDelegate>
{
    _Bool _adLoaded;
    _Bool _adFailed;
    id _mpAdView;
    id _loadedMPView;
}

@property(retain, nonatomic) id loadedMPView; // @synthesize loadedMPView=_loadedMPView;
@property(nonatomic) _Bool adFailed; // @synthesize adFailed=_adFailed;
@property(nonatomic) _Bool adLoaded; // @synthesize adLoaded=_adLoaded;
@property(retain, nonatomic) id mpAdView; // @synthesize mpAdView=_mpAdView;
- (void).cxx_destruct;
- (void)willLeaveApplicationFromAd:(id)arg1;
- (void)didDismissModalViewForAd:(id)arg1;
- (void)willPresentModalViewForAd:(id)arg1;
- (void)adViewDidFailToLoadAd:(id)arg1;
- (void)adViewDidLoadAd:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)cancel;
- (void)cleanupAd;
- (void)terminatePartnerAd;
- (id)partnerAdView;
- (void)showPartnerAd;
- (_Bool)hasPartnerAdFailedToLoad;
- (_Bool)hasPartnerAdLoaded;
- (void)loadPartnerAd;
- (_Bool)hasPartnerAdFailedToInitialize;
- (_Bool)hasPartnerAdInitialized;
- (void)initializePartnerAd;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

