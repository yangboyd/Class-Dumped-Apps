//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/MPBannerCustomEvent.h>

#import <Funny/IMBannerDelegate-Protocol.h>

@class IMBanner, NSString;

@interface InMobiBannerCustomEvent : MPBannerCustomEvent <IMBannerDelegate>
{
    IMBanner *_inMobiBanner;
    NSString *_adIdentifier;
    NSString *_originalAdIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *originalAdIdentifier; // @synthesize originalAdIdentifier=_originalAdIdentifier;
@property(copy, nonatomic) NSString *adIdentifier; // @synthesize adIdentifier=_adIdentifier;
@property(retain, nonatomic) IMBanner *inMobiBanner; // @synthesize inMobiBanner=_inMobiBanner;
- (id)urlEncodedStringFromString:(id)arg1;
- (void)initializeWithAccounId:(id)arg1 isGdpr:(_Bool)arg2 canSendUserData:(_Bool)arg3;
- (void)dealloc;
- (void)invalidate;
- (void)banner:(id)arg1 rewardActionCompletedWithRewards:(id)arg2;
- (void)bannerDidPresentScreen:(id)arg1;
- (void)bannerWillDismissScreen:(id)arg1;
- (void)banner:(id)arg1 didInteractWithParams:(id)arg2;
- (void)userWillLeaveApplicationFromBanner:(id)arg1;
- (void)bannerDidDismissScreen:(id)arg1;
- (void)bannerWillPresentScreen:(id)arg1;
- (void)banner:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)bannerDidFinishLoading:(id)arg1;
- (void)requestAdWithSize:(struct CGSize)arg1 customEventInfo:(id)arg2 adMarkup:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

