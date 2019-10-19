//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLAVAssetPlayerDelegate-Protocol.h"
#import "MLAVPlayerViewDelegate-Protocol.h"
#import "MLBitrateCapDelegate-Protocol.h"
#import "MLCaptionControllerDelegate-Protocol.h"
#import "MLPlayerInternal-Protocol.h"
#import "MLPlayerItemInternal-Protocol.h"
#import "MLStreamSelectorDelegate-Protocol.h"
#import "MLTextTrackControllerDelegate-Protocol.h"
#import "MLViewportSizeObserver-Protocol.h"
#import "YTAudioSessionInterruptionObserver-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class AVMediaSelectionOption, AVPlayer, GIMMe, MLAVAssetPlayer, MLAVCuepointCollector, MLAVDAITimelineSection, MLAVPlayerNetworkModel, MLAVQOEMeasurementProvider, MLAudioSession, MLBitrateCap, MLFormat, MLFormat3Captions, MLHLSPlaylistVideoSplicer, MLPlayerEventCenter, MLPlayerItemEventCenter, MLPlayerStickySettings, MLSegmentTimeline, MLStreamSelector, MLTextTrackController, MLVideo, MLViewportSize, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableDictionary, NSString, NSURL, UIView, YTIIosAvPlayerConfig, YTIIosAvPlayerHotConfig, YTSystemNotifications;
@protocol HAMClock, MLAVPlayerViewProtocol, MLAudioFormatConstraint, MLCaptionController, MLCaptionDisplayController, MLCaptionTrack, MLCuepointCollector, MLPlayerCaptionDelegate, MLPlayerConfig, MLPlayerDelegate, MLPlayerItemDelegate, MLPlayerItemInternal, MLVideoFormatConstraint, MLVideoSplicer, MLViewportSizeProvider, OS_dispatch_queue;

@interface MLAVPlayer : NSObject <YTAudioSessionInterruptionObserver, MLAVAssetPlayerDelegate, MLAVPlayerViewDelegate, MLBitrateCapDelegate, MLCaptionControllerDelegate, MLStreamSelectorDelegate, MLTextTrackControllerDelegate, MLViewportSizeObserver, YTSystemNotificationsObserver, MLPlayerInternal, MLPlayerItemInternal>
{
    id <HAMClock> _clock;
    MLAudioSession *_audioSession;
    YTSystemNotifications *_systemNotifications;
    float _volume;
    _Bool _muted;
    double _currentTimeOverride;
    NSDate *_savedProgramDate;
    _Bool _pendingPlay;
    _Bool _userRequestedPlay;
    AVPlayer *_player;
    MLFormat *_lastFormatUsedByPlayer;
    NSURL *_probeURLOnVideoPlay;
    unsigned long long _currentFailureID;
    long long _failureRetryCount;
    NSError *_deferredBackgroundError;
    _Bool _isInForeground;
    _Bool _lastExternalPlaybackActive;
    MLAVCuepointCollector *_cuepointCollector;
    double _preferredMaxReadahead;
    _Bool _restartCaptionsWhenEnteringForeground;
    _Bool _didSaveCaptionsOption;
    AVMediaSelectionOption *_savedCaptionsOption;
    YTIIosAvPlayerConfig *_AVPlayerConfig;
    YTIIosAvPlayerHotConfig *_AVPlayerHotConfig;
    long long _selectedFormatReason;
    MLBitrateCap *_bitrateCap;
    MLHLSPlaylistVideoSplicer *_videoSplicer;
    MLAVDAITimelineSection *_currentSection;
    id <MLCaptionController> _captionController;
    MLFormat3Captions *_loadedFormat3Captions;
    MLAVPlayerNetworkModel *_networkModel;
    _Bool _shouldSeekOnExternalPlaybackActive;
    NSMutableDictionary *_CPNToQOEControllers;
    _Bool _shouldUseTextTrackController;
    MLTextTrackController *_textTrackController;
    NSObject<OS_dispatch_queue> *_textQueue;
    _Bool _outputObscuredDueToInsufficientExternalProtection;
    MLPlayerStickySettings *_stickySettings;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    _Bool _externalPlaybackAllowed;
    _Bool _externalPlaybackFullscreen;
    _Bool _active;
    _Bool _peggedToLive;
    float _rate;
    id <MLAudioFormatConstraint> _audioFormatConstraint;
    id <MLPlayerCaptionDelegate> _captionDelegate;
    id <MLCaptionDisplayController> _captionDisplayController;
    id <MLPlayerConfig> _config;
    id <MLPlayerDelegate> _delegate;
    NSError *_error;
    MLPlayerEventCenter *_playerEventCenter;
    MLPlayerItemEventCenter *_playerItemEventCenter;
    double _maximumSeekableTime;
    double _minimumSeekableTime;
    NSArray *_selectableAudioFormats;
    NSArray *_selectableVideoFormats;
    MLFormat *_selectedAudioFormat;
    MLFormat *_selectedVideoFormat;
    long long _state;
    MLVideo *_video;
    id <MLVideoFormatConstraint> _videoFormatConstraint;
    long long _itemState;
    GIMMe *_gimme;
    UIView<MLAVPlayerViewProtocol> *_renderingView;
    MLAVAssetPlayer *_assetPlayer;
    MLAVQOEMeasurementProvider *_QOEProvider;
    MLStreamSelector *_streamSelector;
}

