//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, SPTLogin5AppleSignInCredential, SPTLogin5ChallengeSolutions, SPTLogin5ClientInfo, SPTLogin5FacebookAccessToken, SPTLogin5GoogleSignInCredential, SPTLogin5OneTimeToken, SPTLogin5ParentChildCredential, SPTLogin5Password, SPTLogin5PhoneNumber, SPTLogin5SamsungSignInCredential, SPTLogin5StoredCredential;

@interface SPTLogin5LoginRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SPTLogin5AppleSignInCredential *appleSignInCredential; // @dynamic appleSignInCredential;
@property(retain, nonatomic) SPTLogin5ChallengeSolutions *challengeSolutions; // @dynamic challengeSolutions;
@property(retain, nonatomic) SPTLogin5ClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) SPTLogin5FacebookAccessToken *facebookAccessToken; // @dynamic facebookAccessToken;
@property(retain, nonatomic) SPTLogin5GoogleSignInCredential *googleSignInCredential; // @dynamic googleSignInCredential;
@property(nonatomic) _Bool hasChallengeSolutions; // @dynamic hasChallengeSolutions;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(copy, nonatomic) NSData *loginContext; // @dynamic loginContext;
@property(readonly, nonatomic) int loginMethodOneOfCase; // @dynamic loginMethodOneOfCase;
@property(retain, nonatomic) SPTLogin5OneTimeToken *oneTimeToken; // @dynamic oneTimeToken;
@property(retain, nonatomic) SPTLogin5ParentChildCredential *parentChildCredential; // @dynamic parentChildCredential;
@property(retain, nonatomic) SPTLogin5Password *password; // @dynamic password;
@property(retain, nonatomic) SPTLogin5PhoneNumber *phoneNumber; // @dynamic phoneNumber;
@property(retain, nonatomic) SPTLogin5SamsungSignInCredential *samsungSignInCredential; // @dynamic samsungSignInCredential;
@property(retain, nonatomic) SPTLogin5StoredCredential *storedCredential; // @dynamic storedCredential;

@end

