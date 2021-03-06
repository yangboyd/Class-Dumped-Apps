//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/IMCoreAd.h>

#import <Funny/ASNativeAdMangerDelegate-Protocol.h>

@class IMNativeAdManager, NSString;
@protocol IMNativeCoreAdDelegate;

@interface IMNativeCoreAd : IMCoreAd <ASNativeAdMangerDelegate>
{
    id <IMNativeCoreAdDelegate> _delegate;
    IMNativeAdManager *_manager;
}

@property(retain, nonatomic) IMNativeAdManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <IMNativeCoreAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)getAdType;
- (void)nativeAdManagerAudioStateChange:(_Bool)arg1;
- (void)nativeAdManagerAdImpressed:(id)arg1;
- (long long)adStateForAdManager:(id)arg1;
- (void)adManagerWillLeaveApplication:(id)arg1;
- (void)adManagerMediaDidComplete:(id)arg1;
- (void)adManagerAdWasSkipped:(id)arg1;
- (void)adManager:(id)arg1 hasInteractionWithParams:(id)arg2;
- (void)adManagerDidFireAdImpression:(id)arg1;
- (void)adManagerDidDismiss:(id)arg1;
- (void)adManagerWillDismiss:(id)arg1;
- (void)adManagerDidPresent:(id)arg1;
- (void)adManagerWillPresent:(id)arg1;
- (void)adManagerDidLoad:(id)arg1;
- (void)adManager:(id)arg1 didFailWithError:(id)arg2;
- (void)reportErrorToDelegate:(id)arg1;
- (id)createManager;
- (id)customAdContent;
- (id)creativeId;
- (_Bool)isAppDownload;
- (id)adLandingPageUrl;
- (id)adRating;
- (id)adCtaText;
- (id)adIcon;
- (id)adDescription;
- (id)adTitle;
- (void)fireClientFillBeaconForInline;
- (void)reportAdClickAndOpenLandingPage;
- (void)recyclePrimaryView;
- (id)primaryViewOfWidth:(double)arg1;
- (id)initWithAdSettings:(id)arg1 withDelegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

