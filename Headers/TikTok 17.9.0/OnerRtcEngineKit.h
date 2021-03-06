//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EngineKitClientMessageRelayDelegate-Protocol.h"
#import "OnerHierarchicalStateMachine-Protocol.h"
#import "OnerSignalClientDelegate-Protocol.h"

@class EduCreateChannelTask, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString, NSTimer, OnerCameraCapturerConfiguration, OnerConfigState, OnerDualStreamSetting, OnerEngineMessageRelay, OnerIdleState, OnerInRoomState, OnerRtcVideoCanvas, OnerSignalClient, OnerState, OnerStreamInfo, OnerSwitchState, RTCVendor;
@protocol OnerAudioFrameObserver, OnerRtcEngineDelegate;

@interface OnerRtcEngineKit : NSObject <EngineKitClientMessageRelayDelegate, OnerSignalClientDelegate, OnerHierarchicalStateMachine>
{
    long long _joinRoomStart;
    long long _joinChannelStart;
    _Bool _muteLocalVideo;
    _Bool _muteLocalAudio;
    _Bool _enableRtcLocalVideo;
    _Bool _enableRtcLocalAudio;
    _Bool _defaultMuteAllRemoteVideo;
    _Bool _defaultMuteAllRemoteAudio;
    _Bool _enableRtcVideo;
    _Bool _enableRtcAudio;
    _Bool _isInRoom;
    _Bool _isBeginPublishVideo;
    _Bool _isPublishVideoSuccess;
    _Bool _isBeginPublishAudio;
    _Bool _isPublishAudioSuccess;
    _Bool _isJoinChannel;
    _Bool _enableSpeaker;
    _Bool _useAudioPlayOutMixStream;
    _Bool _isVideoExtSource;
    _Bool _isVideoExtSink;
    _Bool _isVideoExtRender;
    _Bool _isAudioExtSource;
    _Bool _isAudioExtSink;
    _Bool _isAudioExtRender;
    _Bool _useTexture;
    _Bool _usePushMode;
    int _preloadSoundId;
    int _audioInputSampleRate;
    int _audioOutputSampleRate;
    int _audioInputChannelNum;
    int _audioOutputChannelNum;
    OnerState *_mState;
    NSMutableDictionary *_createChannelTasks;
    EduCreateChannelTask *_firstCreateChannelTask;
    NSString *_appId;
    NSString *_token;
    NSData *_sigatureKey;
    NSString *_userId;
    NSString *_roomId;
    NSString *_providerAppId;
    NSString *_providerToken;
    NSData *_providerSignature;
    NSString *_providerRoomId;
    NSString *_providerUserId;
    long long _envMode;
    NSString *_switchServerHost;
    NSArray *_apiServerHosts;
    NSString *_signalServerHost;
    RTCVendor *_sdkProvider;
    OnerEngineMessageRelay *_sdkProviderMessageRelay;
    long long _sdkProviderType;
    OnerRtcVideoCanvas *_localCanvas;
    id <OnerRtcEngineDelegate> _delegate;
    NSMutableArray *_currentRemoteUsers;
    long long _frameRate;
    long long _videoKBitrate;
    long long _orientationMode;
    id <OnerAudioFrameObserver> _onerAudioFrameObserver;
    long long _rtcClientRole;
    unsigned long long _mirrorMode;
    long long _profile;
    long long _rtcProvider;
    long long _volumeIndicationInterval;
    long long _volumeIndicationSmooth;
    NSString *_preloadFilePath;
    NSString *_logFilePath;
    OnerIdleState *_idleState;
    OnerConfigState *_configState;
    OnerInRoomState *_inRoomState;
    OnerSwitchState *_switchProviderState;
    NSMutableDictionary *_onerStreamMap;
    long long _beginPublishVideo;
    long long _beginPublishAudio;
    NSTimer *_getRtcServiceTimer;
    NSTimer *_joinChannelTimer;
    OnerCameraCapturerConfiguration *_cameraConfiguration;
    long long _publishFallbackOption;
    long long _subscribeFallbackOption;
    long long _audioPlayOutMixStreamSampleRate;
    long long _audioPlayOutMixStreamChannelNum;
    long long _audioPlayOutMixStreamVolume;
    OnerStreamInfo *_lowStreamInfo;
    OnerDualStreamSetting *_dualStreamSetting;
    NSString *_currentSignalingHost;
    OnerSignalClient *_signalClient;
    struct CGSize _videoSize;
}

