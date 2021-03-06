//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AudioSource, LSReachability, LSStreamAudioSource, LSStreamVideoSource, LiveStreamCapture, LiveStreamConfiguration, MultiTimerManager, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableString, NSString, VideoSource;
@protocol LiveStreamSessionProtocol, OS_dispatch_queue, OS_dispatch_source;

@interface LiveStreamSession : NSObject
{
    VideoSource *videoSource;
    AudioSource *audioSource;
    struct scoped_refptr<avframework::ObjcVideoTrackSource> objcVideoTrackSource;
    struct scoped_refptr<avframework::ObjcAudioTrackSource> objcAudioTrackSource;
    // Error parsing type: ^{AudioDevice={mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{mutex={_opaque_pthread_mutex_t=q[56c]}}{condition_variable={_opaque_pthread_cond_t=q[40c]}}@^{OpaqueAudioComponentInstance}^{OpaqueAudioComponentInstance}^{OpaqueAudioComponent}^{AudioBufferList}ddiBBBBBBB@{AudioStreamBasicDescription=dIIIIIIII}{atomic<bool>=AB}BBBB{function<void (AudioBufferList *, int, int, int, int, void *)>={type=[24C]}^{__base<void (AudioBufferList *, int, int, int, int, void *)>}}{function<void (AudioBufferList *, const AudioTimeStamp *, int, AudioBufferList *, AudioBufferList *, void *)>={type=[24C]}^{__base<void (AudioBufferList *, const AudioTimeStamp *, int, AudioBufferList *, AudioBufferList *, void *)>}}^v^v^vqq{queue<AudioBufferList *, std::__1::deque<AudioBufferList *, std::__1::allocator<AudioBufferList *> > >={deque<AudioBufferList *, std::__1::allocator<AudioBufferList *> >={__split_buffer<AudioBufferList **, std::__1::allocator<AudioBufferList **> >=^^^{AudioBufferList}^^^{AudioBufferList}^^^{AudioBufferList}{__compressed_pair<AudioBufferList ***, std::__1::allocator<AudioBufferList **> >=^^^{AudioBufferList}}}Q{__compressed_pair<unsigned long, std::__1::allocator<AudioBufferList *> >=Q}}}{queue<AudioTimeStamp *, std::__1::deque<AudioTimeStamp *, std::__1::allocator<AudioTimeStamp *> > >={deque<AudioTimeStamp *, std::__1::allocator<AudioTimeStamp *> >={__split_buffer<AudioTimeStamp **, std::__1::allocator<AudioTimeStamp **> >=^^^{AudioTimeStamp}^^^{AudioTimeStamp}^^^{AudioTimeStamp}{__compressed_pair<AudioTimeStamp ***, std::__1::allocator<AudioTimeStamp **> >=^^^{AudioTimeStamp}}}Q{__compressed_pair<unsigned long, std::__1::allocator<AudioTimeStamp *> >=Q}}}B{thread=^{_opaque_pthread_t}}d}, name: audioDevice
    struct scoped_refptr<avframework::VideoTrackInterface> videoTrack;
    struct unique_ptr<avframework::VideoSinkInterface<avframework::VideoFrame>, std::__1::default_delete<avframework::VideoSinkInterface<avframework::VideoFrame>>> sink;
    struct scoped_refptr<avframework::MediaEngineFactoryInterface> factory;
    struct unique_ptr<avframework::MediaEngineInterface::MediaEncodeStreamInterface, std::__1::default_delete<avframework::MediaEngineInterface::MediaEncodeStreamInterface>> encodeStream;
    struct unique_ptr<avframework::VideoEncoderFactoryInterface, std::__1::default_delete<avframework::VideoEncoderFactoryInterface>> videoFactory;
    struct scoped_refptr<avframework::AudioTrackInterface> audioTrack;
    struct scoped_refptr<avframework::RTMPTransportInterface> rtmpTransport;
    void *_eaglLayer;
    struct CGSize _outputVideoSize;
    int _fps;
    int _bps;
    int _gop;
    int _maxbps;
    int _minbps;
    long long _updatedBPS;
    int _rtmpSeqNumber;
    long long _profileLevel;
    NSObject<OS_dispatch_queue> *_graphManagementQueue;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _bCanInput
    struct mutex _mainMutex;
    int audioChannelCount;
    int audioSampleRate;
    struct unique_ptr<RtmpOBServer, std::__1::default_delete<RtmpOBServer>> rtmpObs;
    struct unique_ptr<MediaEngineObserver, std::__1::default_delete<MediaEngineObserver>> engineObs;
    struct mutex netSessionStateMutex;
    unsigned long long _audioSourceType;
    struct LSBundle _streamOption;
    double _startConnectingTime;
    double _startStreamTime;
    NSObject<OS_dispatch_source> *_logTimer;
    unsigned long long _reconnectedCount;
    unsigned long long _send_package_slow_times;
    unsigned long long _bitrateAdjustTimes;
    unsigned long long _reconnectedTimes;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    struct __CVBuffer *_backgroundImageBuffer;
    struct __CVBuffer *_lastImageBuffer;
    unsigned int _lastTexture;
    _Bool _isInBackground;
    CDStruct_1b6d18a9 _lastPtsInForeground_v;
    CDStruct_1b6d18a9 _lastPts_v;
    double _enterBackgroundTime;
    LSReachability *_reach;
    long long _networkStatus;
    long long _transport_module_type;
    char *transportModuleName;
    NSString *_publishURL;
    NSDictionary *_nodeProbeInfo;
    _Bool _is_first_connect;
    _Bool _is_only_rtmpk;
    _Bool _hit_node_optimize;
    long long _liveSessionState2;
    struct CGSize _mixerOutSize;
    _Bool _needReconnected;
    NSMutableDictionary *_seiCache;
    int _reconnectTimestamp;
    long long _pushStreamCount;
    long long _capture0FpsCount;
    long long _encode0FpsCount;
    LiveStreamCapture *_capture;
    _Bool _audioMute;
    _Bool _shouldAutoReconnect;
    _Bool _isReconnecting;
    _Bool _realTime;
    _Bool _isRtmpAudioFrameDrop;
    _Bool _shouldExecTimerBlocks;
    _Bool _firstFrameInterleaveSuccess;
    int _av_time_diff;
    id <LiveStreamSessionProtocol> _delegate;
    LiveStreamConfiguration *_configuration;
    long long _streamLogTimeInterval;
    CDUnknownBlockType _streamLogCallback;
    long long _reconnectCount;
    long long _reconnectTimeInterval;
    long long _mainVideoTrackId;
    long long _mainAudioTrackId;
    CDUnknownBlockType _didCapturedAudioBufferList;
    CDUnknownBlockType _didCapturedAudioBufferList_withBGMPlayer;
    CDUnknownBlockType _shouldUpdateOptimumIPAddress;
    MultiTimerManager *_timerManager;
    NSMutableString *_networkStateMessage;
    NSDictionary *_rtmpkParams;
    NSDictionary *_rtmpqParams;
    NSDictionary *_rtmpPortsParams;
    NSString *_suggestFormatParam;
    NSString *_suggestProtocolParam;
    NSString *_authString;
    NSString *_qId;
    NSString *_uuid;
    NSString *_sessionId;
    NSString *_serverSessionId;
    NSString *_sessionIdLog;
    long long _sendAudioDropCount;
    NSString *_video_transport_pts;
    NSMutableArray *_VideoSourceArray;
    NSMutableArray *_AudioSourceArray;
    LSStreamVideoSource *_originVideoSource;
    LSStreamAudioSource *_originAudioSource;
    NSMutableDictionary *_texture_loader_list;
    CDUnknownBlockType _getAudioCallback;
    NSDictionary *_initialLog;
    NSString *_streamingURLString;
}

