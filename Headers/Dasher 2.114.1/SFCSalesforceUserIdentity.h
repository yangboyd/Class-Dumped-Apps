//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOpenIDUserInfo.h>

@class CNContact, NSArray, NSDate, NSDictionary, NSString, NSURL, SFCSalesforceMobilePolicy;

@interface SFCSalesforceUserIdentity : SFCOpenIDUserInfo
{
    _Bool _appInstalled;
    _Bool _assertedUser;
    _Bool _active;
    _Bool _lightningLoginUser;
    _Bool _mobilePhoneVerified;
    NSURL *_identityUrl;
    NSString *_userId;
    NSString *_organizationId;
    NSString *_username;
    NSString *_nickName;
    NSString *_displayName;
    NSString *_userType;
    NSString *_language;
    double _utcOffset;
    NSDate *_lastModifiedDate;
    NSArray *_pushServiceType;
    NSURL *_photoPictureUrl;
    NSURL *_photoThumbnailUrl;
    NSString *_addressStreet;
    NSString *_addressCity;
    NSString *_addressState;
    NSString *_addressCountry;
    NSString *_addressZip;
    NSString *_mobilePhone;
    NSDictionary *_urls;
    NSDictionary *_customPermissions;
    SFCSalesforceMobilePolicy *_mobilePolicy;
}

@property(readonly, nonatomic) SFCSalesforceMobilePolicy *mobilePolicy; // @synthesize mobilePolicy=_mobilePolicy;
@property(readonly, copy, nonatomic) NSDictionary *customPermissions; // @synthesize customPermissions=_customPermissions;
@property(readonly, copy, nonatomic) NSDictionary *urls; // @synthesize urls=_urls;
@property(readonly, nonatomic, getter=isMobilePhoneVerified) _Bool mobilePhoneVerified; // @synthesize mobilePhoneVerified=_mobilePhoneVerified;
@property(readonly, copy, nonatomic) NSString *mobilePhone; // @synthesize mobilePhone=_mobilePhone;
@property(readonly, copy, nonatomic) NSString *addressZip; // @synthesize addressZip=_addressZip;
@property(readonly, copy, nonatomic) NSString *addressCountry; // @synthesize addressCountry=_addressCountry;
@property(readonly, copy, nonatomic) NSString *addressState; // @synthesize addressState=_addressState;
@property(readonly, copy, nonatomic) NSString *addressCity; // @synthesize addressCity=_addressCity;
@property(readonly, copy, nonatomic) NSString *addressStreet; // @synthesize addressStreet=_addressStreet;
@property(readonly, nonatomic, getter=isLightningLoginUser) _Bool lightningLoginUser; // @synthesize lightningLoginUser=_lightningLoginUser;
@property(readonly, nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
@property(readonly, nonatomic, getter=isAssertedUser) _Bool assertedUser; // @synthesize assertedUser=_assertedUser;
@property(readonly, nonatomic) NSURL *photoThumbnailUrl; // @synthesize photoThumbnailUrl=_photoThumbnailUrl;
@property(readonly, nonatomic) NSURL *photoPictureUrl; // @synthesize photoPictureUrl=_photoPictureUrl;
@property(readonly, copy, nonatomic) NSArray *pushServiceType; // @synthesize pushServiceType=_pushServiceType;
@property(readonly, nonatomic, getter=isAppInstalled) _Bool appInstalled; // @synthesize appInstalled=_appInstalled;
@property(readonly, nonatomic) NSDate *lastModifiedDate; // @synthesize lastModifiedDate=_lastModifiedDate;
@property(readonly, nonatomic) double utcOffset; // @synthesize utcOffset=_utcOffset;
@property(readonly, copy, nonatomic) NSString *language; // @synthesize language=_language;
@property(readonly, copy, nonatomic) NSString *userType; // @synthesize userType=_userType;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, copy, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, copy, nonatomic) NSString *organizationId; // @synthesize organizationId=_organizationId;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(readonly, copy, nonatomic) NSURL *identityUrl; // @synthesize identityUrl=_identityUrl;
- (void).cxx_destruct;
- (Class)actionModelForPropertyName:(id)arg1 propertyClass:(Class)arg2 contents:(id)arg3;
- (id)accountIdentifier;
- (id)storageKeyPathForPropertyName:(id)arg1;
@property(readonly, nonatomic) CNContact *contact;

@end

