//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NSCopying-Protocol.h>
#import <Nbp/PlatformConfigProvider-Protocol.h>
#import <Nbp/ThroughputCategorizerVideoBitrateProvider-Protocol.h>

@class NSDictionary, NSNumber, NSString, ThroughputCategorizer;
@protocol ConfigPersonalizationDelegate;

@interface PlatformConfig : NSObject <ThroughputCategorizerVideoBitrateProvider, NSCopying, PlatformConfigProvider>
{
    NSString *_currentBuildNumber;
    NSNumber *_currentFastStartType;
    NSDictionary *_configurationMap;
    ThroughputCategorizer *_mobileCategories;
    ThroughputCategorizer *_wifiCategories;
    id <ConfigPersonalizationDelegate> _configPersonalizationDelegate;
    NSString *_currentDeviceKey;
}

+ (id)sha256:(id)arg1;
@property(readonly, nonatomic) NSString *currentDeviceKey; // @synthesize currentDeviceKey=_currentDeviceKey;
@property(nonatomic) __weak id <ConfigPersonalizationDelegate> configPersonalizationDelegate; // @synthesize configPersonalizationDelegate=_configPersonalizationDelegate;
@property(retain, nonatomic) ThroughputCategorizer *wifiCategories; // @synthesize wifiCategories=_wifiCategories;
@property(retain, nonatomic) ThroughputCategorizer *mobileCategories; // @synthesize mobileCategories=_mobileCategories;
@property(copy, nonatomic) NSDictionary *configurationMap; // @synthesize configurationMap=_configurationMap;
@property(copy, nonatomic) NSNumber *currentFastStartType; // @synthesize currentFastStartType=_currentFastStartType;
@property(copy, nonatomic) NSString *currentBuildNumber; // @synthesize currentBuildNumber=_currentBuildNumber;
- (void).cxx_destruct;
- (long long)lastVideoBitrate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)save;
- (id)restore;
- (id)expectedInitializationVector;
- (id)crypto;
- (id)configFilePath;
- (id)buildSpecificValueForKey:(id)arg1;
- (_Bool)wantsBuildSpecificFlags;
- (id)objectValueForKey:(id)arg1;
- (_Bool)isOperatingSystemAtLeastVersionEqualToContentsOfKey:(id)arg1 defaultOSVersion:(CDStruct_2ec95fd7)arg2 minimumOSVersion:(CDStruct_2ec95fd7)arg3;
- (id)adaptiveStringValueforKey:(id)arg1;
- (long long)adaptiveIntegerValueForKey:(id)arg1 defaultIfNotPresent:(long long)arg2;
- (_Bool)isAdaptiveFlagTrue:(id)arg1 defaultIfNotPresent:(_Bool)arg2;
- (id)networkQualityStringFromMap:(id)arg1;
- (id)deviceStringFromMap:(id)arg1;
- (long long)networkQualityIntegerFromMap:(id)arg1 defaultBlock:(CDUnknownBlockType)arg2;
- (long long)deviceIntegerFromMap:(id)arg1 defaultBlock:(CDUnknownBlockType)arg2;
- (_Bool)networkQualityFlagFromMap:(id)arg1 defaultBlock:(CDUnknownBlockType)arg2;
- (_Bool)deviceFlagFromMap:(id)arg1 defaultBlock:(CDUnknownBlockType)arg2;
- (_Bool)canPersonalizeConfig;
- (id)currentNetworkQualityKey;
- (id)currentNetworkKey;
- (id)stringValueforKey:(id)arg1;
- (long long)integerValueForKey:(id)arg1 defaultIfNotPresent:(long long)arg2;
- (_Bool)isFlagTrue:(id)arg1 defaultIfNotPresent:(_Bool)arg2;
- (id)_checkProcessInfoForKey:(id)arg1;
- (void)setDefaultValues:(id)arg1;
- (void)postProcessConfigMap;
- (id)initWithDictionary:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

