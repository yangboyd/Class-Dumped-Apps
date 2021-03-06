//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface IGDeviceBasedLoginAccountStore : NSObject
{
    NSObject<OS_dispatch_queue> *_concurrentQueue;
    _Bool _isAA;
}

+ (id)sharedStoreWithIsAA:(_Bool)arg1;
- (void).cxx_destruct;
- (id)_loginTypeKeyForLoginType:(long long)arg1;
- (id)_oneTapBiometricsEnabledKeyForUserPk:(id)arg1;
- (id)_oneTapLastLogoutTimestampStringKeyForUserPk:(id)arg1;
- (id)_oneTapPhoneNumberStringKeyForUserPk:(id)arg1;
- (id)_oneTapEmailStringKeyForUserPk:(id)arg1;
- (id)_oneTapProfilePictureURLStringKeyForUserPk:(id)arg1;
- (id)_oneTapNonceStringKeyForUserPk:(id)arg1;
- (id)_oneTapUsernameStringKeyForUserPk:(id)arg1;
- (id)_deviceBasedLoginKeychainStore;
- (void)migrateToAA;
- (id)userDefaultsKey;
- (void)clear;
- (void)removeAllLoginDeferredAccounts;
- (void)removeLoginDeferredAccountsWithPKs:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)removeNonceForUserPK:(id)arg1 removePublicInfo:(_Bool)arg2 successHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)writeLoginDeferredAccount:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)writeAccountData:(id)arg1 forUserPK:(id)arg2 successHandler:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)writeBiometricsEnabled:(_Bool)arg1 forUserPK:(id)arg2;
- (void)writeLogoutTimestampForUserPK:(id)arg1;
- (void)fetchLoginDeferredAccountsWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)fetchUserPKtoCredentialMap:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchCredentialForUserPK:(id)arg1 successHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)fetchAccountsWithSuccessHandler:(CDUnknownBlockType)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (id)_initWithIsAA:(_Bool)arg1;

@end

