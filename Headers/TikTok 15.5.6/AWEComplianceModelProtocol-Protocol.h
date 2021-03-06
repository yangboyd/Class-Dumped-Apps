//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AWEAlgoFreeInfoModel, AWEPersonalizedAdResponseModel, AWETermsConsentForRegisterInfoModel, NSArray, NSString;

@protocol AWEComplianceModelProtocol
@property(nonatomic) _Bool forcePrivateAccount;
@property(nonatomic) _Bool notifyPrivateAccount;
@property(copy, nonatomic) NSString *cmplEncryptStr;
@property(retain, nonatomic) AWEPersonalizedAdResponseModel *personalizedAdSettings;
@property(retain, nonatomic) AWETermsConsentForRegisterInfoModel *termsConsentForRegisterInfoModel;
@property(nonatomic) _Bool addTermsConsent;
@property(nonatomic) long long isSellingDataOptionEnabled;
@property(retain, nonatomic) AWEAlgoFreeInfoModel *algoFreeInfoModel;
@property(nonatomic) _Bool algoFreeEnabled;
@property(copy, nonatomic) NSString *aboutPrivacyPolicyUrl;
@property(nonatomic) long long TeenModeAlertCount;
@property(nonatomic) long long defautVPAContentChoice;
@property(copy, nonatomic) NSString *vpaInfoBarURL;
@property(nonatomic) _Bool enableVPA;
@property(retain, nonatomic) NSArray *blackList;
@property(copy, nonatomic) NSString *impressumUrl;
@property(nonatomic) _Bool enableImpressum;
@end

