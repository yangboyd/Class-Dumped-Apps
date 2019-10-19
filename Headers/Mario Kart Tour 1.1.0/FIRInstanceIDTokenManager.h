//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FIRInstanceIDStoreDelegate.h"

@class FIRInstanceIDAPNSInfo, FIRInstanceIDAuthService, FIRInstanceIDStore, NSOperationQueue, NSString;

@interface FIRInstanceIDTokenManager : NSObject <FIRInstanceIDStoreDelegate>
{
    FIRInstanceIDAuthService *_authService;
    FIRInstanceIDStore *_instanceIDStore;
    NSOperationQueue *_tokenOperations;
    FIRInstanceIDAPNSInfo *_currentAPNSInfo;
}

@property(retain, nonatomic) FIRInstanceIDAPNSInfo *currentAPNSInfo; // @synthesize currentAPNSInfo=_currentAPNSInfo;
@property(readonly, nonatomic) NSOperationQueue *tokenOperations; // @synthesize tokenOperations=_tokenOperations;
@property(retain, nonatomic) FIRInstanceIDStore *instanceIDStore; // @synthesize instanceIDStore=_instanceIDStore;
@property(retain, nonatomic) FIRInstanceIDAuthService *authService; // @synthesize authService=_authService;
- (void).cxx_destruct;
- (id)updateTokensToAPNSDeviceToken:(id)arg1 isSandbox:(_Bool)arg2;
- (_Bool)checkForTokenRefreshPolicy;
- (id)createDeleteOperationWithAuthorizedEntity:(id)arg1 scope:(id)arg2 checkinPreferences:(id)arg3 keyPair:(id)arg4 action:(long long)arg5;
- (id)createFetchOperationWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 keyPair:(id)arg4;
- (void)store:(id)arg1 didDeleteFCMScopedTokensForCheckin:(id)arg2;
- (void)stopAllTokenOperations;
- (_Bool)deleteAllTokensLocallyWithError:(id *)arg1;
- (void)deleteAllTokensWithKeyPair:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)cachedTokenInfoWithAuthorizedEntity:(id)arg1 scope:(id)arg2;
- (void)fetchNewTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 keyPair:(id)arg3 options:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)configureTokenOperations;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

