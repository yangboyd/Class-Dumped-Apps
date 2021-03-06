//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Core/WAPreferencesStorage-Protocol.h>

@class NSString, NSUserDefaults;

@interface WAUserDefaultsPreferencesStorage : NSObject <WAPreferencesStorage>
{
    NSUserDefaults *_userDefaults;
}

+ (id)standardUserDefaults;
- (void).cxx_destruct;
- (void)removeAllKeys;
- (void)removeObjectForKey:(id)arg1;
- (id)dictionaryRepresentation;
- (id)volatileDomainForName:(id)arg1;
- (void)setVolatileDomain:(id)arg1 forName:(id)arg2;
- (void)registerDefaults:(id)arg1;
- (id)colorForKey:(id)arg1;
- (void)setColor:(id)arg1 forKey:(id)arg2;
- (long long)encryptedIntegerForKey:(id)arg1;
- (void)setEncryptedInteger:(long long)arg1 forKey:(id)arg2;
- (id)encryptedStringForKey:(id)arg1;
- (void)setEncryptedString:(id)arg1 forKey:(id)arg2;
- (id)arrayForKey:(id)arg1;
- (void)removeSuiteNamed:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (float)floatForKey:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (double)doubleForKey:(id)arg1;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (id)stringForKey:(id)arg1;
- (id)dateForKey:(id)arg1;
- (void)setDate:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)initWithSuiteName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

