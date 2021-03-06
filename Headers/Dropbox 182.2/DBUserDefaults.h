//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSUserDefaults;

@interface DBUserDefaults : NSObject
{
    NSUserDefaults *_userDefaults;
    NSString *_scopePrefix;
    NSString *_userId;
}

+ (void)synchronize;
+ (void)db_clearAllDataInUserDefaults:(id)arg1;
+ (void)db_clearSessionDataInUserDefaults:(id)arg1;
+ (_Bool)db_string:(id)arg1 startsWithPrefixes:(id)arg2;
+ (void)db_clearAllUserDataExceptUserIds:(id)arg1 inUserDefaults:(id)arg2;
+ (void)db_clearUserDataForUserId:(id)arg1 inUserDefaults:(id)arg2;
+ (void)clearAllDataForMainAppAndGroups:(id)arg1;
+ (void)clearSessionDataForMainAppAndGroups:(id)arg1;
+ (void)clearSessionDataForMainAppAndGroup:(id)arg1;
+ (void)clearAllUserDataExceptUserIds:(id)arg1 forMainAppAndGroups:(id)arg2;
+ (void)clearAllUserDataExceptUserIds:(id)arg1 forMainAppAndGroup:(id)arg2;
+ (void)clearUserDataForUserId:(id)arg1 forMainAppAndGroups:(id)arg2;
+ (void)clearUserDataForUserId:(id)arg1 forMainAppAndGroup:(id)arg2;
+ (id)userDefaultsForDeviceGroup:(id)arg1;
+ (id)userDefaultsForDevice;
+ (id)userDefaultsForGlobalGroup:(id)arg1;
+ (id)userDefaultsForGlobal;
+ (id)userDefaultsForUserId:(id)arg1 sharedWithGroup:(id)arg2;
+ (id)userDefaultsForUserId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
- (void).cxx_destruct;
- (id)db_scopelessKeyForKeyName:(id)arg1;
- (id)db_scopedKeyForKeyName:(id)arg1;
- (_Bool)synchronize;
- (id)dictionaryRepresentation;
- (void)setURL:(id)arg1 forKey:(id)arg2;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (id)URLForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (long long)integerForKey:(id)arg1;
- (id)stringArrayForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)initForDeviceWithGroup:(id)arg1;
- (id)initForDevice;
- (id)initForGlobalSharedWithGroup:(id)arg1;
- (id)initForGlobal;
- (id)initForUserId:(id)arg1 sharedWithGroup:(id)arg2;
- (id)initForUserId:(id)arg1;

@end

