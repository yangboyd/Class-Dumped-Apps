//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEUnitObject.h"

#import "HTSMediaMixPlayerDelegate-Protocol.h"
#import "HTSMoviePlayerDelegate-Protocol.h"
#import "IVEPlayerUnitProtocol-Protocol.h"
#import "VEAppStatusProtocol-Protocol.h"

@class HTSAudioExport, HTSMediaMixPlayer, IESMMAudioFilter, NSMutableArray, NSMutableDictionary, NSObject, NSString, VEAudioReaderUnit, VEMoviePlayer, VEPlayerUnitConfig, VEVideoReaderUnit;
@protocol IESMMAudioProcessorExProtocol, OS_dispatch_queue;

@interface VEPlayerUnit : VEUnitObject <HTSMediaMixPlayerDelegate, HTSMoviePlayerDelegate, VEAppStatusProtocol, IVEPlayerUnitProtocol>
{
    _Bool _pauseAndStillRender;
    _Bool _needCurrentFrame;
    _Bool _needFrameRenderNotify;
    _Bool _textStickerNeedPreivew;
    _Bool _autoPlayWhenAppBecomeActive;
    _Bool _autoRepeatPlay;
    _Bool _isRetainOriginalSound;
    _Bool _playerPlayed;
    _Bool _noAvplayer;
    NSString *_route;
    CDUnknownBlockType _statusBlk;
    CDUnknownBlockType _frameTimeBlk;
    CDUnknownBlockType _canvasFramUpdateCallback;
    long long _status;
    CDUnknownBlockType _mixPlayerCompleteBlock;
    CDUnknownBlockType _failedToPlayBlk;
    VEMoviePlayer *_moviePlayer;
    HTSMediaMixPlayer *_mixPlayer;
    NSMutableArray *_observerArray;
    double _startTime;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _updateVideoDataCompleteBlock;
    IESMMAudioFilter *_audioFilter;
    id <IESMMAudioProcessorExProtocol> _audioProcess;
    HTSAudioExport *_audioExportor;
    VEPlayerUnitConfig *_config;
    double _lastAudioTime;
    CDUnknownBlockType _audioVolumnCallBack;
    VEAudioReaderUnit *_soundsPlayUnitOC;
    VEVideoReaderUnit *_videoReaderUnit;
    VEAudioReaderUnit *_audioReaderUnit;
    NSObject<OS_dispatch_queue> *_renderQueue;
    long long _processCount;
    long long _processFrames;
    double _playStartTS;
    double _lastPlayFrameRate;
    NSMutableDictionary *_timeMachineConvertAssetsDict;
    double _lastPlayPts;
    struct CGSize _videoSize;
    CDStruct_1b6d18a9 _playerCMTime;
    CDStruct_1b6d18a9 _lastRenderTime;
    CDStruct_1b6d18a9 _lastClicPlayCMTime;
}