+ (id)getSdkVersion;
+ (id)addQueryForURL:(id)arg1 withName:(id)arg2 value:(id)arg3;
+ (id)setPriorityForUrl:(id)arg1;
+ (void)load;
+ (_Bool)unregister;
+ (_Bool)register;
@property(nonatomic) _Bool firstFrameInterleaveSuccess; // @synthesize firstFrameInterleaveSuccess=_firstFrameInterleaveSuccess;
@property(nonatomic) _Bool shouldExecTimerBlocks; // @synthesize shouldExecTimerBlocks=_shouldExecTimerBlocks;
@property(copy, nonatomic) NSString *streamingURLString; // @synthesize streamingURLString=_streamingURLString;
@property(retain, nonatomic) NSDictionary *initialLog; // @synthesize initialLog=_initialLog;
@property(copy, nonatomic) CDUnknownBlockType getAudioCallback; // @synthesize getAudioCallback=_getAudioCallback;
@property(retain, nonatomic) NSMutableDictionary *texture_loader_list; // @synthesize texture_loader_list=_texture_loader_list;
@property(retain, nonatomic) LSStreamAudioSource *originAudioSource; // @synthesize originAudioSource=_originAudioSource;
@property(retain, nonatomic) LSStreamVideoSource *originVideoSource; // @synthesize originVideoSource=_originVideoSource;
@property(retain, nonatomic) NSMutableArray *AudioSourceArray; // @synthesize AudioSourceArray=_AudioSourceArray;
@property(retain, nonatomic) NSMutableArray *VideoSourceArray; // @synthesize VideoSourceArray=_VideoSourceArray;
@property(nonatomic) _Bool isRtmpAudioFrameDrop; // @synthesize isRtmpAudioFrameDrop=_isRtmpAudioFrameDrop;
@property(retain, nonatomic) NSString *video_transport_pts; // @synthesize video_transport_pts=_video_transport_pts;
@property(nonatomic) int av_time_diff; // @synthesize av_time_diff=_av_time_diff;
@property(nonatomic) long long sendAudioDropCount; // @synthesize sendAudioDropCount=_sendAudioDropCount;
@property(nonatomic) _Bool realTime; // @synthesize realTime=_realTime;
@property(copy, nonatomic) NSString *sessionIdLog; // @synthesize sessionIdLog=_sessionIdLog;
@property(copy, nonatomic) NSString *serverSessionId; // @synthesize serverSessionId=_serverSessionId;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *qId; // @synthesize qId=_qId;
@property(copy, nonatomic) NSString *authString; // @synthesize authString=_authString;
@property(retain, nonatomic) NSString *suggestProtocolParam; // @synthesize suggestProtocolParam=_suggestProtocolParam;
@property(retain, nonatomic) NSString *suggestFormatParam; // @synthesize suggestFormatParam=_suggestFormatParam;
@property(retain, nonatomic) NSDictionary *rtmpPortsParams; // @synthesize rtmpPortsParams=_rtmpPortsParams;
@property(copy, nonatomic) NSDictionary *rtmpqParams; // @synthesize rtmpqParams=_rtmpqParams;
@property(copy, nonatomic) NSDictionary *rtmpkParams; // @synthesize rtmpkParams=_rtmpkParams;
@property _Bool isReconnecting; // @synthesize isReconnecting=_isReconnecting;
@property(retain, nonatomic) NSMutableString *networkStateMessage; // @synthesize networkStateMessage=_networkStateMessage;
@property(retain, nonatomic) MultiTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(copy, nonatomic) CDUnknownBlockType shouldUpdateOptimumIPAddress; // @synthesize shouldUpdateOptimumIPAddress=_shouldUpdateOptimumIPAddress;
@property(copy, nonatomic) CDUnknownBlockType didCapturedAudioBufferList_withBGMPlayer; // @synthesize didCapturedAudioBufferList_withBGMPlayer=_didCapturedAudioBufferList_withBGMPlayer;
@property(copy, nonatomic) CDUnknownBlockType didCapturedAudioBufferList; // @synthesize didCapturedAudioBufferList=_didCapturedAudioBufferList;
@property(nonatomic) long long mainAudioTrackId; // @synthesize mainAudioTrackId=_mainAudioTrackId;
@property(nonatomic) long long mainVideoTrackId; // @synthesize mainVideoTrackId=_mainVideoTrackId;
@property(nonatomic) long long reconnectTimeInterval; // @synthesize reconnectTimeInterval=_reconnectTimeInterval;
@property(nonatomic) long long reconnectCount; // @synthesize reconnectCount=_reconnectCount;
@property(nonatomic) _Bool shouldAutoReconnect; // @synthesize shouldAutoReconnect=_shouldAutoReconnect;
@property(copy, nonatomic) CDUnknownBlockType streamLogCallback; // @synthesize streamLogCallback=_streamLogCallback;
@property(nonatomic) long long streamLogTimeInterval; // @synthesize streamLogTimeInterval=_streamLogTimeInterval;
@property(retain, nonatomic) LiveStreamConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <LiveStreamSessionProtocol> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)__updateBitrate:(long long)arg1 mix:(long long)arg2 max:(long long)arg3;
- (id)getEAGLContext;
- (void)pushEncodedData:(char *)arg1 size:(int)arg2 timestamp:(long long)arg3 dts:(long long)arg4 videoFrameType:(int)arg5;
- (void)pushAudioBuffer:(char *)arg1 andDataLen:(unsigned long long)arg2 sampelRate:(int)arg3 channels:(int)arg4 andBytesPerSample:(int)arg5 timestamp:(long long)arg6 trackId:(int)arg7;
- (void)pushAudioBuffer:(char *)arg1 andDataLen:(unsigned long long)arg2 andInNumberFrames:(int)arg3 timestamp:(long long)arg4 trackId:(int)arg5;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3 trackId:(unsigned long long)arg4;
- (void)pushVideoDataWithTrackId:(unsigned long long)arg1 timestamp:(long long)arg2 yBuffer:(void *)arg3 yStride:(int)arg4 uBuffer:(void *)arg5 uStride:(int)arg6 vBuffer:(void *)arg7 vStride:(int)arg8 width:(int)arg9 height:(int)arg10 rotation:(int)arg11;
- (void)updateLinkInfo:(id)arg1;
- (id)getSourceWithUID:(id)arg1 streamType:(int)arg2;
- (id)getOriginAudioSource;
- (id)getOriginVideoSource;
- (id)getVideoSourceWithUID:(id)arg1;
- (id)getAudioSourceWithUID:(id)arg1;
- (void)removeAllVideoSourceFromEncodeStream;
- (void)removeAllAudioSourceFromEncodeStream;
- (void)removeVideoSource:(id)arg1;
- (void)addAudioSource:(id)arg1;
- (void)addVideoSource:(id)arg1;
- (void)setMixerOutputSize:(struct CGSize)arg1;
@property(nonatomic) _Bool enableVideoMixing;
@property(nonatomic) _Bool enableAudioMixing;
- (id)linkAudioSourceArray;
- (id)linkVideoSourceArray;
- (void)processAudioBufferList:(struct AudioBufferList *)arg1 inNumberFrames:(unsigned int)arg2 processedAudioData:(struct AudioBufferList *)arg3 headphonesMonitoringAudioData:(struct AudioBufferList *)arg4;
- (void)invalidateTimer;
- (void)generateTimer;
- (void)shouldCheckPushStreamStatus;
- (id)commonLogInfo;
- (void)shouldReportAudioFrameDropEvent:(long long)arg1 diff:(int)arg2 videoPts:(id)arg3;
- (void)shouldReportOtherStatusLogInfo:(id)arg1;
- (void)shouldReportApiInfo:(id)arg1;
- (void)shouldReportPushStreamInfo;
- (void)shouldReportConnectEndInfo;
- (void)shouldReportSendSlowInfo:(long long)arg1;
- (void)shouldReportPushStreamFailInfo:(int)arg1 info:(int)arg2;
- (void)shouldReportBitrateAdjustInfoWithSrcBitrate:(int)arg1 dstBitrate:(int)arg2;
- (void)shouldReportConnectStartInfo:(_Bool)arg1 errorCode:(long long)arg2;
- (void)updateNetworkStateMessage:(id)arg1;
- (id)getPushType;
- (id)getStreamInfoForKey:(id)arg1;
- (id)getStatistics;
- (_Bool)isExtensionRegistered;
- (void)getQuicParameterBundle:(struct LSBundle *)arg1;
- (void)getKCPParameterBundle:(struct LSBundle *)arg1;
- (_Bool)isRunning;
- (void)loadBackgroundImage;
- (id)setServeSessionIdForUrl:(id)arg1;
- (id)setSessionIdForUrl:(id)arg1;
- (void)setupMediaEngine;
- (void)setupLiveStreamGraph;
@property(nonatomic, getter=isAudioMute) _Bool audioMute; // @synthesize audioMute=_audioMute;
- (void)pushAudioBuffer:(char *)arg1 andInNumberFrames:(int)arg2 andBytesPerSample:(int)arg3 andNumberOfChannels:(int)arg4 andSampleRate:(int)arg5 andTimestampUs:(long long)arg6;
- (void)pushAudioBuffer:(char *)arg1 andDataLen:(unsigned long long)arg2 andInNumberFrames:(int)arg3 andCMTime:(CDStruct_1b6d18a9)arg4;
- (void)flushLastImageBufferWithTime:(CDStruct_1b6d18a9)arg1;
- (void)_pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)__pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2;
- (void)_pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2;
- (void)resumeStream;
- (void)pauseStream;
- (int)sendSEIMsgWithKey:(id)arg1 value:(id)arg2 repeatTimes:(long long)arg3;
- (int)sendSEIMsgWithKey:(id)arg1 value:(id)arg2 repeatTimes:(long long)arg3 keyFrameOnly:(_Bool)arg4 allowsCovered:(_Bool)arg5;
@property(nonatomic, getter=isBlueToothMonitoringEnabled) _Bool blueToothMonitoringEnabled;
@property(nonatomic, getter=isHeadphonesMonitoringEnabled) _Bool headphonesMonitoringEnabled;
- (void)setCanInputAudio:(_Bool)arg1;
- (void)stopAudio;
- (void)startAudio;
- (void)stopInternal;
- (void)releaseBackgroundImgBuf;
- (void)resetInternal;
- (void)stop;
@property(readonly, nonatomic) long long liveSessionState;
- (id)shouldUpdateOptimumURL;
- (id)getTcUrl;
- (void)tryToReconnect;
- (void)onErrorOccure:(long long)arg1;
- (void)onRtmpStatusChanged:(int)arg1:(int)arg2:(long long)arg3:(const char *)arg4;
- (void)onNetworkChanged:(long long)arg1;
- (void)setLiveSessionState2:(long long)arg1;
- (long long)liveSessionState2;
- (void)updateTransportParamter:(id)arg1 value:(id)arg2;
- (void)updateTransportModuleWithType:(long long)arg1;
- (void)startStreamWithURL:(id)arg1;
- (void)notification:(id)arg1;
- (void)start;
- (void)pushRestartUpdateParams;
- (void)runAsyncOnQueue:(CDUnknownBlockType)arg1;
- (void)runSyncOnQueue:(CDUnknownBlockType)arg1;
- (void)stopNetworkObserver;
- (void)setupNetworkObserver;
- (void)initInternalWithVideo:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;
- (id)modifyRtmpUrlWithPorts:(id)arg1;
- (id)encodeURL:(id)arg1;
- (void)parseSdkParams;
- (_Bool)checkAndRefineConfigurations;
- (void)addTextureLoader:(id)arg1 forTrack:(int)arg2;
- (id)getTextureLoaderForTrack:(int)arg1;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 andCMTime:(CDStruct_1b6d18a9)arg2 trackId:(int)arg3;
- (void)setHasConnected:(_Bool)arg1;
- (_Bool)hasConnected;
- (void)setLiveStreamURLIndex:(int)arg1;
- (int)liveStreamURLIndex;
- (_Bool)isExtensionRegistered;
- (_Bool)protocolDegradeIfNeeded;
- (void)shouldReportConnectStartInfo_LSExtension:(_Bool)arg1 errorCode:(long long)arg2;
- (void)tryToReconnect_LSExtension;
- (id)getAudioSource;
- (void)updateAudioDeviceWithCapture:(id)arg1;
@property(nonatomic, getter=isEchoCancellationEnabled) _Bool echoCancellationEnabled;
@property(readonly, nonatomic) struct AudioStreamBasicDescription audioStreamBasicDescription;
- (void)setOnlyRTMPKMode:(_Bool)arg1;
- (void)setLogLevel:(unsigned long long)arg1;

@end

