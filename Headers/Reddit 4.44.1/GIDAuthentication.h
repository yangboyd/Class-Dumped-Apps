//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDate, NSMutableArray, NSString;

@interface GIDAuthentication : NSObject <NSCoding>
{
    NSMutableArray *_authenticationHandlerQueue;
    NSString *_clientID;
    NSString *_accessToken;
    NSDate *_accessTokenExpirationDate;
    NSString *_refreshToken;
    NSString *_idToken;
    NSDate *_idTokenExpirationDate;
}

+ (id)dateWithNumber:(id)arg1;
+ (CDUnknownBlockType)authenticationHandlerWithAccessTokenHandler:(CDUnknownBlockType)arg1;
+ (id)decodedIdTokenFromString:(id)arg1;
@property(readonly, nonatomic) NSDate *idTokenExpirationDate; // @synthesize idTokenExpirationDate=_idTokenExpirationDate;
@property(readonly, nonatomic) NSString *idToken; // @synthesize idToken=_idToken;
@property(readonly, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, nonatomic) NSDate *accessTokenExpirationDate; // @synthesize accessTokenExpirationDate=_accessTokenExpirationDate;
@property(readonly, nonatomic) NSString *accessToken; // @synthesize accessToken=_accessToken;
@property(readonly, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)refreshTokensWithHandler:(CDUnknownBlockType)arg1;
- (void)getTokensWithHandler:(CDUnknownBlockType)arg1;
- (void)refreshAccessTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)getAccessTokenWithHandler:(CDUnknownBlockType)arg1;
- (id)fetcherAuthorizer;
- (id)GTMAuth;
- (id)initWithGTMAuth:(id)arg1;

@end

