//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, SPTLoginCredentials, SPTLoginIdentifier, SPTLoginOptions, SPTLoginParentChild, SPTSerializableCredentials;
@protocol SPTCoreLoginControllerDelegate, SPTCoreLoginIdentifierControllerDelegate;

@protocol SPTCoreLoginController <NSObject>
@property(nonatomic) __weak id <SPTCoreLoginIdentifierControllerDelegate> loginIdentifierControllerDelegate;
@property(nonatomic) __weak id <SPTCoreLoginControllerDelegate> loginControllerDelegate;
- (void)eraseOfflineUser:(NSString *)arg1;
- (void)forgetStoredCredentials;
- (_Bool)hasStoredCredentials;
- (SPTSerializableCredentials *)serializableCredentialsAndCanonicalUsername:(id *)arg1;
- (SPTLoginCredentials *)storedCredentialsAndCanonicalUsername:(id *)arg1;
- (void)loginWithParentChild:(SPTLoginParentChild *)arg1 options:(SPTLoginOptions *)arg2;
- (void)loginWithCredentials:(SPTLoginCredentials *)arg1 options:(SPTLoginOptions *)arg2;
- (void)requestNewChallenge;
- (void)respondToIdentityLoginChallengeWithCode:(NSString *)arg1;
- (void)loginWithIdentifier:(SPTLoginIdentifier *)arg1;
@end

