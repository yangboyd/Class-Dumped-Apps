//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BDPScopeConfig;

@interface BDPRuntimeGlobalConfiguration : NSObject
{
    _Bool _isInHouse;
    _Bool _shouldDismissShareLoading;
    _Bool _shouldAutoUpdateRelativeData;
    _Bool _shouldAutoPreloadWebResource;
    _Bool _shouldAutoPreloadNativeResource;
    _Bool _shouldRestoreAudioSessionDeactive;
    _Bool _hideMenu;
    _Bool _isCancelPreloadWhenNotWifi;
    long long _maxWarmBootCacheCount;
    BDPScopeConfig *_scopeConfig;
    double _metaCacheExpireTime;
    double _silenceUpdateInterval;
}

+ (id)defaultConfiguration;
+ (id)globalConfig;
@property(nonatomic) double silenceUpdateInterval; // @synthesize silenceUpdateInterval=_silenceUpdateInterval;
@property(nonatomic) double metaCacheExpireTime; // @synthesize metaCacheExpireTime=_metaCacheExpireTime;
@property(retain, nonatomic) BDPScopeConfig *scopeConfig; // @synthesize scopeConfig=_scopeConfig;
@property(nonatomic) _Bool isCancelPreloadWhenNotWifi; // @synthesize isCancelPreloadWhenNotWifi=_isCancelPreloadWhenNotWifi;
@property(nonatomic) _Bool hideMenu; // @synthesize hideMenu=_hideMenu;
@property(nonatomic) _Bool shouldRestoreAudioSessionDeactive; // @synthesize shouldRestoreAudioSessionDeactive=_shouldRestoreAudioSessionDeactive;
@property(nonatomic) _Bool shouldAutoPreloadNativeResource; // @synthesize shouldAutoPreloadNativeResource=_shouldAutoPreloadNativeResource;
@property(nonatomic) _Bool shouldAutoPreloadWebResource; // @synthesize shouldAutoPreloadWebResource=_shouldAutoPreloadWebResource;
@property(nonatomic) _Bool shouldAutoUpdateRelativeData; // @synthesize shouldAutoUpdateRelativeData=_shouldAutoUpdateRelativeData;
@property(nonatomic) _Bool shouldDismissShareLoading; // @synthesize shouldDismissShareLoading=_shouldDismissShareLoading;
@property(nonatomic) long long maxWarmBootCacheCount; // @synthesize maxWarmBootCacheCount=_maxWarmBootCacheCount;
@property(nonatomic) _Bool isInHouse; // @synthesize isInHouse=_isInHouse;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)arg1;
- (id)init;

@end

