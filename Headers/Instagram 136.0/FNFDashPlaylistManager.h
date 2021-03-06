//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FNFDashManifestFetcherDelegate-Protocol.h>
#import <FBSharedFramework/FNFDashPlaylistManaging-Protocol.h>

@class FNFDashPlaylist, FNFDashVideoPlayerMetadata;
@protocol FNFDashContextualConfig, FNFDashErrorListening, FNFDashManifestFetching, FNFDashPlaylistManagerDelegate;

@interface FNFDashPlaylistManager : NSObject <FNFDashPlaylistManaging, FNFDashManifestFetcherDelegate>
{
    struct FNFDashConfig _config;
    id <FNFDashContextualConfig> _contextualConfig;
    FNFDashVideoPlayerMetadata *_playerMetadata;
    FNFDashPlaylist *_playlist;
    id <FNFDashManifestFetching> _manifestFetcher;
    id <FNFDashErrorListening> _errorListener;
    id <FNFDashPlaylistManagerDelegate> _delegate;
    CDStruct_1b6d18a9 _playbackTime;
    CDStruct_1b6d18a9 _lastLiveSegmentTime;
    int _staleManifestsCount;
    int _expiredManifestsCount;
    _Bool _allowMisalignedManifests;
}

+ (id)_errorWithCode:(long long)arg1 message:(id)arg2 underlyingError:(id)arg3;
- (void).cxx_destruct;
- (vector_1afa1685)_timelinesForTrackMetadata:(id)arg1;
- (CDStruct_1b6d18a9)_lastLiveSegmentTimeInManifest:(id)arg1;
- (_Bool)_defaultRepresentationChangedInTrackMetadata:(id)arg1 track:(long long)arg2;
- (_Bool)_isStaleManifest:(id)arg1;
- (void)_disableRemovedRepresentations:(id)arg1;
- (void)_disableRepresentationsWithMisalignedTimelines:(id)arg1;
- (void)_disableRepresentationsWithNoURL:(id)arg1;
- (_Bool)_hasExpiredManifest:(id)arg1;
- (_Bool)_hasUnexpectedDashVideoTypeInManifest:(id)arg1;
- (id)_verifyNewManifest:(id)arg1;
- (void)manifestDataFetched:(id)arg1;
- (id)manifestFetched:(id)arg1;
- (_Bool)fetchPlaylistImmediately;
- (_Bool)isStreamDry;
- (void)playbackTimeChanged:(CDStruct_1b6d18a9)arg1;
- (void)stopPeriodicPlaylistUpdate;
- (void)startPeriodicPlaylistUpdate;
- (void)loadFirstPlaylist;
- (void)setDelegate:(id)arg1;
- (id)description;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdUrl:(id)arg2 mpdData:(id)arg3 manifestFetcher:(id)arg4 errorListener:(id)arg5 contextualConfig:(id)arg6 playerMetadata:(id)arg7;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdUrl:(id)arg2 mpdData:(id)arg3 resourceLoader:(id)arg4 errorListener:(id)arg5 eventListener:(id)arg6 isLowLatency:(_Bool)arg7 contextualConfig:(id)arg8 playerMetadata:(id)arg9;

@end

