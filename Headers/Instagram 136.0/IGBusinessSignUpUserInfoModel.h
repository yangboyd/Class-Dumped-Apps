//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/NSCopying-Protocol.h>

@class IGFacebookPageInfo, NSArray, NSString;

@interface IGBusinessSignUpUserInfoModel : NSObject <NSCopying>
{
    _Bool _isGDPRRequired;
    NSString *_businessFullName;
    NSString *_username;
    NSString *_password;
    NSString *_email;
    NSString *_nationalPhoneNumber;
    NSString *_countryNumber;
    NSString *_categoryID;
    NSString *_confirmationCode;
    IGFacebookPageInfo *_pageInfo;
    NSArray *_suggestedUsernames;
    NSString *_gdprState;
    NSString *_tosVersion;
    NSString *_personalUserID;
}

@property(copy, nonatomic) NSString *personalUserID; // @synthesize personalUserID=_personalUserID;
@property(copy, nonatomic) NSString *tosVersion; // @synthesize tosVersion=_tosVersion;
@property(copy, nonatomic) NSString *gdprState; // @synthesize gdprState=_gdprState;
@property(nonatomic) _Bool isGDPRRequired; // @synthesize isGDPRRequired=_isGDPRRequired;
@property(copy, nonatomic) NSArray *suggestedUsernames; // @synthesize suggestedUsernames=_suggestedUsernames;
@property(retain, nonatomic) IGFacebookPageInfo *pageInfo; // @synthesize pageInfo=_pageInfo;
@property(copy, nonatomic) NSString *confirmationCode; // @synthesize confirmationCode=_confirmationCode;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
@property(copy, nonatomic) NSString *countryNumber; // @synthesize countryNumber=_countryNumber;
@property(copy, nonatomic) NSString *nationalPhoneNumber; // @synthesize nationalPhoneNumber=_nationalPhoneNumber;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(copy, nonatomic) NSString *businessFullName; // @synthesize businessFullName=_businessFullName;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

