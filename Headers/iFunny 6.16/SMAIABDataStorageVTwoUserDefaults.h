//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/SMAGDPRDataStorageProtocol-Protocol.h>

@class NSArray, NSNumber, NSString, NSUserDefaults;

@interface SMAIABDataStorageVTwoUserDefaults : NSObject <SMAGDPRDataStorageProtocol>
{
    _Bool cmpPresent;
    NSUserDefaults *_userDefaults;
    long long subjectToGDPR;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool cmpPresent; // @synthesize cmpPresent;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
- (void)setUsPrivacyString:(id)arg1;
- (id)usPrivacyString;
@property(retain, nonatomic) NSArray *publisherRestrictions;
@property(retain, nonatomic) NSString *vendorConsentLi;
@property(retain, nonatomic) NSString *vendorConsents;
@property(retain, nonatomic) NSString *publisherCC;
@property(retain, nonatomic) NSNumber *purposeOneTreatment;
@property(retain, nonatomic) NSString *purposesLITransparency;
@property(retain, nonatomic) NSString *purposeConsents;
@property(retain, nonatomic) NSString *specialFeatureOptIns;
@property(nonatomic) _Bool useNonStandardStacks;
@property(nonatomic) _Bool isServerSpecific;
@property(retain, nonatomic) NSNumber *tcfPolicyVersion;
@property(retain, nonatomic) NSNumber *vendorListVersion;
@property(retain, nonatomic) NSString *consentLanguage;
@property(retain, nonatomic) NSNumber *consentScreen;
@property(retain, nonatomic) NSNumber *cmpVersion;
@property(retain, nonatomic) NSNumber *cmpID;
@property(retain, nonatomic) NSString *consentUpdatedDate;
@property(retain, nonatomic) NSString *consentCreatedDate;
@property(retain, nonatomic) NSNumber *consentVersion;
@property(nonatomic) long long subjectToGDPR; // @synthesize subjectToGDPR;
@property(retain, nonatomic) NSString *consentString;
- (void)parseConsentString:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

