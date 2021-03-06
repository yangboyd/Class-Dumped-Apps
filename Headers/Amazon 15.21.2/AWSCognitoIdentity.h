//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWSService.h"

#import "FABKit-Protocol.h"

@class AWSNetworking, AWSServiceConfiguration, NSString;

@interface AWSCognitoIdentity : AWSService <FABKit>
{
    AWSServiceConfiguration *_configuration;
    AWSNetworking *_networking;
}

+ (void)removeCognitoIdentityForKey:(id)arg1;
+ (id)CognitoIdentityForKey:(id)arg1;
+ (void)registerCognitoIdentityWithConfiguration:(id)arg1 forKey:(id)arg2;
+ (id)defaultCognitoIdentity;
+ (void)internalInitializeIfNeeded;
+ (id)kitDisplayVersion;
+ (id)bundleIdentifier;
@property(retain, nonatomic) AWSNetworking *networking; // @synthesize networking=_networking;
@property(retain, nonatomic) AWSServiceConfiguration *configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)updateIdentityPool:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)updateIdentityPool:(id)arg1;
- (void)untagResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)untagResource:(id)arg1;
- (void)unlinkIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)unlinkIdentity:(id)arg1;
- (void)unlinkDeveloperIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)unlinkDeveloperIdentity:(id)arg1;
- (void)tagResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)tagResource:(id)arg1;
- (void)setIdentityPoolRoles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)setIdentityPoolRoles:(id)arg1;
- (void)mergeDeveloperIdentities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)mergeDeveloperIdentities:(id)arg1;
- (void)lookupDeveloperIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)lookupDeveloperIdentity:(id)arg1;
- (void)listTagsForResource:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)listTagsForResource:(id)arg1;
- (void)listIdentityPools:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)listIdentityPools:(id)arg1;
- (void)listIdentities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)listIdentities:(id)arg1;
- (void)getOpenIdTokenForDeveloperIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getOpenIdTokenForDeveloperIdentity:(id)arg1;
- (void)getOpenIdToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getOpenIdToken:(id)arg1;
- (void)getIdentityPoolRoles:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getIdentityPoolRoles:(id)arg1;
- (void)getId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getId:(id)arg1;
- (void)getCredentialsForIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)getCredentialsForIdentity:(id)arg1;
- (void)describeIdentityPool:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)describeIdentityPool:(id)arg1;
- (void)describeIdentity:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)describeIdentity:(id)arg1;
- (void)deleteIdentityPool:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)deleteIdentityPool:(id)arg1;
- (void)deleteIdentities:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)deleteIdentities:(id)arg1;
- (void)createIdentityPool:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)createIdentityPool:(id)arg1;
- (id)invokeRequest:(id)arg1 HTTPMethod:(long long)arg2 URLString:(id)arg3 targetPrefix:(id)arg4 operationName:(id)arg5 outputClass:(Class)arg6;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

