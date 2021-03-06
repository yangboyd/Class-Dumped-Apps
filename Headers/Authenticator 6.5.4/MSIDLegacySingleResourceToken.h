//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDLegacyAccessToken.h>

#import <MSAL/MSIDRefreshableToken-Protocol.h>

@class NSString;

@interface MSIDLegacySingleResourceToken : MSIDLegacyAccessToken <MSIDRefreshableToken>
{
    NSString *_refreshToken;
    NSString *_familyId;
}

- (void).cxx_destruct;
@property(retain) NSString *familyId; // @synthesize familyId=_familyId;
@property(retain) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy) NSString *description;
- (_Bool)supportsCredentialType:(long long)arg1;
- (long long)credentialType;
- (id)legacyTokenCacheItem;
- (id)initWithLegacyTokenCacheItem:(id)arg1;
- (id)tokenCacheItem;
- (id)initWithTokenCacheItem:(id)arg1;
- (_Bool)isEqualToItem:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

