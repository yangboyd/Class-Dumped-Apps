//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VALSecureEnclaveValet : NSObject
{
    // Error parsing type: , name: identifier
    // Error parsing type: , name: accessControl
    // Error parsing type: , name: service
    // Error parsing type: , name: lock
    // Error parsing type: , name: baseKeychainQuery
}

- (void).cxx_destruct;
- (_Bool)migrateObjectsFrom:(id)arg1 removeOnCompletion:(_Bool)arg2 error:(id *)arg3;
- (_Bool)migrateObjectsMatching:(id)arg1 removeOnCompletion:(_Bool)arg2 error:(id *)arg3;
- (_Bool)removeAllObjectsAndReturnError:(id *)arg1;
- (_Bool)removeObjectForKey:(id)arg1 error:(id *)arg2;
- (id)stringForKey:(id)arg1 withPrompt:(id)arg2 error:(id *)arg3;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (id)objectForKey:(id)arg1 withPrompt:(id)arg2 error:(id *)arg3;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2 error:(id *)arg3;
- (_Bool)canAccessKeychain;
@property(nonatomic, readonly) long long accessControl; // @synthesize accessControl;
@property(nonatomic, readonly) long long hash;
- (id)init;

@end

