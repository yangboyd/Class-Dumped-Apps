//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESOwnPlayerDelegateWrapperDelegate-Protocol.h"
#import "IESVideoPlayerProtocol-Protocol.h"
#import "TTVideoEngineDataSource-Protocol.h"
#import "TTVideoEngineInternalDelegate-Protocol.h"

@class AVURLAsset, IESOwnPlayerDelegateWrapper, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSNumber, NSString, NSTimer, TTVideoEngine, TTVideoEngineModel, UIView;
@protocol IESVideoPlayerDelegate;

@interface IESOwnPlayerWrapper : NSObject <TTVideoEngineDataSource, IESOwnPlayerDelegateWrapperDelegate, TTVideoEngineInternalDelegate, IESVideoPlayerProtocol>
{
    _Bool _playByRestored;
    _Bool _enableVideoOutput;
    _Bool _repeated;
    _Bool _mute;
    _Bool _truncateTailWhenRepeated;
    _Bool _useCache;
    _Bool _playingWithCache;
    _Bool _ignoreAudioInterruption;
    _Bool _ownPlayerPlayWithURLs;
    _Bool _supportsReserveIfNeeded;
    _Bool _changePlaybackSpeedEnabled;
    _Bool _bashVideoEnabled;
    _Bool _checkHijackEnabled;
    _Bool _isPaused;
    _Bool _isStalling;
    _Bool _shouldResetPlayer;
    _Bool _hasPlayedOnce;
    _Bool _isURLChanged;
    _Bool _isReserved;
    _Bool _hadStoped;
    unsigned long long _sessionId;
    long long _rotateType;
    long long _scalingMode;
    unsigned long long _renderType;
    unsigned long long _imageScaleType;
    long long _imageLayoutType;
    unsigned long long _enhancementType;
    unsigned long long _netWorkType;
    NSString *_videoID;
    NSString *_urlKey;
    NSArray *_videoPlayURLs;
    NSDictionary *_metaformateDic;
    CDUnknownBlockType _cacheSizeBlock;
    double _volume;
    long long _networkTime;
    id <IESVideoPlayerDelegate> _deleagte;
    long long _cacheSize;
    TTVideoEngine *_player;
    long long _playbackState;
    NSString *_pToken;
    NSString *_playAuth;
    NSArray *_hosts;
    NSArray *_defaultHosts;
    long long _hostIndex;
    TTVideoEngineModel *_videoEngineModel;
    NSString *_currPlayURL;
    long long _actionState;
    NSString *_videoRequestUrl;
    NSMutableSet *_retainTaskSet;
    NSMutableSet *_observerSet;
    IESOwnPlayerDelegateWrapper *_delegateWrapper;
    NSNumber *_consumedBytes;
    NSTimer *_playbackCheckTimer;
    NSMutableArray *_boundaryEvents;
    double _firstSetPlaybackTime;
    double _firstFrameExpectTime;
    double _prevTimerCallPlaybackTime;
    double _playTimeBeforeReserved;
}

