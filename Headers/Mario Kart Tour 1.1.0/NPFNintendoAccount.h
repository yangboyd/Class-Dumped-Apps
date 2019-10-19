//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SFSafariViewControllerDelegate.h"

@class ASWebAuthenticationSession, NPFMii, NSArray, NSString, SFAuthenticationSession, SFSafariViewController;

@interface NPFNintendoAccount : NSObject <SFSafariViewControllerDelegate>
{
    _Bool _isExecuting;
    int _type;
    int _gender;
    NSString *_nintendoAccountId;
    NSString *_nickname;
    NSString *_language;
    NSString *_country;
    NSString *_region;
    NSString *_timezone;
    long long _birthdayYear;
    long long _birthdayMonth;
    long long _birthdayDay;
    NSString *_email;
    NSString *_nintendoNetworkId;
    NPFMii *_mii;
    NSString *_idToken;
    NSString *_accessToken;
    long long _expiresTime;
    NSString *_sessionToken;
    NSArray *_requestScope;
    CDUnknownBlockType _callback;
    NSString *_state;
    NSString *_verifier;
    SFSafariViewController *_loginViewController;
    SFAuthenticationSession *_session;
    ASWebAuthenticationSession *_webSession;
}

+ (id)makeTokenCodeChallenge:(id)arg1;
+ (id)getQueryParameterForAuth:(id)arg1 andState:(id)arg2 andVerifier:(id)arg3 andIdToken:(id)arg4;
+ (id)getRandomString:(int)arg1;
+ (id)getURLDecodeString:(id)arg1;
+ (_Bool)checkPassThroughNAError:(id)arg1;
+ (void)executeTokenEndpoint:(_Bool)arg1 withSessionToken:(id)arg2 andCallback:(CDUnknownBlockType)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) ASWebAuthenticationSession *webSession; // @synthesize webSession=_webSession;
@property(retain, nonatomic) SFAuthenticationSession *session; // @synthesize session=_session;
@property(retain, nonatomic) SFSafariViewController *loginViewController; // @synthesize loginViewController=_loginViewController;
@property(retain, nonatomic) NSString *verifier; // @synthesize verifier=_verifier;
@property(retain, nonatomic) NSString *state; // @synthesize state=_state;
@property(nonatomic) _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain, nonatomic) NSArray *requestScope; // @synthesize requestScope=_requestScope;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(nonatomic) long long expiresTime; // @synthesize expiresTime=_expiresTime;
@property(retain, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(retain, nonatomic) NSString *idToken; // @synthesize idToken=_idToken;
@property(retain, nonatomic) NPFMii *mii; // @synthesize mii=_mii;
@property(retain, nonatomic) NSString *nintendoNetworkId; // @synthesize nintendoNetworkId=_nintendoNetworkId;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(nonatomic) long long birthdayDay; // @synthesize birthdayDay=_birthdayDay;
@property(nonatomic) long long birthdayMonth; // @synthesize birthdayMonth=_birthdayMonth;
@property(nonatomic) long long birthdayYear; // @synthesize birthdayYear=_birthdayYear;
@property(retain, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
@property(retain, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *country; // @synthesize country=_country;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *nintendoAccountId; // @synthesize nintendoAccountId=_nintendoAccountId;
- (void).cxx_destruct;
- (void)resetNintendoAccount:(_Bool)arg1;
- (void)finish:(id)arg1 withNPFError:(id)arg2;
- (void)sendPurchaseEmailToParent:(id)arg1;
- (void)saveSessionToken;
- (void)reportErrorAndFinish:(id)arg1 message:(id)arg2;
- (void)getSessionToken:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)getSessionTokenCode:(id)arg1;
- (void)openURL:(id)arg1;
- (void)authorizeByNintendoAccount:(id)arg1 andProfileSource:(id)arg2 andIdToken:(id)arg3 andCallback:(CDUnknownBlockType)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

