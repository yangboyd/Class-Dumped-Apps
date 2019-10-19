//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FABApplicationIdentiferModel, FABSettingsOnboardingManager, NSArray, NSDictionary, NSString;

@interface Fabric : NSObject
{
    _Bool _debug;
    _Bool _isFirstInstall;
    NSString *_APIKey;
    NSString *_installID;
    NSString *_executionIdentifier;
    NSString *_advertisingToken;
    NSArray *_kitClasses;
    NSDictionary *_fabricConfig;
    FABSettingsOnboardingManager *_settingsAndOnboardingManager;
    FABApplicationIdentiferModel *_applicationIdentifierModel;
    unsigned long long _installationMode;
    NSString *_firebaseGoogleAppId;
}

+ (void)autoInitialize:(id)arg1;
+ (void)load;
+ (id)configurationDictionaryForKitClass:(Class)arg1;
+ (void)initializeKit:(Class)arg1;
+ (void)disableUninitializedKitMessagingForKit:(Class)arg1;
+ (id)kitClassesByAddingAdMobIfFound:(id)arg1;
+ (id)kitClassesByEnsuringAppseeIsFirst:(id)arg1;
+ (id)kitClassesByAddingAnswersIfFound:(id)arg1;
+ (id)kitClassesByAddingDigitsIfFound:(id)arg1;
+ (_Bool)isAutomaticDataCollectionEnabled;
+ (void)validateFABKitConformance:(id)arg1;
+ (id)convertToKitClassesIfNeeded:(id)arg1;
+ (id)with:(id)arg1;
+ (id)sharedSDK;
@property(copy, nonatomic) NSString *firebaseGoogleAppId; // @synthesize firebaseGoogleAppId=_firebaseGoogleAppId;
@property(nonatomic) unsigned long long installationMode; // @synthesize installationMode=_installationMode;
@property(readonly, nonatomic) FABApplicationIdentiferModel *applicationIdentifierModel; // @synthesize applicationIdentifierModel=_applicationIdentifierModel;
@property(retain, nonatomic) FABSettingsOnboardingManager *settingsAndOnboardingManager; // @synthesize settingsAndOnboardingManager=_settingsAndOnboardingManager;
@property(copy, nonatomic) NSDictionary *fabricConfig; // @synthesize fabricConfig=_fabricConfig;
@property(copy, nonatomic) NSArray *kitClasses; // @synthesize kitClasses=_kitClasses;
@property(copy, nonatomic) NSString *advertisingToken; // @synthesize advertisingToken=_advertisingToken;
@property(readonly, copy, nonatomic) NSString *executionIdentifier; // @synthesize executionIdentifier=_executionIdentifier;
@property(readonly, nonatomic) _Bool isFirstInstall; // @synthesize isFirstInstall=_isFirstInstall;
@property(readonly, copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
@property(nonatomic) _Bool debug; // @synthesize debug=_debug;
- (void).cxx_destruct;
- (void)regenerateInstallIDIfNeededWithManager:(Class)arg1;
- (_Bool)shouldAutoInitialize:(id)arg1;
- (_Bool)firebaseMode;
@property(readonly, nonatomic) NSString *instanceIdentifier;
@property(readonly, nonatomic) NSDictionary *settings;
- (id)configurationDictionaryForKit:(id)arg1;
- (id)validFabricConfigFromInfoPlist:(id)arg1;
- (id)generateInstallationUUID;
- (id)readInstallationUUID;
- (id)kitVersionsByKitBundleIdentifier;
- (void)onboardAppAndDownloadSettings;
- (id)init;

@end

