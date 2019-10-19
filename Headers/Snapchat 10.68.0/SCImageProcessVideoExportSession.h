//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCImageProcessVideoExportHandlerDelegate-Protocol.h"

@class AVAsset, AVAssetReader, AVAssetReaderAudioMixOutput, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, FBKVOController, NSArray, NSData, NSError, NSString, NSURL, SCImageProcessAssetWriterInputPixelBufferAdaptor, SCImageProcessQueue, SCImageProcessVideoExportMagicMomentConfig;
@protocol SCAudioProcessorProcessingWrapper, SCImageProcessFrameSkipProviding, SCPerforming;

@interface SCImageProcessVideoExportSession : NSObject <SCImageProcessVideoExportHandlerDelegate>
{
    SCImageProcessQueue *_queue;
    NSArray *_GPUCommands;
    NSArray *_CPUCommands;
    NSArray *_rightStereoGPUCommands;
    NSArray *_leftStereoGPUCommands;
    AVAsset *_videoAsset;
    NSData *_backgroundAudioData;
    NSData *_overridingAudioData;
    AVAsset *_overridingAudioAsset;
    double _outputPlaybackRate;
    NSArray *_outputTimeRanges;
    unsigned long long _maxKeyFrameInterval;
    double _outputBitrate;
    struct CGAffineTransform _transform;
    struct CGAffineTransform _viewportTransform;
    struct CGAffineTransform _cpuBufferTransform;
    long long _orientation;
    _Bool _audio;
    AVAssetReader *_assetReader;
    AVAssetWriter *_assetWriter;
    AVAssetReaderAudioMixOutput *_assetReaderAudioOutput;
    AVAssetWriterInput *_assetWriterAudioInput;
    AVAssetReaderTrackOutput *_assetReaderVideoOutput;
    AVAssetWriterInput *_assetWriterVideoInput;
    AVAssetWriterInput *_stereoAssetWriterVideoInput;
    SCImageProcessAssetWriterInputPixelBufferAdaptor *_pixelBufferAdaptor;
    SCImageProcessAssetWriterInputPixelBufferAdaptor *_stereoPixelBufferAdaptor;
    id <SCAudioProcessorProcessingWrapper> _audioProcessingWrapper;
    id <SCPerforming> _readerWriterPerformer;
    CDStruct_1b6d18a9 _endSessionTime;
    NSArray *_handlers;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _progressBlock;
    FBKVOController *_KVOController;
    _Bool _shouldLimitFrameRateForCameraRoll;
    unsigned long long _algorithm;
    SCImageProcessVideoExportMagicMomentConfig *_magicMomentConfig;
    id <SCImageProcessFrameSkipProviding> _frameSkipProvider;
    unsigned long long _status;
    NSURL *_outputURL;
    NSError *_error;
    struct CGSize _outputSize;
}

@property(readonly, nonatomic) struct CGSize outputSize; // @synthesize outputSize=_outputSize;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)_currentWriterVideoInput;
- (void)videoExportHandler:(id)arg1 didFinishWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)videoExportHandler:(id)arg1 didProgressWithPresentationTime:(CDStruct_1b6d18a9)arg2;
- (void)stopRunning;
- (void)startRunningWithCompletionHandler:(CDUnknownBlockType)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)_writeMetadata:(id)arg1;
- (void)_assetWriterStatusChanged:(id)arg1;
- (void)_invokeCompletionHandler;
- (_Bool)_setupAssetReaderOutputWriterInput;
- (void)_startWrittingWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 videoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)_createVideoHandler:(struct opaqueCMSampleBuffer *)arg1 imageProcessQueue:(id)arg2 GPUCommands:(id)arg3 CPUCommands:(id)arg4 rightStereoGPUCommands:(id)arg5 leftStereoGPUCommands:(id)arg6 assetReader:(id)arg7 assetWriter:(id)arg8 readerOutput:(id)arg9 writerInput:(id)arg10 stereoWriterInput:(id)arg11 pixelBufferAdaptor:(id)arg12 stereoPixelBufferAdaptor:(id)arg13 orientation:(long long)arg14 viewportTransform:(struct CGAffineTransform)arg15 cpuBufferTransform:(struct CGAffineTransform)arg16 queue:(id)arg17 maxFrameRate:(int)arg18 frameSkipProvider:(id)arg19 presentationTimeScale:(double)arg20 magicMomentActive:(_Bool)arg21 magicMomentFrames:(long long)arg22;
- (void)_setupPixelBufferAdaptorWithVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)_createPixelBufferAdaptor:(id)arg1 attributes:(id)arg2 outputSize:(struct CGSize)arg3;
- (struct CGSize)_getSourcePixelBufferSizeWithInputSize:(struct CGSize)arg1;
- (void)_setupVideoInputWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 videoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)_getVideoOutputSettingsForFullVideoWidth:(_Bool)arg1;
- (void)_setupAudioInputWithAudioSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 videoSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (struct opaqueCMSampleBuffer *)copyAudioSampleBufferWithAudioTracks:(id)arg1;
- (struct opaqueCMSampleBuffer *)copyVideoSampleBuffer;
- (id)_setupAudioTracksWithAsset:(id)arg1;
- (id)_setupVideoTrackWithAsset:(id)arg1;
- (id)_createAssetReaderWriter;
- (id)_alteredVideoAssetWithPlaybackRateAndOverridingAudioAndTimeRanges;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 GPUCommands:(id)arg2 CPUCommands:(id)arg3 rightStereoGPUCommands:(id)arg4 leftStereoGPUCommands:(id)arg5 videoAsset:(id)arg6 backgroundAudioData:(id)arg7 overridingAudioData:(id)arg8 outputURL:(id)arg9 outputSize:(struct CGSize)arg10 outputPlaybackRate:(double)arg11 outputTimeRanges:(id)arg12 maxKeyFrameInterval:(unsigned long long)arg13 shouldLimitFrameRateForCameraRoll:(_Bool)arg14 outputBitrate:(double)arg15 transform:(struct CGAffineTransform)arg16 orientation:(long long)arg17 viewportTransform:(struct CGAffineTransform)arg18 cpuBufferTransform:(struct CGAffineTransform)arg19 audio:(_Bool)arg20 audioProcessingWrapper:(id)arg21 magicMomentConfig:(id)arg22 frameSkipProvider:(id)arg23;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

