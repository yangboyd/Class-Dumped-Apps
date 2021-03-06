//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ServiceCore/SFCOutput.h>

#import <ServiceCore/SFCIdentityInformation-Protocol.h>

@class NSLocale, NSString, NSTimeZone, NSURL;

@interface SFCOpenIDUserInfo : SFCOutput <SFCIdentityInformation>
{
    _Bool _emailVerified;
    NSString *_subject;
    NSString *_name;
    NSString *_givenName;
    NSString *_familyName;
    NSString *_middleName;
    NSString *_nickname;
    NSString *_preferredUsername;
    NSURL *_profile;
    NSURL *_picture;
    NSURL *_website;
    NSString *_email;
    NSTimeZone *_timezone;
    NSLocale *_locale;
}

@property(readonly, copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) NSTimeZone *timezone; // @synthesize timezone=_timezone;
@property(readonly, nonatomic, getter=isEmailVerified) _Bool emailVerified; // @synthesize emailVerified=_emailVerified;
@property(readonly, copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(readonly, copy, nonatomic) NSURL *website; // @synthesize website=_website;
@property(readonly, copy, nonatomic) NSURL *picture; // @synthesize picture=_picture;
@property(readonly, copy, nonatomic) NSURL *profile; // @synthesize profile=_profile;
@property(readonly, copy, nonatomic) NSString *preferredUsername; // @synthesize preferredUsername=_preferredUsername;
@property(readonly, copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(readonly, copy, nonatomic) NSString *middleName; // @synthesize middleName=_middleName;
@property(readonly, copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property(readonly, copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *accountIdentifier; // @dynamic accountIdentifier;
- (id)storageKeyPathForPropertyName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

