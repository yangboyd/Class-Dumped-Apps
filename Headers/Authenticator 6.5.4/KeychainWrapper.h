//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KeychainWrapper : NSObject
{
}

- (id)getShortenedHashFromKey:(id)arg1;
- (int)getOldDataAndUpdateWithAccessAttributeForAccount:(id)arg1 data:(out id *)arg2;
- (int)SecItemCopyMatchingBridged:(id)arg1 data:(out id *)arg2;
- (id)createKeychainAttributesDictionary:(id)arg1;
- (id)createKeychainAttributesDictionaryWithoutVersion:(id)arg1;
- (id)createKeychainAttributesDictionaryForAllItemAttributes;
- (int)updateData:(id)arg1 forKey:(id)arg2;
- (int)createData:(id)arg1 forKey:(id)arg2;
- (unsigned long long)getKey:(out id *)arg1 forPrefixString:(id)arg2 disallowedSuffix:(id)arg3;
- (unsigned long long)getKey:(out id *)arg1 forSuffixString:(id)arg2;
- (int)getData:(out id *)arg1 forKey:(id)arg2;
- (int)removeDataForKey:(id)arg1;
- (int)createOrUpdateData:(id)arg1 forKey:(id)arg2;

@end