@property(nonatomic) _Bool peggedToLive; // @synthesize peggedToLive=_peggedToLive;
@property(readonly, nonatomic) MLStreamSelector *streamSelector; // @synthesize streamSelector=_streamSelector;
@property(readonly, nonatomic) MLAVQOEMeasurementProvider *QOEProvider; // @synthesize QOEProvider=_QOEProvider;
@property(readonly, nonatomic) MLAVAssetPlayer *assetPlayer; // @synthesize assetPlayer=_assetPlayer;
@property(retain, nonatomic) UIView<MLAVPlayerViewProtocol> *renderingView; // @synthesize renderingView=_renderingView;
@property(nonatomic) _Bool active; // @synthesize active=_active;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(retain, nonatomic) id <MLVideoFormatConstraint> videoFormatConstraint; // @synthesize videoFormatConstraint=_videoFormatConstraint;
@property(readonly, nonatomic) MLVideo *video; // @synthesize video=_video;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
@property(readonly, nonatomic) MLFormat *selectedAudioFormat; // @synthesize selectedAudioFormat=_selectedAudioFormat;
@property(readonly, nonatomic) NSArray *selectableVideoFormats; // @synthesize selectableVideoFormats=_selectableVideoFormats;
@property(readonly, nonatomic) NSArray *selectableAudioFormats; // @synthesize selectableAudioFormats=_selectableAudioFormats;
@property(nonatomic) float rate; // @synthesize rate=_rate;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_muted;
@property(readonly, nonatomic) double minimumSeekableTime; // @synthesize minimumSeekableTime=_minimumSeekableTime;
@property(readonly, nonatomic) double maximumSeekableTime; // @synthesize maximumSeekableTime=_maximumSeekableTime;
@property(nonatomic) _Bool externalPlaybackFullscreen; // @synthesize externalPlaybackFullscreen=_externalPlaybackFullscreen;
@property(nonatomic) _Bool externalPlaybackAllowed; // @synthesize externalPlaybackAllowed=_externalPlaybackAllowed;
@property(readonly, nonatomic) MLPlayerItemEventCenter *playerItemEventCenter; // @synthesize playerItemEventCenter=_playerItemEventCenter;
@property(readonly, nonatomic) MLPlayerEventCenter *playerEventCenter; // @synthesize playerEventCenter=_playerEventCenter;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) __weak id <MLPlayerItemDelegate> delegate;
@property(readonly, nonatomic) id <MLPlayerConfig> config; // @synthesize config=_config;
@property(readonly, nonatomic) id <MLCaptionDisplayController> captionDisplayController; // @synthesize captionDisplayController=_captionDisplayController;
@property(nonatomic) __weak id <MLPlayerCaptionDelegate> captionDelegate; // @synthesize captionDelegate=_captionDelegate;
@property(retain, nonatomic) id <MLAudioFormatConstraint> audioFormatConstraint; // @synthesize audioFormatConstraint=_audioFormatConstraint;
- (void).cxx_destruct;
- (void)playerViewErrorDidOccur:(id)arg1;
- (id)assetPlayerWithURL:(id)arg1 format:(id)arg2;
- (void)didLoadFormat3Captions:(id)arg1;
- (void)captionControllerDidFailWithError:(id)arg1;
- (void)availableCaptionTracksDidChange:(id)arg1;
- (void)activeCaptionTrackDidChange:(id)arg1;
- (void)timelineSectionDidChangeToSection:(id)arg1;
- (void)checkTimelineSectionChangeWithCurrentTime:(CDStruct_d60ef703)arg1;
- (void)seekDidCompleteWithAssetPlayer:(id)arg1 finished:(_Bool)arg2;
- (void)stopCaptions;
- (void)restartCaptions;
- (void)setUpTextTrackController;
- (void)setUpCaptionDisplayController;
- (void)setUpCaptionController;
- (void)updatePreferredPeakBitrate;
- (void)updatePeggedToLive;
- (void)setPlayerItem:(id)arg1;
- (unsigned long long)networkUsageBitrateEstimate;
- (void)createSharedPlayerAndAssignRenderingView:(_Bool)arg1;
- (void)outputObscuredDueToInsufficientExternalProtectionDidChange;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removePlayerObservers;
- (void)addPlayerObservers;
- (_Bool)isPictureInPictureActive;
- (_Bool)isVisible;
- (void)updateNetworkUsageNotifierWithState:(long long)arg1;
- (void)setState:(long long)arg1;
- (void)setPlayerCaptionsWithOption:(id)arg1;
- (_Bool)isWindowedLive;
- (_Bool)isPlayingOrPendingPlayback;
- (_Bool)isPlayableState;
- (_Bool)shouldRetryError:(id)arg1;
- (void)syncFailWithError:(id)arg1 failureID:(unsigned long long)arg2 forceAttemptRetry:(_Bool)arg3;
- (void)failWithError:(id)arg1;
- (void)savePlaybackStateAndClearPlayer;
- (void)clearStreamSelector;
- (void)clearPlayer;
- (void)clearAll;
- (void)updateExternalPlaybackForAssetPlayer:(id)arg1;
- (double)getMediaTimeFromProgramDate:(id)arg1 currentTime:(double)arg2 maximumTime:(double)arg3;
- (void)loadPlayerCaptionsForAssetPlayer:(id)arg1;
- (void)configureAssetPlayer:(id)arg1;
- (void)setNewAssetPlayer:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)viewportSizeDidChange:(id)arg1;
- (void)assetPlayer:(id)arg1 seekableTimeRangeDidChangeToMinimumTime:(double)arg2 maximumTime:(double)arg3;
- (void)assetPlayer:(id)arg1 externalPlaybackActiveDidChange:(_Bool)arg2;
- (void)assetPlayer:(id)arg1 durationDidChange:(double)arg2;
- (void)assetPlayer:(id)arg1 bufferedTimeDidChange:(double)arg2;
- (void)assetPlayer:(id)arg1 currentTimeDidChange:(CDStruct_1b6d18a9)arg2;
- (void)assetPlayer:(id)arg1 stateDidChangeToState:(long long)arg2;
- (void)didReceiveAudioSessionInterruptionWithType:(unsigned long long)arg1 options:(unsigned long long)arg2;
@property(readonly, nonatomic) NSString *playerViewDebugType;
@property(readonly, nonatomic) id <MLPlayerItemInternal> currentPlayerItem;
@property(readonly, nonatomic) long long itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) float oversendFactor;
@property(readonly, nonatomic) MLViewportSize *viewportSize;
- (void)flushEvents;
@property(readonly, nonatomic) long long bitrate;
- (id)selectedAudioTrack;
@property(readonly, nonatomic) _Bool externalPlaybackActive;
@property(readonly, nonatomic) double bufferedMediaTime;
@property(readonly, nonatomic) double totalMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentTime;
- (void)textTrackController:(id)arg1 didFailWithError:(id)arg2;
- (void)enableCaptionsIfAvailable;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)setViewportSizeProvider:(id)arg1;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekToTime:(double)arg1;
- (void)seekToEnd;
- (void)pause;
- (void)playASAP;
- (void)play;
- (void)disablePlayerCaptions;
- (void)setPlayerCaptionsTextStyleRule:(id)arg1;
- (void)enablePlayerCaptionsWithOption:(id)arg1;
- (void)streamSelectorDidFailWithError:(id)arg1;
- (void)streamSelectorHasSelectableVideoFormats:(id)arg1;
- (void)streamSelectorHasSelectableAudioFormats:(id)arg1;
- (void)streamSelectorDidSelectVideoFormat:(id)arg1 audioFormat:(id)arg2 reason:(long long)arg3 URL:(id)arg4;
- (void)streamSelectorWillRevokeSelectedStream;
- (void)bitrateCapDidChange:(long long)arg1 formatPacingBitrateCap:(long long)arg2;
@property(readonly, nonatomic) MLSegmentTimeline *segmentTimeline;
- (void)registerQOEController:(id)arg1;
@property(readonly, nonatomic) MLFormat *selectedVideoFormat; // @synthesize selectedVideoFormat=_selectedVideoFormat;
- (void)setPreferredMaxReadahead:(double)arg1;
- (void)setPeakBitrateFraction:(float)arg1;
@property(readonly, nonatomic) NSArray *availableCaptionTracks;
@property(readonly, nonatomic) id <MLCaptionTrack> activeCaptionTrack;
@property(readonly, nonatomic) id <MLCuepointCollector> cuepointCollector;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) int playerType;
@property(readonly, nonatomic) NSDictionary *debugParameters;
@property(readonly, nonatomic) NSData *debugLogs;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (void)terminate;
- (void)load;
@property(readonly, nonatomic) id <MLVideoSplicer> videoSplicer;
- (void)dealloc;
- (id)initWithVideo:(id)arg1 playerConfig:(id)arg2 stickySettings:(id)arg3 externalPlaybackActive:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

