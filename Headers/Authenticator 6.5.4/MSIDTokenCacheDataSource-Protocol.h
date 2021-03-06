//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/NSObject-Protocol.h>

@class MSIDCacheKey, MSIDCredentialCacheItem, NSArray, NSDictionary;
@protocol MSIDCacheItemSerializing, MSIDRequestContext;

@protocol MSIDTokenCacheDataSource <NSObject>
- (_Bool)clearWithContext:(id <MSIDRequestContext>)arg1 error:(id *)arg2;
- (_Bool)removeTokensWithKey:(MSIDCacheKey *)arg1 context:(id <MSIDRequestContext>)arg2 error:(id *)arg3;
- (NSDictionary *)wipeInfo:(id <MSIDRequestContext>)arg1 error:(id *)arg2;
- (_Bool)saveWipeInfoWithContext:(id <MSIDRequestContext>)arg1 error:(id *)arg2;
- (NSArray *)tokensWithKey:(MSIDCacheKey *)arg1 serializer:(id <MSIDCacheItemSerializing>)arg2 context:(id <MSIDRequestContext>)arg3 error:(id *)arg4;
- (MSIDCredentialCacheItem *)tokenWithKey:(MSIDCacheKey *)arg1 serializer:(id <MSIDCacheItemSerializing>)arg2 context:(id <MSIDRequestContext>)arg3 error:(id *)arg4;
- (_Bool)saveToken:(MSIDCredentialCacheItem *)arg1 key:(MSIDCacheKey *)arg2 serializer:(id <MSIDCacheItemSerializing>)arg3 context:(id <MSIDRequestContext>)arg4 error:(id *)arg5;
@end

