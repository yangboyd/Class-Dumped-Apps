//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSUserDefaults;

@interface APMUserDefaults : NSObject
{
    NSString *_suiteName;
    struct __CFString *_appNameRef;
    NSUserDefaults *_userDefaults;
    _Bool _useCFPreferencesLibrary;
    _Bool _isPreferenceFileExcluded;
}

+ (id)standardUserDefaults;
+ (_Bool)userPreferenceEnabled;
@property _Bool isPreferenceFileExcluded; // @synthesize isPreferenceFileExcluded=_isPreferenceFileExcluded;
@property(nonatomic) _Bool useCFPreferencesLibrary; // @synthesize useCFPreferencesLibrary=_useCFPreferencesLibrary;
- (void).cxx_destruct;
- (void)scheduleSynchronize;
- (void)synchronize;
- (void)clearAllData;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)initWithSuiteName:(id)arg1;
- (id)init;

@end

