//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/AVAsynchronousKeyValueLoading-Protocol.h>
#import <FBSharedFramework/FNFAVAsset-Protocol.h>
#import <FBSharedFramework/FNFAVPlayerItem-Protocol.h>
#import <FBSharedFramework/FNFAsset-Protocol.h>
#import <FBSharedFramework/FNFAssetForPlayer-Protocol.h>
#import <FBSharedFramework/FNFDashErrorHandling-Protocol.h>
#import <FBSharedFramework/FNFDashFrameSequencerDelegate-Protocol.h>
#import <FBSharedFramework/FNFDashManifestDryDelegate-Protocol.h>
#import <FBSharedFramework/FNFDashPlaylistManagerDelegate-Protocol.h>
#import <FBSharedFramework/FNFInfoForLoopableAsset-Protocol.h>
#import <FBSharedFramework/FNFLiveAVPlayerAsset-Protocol.h>

@class AVAudioMix, FNFAssetResourceLoader, FNFDashErrorListener, FNFDashPlaylist, FNFDashStallInspector, FNFDashVideoPlayerMetadata, NSArray, NSData, NSMutableSet, NSString;
@protocol FNFAssetEventListener, FNFBandwidthProvider, FNFDashContextualConfig, FNFDashEventListener, FNFDashFrameSequencing><FNFDashChunkManagerDelegate, FNFDashPlaylistManaging, FNFDashPsrProfiling, FNFDashQualitySelectorCreating, FNFDashVideoDrmHandler, OS_dispatch_queue;

@interface FNFDashAsset : NSObject <FNFDashErrorHandling, FNFDashFrameSequencerDelegate, FNFDashManifestDryDelegate, FNFDashPlaylistManagerDelegate, AVAsynchronousKeyValueLoading, FNFAVAsset, FNFAVPlayerItem, FNFAssetForPlayer, FNFInfoForLoopableAsset, FNFLiveAVPlayerAsset, FNFAsset>
{
    unsigned char _state;
    struct FNFDashConfig _config;
    id <FNFDashContextualConfig> _contextualConfig;
    FNFDashVideoPlayerMetadata *_playerMetadata;
    FNFAssetResourceLoader *_resourceLoader;
    FNFDashPlaylist *_playlist;
    id <FNFBandwidthProvider> _bandwidthProvider;
    NSArray *_chunkManagers;
    id <FNFDashFrameSequencing><FNFDashChunkManagerDelegate> _frameSequencer;
    id <FNFDashPlaylistManaging> _playlistManager;
    id <FNFDashEventListener> _dashEventListener;
    id <FNFAssetEventListener> _assetEventListener;
    id <FNFDashVideoDrmHandler> _drmHandler;
    _Bool _isDrmVideo;
    _Bool _isDrmLicenseLoaded;
    _Bool _isDrmSessionReady;
    FNFDashErrorListener *_errorListener;
    id <FNFDashQualitySelectorCreating> _qualitySelectorFactory;
    CDUnknownBlockType _assetLoadedHandler;
    CDUnknownBlockType _assetCompletionHandler;
    NSObject<OS_dispatch_queue> *_assetCompletionCallbackQueue;
    _Bool _videoTrackLoaded;
    _Bool _audioTrackLoaded;
    CDStruct_1b6d18a9 _currentPlaybackTime;
    CDStruct_1b6d18a9 _latestAudioFrameAbsoluteDts;
    NSMutableSet *_warningReported;
    _Bool _sentDryStreamNotification;
    NSString *_servingRepresentationIds[2];
    long long _representationCount[2];
    _Bool _async;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _elapsedVideoTimestamp;
    CDStruct_1b6d18a9 _lastDuration;
    struct CGSize _lastPlayerSize;
    long long _lastSegmentsToLiveHeadContextual;
    int _lastSegmentIndex;
    long long _lastChunkCount;
    _Bool _playRequested;
    _Bool _isAudioOnly;
    _Bool _isLiveExpired;
    _Bool _shouldHandleLiveGone;
    unsigned char _segmentGoneState;
    id <FNFDashPsrProfiling> _psrProfiler;
    _Bool _hasPendingMuteRequest;
    NSData *_firstManifestData;
    struct CGAffineTransform _preferredTransform;
    FNFDashStallInspector *_stallInspectors[2];
}

