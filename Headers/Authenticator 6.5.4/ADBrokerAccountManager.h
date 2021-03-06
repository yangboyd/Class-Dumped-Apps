//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ADBrokerTokenCacheAccessor, MSIDAccountMetadataCacheAccessor, MSIDDefaultTokenCacheAccessor;

@interface ADBrokerAccountManager : NSObject
{
    ADBrokerTokenCacheAccessor *_authenticatorCacheAccessor;
    MSIDDefaultTokenCacheAccessor *_firstPartySDKCacheAccessor;
    ADBrokerTokenCacheAccessor *_brokerDefaultAccessor;
    MSIDAccountMetadataCacheAccessor *_brokerAccountMetadataAccessor;
    MSIDAccountMetadataCacheAccessor *_firstPartySDKAccountMetadataAccessor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) MSIDAccountMetadataCacheAccessor *firstPartySDKAccountMetadataAccessor; // @synthesize firstPartySDKAccountMetadataAccessor=_firstPartySDKAccountMetadataAccessor;
@property(retain, nonatomic) MSIDAccountMetadataCacheAccessor *brokerAccountMetadataAccessor; // @synthesize brokerAccountMetadataAccessor=_brokerAccountMetadataAccessor;
@property(retain, nonatomic) ADBrokerTokenCacheAccessor *brokerDefaultAccessor; // @synthesize brokerDefaultAccessor=_brokerDefaultAccessor;
@property(retain, nonatomic) MSIDDefaultTokenCacheAccessor *firstPartySDKCacheAccessor; // @synthesize firstPartySDKCacheAccessor=_firstPartySDKCacheAccessor;
@property(retain, nonatomic) ADBrokerTokenCacheAccessor *authenticatorCacheAccessor; // @synthesize authenticatorCacheAccessor=_authenticatorCacheAccessor;
- (void)updateLastSignoutDate;
- (id)lastSignoutDate;
- (void)clearWKWebViewCookies;
- (_Bool)setCurrentSharedDeviceAccount:(id)arg1 accountEnvironment:(id)arg2 clearCookies:(_Bool)arg3 error:(id *)arg4;
- (_Bool)setCurrentSharedDeviceAccount:(id)arg1 accountEnvironment:(id)arg2 error:(id *)arg3;
- (_Bool)clearCurrentSignedInAccountIfNeeded:(id)arg1 error:(id *)arg2;
- (id)currentSharedDeviceAccountWithError:(id *)arg1;
- (id)currentSharedDeviceAccountIdentifierWithError:(id *)arg1;
- (_Bool)removeAccountFromBroker:(id)arg1 error:(id *)arg2;
- (_Bool)removeAccountFromDevice:(id)arg1 error:(id *)arg2;
- (_Bool)removeAccount:(id)arg1 clearCookies:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeAccount:(id)arg1 error:(id *)arg2;
- (id)ssoAccountIdentifiers;
- (id)allBrokerAccounts:(id *)arg1;
- (id)allMSIDBrokerAccounts:(id *)arg1;
- (id)init;

@end

