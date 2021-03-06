//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/ASCustomAdapterInstance.h>

#import <Funny/ALAdLoadDelegate-Protocol.h>

@class NSMutableDictionary, NSString;

@interface ASAppLovinInstance : ASCustomAdapterInstance <ALAdLoadDelegate>
{
    _Bool _didInitialize;
    Class _alSdkClass;
    id _alInterstitialZoneAd;
    unsigned long long _state;
    NSMutableDictionary *_assets;
    long long _timerLoopCount;
}

+ (void)failedWithAppLovinErrorCode:(int)arg1;
+ (void)requestInterstitialAdWithAsplcConfig:(id)arg1 withManager:(id)arg2;
+ (void)loadAppLovinAdWithVC:(_Bool)arg1 placementName:(id)arg2 asplcConfig:(id)arg3 adManager:(id)arg4 andALAdLoadDeleagte:(id)arg5;
+ (void)cleanUpCachedAdWithAsplcConfig:(id)arg1 withManager:(id)arg2;
+ (void)clearContextForRewarded:(_Bool)arg1;
+ (void)cleanUpNonVCAssets;
+ (void)cleanUpVCAssets;
+ (void)updateGDPRCosnsent:(id)arg1;
+ (void)initialSetupWithConfigArr:(id)arg1;
+ (_Bool)hasInitializedAppLovin;
+ (void)initializeAppLovin;
+ (id)instance;
@property(nonatomic) _Bool didInitialize; // @synthesize didInitialize=_didInitialize;
@property(nonatomic) long long timerLoopCount; // @synthesize timerLoopCount=_timerLoopCount;
@property(retain, nonatomic) NSMutableDictionary *assets; // @synthesize assets=_assets;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) id alInterstitialZoneAd; // @synthesize alInterstitialZoneAd=_alInterstitialZoneAd;
@property(retain, nonatomic) Class alSdkClass; // @synthesize alSdkClass=_alSdkClass;
- (void).cxx_destruct;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
- (void)cleanUp;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