+ (void)setCustomPlayerAudioCategory:(id)arg1;
@property(nonatomic) CDStruct_1b6d18a9 lastClicPlayCMTime; // @synthesize lastClicPlayCMTime=_lastClicPlayCMTime;
@property(nonatomic) double lastPlayPts; // @synthesize lastPlayPts=_lastPlayPts;
@property(retain, nonatomic) NSMutableDictionary *timeMachineConvertAssetsDict; // @synthesize timeMachineConvertAssetsDict=_timeMachineConvertAssetsDict;
@property(nonatomic) double lastPlayFrameRate; // @synthesize lastPlayFrameRate=_lastPlayFrameRate;
@property(nonatomic) double playStartTS; // @synthesize playStartTS=_playStartTS;
@property(nonatomic) long long processFrames; // @synthesize processFrames=_processFrames;
@property(nonatomic) CDStruct_1b6d18a9 lastRenderTime; // @synthesize lastRenderTime=_lastRenderTime;
@property(nonatomic) _Bool noAvplayer; // @synthesize noAvplayer=_noAvplayer;
@property(nonatomic) long long processCount; // @synthesize processCount=_processCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *renderQueue; // @synthesize renderQueue=_renderQueue;
@property(nonatomic) CDStruct_1b6d18a9 playerCMTime; // @synthesize playerCMTime=_playerCMTime;
@property(retain, nonatomic) VEAudioReaderUnit *audioReaderUnit; // @synthesize audioReaderUnit=_audioReaderUnit;
@property(retain, nonatomic) VEVideoReaderUnit *videoReaderUnit; // @synthesize videoReaderUnit=_videoReaderUnit;
@property(retain, nonatomic) VEAudioReaderUnit *soundsPlayUnitOC; // @synthesize soundsPlayUnitOC=_soundsPlayUnitOC;
@property(copy, nonatomic) CDUnknownBlockType audioVolumnCallBack; // @synthesize audioVolumnCallBack=_audioVolumnCallBack;
@property(nonatomic) double lastAudioTime; // @synthesize lastAudioTime=_lastAudioTime;
@property(nonatomic) _Bool playerPlayed; // @synthesize playerPlayed=_playerPlayed;
@property(nonatomic) _Bool isRetainOriginalSound; // @synthesize isRetainOriginalSound=_isRetainOriginalSound;
@property(retain, nonatomic) VEPlayerUnitConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) HTSAudioExport *audioExportor; // @synthesize audioExportor=_audioExportor;
@property(retain, nonatomic) id <IESMMAudioProcessorExProtocol> audioProcess; // @synthesize audioProcess=_audioProcess;
@property(retain, nonatomic) IESMMAudioFilter *audioFilter; // @synthesize audioFilter=_audioFilter;
@property(copy, nonatomic) CDUnknownBlockType updateVideoDataCompleteBlock; // @synthesize updateVideoDataCompleteBlock=_updateVideoDataCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(retain, nonatomic) HTSMediaMixPlayer *mixPlayer; // @synthesize mixPlayer=_mixPlayer;
@property(retain, nonatomic) VEMoviePlayer *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(copy, nonatomic) CDUnknownBlockType failedToPlayBlk; // @synthesize failedToPlayBlk=_failedToPlayBlk;
@property(copy, nonatomic) CDUnknownBlockType mixPlayerCompleteBlock; // @synthesize mixPlayerCompleteBlock=_mixPlayerCompleteBlock;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) _Bool autoRepeatPlay; // @synthesize autoRepeatPlay=_autoRepeatPlay;
@property(nonatomic) _Bool autoPlayWhenAppBecomeActive; // @synthesize autoPlayWhenAppBecomeActive=_autoPlayWhenAppBecomeActive;
@property(nonatomic) _Bool textStickerNeedPreivew; // @synthesize textStickerNeedPreivew=_textStickerNeedPreivew;
@property(nonatomic) _Bool needFrameRenderNotify; // @synthesize needFrameRenderNotify=_needFrameRenderNotify;
@property(copy, nonatomic) CDUnknownBlockType canvasFramUpdateCallback; // @synthesize canvasFramUpdateCallback=_canvasFramUpdateCallback;
@property(nonatomic) _Bool needCurrentFrame; // @synthesize needCurrentFrame=_needCurrentFrame;
@property(copy, nonatomic) CDUnknownBlockType frameTimeBlk; // @synthesize frameTimeBlk=_frameTimeBlk;
@property(nonatomic) _Bool pauseAndStillRender; // @synthesize pauseAndStillRender=_pauseAndStillRender;
@property(copy, nonatomic) CDUnknownBlockType statusBlk; // @synthesize statusBlk=_statusBlk;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)setRetainOriginalSound:(_Bool)arg1;
- (void)changeAudioEffect:(id)arg1 inVideoData:(id)arg2 inChunkParam:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)preProcessAudio:(id)arg1 inChunkParam:(id)arg2 withInfo:(id)arg3;
- (void)p_checkAudioSessionAsync:(_Bool)arg1;
- (double)removeEffectWithRangeID:(id)arg1;
- (double)removeLastOperation;
- (void)stopEffectwithTime:(double)arg1;
- (void)startEffectWithTime:(double)arg1;
- (void)exitProcessEffect;
- (void)readytoProcessEffect:(CDStruct_1b6d18a9)arg1;
- (void)resignActive;
- (void)memoryWarning;
- (void)enterForeground;
- (void)enterBackground;
- (void)becomeActive;
- (void)moviePlayerNeedReset;
- (void)addDownStream:(id)arg1;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)mediaMixPlayer:(id)arg1 willResetItem:(id)arg2;
- (void)resetRefer;
- (void)setStatus:(long long)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)enableHighFrameRateRender:(_Bool)arg1;
- (void)enableStillRender:(_Bool)arg1;
- (double)getDuration;
- (id)getVideoReader;
- (void)updateVideoData:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (double)getaudioVolumeKeyFrameAtPts:(unsigned long long)arg1 withAVAsset:(id)arg2;
- (void)setAudioKeyFrameCallBack:(CDUnknownBlockType)arg1;
- (void)setPlayerVolume:(float)arg1;
- (void)hotReloadClipRangeForAssets:(id)arg1 usingClipRangeMap:(id)arg2;
- (void)hotReloadFilterForAssets:(id)arg1 usingFilterMap:(id)arg2;
- (void)hotRemoveAudioAssets:(id)arg1;
- (void)hotAppendAudioAsset:(id)arg1 withRange:(id)arg2;
- (void)updateAudioData:(id)arg1;
- (void)p_updateAudioReaderUnit:(id)arg1;
- (CDStruct_1b6d18a9)getLastPixelbufferTime;
- (void)processLastPixelBuffer;
- (struct CGSize)getVideoSize;
- (void)startMoviePlayer;
- (void)stopMoviePlayer;
- (void)stop;
- (void)pause:(_Bool)arg1;
- (void)pause;
- (double)getLastPlayFramRate;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)p_seekToTimeAndRender2:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)play;
- (void)pauseMixPlayer;
- (void)playMixPlayer;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)p_playFromTime2:(CDStruct_1b6d18a9)arg1;
- (void)p_play;
- (void)notifyFrameRender;
- (void)processVESamples:(id)arg1;
- (_Bool)canStopStillRender;
- (void)multiProcessSampleData:(id)arg1;
- (void)p_multiProcessSampleData:(id)arg1;
- (void)pinProcessSampleData:(id)arg1;
- (void)p_countingFrames;
- (CDStruct_1b6d18a9)p_transToFps:(CDStruct_1b6d18a9)arg1;
- (void)processReadSampleData:(id)arg1;
- (void)seekAudioReaderUnit:(CDStruct_1b6d18a9)arg1;
- (void)processAudioPlayer:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)resetPlayerCompleteBlock;
- (void)p_seekAudioProcessorIfNeeded:(double)arg1;
- (void)p_playerComplete;
- (void)p_resetPlayerWithError:(id)arg1;
- (void)p_initMoviePlayer;
- (void)resetPlayerAutoRepreatBlock;
- (void)p_initMixPlayer;
- (void)p_addPlayerStatusObserver;
- (void)p_addAllObserver;
- (void)caculateVideoSizeWithfinishBlock:(CDUnknownBlockType)arg1;
- (id)initWithConfig:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

