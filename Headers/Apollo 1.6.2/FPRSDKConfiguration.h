//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FPRPhenotypeFlags, NSDictionary, NSString, NSUserDefaults;

@interface FPRSDKConfiguration : NSObject
{
    Class _FIRAppClass;
    NSString *_mainBundleIdentifier;
    NSDictionary *_infoDictionary;
    NSUserDefaults *_userDefaults;
    FPRPhenotypeFlags *_phenotypeFlags;
}

+ (void)reset;
+ (id)defaultConfig;
@property(retain, nonatomic) FPRPhenotypeFlags *phenotypeFlags; // @synthesize phenotypeFlags=_phenotypeFlags;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property(retain, nonatomic) NSString *mainBundleIdentifier; // @synthesize mainBundleIdentifier=_mainBundleIdentifier;
@property(retain, nonatomic) Class FIRAppClass; // @synthesize FIRAppClass=_FIRAppClass;
- (void).cxx_destruct;
- (void)setConfigValue:(id)arg1 withName:(id)arg2;
- (id)configValueWithName:(id)arg1;
- (void)forceFeature:(id)arg1 toState:(long long)arg2;
- (_Bool)isFeatureEnabled:(id)arg1;
- (id)objectForInfoDictionaryKey:(id)arg1;
- (id)init;

@end

