//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSUserDefaults.h>

@interface NSUserDefaults (GrowthKit)
- (id)grw_stringArrayForKey:(id)arg1;
- (id)grw_dictionaryForKey:(id)arg1;
- (id)grw_arrayForKey:(id)arg1;
- (id)grw_dataForKey:(id)arg1;
- (void)grw_setURL:(id)arg1 forKey:(id)arg2;
- (id)grw_URLForKey:(id)arg1;
- (id)grw_stringForKey:(id)arg1;
- (void)grw_setDouble:(double)arg1 forKey:(id)arg2;
- (double)grw_doubleForKey:(id)arg1;
- (void)grw_setFloat:(float)arg1 forKey:(id)arg2;
- (float)grw_floatForKey:(id)arg1;
- (void)grw_setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)grw_integerForKey:(id)arg1;
- (void)grw_setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)grw_boolForKey:(id)arg1;
- (void)grw_removeObjectForKey:(id)arg1;
- (void)grw_setObject:(id)arg1 forKey:(id)arg2;
- (id)grw_objectForKey:(id)arg1;
@end

