//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC19SecureKeyValueStore27InMemorySecureKeyValueStore.h"

#import "SecureKeyValueStoreCompatible-Protocol.h"

@interface _TtC19SecureKeyValueStore27InMemorySecureKeyValueStore (SecureKeyValueStore) <SecureKeyValueStoreCompatible>
- (_Bool)canAccessKeychain;
- (id)allKeysAndReturnError:(id *)arg1;
- (_Bool)removeAllObjectsAndReturnError:(id *)arg1;
- (_Bool)removeObjectForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)stringForKey:(id)arg1 error:(id *)arg2;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)objectForKey:(id)arg1 error:(id *)arg2;
- (_Bool)containsObjectForKey:(id)arg1;
@end