+ (void)setPlayerDefaultBufferEndTime:(long long)arg1;
+ (void)setPlayerMaxBufferEndTime:(long long)arg1;
+ (void)setEnableModernPreload:(_Bool)arg1;
+ (void)setProbeIntervalMS:(long long)arg1;
+ (void)setWriteFileNotifyIntervalMS:(long long)arg1;
+ (void)setEnableOptimizedTimeObserver:(_Bool)arg1;
+ (void)setEnableTimeObserverBoundaryCheck:(_Bool)arg1;
+ (void)setPlayerNativeMedialoaderEnable:(_Bool)arg1;
+ (void)setStopCallbakSuccessfullyEnable:(_Bool)arg1;
+ (void)setUseEngineQueueEnable:(_Bool)arg1;
+ (void)setPlayerDASHRangeInfo:(id)arg1;
+ (void)setPlayerLocalServerAuthEnable:(_Bool)arg1;
+ (void)setPlayerPrepareStartOpenGLEnable:(_Bool)arg1;
+ (void)setPlayerAudioUnitPoolEnable:(_Bool)arg1;
+ (void)setAudioVideoSyncStartEnable:(_Bool)arg1;
+ (void)setPlayerThreadWaitMilliSeconds:(long long)arg1;
+ (void)setPlayerABRTimeInterval:(long long)arg1;
+ (void)setPlayerABRAlgorithmType:(long long)arg1;
+ (void)setPlayerVideoModelABREnabled:(_Bool)arg1;
+ (void)setPlayerABREnabled:(_Bool)arg1;
+ (void)setLogFlag:(long long)arg1;
+ (void)setStackSizeOptimized:(double)arg1;
+ (void)setPlayerIdleTimerAuto:(_Bool)arg1;
+ (void)setPlayerAudioEffectPredelay:(double)arg1;
+ (void)setPlayerAudioEffectRatio:(double)arg1;
+ (void)setPlayerAudioEffectThreshold:(double)arg1;
+ (void)setPlayerAudioEffectPregain:(double)arg1;
+ (void)setPlayerAudioEffectEnable:(_Bool)arg1;
+ (void)setUpBackupDNSParserWaitTime:(double)arg1;
+ (void)setUpDNSTTL:(long long)arg1;
+ (void)setUpFirstDNSParseType:(long long)arg1 backup:(long long)arg2;
+ (void)setAsyncPrepareEnable:(_Bool)arg1;
+ (void)setPlayerNetworkTimeout:(long long)arg1;
+ (void)setPlayWithURLs:(_Bool)arg1;
+ (void)setApplicationWillResignActive;
+ (void)setApplicationDidBecomeActive;
- (void).cxx_destruct;
@property(nonatomic) _Bool hadStoped; // @synthesize hadStoped=_hadStoped;
@property(nonatomic) double playTimeBeforeReserved; // @synthesize playTimeBeforeReserved=_playTimeBeforeReserved;
@property(nonatomic) _Bool isReserved; // @synthesize isReserved=_isReserved;
@property(nonatomic) double prevTimerCallPlaybackTime; // @synthesize prevTimerCallPlaybackTime=_prevTimerCallPlaybackTime;
@property(nonatomic) double firstFrameExpectTime; // @synthesize firstFrameExpectTime=_firstFrameExpectTime;
@property(nonatomic) double firstSetPlaybackTime; // @synthesize firstSetPlaybackTime=_firstSetPlaybackTime;
@property(retain, nonatomic) NSMutableArray *boundaryEvents; // @synthesize boundaryEvents=_boundaryEvents;
@property(retain, nonatomic) NSTimer *playbackCheckTimer; // @synthesize playbackCheckTimer=_playbackCheckTimer;
@property(retain, nonatomic) NSNumber *consumedBytes; // @synthesize consumedBytes=_consumedBytes;
@property(retain, nonatomic) IESOwnPlayerDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
@property(nonatomic) _Bool isURLChanged; // @synthesize isURLChanged=_isURLChanged;
@property(nonatomic) _Bool hasPlayedOnce; // @synthesize hasPlayedOnce=_hasPlayedOnce;
@property(nonatomic) _Bool shouldResetPlayer; // @synthesize shouldResetPlayer=_shouldResetPlayer;
@property(nonatomic) _Bool isStalling; // @synthesize isStalling=_isStalling;
@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSMutableSet *observerSet; // @synthesize observerSet=_observerSet;
@property(retain, nonatomic) NSMutableSet *retainTaskSet; // @synthesize retainTaskSet=_retainTaskSet;
@property(copy, nonatomic) NSString *videoRequestUrl; // @synthesize videoRequestUrl=_videoRequestUrl;
@property(nonatomic) long long actionState; // @synthesize actionState=_actionState;
@property(copy, nonatomic) NSString *currPlayURL; // @synthesize currPlayURL=_currPlayURL;
@property(retain, nonatomic) TTVideoEngineModel *videoEngineModel; // @synthesize videoEngineModel=_videoEngineModel;
@property(nonatomic) long long hostIndex; // @synthesize hostIndex=_hostIndex;
@property(copy, nonatomic) NSArray *defaultHosts; // @synthesize defaultHosts=_defaultHosts;
@property(copy, nonatomic) NSArray *hosts; // @synthesize hosts=_hosts;
@property(copy, nonatomic) NSString *playAuth; // @synthesize playAuth=_playAuth;
@property(copy, nonatomic) NSString *pToken; // @synthesize pToken=_pToken;
@property(nonatomic) _Bool checkHijackEnabled; // @synthesize checkHijackEnabled=_checkHijackEnabled;
@property(nonatomic) _Bool bashVideoEnabled; // @synthesize bashVideoEnabled=_bashVideoEnabled;
@property(nonatomic) _Bool changePlaybackSpeedEnabled; // @synthesize changePlaybackSpeedEnabled=_changePlaybackSpeedEnabled;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(retain, nonatomic) TTVideoEngine *player; // @synthesize player=_player;
@property(nonatomic) _Bool supportsReserveIfNeeded; // @synthesize supportsReserveIfNeeded=_supportsReserveIfNeeded;
@property(nonatomic) _Bool ownPlayerPlayWithURLs; // @synthesize ownPlayerPlayWithURLs=_ownPlayerPlayWithURLs;
@property(nonatomic) _Bool ignoreAudioInterruption; // @synthesize ignoreAudioInterruption=_ignoreAudioInterruption;
@property(nonatomic) long long cacheSize; // @synthesize cacheSize=_cacheSize;
@property(nonatomic) _Bool playingWithCache; // @synthesize playingWithCache=_playingWithCache;
@property(nonatomic) _Bool useCache; // @synthesize useCache=_useCache;
@property(nonatomic) __weak id <IESVideoPlayerDelegate> deleagte; // @synthesize deleagte=_deleagte;
@property(nonatomic) _Bool truncateTailWhenRepeated; // @synthesize truncateTailWhenRepeated=_truncateTailWhenRepeated;
@property(nonatomic) long long networkTime; // @synthesize networkTime=_networkTime;
@property(nonatomic) double volume; // @synthesize volume=_volume;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool repeated; // @synthesize repeated=_repeated;
@property(copy, nonatomic) CDUnknownBlockType cacheSizeBlock; // @synthesize cacheSizeBlock=_cacheSizeBlock;
@property(copy, nonatomic) NSDictionary *metaformateDic; // @synthesize metaformateDic=_metaformateDic;
@property(nonatomic) _Bool enableVideoOutput; // @synthesize enableVideoOutput=_enableVideoOutput;
@property(copy, nonatomic) NSArray *videoPlayURLs; // @synthesize videoPlayURLs=_videoPlayURLs;
@property(copy, nonatomic) NSString *urlKey; // @synthesize urlKey=_urlKey;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
@property(nonatomic) unsigned long long netWorkType; // @synthesize netWorkType=_netWorkType;
@property(nonatomic) unsigned long long enhancementType; // @synthesize enhancementType=_enhancementType;
@property(nonatomic) long long imageLayoutType; // @synthesize imageLayoutType=_imageLayoutType;
@property(nonatomic) unsigned long long imageScaleType; // @synthesize imageScaleType=_imageScaleType;
@property(nonatomic) unsigned long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) long long rotateType; // @synthesize rotateType=_rotateType;
@property(nonatomic) _Bool playByRestored; // @synthesize playByRestored=_playByRestored;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
- (void)setTTVideoEngineRenderEngine:(unsigned long long)arg1;
- (void)videoEngineCloseAysncFinish:(id)arg1;
- (void)videoEngine:(id)arg1 playFailWithURL:(id)arg2 statusException:(long long)arg3;
- (void)videoEngine:(id)arg1 playFailWithURL:(id)arg2 error:(id)arg3;
- (void)videoEngineDidFinish:(id)arg1 videoStatusException:(long long)arg2;
- (void)videoEngine:(id)arg1 mdlKey:(id)arg2 hitCacheSze:(long long)arg3;
- (void)videoEngineDidFinish:(id)arg1 error:(id)arg2;
- (void)videoEngineUserStopped:(id)arg1;
- (void)videoEngineReadyToPlay:(id)arg1;
- (void)videoEnginePrepared:(id)arg1;
- (void)videoEngineReadyToDisPlay:(id)arg1;
- (void)videoEngine:(id)arg1 loadStateDidChanged:(unsigned long long)arg2;
- (void)videoEngine:(id)arg1 playbackStateDidChanged:(long long)arg2;
- (void)videoEngine:(id)arg1 fetchedVideoModel:(id)arg2;
- (id)playURLs;
- (void)didFinishVideoDataDownloadWithCacheState:(long long)arg1;
- (void)videoEngineCacheCompletedNotification:(id)arg1;
- (void)noVideoDataToDownloadForKey:(id)arg1;
- (void)didFinishVideoDataDownloadForKey:(id)arg1;
- (id)apiForFetcher:(unsigned long long)arg1;
- (id)apiForFetcher;
- (id)errorWithStatusCode:(long long)arg1;
- (_Bool)shouldCallBlockOfTime:(double)arg1;
- (_Bool)shouldEnumerateTimes;
- (_Bool)videoIsReallyPlaying;
- (_Bool)shouldCallBoundaryBlock:(double)arg1;
@property(readonly, nonatomic) _Bool isDashSource;
- (id)playerConsumedBytes;
@property(readonly, nonatomic) struct CGSize videoOriginSize;
@property(nonatomic) _Bool enableBytevc1Decode;
@property(nonatomic) _Bool enableHardDecode;
@property(readonly, nonatomic) UIView *view;
- (void)setUpMemoryOptimize:(_Bool)arg1;
- (void)setCustomLog:(id)arg1;
- (void)setPlayerSubTag:(id)arg1;
- (void)setPlayerTag:(id)arg1;
- (void)setCacheDuration:(double)arg1;
- (void)setStartPlayTime:(double)arg1;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stop;
- (void)pause;
- (void)reserve;
- (void)play;
- (void)setPlayerDASHRangeDetail;
- (void)prepareToPlay;
- (float)currPlaybackRate;
- (double)currPlayableDuration;
- (double)currPlaybackTime;
- (void)setPlayerAudioDevice:(unsigned long long)arg1;
- (void)setPlayerResolution:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPlayerChangePlaybackSpeedEnabled:(_Bool)arg1;
- (void)setPlayerPlaybackSpeed:(double)arg1;
- (void)setPlayerCheckHijackEnabled:(_Bool)arg1;
- (void)setPlayerBashVideoEnabled:(_Bool)arg1;
- (void)setPlayerDashVideoHosts:(id)arg1;
- (void)setPlayerDashVideoInfo:(id)arg1;
@property(nonatomic) double playbackRate;
@property(readonly, nonatomic) double currTimeScale;
- (struct __CVBuffer *)currentPixelBuffer;
@property(readonly, copy, nonatomic) AVURLAsset *currPlayAsset;
- (void)resetPlayerIfNeeded;
- (double)playFPS;
- (id)firstFrameTimestamp;
- (double)playBitrate;
- (id)accessLog;
- (unsigned long long)playerType;
- (double)videoDuration;
- (void)dealloc;
- (void)removeTimeObserver;
- (void)addVideoPlayWithURL:(id)arg1 forTimes:(id)arg2;
- (void)optimizedCheckBoundaryEvent:(id)arg1;
- (void)checkBoundaryEvent:(id)arg1;
- (void)addBoundaryTimeObserverForTimes:(id)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)addPeriodicTimeObserverForInterval:(double)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)resetDecryptionKey:(id)arg1;
- (void)resetVideoID:(id)arg1 andPlayURLs:(id)arg2 urlKey:(id)arg3 fileCs:(id)arg4;
- (void)resetVideoID:(id)arg1 andPlayURLs:(id)arg2 urlKey:(id)arg3;
- (void)resetVideoID:(id)arg1 andPlayURLs:(id)arg2;
- (void)resetLocalVideoURLPath:(id)arg1;
- (id)initWithVideoID:(id)arg1 andPlayURLs:(id)arg2 andUrlKey:(id)arg3;
- (id)initWithVideoID:(id)arg1 andPlayURLs:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