+ (id)onerMsgWhatString:(long long)arg1;
+ (id)rtcProvider2str:(long long)arg1;
+ (void)setFeedbackHost:(id)arg1;
+ (void)sendFeedback:(id)arg1;
+ (id)getFeedbackContent;
+ (void)setEnvironmentMode:(long long)arg1;
+ (int)setParameters:(id)arg1;
+ (void)setDnsResults:(id)arg1;
+ (void)setDeviceId:(id)arg1;
+ (id)zegoAppID;
+ (id)zegoAppKey;
+ (id)getCurrentEngineDelegate;
+ (id)getProviderSdkVersion;
+ (id)getSdkVersion;
+ (void)destroy;
+ (void)setByteLog:(_Bool)arg1 callBack:(CDUnknownBlockType)arg2;
+ (void)setTTMonitorCallBack:(CDUnknownBlockType)arg1;
+ (id)sharedEngineWithAppId:(id)arg1 delegate:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) int audioOutputChannelNum; // @synthesize audioOutputChannelNum=_audioOutputChannelNum;
@property(nonatomic) int audioInputChannelNum; // @synthesize audioInputChannelNum=_audioInputChannelNum;
@property(nonatomic) int audioOutputSampleRate; // @synthesize audioOutputSampleRate=_audioOutputSampleRate;
@property(nonatomic) int audioInputSampleRate; // @synthesize audioInputSampleRate=_audioInputSampleRate;
@property _Bool usePushMode; // @synthesize usePushMode=_usePushMode;
@property _Bool useTexture; // @synthesize useTexture=_useTexture;
@property _Bool isAudioExtRender; // @synthesize isAudioExtRender=_isAudioExtRender;
@property _Bool isAudioExtSink; // @synthesize isAudioExtSink=_isAudioExtSink;
@property _Bool isAudioExtSource; // @synthesize isAudioExtSource=_isAudioExtSource;
@property _Bool isVideoExtRender; // @synthesize isVideoExtRender=_isVideoExtRender;
@property _Bool isVideoExtSink; // @synthesize isVideoExtSink=_isVideoExtSink;
@property _Bool isVideoExtSource; // @synthesize isVideoExtSource=_isVideoExtSource;
@property(retain) OnerSignalClient *signalClient; // @synthesize signalClient=_signalClient;
@property(retain, nonatomic) NSString *currentSignalingHost; // @synthesize currentSignalingHost=_currentSignalingHost;
@property(retain, nonatomic) OnerDualStreamSetting *dualStreamSetting; // @synthesize dualStreamSetting=_dualStreamSetting;
@property(retain, nonatomic) OnerStreamInfo *lowStreamInfo; // @synthesize lowStreamInfo=_lowStreamInfo;
@property(nonatomic) long long audioPlayOutMixStreamVolume; // @synthesize audioPlayOutMixStreamVolume=_audioPlayOutMixStreamVolume;
@property(nonatomic) long long audioPlayOutMixStreamChannelNum; // @synthesize audioPlayOutMixStreamChannelNum=_audioPlayOutMixStreamChannelNum;
@property(nonatomic) long long audioPlayOutMixStreamSampleRate; // @synthesize audioPlayOutMixStreamSampleRate=_audioPlayOutMixStreamSampleRate;
@property(nonatomic) _Bool useAudioPlayOutMixStream; // @synthesize useAudioPlayOutMixStream=_useAudioPlayOutMixStream;
@property(nonatomic) long long subscribeFallbackOption; // @synthesize subscribeFallbackOption=_subscribeFallbackOption;
@property(nonatomic) long long publishFallbackOption; // @synthesize publishFallbackOption=_publishFallbackOption;
@property(retain, nonatomic) OnerCameraCapturerConfiguration *cameraConfiguration; // @synthesize cameraConfiguration=_cameraConfiguration;
@property(retain, nonatomic) NSTimer *joinChannelTimer; // @synthesize joinChannelTimer=_joinChannelTimer;
@property(retain, nonatomic) NSTimer *getRtcServiceTimer; // @synthesize getRtcServiceTimer=_getRtcServiceTimer;
@property(nonatomic) _Bool enableSpeaker; // @synthesize enableSpeaker=_enableSpeaker;
@property(nonatomic) long long beginPublishAudio; // @synthesize beginPublishAudio=_beginPublishAudio;
@property(nonatomic) long long beginPublishVideo; // @synthesize beginPublishVideo=_beginPublishVideo;
@property(nonatomic) _Bool isJoinChannel; // @synthesize isJoinChannel=_isJoinChannel;
@property(nonatomic) _Bool isPublishAudioSuccess; // @synthesize isPublishAudioSuccess=_isPublishAudioSuccess;
@property(nonatomic) _Bool isBeginPublishAudio; // @synthesize isBeginPublishAudio=_isBeginPublishAudio;
@property(nonatomic) _Bool isPublishVideoSuccess; // @synthesize isPublishVideoSuccess=_isPublishVideoSuccess;
@property(nonatomic) _Bool isBeginPublishVideo; // @synthesize isBeginPublishVideo=_isBeginPublishVideo;
@property(nonatomic) _Bool isInRoom; // @synthesize isInRoom=_isInRoom;
@property(retain, nonatomic) NSMutableDictionary *onerStreamMap; // @synthesize onerStreamMap=_onerStreamMap;
@property(retain, nonatomic) OnerSwitchState *switchProviderState; // @synthesize switchProviderState=_switchProviderState;
@property(retain, nonatomic) OnerInRoomState *inRoomState; // @synthesize inRoomState=_inRoomState;
@property(retain, nonatomic) OnerConfigState *configState; // @synthesize configState=_configState;
@property(retain, nonatomic) OnerIdleState *idleState; // @synthesize idleState=_idleState;
@property(copy, nonatomic) NSString *logFilePath; // @synthesize logFilePath=_logFilePath;
@property(copy, nonatomic) NSString *preloadFilePath; // @synthesize preloadFilePath=_preloadFilePath;
@property(nonatomic) int preloadSoundId; // @synthesize preloadSoundId=_preloadSoundId;
@property(nonatomic) long long volumeIndicationSmooth; // @synthesize volumeIndicationSmooth=_volumeIndicationSmooth;
@property(nonatomic) long long volumeIndicationInterval; // @synthesize volumeIndicationInterval=_volumeIndicationInterval;
@property(nonatomic) long long rtcProvider; // @synthesize rtcProvider=_rtcProvider;
@property(nonatomic) long long profile; // @synthesize profile=_profile;
@property(nonatomic) unsigned long long mirrorMode; // @synthesize mirrorMode=_mirrorMode;
@property(nonatomic) long long rtcClientRole; // @synthesize rtcClientRole=_rtcClientRole;
@property(nonatomic) _Bool enableRtcAudio; // @synthesize enableRtcAudio=_enableRtcAudio;
@property(nonatomic) _Bool enableRtcVideo; // @synthesize enableRtcVideo=_enableRtcVideo;
@property(nonatomic) _Bool defaultMuteAllRemoteAudio; // @synthesize defaultMuteAllRemoteAudio=_defaultMuteAllRemoteAudio;
@property(nonatomic) _Bool defaultMuteAllRemoteVideo; // @synthesize defaultMuteAllRemoteVideo=_defaultMuteAllRemoteVideo;
@property(nonatomic) _Bool enableRtcLocalAudio; // @synthesize enableRtcLocalAudio=_enableRtcLocalAudio;
@property(nonatomic) _Bool enableRtcLocalVideo; // @synthesize enableRtcLocalVideo=_enableRtcLocalVideo;
@property(nonatomic) _Bool muteLocalAudio; // @synthesize muteLocalAudio=_muteLocalAudio;
@property(nonatomic) _Bool muteLocalVideo; // @synthesize muteLocalVideo=_muteLocalVideo;
@property(nonatomic) __weak id <OnerAudioFrameObserver> onerAudioFrameObserver; // @synthesize onerAudioFrameObserver=_onerAudioFrameObserver;
@property(nonatomic) long long orientationMode; // @synthesize orientationMode=_orientationMode;
@property(nonatomic) long long videoKBitrate; // @synthesize videoKBitrate=_videoKBitrate;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(retain, nonatomic) NSMutableArray *currentRemoteUsers; // @synthesize currentRemoteUsers=_currentRemoteUsers;
@property(nonatomic) __weak id <OnerRtcEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) OnerRtcVideoCanvas *localCanvas; // @synthesize localCanvas=_localCanvas;
@property(nonatomic) long long sdkProviderType; // @synthesize sdkProviderType=_sdkProviderType;
@property(retain, nonatomic) OnerEngineMessageRelay *sdkProviderMessageRelay; // @synthesize sdkProviderMessageRelay=_sdkProviderMessageRelay;
@property(retain, nonatomic) RTCVendor *sdkProvider; // @synthesize sdkProvider=_sdkProvider;
@property(retain, nonatomic) NSString *signalServerHost; // @synthesize signalServerHost=_signalServerHost;
@property(retain, nonatomic) NSArray *apiServerHosts; // @synthesize apiServerHosts=_apiServerHosts;
@property(retain, nonatomic) NSString *switchServerHost; // @synthesize switchServerHost=_switchServerHost;
@property(nonatomic) long long envMode; // @synthesize envMode=_envMode;
@property(retain, nonatomic) NSString *providerUserId; // @synthesize providerUserId=_providerUserId;
@property(retain, nonatomic) NSString *providerRoomId; // @synthesize providerRoomId=_providerRoomId;
@property(retain, nonatomic) NSData *providerSignature; // @synthesize providerSignature=_providerSignature;
@property(retain, nonatomic) NSString *providerToken; // @synthesize providerToken=_providerToken;
@property(retain, nonatomic) NSString *providerAppId; // @synthesize providerAppId=_providerAppId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSData *sigatureKey; // @synthesize sigatureKey=_sigatureKey;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) EduCreateChannelTask *firstCreateChannelTask; // @synthesize firstCreateChannelTask=_firstCreateChannelTask;
@property(retain, nonatomic) NSMutableDictionary *createChannelTasks; // @synthesize createChannelTasks=_createChannelTasks;
@property(retain, nonatomic) OnerState *mState; // @synthesize mState=_mState;
- (void)runAllCreateChannelTasks;
- (void)releaseAllChannelsWhenDestroySubEngine;
- (void)processCreateChannelTaskMsg:(id)arg1 isSuccess:(_Bool)arg2;
- (void)getRTCServiceWithEduCreateChannelTask:(id)arg1;
- (void)beginWorking;
- (id)lowStreamInfoFromSource;
- (long long)defaultVideoStreamType;
- (_Bool)isEnableRecvDualStream;
- (_Bool)isEnableSendDualStream;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)removeBackgroundObserver;
- (void)initBackgroundObserver;
- (void)changeState:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)onSignalingServerConnected:(_Bool)arg1;
- (void)onStartSignaling:(id)arg1;
- (void)onSignalingSuccess:(id)arg1 SignalType:(long long)arg2 Message:(id)arg3 Elapse:(long long)arg4;
- (void)onSignalingError:(id)arg1 SignalType:(long long)arg2 Message:(id)arg3 ErrorCode:(long long)arg4 Elapse:(long long)arg5;
- (void)rtcEngine:(id)arg1 NotifyMessage:(id)arg2;
- (void)onProcessProviderCbWithMessage:(id)arg1 MessageType:(long long)arg2;
- (void)updateProviderInfoInternal;
- (void)providerJoinRoomInternal;
- (void)switchProviderLeaveRoomInternal;
- (void)oneClickForHelpWithMessage:(id)arg1;
- (void)releaseSignalClient;
- (void)setupSignalClient;
- (void)reportSubscribeAudioEvent:(id)arg1;
- (void)reportPublishAudioEvent;
- (void)reportSubscribeVideoEvent:(id)arg1;
- (void)reportPublishVideoEvent;
- (void)joinChannelInternal;
- (void)updateRoomConfigurationWith:(id)arg1 ChannelName:(id)arg2 UserName:(id)arg3;
- (void)timeoutAction:(id)arg1;
- (void)stopJoinRoomTimer;
- (void)startJoinRoomTimer;
- (void)createEngineKitClient;
- (void)localInitProviderParams;
- (id)getDefaultToken;
- (int)renewChannelKey:(id)arg1;
- (int)disableLastmileTest;
- (int)enableLastmileTest;
- (int)unloadEffect:(int)arg1;
- (int)stopAllEffects;
- (int)stopEffect:(int)arg1;
- (int)playEffect:(int)arg1 filePath:(id)arg2 loopCount:(int)arg3 pitch:(double)arg4 pan:(double)arg5 gain:(double)arg6 publish:(_Bool)arg7;
- (int)preloadEffect:(int)arg1 filePath:(id)arg2;
- (int)resumeAudioMixing;
- (int)pauseAudioMixing;
- (int)stopAudioMixing;
- (int)startAudioMixing:(id)arg1 loopback:(_Bool)arg2 replace:(_Bool)arg3 cycle:(long long)arg4;
- (int)setLocalVideoMirrorMode:(unsigned long long)arg1;
- (int)adjustRecordingSignalVolume:(long long)arg1;
- (int)adjustPlaybackSignalVolume:(long long)arg1;
- (int)pullExternalAudioFrame:(void *)arg1 size:(int)arg2;
- (int)pushExternalAudioFrame:(void *)arg1 size:(int)arg2 timestamp:(double)arg3;
- (void)audioExtRenderEnable:(_Bool)arg1 sampleRate:(int)arg2 playoutChannelNum:(int)arg3;
- (void)audioExtSinkEnable:(_Bool)arg1;
- (void)audioExtSourceEnable:(_Bool)arg1 sampleRate:(int)arg2 recordChannelNum:(int)arg3;
- (int)pushExternalVideoFrame:(struct __CVBuffer *)arg1 time:(CDStruct_1b6d18a9)arg2 rotation:(long long)arg3 extendedData:(id)arg4 supplementaryInfo:(id)arg5;
- (void)videoExtRenderEnable:(_Bool)arg1;
- (void)videoExtSinkEnable:(_Bool)arg1;
- (void)videoExtSourceEnable:(_Bool)arg1 useTexture:(_Bool)arg2 pushMode:(_Bool)arg3;
- (int)enableAudioVolumeIndication:(long long)arg1 smooth:(long long)arg2;
- (int)enableLocalAudio:(_Bool)arg1;
- (int)enableLocalVideo:(_Bool)arg1;
- (int)disableAudio;
- (int)enableAudio;
- (int)disableVideo;
- (int)enableVideo;
- (int)stopPreview;
- (int)startPreview;
- (_Bool)isSpeakerphoneEnabled;
- (int)setEnableSpeakerphone:(_Bool)arg1;
- (void)adjustAudioMixingPlayoutSignalVolume:(int)arg1;
- (void)pushAudioMixingStreamData:(void *)arg1 frameNum:(long long)arg2 sampleRate:(long long)arg3 channelNum:(long long)arg4;
- (int)getAudioMixingStreamCachedFrameNum;
- (_Bool)setAudioPlayoutMixStream:(_Bool)arg1 sampleRate:(long long)arg2 channelNum:(long long)arg3;
- (void)setExternalVideoSource:(_Bool)arg1 useTexture:(_Bool)arg2 pushMode:(_Bool)arg3;
- (int)muteAllRemoteAudioStreams:(_Bool)arg1;
- (int)setDefaultMuteAllRemoteAudioStreams:(_Bool)arg1;
- (int)muteRemoteAudioStream:(id)arg1 mute:(_Bool)arg2;
- (int)muteLocalAudioStream:(_Bool)arg1;
- (int)muteAllRemoteVideoStreams:(_Bool)arg1;
- (int)setDefaultMuteAllRemoteVideoStreams:(_Bool)arg1;
- (int)muteRemoteVideoStream:(id)arg1 mute:(_Bool)arg2;
- (int)muteLocalVideoStream:(_Bool)arg1;
- (_Bool)isSendDualStream;
- (id)getRtcVideoResolution;
- (void)setCameraCapturerConfiguration:(id)arg1;
- (int)switchCamera;
- (_Bool)setAudioFrameObserver:(id)arg1;
- (int)setupRemoteVideo:(id)arg1;
- (int)setupLocalVideo:(id)arg1;
- (int)removeLiveTranscoding:(id)arg1;
- (int)addLiveTranscoding:(id)arg1 enable:(_Bool)arg2;
- (int)updateLiveTranscodingParam:(id)arg1;
- (long long)sendMessage:(id)arg1 message:(id)arg2;
- (int)leaveChannel:(CDUnknownBlockType)arg1;
- (_Bool)joinChannel;
- (_Bool)checkDupJoinChannel;
- (_Bool)configEngine:(id)arg1 channelName:(id)arg2 uid:(id)arg3 serviceLevel:(long long)arg4;
- (_Bool)configEngine:(id)arg1 channelName:(id)arg2 uid:(id)arg3 rtcProvider:(long long)arg4;
- (_Bool)configEngine:(id)arg1 channelName:(id)arg2 uid:(id)arg3;
- (int)setupRemoteSubscribeFallbackOption:(long long)arg1;
- (int)setupLocalPublishFallbackOption:(long long)arg1;
- (void)setVideoLowStreamResolution:(struct CGSize)arg1 andFrameRate:(long long)arg2 maxKbps:(long long)arg3 orientationMode:(long long)arg4;
- (void)setRemoteDefaultVideoStreamType:(long long)arg1;
- (void)setRemoteVideoStream:(id)arg1 type:(long long)arg2;
- (void)enableRecvDualStream:(_Bool)arg1;
- (void)enableSendDualStream:(_Bool)arg1;
- (int)setVideoResolution:(struct CGSize)arg1 andFrameRate:(long long)arg2 maxKbps:(long long)arg3 orientationMode:(long long)arg4;
- (int)setVideoResolution:(struct CGSize)arg1 andFrameRate:(long long)arg2 maxKbps:(long long)arg3;
- (int)setChannelProfile:(long long)arg1;
- (void)setClientRole:(long long)arg1;
- (void)setLogFile:(id)arg1;
- (_Bool)setSwitchServerHost:(id)arg1 apiServerHost:(id)arg2 signalHost:(id)arg3;
- (_Bool)setSwitchServerHost:(id)arg1 apiServerHostArray:(id)arg2 signalHost:(id)arg3;
- (void)buildFeedBackWithHost:(id)arg1;
- (void)reInitValue;
- (void)dealloc;
- (void)destroyInstance;
- (void)setUpWith:(id)arg1 delegate:(id)arg2;
- (id)initWithOtherOnerEngine:(id)arg1 AppId:(id)arg2;
- (void)setClientProperty:(id)arg1;
- (void)rtcEngine:(id)arg1 didDebugInfoType:(unsigned long long)arg2 msgData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

