//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class NSMutableArray, NSString;

@interface ImportTokenRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessToken; // @dynamic accessToken;
@property(nonatomic) long long apiTime; // @dynamic apiTime;
@property(copy, nonatomic) NSString *apiToken; // @dynamic apiToken;
@property(copy, nonatomic) NSString *callbackURL; // @dynamic callbackURL;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(nonatomic) long long expireIn; // @dynamic expireIn;
@property(nonatomic) _Bool hasAccessToken; // @dynamic hasAccessToken;
@property(nonatomic) _Bool hasApiTime; // @dynamic hasApiTime;
@property(nonatomic) _Bool hasApiToken; // @dynamic hasApiToken;
@property(nonatomic) _Bool hasCallbackURL; // @dynamic hasCallbackURL;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasExpireIn; // @dynamic hasExpireIn;
@property(nonatomic) _Bool hasRefreshToken; // @dynamic hasRefreshToken;
@property(copy, nonatomic) NSString *refreshToken; // @dynamic refreshToken;
@property(retain, nonatomic) NSMutableArray *scopeArray; // @dynamic scopeArray;
@property(readonly, nonatomic) unsigned long long scopeArray_Count; // @dynamic scopeArray_Count;

@end