- (void).cxx_destruct;
- (void)_inspectStall:(int)arg1;
- (void)_assetLoaded;
- (void)_syncDrmLicenseLoaded:(id)arg1;
- (void)_drmLicenseLoaded:(id)arg1;
- (const char *)_decryptFrame:(const char *)arg1 metaData:(CDStruct_25a1edb3)arg2 track:(long long)arg3;
- (void)_processPsshWhenStarted:(_Bool)arg1;
- (void)_handleAssetLoaded;
- (id)_containerFormatInStringForTrack:(long long)arg1;
- (id)_representationWithId:(id)arg1 track:(long long)arg2;
- (id)_servingRepresentation:(long long)arg1;
- (void)_updateSegmentsToLiveHeadContextual;
- (void)_updateUndryStreamStatus;
- (void)_updateDryStreamStatus;
- (void)_updateDuration;
- (void)_updateLatestPlaylistTimestamps;
- (void)_updateElapsedVideoTimestamp;
- (void)_updatePlaylistBackedValuesOnRefresh;
- (CDStruct_1b6d18a9)_absoluteTimeForRelativeTime:(CDStruct_1b6d18a9)arg1;
- (double)_elapsedVideoTimestamp;
- (void)_updatePlaybackResolutionMosWithRepresentationId:(id)arg1;
- (void)_updateAvailableQualitiesForTrack:(long long)arg1;
- (void)_updateAvailableQualities;
- (void)_updateVideoResourceHostWithId:(id)arg1;
- (void)_updateManifestService;
- (void)_updateAbrEnabled;
- (void)_updateSegmentType;
- (void)_updateContainerFormat;
- (void)_setUserSelectedQuality:(id)arg1;
- (_Bool)_seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)_loadedAllTracks;
- (id)_createChunkManagersWithPlaylist:(id)arg1;
- (void)_handleFirstPlaylist:(id)arg1;
- (_Bool)_canPlayDashPlaylist:(id)arg1;
- (void)_setAssetState:(unsigned char)arg1;
- (void)_deferredWarningForExpiredLiveWithError:(id)arg1;
- (void)_updateStateAndShutdown;
- (void)_notifyOnError:(id)arg1 shouldStopPlayback:(_Bool)arg2;
- (void)lastSegmentFetched;
- (void)manifestDataFetched:(id)arg1;
- (void)playlistLoaded:(id)arg1;
- (void)durationChanged;
- (void)timeLoadedChanged;
- (void)chunkParsed:(id)arg1;
- (void)headerParsed:(id)arg1;
- (void)didWarnWithError:(id)arg1;
- (void)didFailWithError:(id)arg1;
- (void)setAssetEventListener:(id)arg1;
- (CDStruct_1b6d18a9)relativeTimeForAbsoluteTime:(CDStruct_1b6d18a9)arg1;
- (void)setUserSelectedQuality:(id)arg1;
- (void)setIsIntentional:(_Bool)arg1;
- (void)setVideoContentType:(unsigned long long)arg1;
- (void)setIsSoundMuted:(_Bool)arg1;
- (void)setPlayerSize:(struct CGSize)arg1;
- (double)elapsedVideoTimestamp;
- (double)nextLiveAudioTimestamp;
- (CDStruct_1b6d18a9)videoTrackDuration;
- (_Bool)isProtectedContent;
- (_Bool)isDurationFinal;
- (_Bool)decompressedFramebuffer;
- (id)qualityLabel;
- (id)debugDetails;
- (struct CGAffineTransform)preferredTransform;
- (CDStruct_1b6d18a9)timeAfterSeek;
- (void)playbackStarted;
- (void)playbackPauseRequested:(int)arg1;
- (_Bool)resetAssetToBeginningIfNeeded;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (_Bool)stallingForTrack:(long long)arg1;
- (_Bool)shouldRestartAfterStalling;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(CDUnknownBlockType)arg1 stallReason:(int)arg2;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)advanceFrameForTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (_Bool)mpdContainsAttributeUsingASRCaptions;
- (id)mpdAccessibilityDescription;
- (id)audioRepresentationId;
- (id)representationId;
@property(readonly, nonatomic) int pauseReason;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
- (_Bool)isManifestGone:(id)arg1;
- (void)handleLiveStreamGone:(id)arg1;
- (_Bool)isDashSegmentGone:(id)arg1;
- (void)handleSegmentGoneOnError:(id)arg1;
- (void)liveStreamEndOnWarning:(id)arg1;
- (void)addErrorToLog:(id)arg1 shouldStopPlayback:(_Bool)arg2;
- (unsigned long long)codecFormatForTrack:(long long)arg1;
- (_Bool)containsTrack:(long long)arg1;
- (id)audioChannelConfiguration;
- (id)projection;
- (id)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
- (void)requestErrorNotificationIfNeeded;
- (void)requestTimeLoadedUpdate;
- (void)addOutput:(id)arg1;
@property(copy, nonatomic) AVAudioMix *audioMix;
- (CDStruct_1b6d18a9)currentTime;
@property(readonly, copy, nonatomic) NSArray *loadedTimeRanges;
@property(readonly, nonatomic) long long status;
- (void)asyncLoadCurrentQualityWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)asyncLoadAvailableQualitiesWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (_Bool)isPlaybackLikelyToKeepUp;
- (_Bool)isPlaybackBufferFull;
- (id)asset;
- (id)accessLog;
- (id)tracksWithMediaType:(id)arg1;
- (void)cancelLoading;
- (id)audioCodec;
- (id)resourceLoader;
- (struct CGSize)naturalSize;
@property(readonly, nonatomic) _Bool shouldApplyRotationTransform;
- (CDStruct_1b6d18a9)duration;
- (_Bool)isAudioOnly;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (id)_assetError;
- (CDStruct_1b6d18a9)_duration;
- (long long)_assetStatus;
- (void)asyncLoadAssetWithHandler:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdData:(id)arg2 mpdUrl:(id)arg3 bandwidthProvider:(id)arg4 drmHandler:(id)arg5 userSelectedQuality:(id)arg6 qualitySelectorFactory:(id)arg7 contextualConfig:(id)arg8 chunkManagers:(id)arg9 frameSequencer:(id)arg10 playlistManager:(id)arg11 dashEventListener:(id)arg12 assetEventListener:(id)arg13 async:(_Bool)arg14 isLowLatency:(_Bool)arg15 liveDesiredLatencyMs:(long long)arg16 liveLatencyToleranceMs:(long long)arg17 isAudioOnly:(_Bool)arg18 psrProfiler:(id)arg19;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdData:(id)arg2 mpdUrl:(id)arg3 bandwidthProvider:(id)arg4 dashEventListener:(id)arg5 assetEventListener:(id)arg6 qualitySelectorFactory:(id)arg7 isLowLatency:(_Bool)arg8 liveDesiredLatencyMs:(long long)arg9 liveLatencyToleranceMs:(long long)arg10;
- (id)initWithConfig:(struct FNFDashConfig)arg1 mpdData:(id)arg2 mpdUrl:(id)arg3 bandwidthProvider:(id)arg4 dashEventListener:(id)arg5 assetEventListener:(id)arg6 drmHandler:(id)arg7 userSelectedQuality:(id)arg8 qualitySelectorFactory:(id)arg9 contextualConfig:(id)arg10 isLowLatency:(_Bool)arg11 liveDesiredLatencyMs:(long long)arg12 liveLatencyToleranceMs:(long long)arg13 isAudioOnly:(_Bool)arg14 psrProfiler:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

