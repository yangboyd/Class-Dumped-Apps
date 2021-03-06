//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPConsentDialogViewControllerDelegate-Protocol.h"

@class MPConsentDialogViewController, MPTimer, NSString;

@interface MPConsentManager : NSObject <MPConsentDialogViewControllerDelegate>
{
    NSString *_adUnitIdUsedForConsent;
    MPConsentDialogViewController *_consentDialogViewController;
    MPTimer *_nextUpdateTimer;
    double _syncFrequency;
}

+ (id)sharedManager;
@property(nonatomic) double syncFrequency; // @synthesize syncFrequency=_syncFrequency;
@property(retain, nonatomic) MPTimer *nextUpdateTimer; // @synthesize nextUpdateTimer=_nextUpdateTimer;
@property(retain, nonatomic) MPConsentDialogViewController *consentDialogViewController; // @synthesize consentDialogViewController=_consentDialogViewController;
@property(retain, nonatomic) NSString *adUnitIdUsedForConsent; // @synthesize adUnitIdUsedForConsent=_adUnitIdUsedForConsent;
- (void).cxx_destruct;
- (void)forceStatusShouldForceExplicitNo:(_Bool)arg1 shouldInvalidateConsent:(_Bool)arg2 shouldReacquireConsent:(_Bool)arg3 consentChangeReason:(id)arg4 shouldBroadcast:(_Bool)arg5;
- (_Bool)updateConsentStateWithParameters:(id)arg1;
- (_Bool)setCurrentStatus:(long long)arg1 reason:(id)arg2 shouldBroadcast:(_Bool)arg3;
- (_Bool)checkForWhitelistAllowedAndTransition;
- (_Bool)checkForDoNotTrackAndTransition;
- (void)onNextUpdateFiredWithTimer;
- (id)newNextUpdateTimer;
- (void)synchronizeConsentWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyConsentChangedTo:(long long)arg1 fromOldStatus:(long long)arg2 canCollectPii:(_Bool)arg3;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)consentDialogViewControllerWillDisappear:(id)arg1;
- (void)consentDialogViewControllerDidReceiveConsentResponse:(_Bool)arg1 consentDialogViewController:(id)arg2;
- (void)showConsentDialogFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadConsentDialogWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isConsentDialogLoaded;
- (void)revokeConsent;
- (void)grantConsent;
- (id)removeRegionFromLanguageCode:(id)arg1;
@property(nonatomic) _Bool shouldReacquireConsent;
@property(readonly, nonatomic) long long rawConsentStatus;
@property(readonly, nonatomic) _Bool isDoNotTrack;
@property(readonly, nonatomic) _Bool isConsentNeeded;
@property(readonly, copy, nonatomic) NSString *currentLanguageCode;
@property(readonly, nonatomic) _Bool canCollectPersonalInfo;
- (void)dealloc;
- (id)init;
@property(readonly, copy, nonatomic) NSString *vendorListVersion;
- (id)vendorListUrlWithISOLanguageCode:(id)arg1;
- (id)vendorListUrl;
@property(readonly, copy, nonatomic) NSString *privacyPolicyVersion;
- (id)privacyPolicyUrlWithISOLanguageCode:(id)arg1;
- (id)privacyPolicyUrl;
@property(readonly, copy, nonatomic) NSString *lastSynchronizedStatus;
@property(readonly, nonatomic) double lastChangedTimestampInMilliseconds;
@property(readonly, copy, nonatomic) NSString *lastChangedReason;
@property(readonly, nonatomic) _Bool isWhitelisted;
@property(readonly, nonatomic) long long isGDPRApplicable;
@property(readonly, copy, nonatomic) NSString *ifaForConsent;
@property(readonly, copy, nonatomic) NSString *iabVendorListHash;
@property(readonly, copy, nonatomic) NSString *iabVendorList;
@property(readonly, copy, nonatomic) NSString *extras;
@property(readonly, nonatomic) long long currentStatus;
@property(readonly, copy, nonatomic) NSString *consentedVendorListVersion;
@property(readonly, copy, nonatomic) NSString *consentedPrivacyPolicyVersion;
@property(readonly, copy, nonatomic) NSString *consentedIabVendorList;
- (id)urlWithFormat:(id)arg1 isoLanguageCode:(id)arg2;
- (void)updateAppConversionTracking;
- (void)removeIfa;
- (void)checkForIfaChange;
- (void)storeIfa;
- (void)handlePersonalDataOnStateChangeTo:(long long)arg1 fromOldStatus:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

