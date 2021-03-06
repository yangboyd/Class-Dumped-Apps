//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_CannedVoiceBundle, GMSx_CannedVoiceBundleInfo, NSMutableDictionary, NSMutableIndexSet, NSString, NSURL;
@protocol GMSDASHConnection, GMSDUserDefaults, GMSTimingClock;

@interface GMSx_CannedVoiceBundleService : NSObject
{
    NSURL *_baseStoragePathURL;
    NSMutableDictionary *_bundleMap;
    id <GMSTimingClock> _clock;
    id <GMSDASHConnection> _connection;
    long long _lastBundleCleanup;
    GMSx_CannedVoiceBundle *_loadedBundle;
    GMSx_CannedVoiceBundleInfo *_loadedBundleInfo;
    NSMutableIndexSet *_loadingBundleDistanceUnits;
    id <GMSDUserDefaults> _userDefaults;
    _Bool _triedNetworkDownload;
    _Bool _useGuidanceWithDistance;
}

+ (id)loadBundleMap:(id)arg1;
- (void).cxx_destruct;
- (void)updateBundleMapForKey:(id)arg1 bundleInfo:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)saveResponse:(id)arg1 filename:(id)arg2 units:(long long)arg3;
- (void)saveBundleMap;
- (void)removeOldBundlesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeBundle:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)requestVoiceBundle:(long long)arg1 currentBundleInfo:(id)arg2;
- (id)remoteURLStringForBundleFilename:(id)arg1;
@property(readonly, nonatomic) NSString *currentLanguage;
- (id)pathForUnits:(long long)arg1 language:(id)arg2;
- (id)pathComponentForUnits:(long long)arg1;
- (id)bundleMapKeyForDistanceUnit:(long long)arg1;
- (id)bundleFilenameForDistanceUnit:(long long)arg1;
- (id)requestFilenameForDistanceUnit:(long long)arg1;
- (long long)defaultedDistanceUnits:(long long)arg1;
@property(readonly, nonatomic) NSMutableDictionary *bundleMap;
- (id)voiceBundleForDistanceUnit:(long long)arg1;
- (id)cachedVoiceBundleForDistanceUnit:(long long)arg1;
- (void)fetchDefaultVoiceBundleIfNoVoiceBundleIsLoaded;
- (void)voiceBundleLoadFailed:(id)arg1;
- (void)reloadDefaultVoiceBundle:(id)arg1;
- (void)applicationDidBecomeActive;
- (id)initWithConnection:(id)arg1 clock:(id)arg2 storagePathURL:(id)arg3 userDefaults:(id)arg4 useGuidanceWithDistance:(_Bool)arg5;

@end

