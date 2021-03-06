//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SQPBFranklinApiAuthorizeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *URL; // @dynamic URL;
@property(copy, nonatomic) NSString *accessToken; // @dynamic accessToken;
@property(copy, nonatomic) NSString *code; // @dynamic code;
@property(copy, nonatomic) NSString *customerId; // @dynamic customerId;
@property(copy, nonatomic) NSString *enrollURL; // @dynamic enrollURL;
@property(copy, nonatomic) NSString *error; // @dynamic error;
@property(copy, nonatomic) NSString *errorDescription; // @dynamic errorDescription;
@property(copy, nonatomic) NSString *expiresAt; // @dynamic expiresAt;
@property(nonatomic) _Bool hasAccessToken; // @dynamic hasAccessToken;
@property(nonatomic) _Bool hasCode; // @dynamic hasCode;
@property(nonatomic) _Bool hasCustomerId; // @dynamic hasCustomerId;
@property(nonatomic) _Bool hasEnrollURL; // @dynamic hasEnrollURL;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasErrorDescription; // @dynamic hasErrorDescription;
@property(nonatomic) _Bool hasExpiresAt; // @dynamic hasExpiresAt;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasTokenType; // @dynamic hasTokenType;
@property(nonatomic) _Bool hasURL; // @dynamic hasURL;
@property(copy, nonatomic) NSString *state; // @dynamic state;
@property(copy, nonatomic) NSString *tokenType; // @dynamic tokenType;

@end

