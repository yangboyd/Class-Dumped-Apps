//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDataLoaderDelegate-Protocol.h"
#import "SPTOfflineModeStateObserver-Protocol.h"

@class NSCache, NSMutableDictionary, NSMutableSet, NSString, NSTimer, SPTDataLoader, SPTGeniusDiskCache, SPTGeniusFeatureProperties, SPTGeniusServiceEnabledResourcesLoadingState;
@protocol SPTLocalSettings, SPTLyricsTrackChecker, SPTOfflineModeState;

@interface SPTGeniusService : NSObject <SPTDataLoaderDelegate, SPTOfflineModeStateObserver>
{
    _Bool _allowedToRefreshCache;
    SPTGeniusDiskCache *_diskCache;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTLocalSettings> _localSettings;
    id <SPTLyricsTrackChecker> _lyricsTrackChecker;
    SPTGeniusFeatureProperties *_configurationProperties;
    SPTDataLoader *_dataLoader;
    NSCache *_memoryCache;
    NSCache *_trackIDsWithNoAnnotations;
    NSMutableDictionary *_requestCallbacks;
    NSMutableSet *_enabledTrackURIs;
    SPTGeniusServiceEnabledResourcesLoadingState *_enabledResourcesLoadingState;
    NSTimer *_refreshEnabledURIsTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *refreshEnabledURIsTimer; // @synthesize refreshEnabledURIsTimer=_refreshEnabledURIsTimer;
@property(nonatomic, getter=isAllowedToRefreshCache) _Bool allowedToRefreshCache; // @synthesize allowedToRefreshCache=_allowedToRefreshCache;
@property(readonly, nonatomic) SPTGeniusServiceEnabledResourcesLoadingState *enabledResourcesLoadingState; // @synthesize enabledResourcesLoadingState=_enabledResourcesLoadingState;
@property(readonly, nonatomic) NSMutableSet *enabledTrackURIs; // @synthesize enabledTrackURIs=_enabledTrackURIs;
@property(readonly, nonatomic) NSMutableDictionary *requestCallbacks; // @synthesize requestCallbacks=_requestCallbacks;
@property(readonly, nonatomic) NSCache *trackIDsWithNoAnnotations; // @synthesize trackIDsWithNoAnnotations=_trackIDsWithNoAnnotations;
@property(readonly, nonatomic) NSCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(readonly, nonatomic) SPTGeniusFeatureProperties *configurationProperties; // @synthesize configurationProperties=_configurationProperties;
@property(readonly, nonatomic) id <SPTLyricsTrackChecker> lyricsTrackChecker; // @synthesize lyricsTrackChecker=_lyricsTrackChecker;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) SPTGeniusDiskCache *diskCache; // @synthesize diskCache=_diskCache;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)geniusErrorWithCode:(long long)arg1 description:(id)arg2;
- (void)fireFailureCallbacksForTrackId:(id)arg1 withError:(id)arg2;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)handleBackendResponseAnnotations:(id)arg1;
- (void)handleBackendResponseEnabledResources:(id)arg1;
- (id)geniusEnabledResourcesURL;
- (void)refreshEnabledURIs;
- (void)scheduleRefreshEnabledURIs;
- (void)setAllowedToRefreshCache;
- (void)loadEnabledResourcesFromCache;
- (id)geniusAnnotationsURLForTrackID:(id)arg1;
- (void)fetchFromServerAnnotationsForTrackId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isGeniusProxyEnabled;
- (void)invalidateTimers;
- (void)fetchAnnotationsForTrackID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)canFetchAnnotationsForTrack:(id)arg1;
- (_Bool)isTrackGeniusEnabled:(id)arg1;
- (void)dealloc;
- (id)initWithDiskCache:(id)arg1 dataLoaderFactory:(id)arg2 offlineModeState:(id)arg3 localSettings:(id)arg4 lyricsTrackChecker:(id)arg5 configurationProperties:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

