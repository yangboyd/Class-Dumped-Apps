//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDate, NSSet, NSString, _TtC20ConsentStringBuilder13ConsentString, _TtC20ConsentStringBuilder15PurposesConsent, _TtC20ConsentStringBuilder20SpecialFeatureOptIns, _TtC20ConsentStringBuilder27PurposesLegitimateInterests, _TtC25FCFuncorpNetworkingiFunny25GlobalVendorsListResponse;

@protocol _TtP15FCAdvertisement20ConsentStringService_
- (void)rebuildTCFConsentStringIfNeededWithGlobalVendorsList:(_TtC25FCFuncorpNetworkingiFunny25GlobalVendorsListResponse *)arg1;
- (void)setIsGDPRApplies:(_Bool)arg1;
- (_TtC20ConsentStringBuilder13ConsentString *)buildTCFConsentStringWithDateCreated:(NSDate *)arg1 vendorListVersion:(long long)arg2 tcfPolicyVersion:(long long)arg3 specialFeatureOptIns:(_TtC20ConsentStringBuilder20SpecialFeatureOptIns *)arg4 purposesConsent:(_TtC20ConsentStringBuilder15PurposesConsent *)arg5 purposesLegitimateInterests:(_TtC20ConsentStringBuilder27PurposesLegitimateInterests *)arg6 consentVendorsIds:(NSSet *)arg7 legitimateVendorsIds:(NSSet *)arg8 error:(id *)arg9;
@property(nonatomic, copy) NSString *lastSuccessfullySentTCFString;
@property(nonatomic, retain) _TtC20ConsentStringBuilder13ConsentString *tcfString;
@property(nonatomic, copy) NSString *usPrivacyString;
- (void)setCommonUSPrivacyStringForAdNetworks;
- (void)setCommonConsentStringForAdNetworksWithIsGdprZone:(_Bool)arg1 isGdprAplicable:(_Bool)arg2 consentString:(NSString *)arg3;
@property(nonatomic, readonly) NSString *purposesBinaryString;
@property(nonatomic, readonly) NSString *vendorsBinaryString;
@property(nonatomic, readonly) NSString *currentConsentString;
@end

