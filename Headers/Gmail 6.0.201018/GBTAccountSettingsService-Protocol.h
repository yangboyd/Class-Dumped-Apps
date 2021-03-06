//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString;
@protocol GIPAccountID, JBTCallback, JBTSpan;

@protocol GBTAccountSettingsService <NSObject>
@property(readonly, nonatomic) id <GIPAccountID> accountID;
- (void)clearCache;
- (NSArray *)enabledExperimentIds;
- (void)removeAllExperimentOverrides;
- (void)removeOverrideForExperiment:(unsigned long long)arg1;
- (_Bool)experimentOverrideIsPersisted:(unsigned long long)arg1;
- (void)overrideExperiment:(unsigned long long)arg1 stringValue:(NSString *)arg2 andSaveToDisk:(_Bool)arg3;
- (void)overrideExperiment:(unsigned long long)arg1 numberValue:(NSNumber *)arg2 andSaveToDisk:(_Bool)arg3;
- (_Bool)hasOverrideForExperiment:(unsigned long long)arg1;
- (void)setNumber:(NSNumber *)arg1 forNonSAPISettingWithKey:(unsigned long long)arg2;
- (void)setBoolean:(_Bool)arg1 forKey:(unsigned long long)arg2 withJBTCallback:(id <JBTCallback>)arg3 withJBTSpan:(id <JBTSpan>)arg4;
- (NSString *)stringValueOrUnavailableForExperiment:(unsigned long long)arg1 ignoreOverride:(_Bool)arg2;
- (NSString *)stringValueOrUnavailableForExperiment:(unsigned long long)arg1;
- (NSNumber *)numberValueOrUnavailableForExperiment:(unsigned long long)arg1 ignoreOverride:(_Bool)arg2;
- (NSNumber *)numberValueOrUnavailableForExperiment:(unsigned long long)arg1;
- (_Bool)isEnabled:(unsigned long long)arg1;
@end

