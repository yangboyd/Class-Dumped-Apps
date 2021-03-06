//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTInteractClientV2.h"

#import "ByteAudioDeviceObserver-Protocol.h"
#import "ByteRtcEngineDelegate-Protocol.h"
#import "TTInteractVideoFrozenStatisticsDelegate-Protocol.h"

@class ByteRtcEngineKit, NSMutableDictionary, NSString, TTInteractByteRtcSessionV2, TTInteractConfiguration, TTInteractExternalAudioPlayer, TTInteractRtcClientParams, TTInteractRtcTranscodeAVParams;
@protocol TTInteractClientDelegateV2;

@interface ByteClientV2 : TTInteractClientV2 <ByteAudioDeviceObserver, TTInteractVideoFrozenStatisticsDelegate, ByteRtcEngineDelegate>
{
    _Bool _usingSelfDefineVideoFrozenStatistics;
    _Bool _enableTranscoding;
    _Bool _isNeedStartVolumeBySelf;
    TTInteractExternalAudioPlayer *_externalAudioPlayer;
    id <TTInteractClientDelegateV2> _delegate;
    NSString *_appId;
    ByteRtcEngineKit *_rtcEngine;
    CDUnknownBlockType _internAudioVolumeReportBlock;
    TTInteractConfiguration *_roleConfig;
    NSMutableDictionary *_remoteUsersMap;
    TTInteractByteRtcSessionV2 *_localSession;
    TTInteractByteRtcSessionV2 *_fullSession;
    long long _runState;
    TTInteractRtcClientParams *_rtcClientParams;
    TTInteractRtcTranscodeAVParams *_rtcTranscodeAVParams;
}

+ (id)convertByteRtcNetworkQuality:(id)arg1;
+ (unsigned long long)convertByteNetworkQuality:(unsigned long long)arg1;
+ (id)getVendorName;
+ (id)getSdkVersion;
@property(nonatomic) _Bool isNeedStartVolumeBySelf; // @synthesize isNeedStartVolumeBySelf=_isNeedStartVolumeBySelf;
@property(retain, nonatomic) TTInteractRtcTranscodeAVParams *rtcTranscodeAVParams; // @synthesize rtcTranscodeAVParams=_rtcTranscodeAVParams;
@property(retain, nonatomic) TTInteractRtcClientParams *rtcClientParams; // @synthesize rtcClientParams=_rtcClientParams;
@property _Bool enableTranscoding; // @synthesize enableTranscoding=_enableTranscoding;
@property(nonatomic) long long runState; // @synthesize runState=_runState;
@property(nonatomic) __weak TTInteractByteRtcSessionV2 *fullSession; // @synthesize fullSession=_fullSession;
@property(retain, nonatomic) TTInteractByteRtcSessionV2 *localSession; // @synthesize localSession=_localSession;
@property(retain, nonatomic) NSMutableDictionary *remoteUsersMap; // @synthesize remoteUsersMap=_remoteUsersMap;
@property(retain, nonatomic) TTInteractConfiguration *roleConfig; // @synthesize roleConfig=_roleConfig;
@property(copy, nonatomic) CDUnknownBlockType internAudioVolumeReportBlock; // @synthesize internAudioVolumeReportBlock=_internAudioVolumeReportBlock;
@property(retain, nonatomic) ByteRtcEngineKit *rtcEngine; // @synthesize rtcEngine=_rtcEngine;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) __weak id <TTInteractClientDelegateV2> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool usingSelfDefineVideoFrozenStatistics; // @synthesize usingSelfDefineVideoFrozenStatistics=_usingSelfDefineVideoFrozenStatistics;
@property(retain, nonatomic) TTInteractExternalAudioPlayer *externalAudioPlayer; // @synthesize externalAudioPlayer=_externalAudioPlayer;
- (void).cxx_destruct;
- (void)onAudioDevicePlayoutStop;
- (void)onAudioDevicePlayoutStart;
- (void)onAudioDeviceRecordStop;
- (void)onAudioDeviceRecordStart;
- (_Bool)needUpdateRemoteFirstAudioOrVideo:(int)arg1 uid:(id)arg2;
- (void)reportVideoFrozenWithUid:(id)arg1 Elapse:(unsigned long long)arg2;
- (int)adjustRecordingSignalVolume:(long long)arg1;
- (int)setAudioMixingPosition:(long long)arg1;
- (int)adjustAudioMixingVolume:(long long)arg1;
- (int)startAudioMixing:(id)arg1 loopback:(_Bool)arg2 replace:(_Bool)arg3 cycle:(long long)arg4;
- (int)resumeAudioMixing;
- (int)pauseAudioMixing;
- (int)stopAudioMixing;
- (int)getAudioMixingCurrentPosition;
- (int)getAudioMixingDuration;
- (int)enableInEarMonitoring:(_Bool)arg1;
- (void)rtcEngine:(id)arg1 didProviderEventOccur:(long long)arg2 direction:(id)arg3 message:(id)arg4;
- (id)ByteProviderEventStr:(long long)arg1;
- (void)rtcEngine:(id)arg1 TransCodingWithUrl:(id)arg2 errorCode:(long long)arg3;
- (void)rtcEngine:(id)arg1 didVideoMuted:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcEngine:(id)arg1 didVideoEnabled:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcEngine:(id)arg1 didAudioMuted:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcEngine:(id)arg1 didLocalAudioEnabled:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcEngine:(id)arg1 didAudioEnabled:(_Bool)arg2 byUid:(id)arg3;
- (void)rtcEngine:(id)arg1 remoteVideoStateChangedOfUid:(id)arg2 state:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 remoteAudioStats:(id)arg2;
- (void)rtcEngine:(id)arg1 remoteVideoStats:(id)arg2;
- (void)rtcEngine:(id)arg1 localAudioStats:(id)arg2;
- (void)rtcEngine:(id)arg1 localVideoStats:(id)arg2;
- (void)rtcEngine:(id)arg1 reportRtcStats:(id)arg2;
- (void)rtcEngine:(id)arg1 reportToTTMonitorData:(id)arg2 logTypeStr:(id)arg3;
- (void)rtcEngine:(id)arg1 networkQuality:(id)arg2;
- (void)rtcEngine:(id)arg1 audioQualityOfUid:(id)arg2 quality:(unsigned long long)arg3 delay:(unsigned long long)arg4 lost:(unsigned long long)arg5;
- (void)rtcEngineRequestChannelKey:(id)arg1;
- (void)rtcEngineConnectionDidInterrupted:(id)arg1;
- (void)rtcEngineConnectionDidLost:(id)arg1;
- (void)rtcEngine:(id)arg1 didOccurWarning:(long long)arg2;
- (void)rtcEngine:(id)arg1 didOccurError:(long long)arg2;
- (void)rtcEngine:(id)arg1 firstLocalAudioFrame:(long long)arg2;
- (void)rtcEngine:(id)arg1 didOfflineOfUid:(id)arg2 reason:(unsigned long long)arg3;
- (void)rtcEngine:(id)arg1 firstLocalVideoFrameWithSize:(struct CGSize)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 didJoinedOfUid:(id)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 firstRemoteVideoFrameOfUid:(id)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 firstRemoteVideoDecodedOfUid:(id)arg2 size:(struct CGSize)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 firstRemoteAudioFrameOfUid:(id)arg2 elapsed:(long long)arg3;
- (void)rtcEngine:(id)arg1 didRejoinChannel:(id)arg2 withUid:(id)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 didJoinChannel:(id)arg2 withUid:(id)arg3 elapsed:(long long)arg4;
- (void)rtcEngine:(id)arg1 reportAudioVolumeIndicationOfSpeakers:(id)arg2 totalVolume:(long long)arg3;
- (void)didJoinChannel:(id)arg1 withUid:(id)arg2 elapsed:(long long)arg3;
- (void)compositingLayoutOfPublisher;
- (id)getTranscoding;
- (_Bool)supportPublish;
- (int)renewChannelKey:(id)arg1;
- (long long)audioProfile;
- (long long)videoProfile;
- (id)kit;
- (void)layoutSessionViews:(_Bool)arg1;
- (void)addLocalSessionWithMode:(long long)arg1;
- (int)reportAudioVolumeIndicationWithDuration:(double)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setClientConfig:(id)arg1;
- (id)config;
- (int)muteAllRemoteAudioStreams:(_Bool)arg1;
- (int)muteRemoteAudioStream:(id)arg1 mute:(_Bool)arg2;
- (int)muteLocalAudioStream:(_Bool)arg1;
- (_Bool)isJoined;
- (_Bool)pullAudioFrame:(void *)arg1 size:(int)arg2 uid:(id)arg3;
- (void)processAudio:(void *)arg1 samples:(unsigned long long)arg2 timestamp:(double)arg3;
- (void)processAudio:(struct opaqueCMSampleBuffer *)arg1;
- (void)processVideo:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2 extData:(id)arg3;
- (void)leaveChannelWithDestroy:(_Bool)arg1;
- (int)joinChannelByKey:(id)arg1 config:(id)arg2;
- (_Bool)setEnableUseDefaultSignalingServer:(_Bool)arg1;
- (void)bindRenderer:(id)arg1;
- (void)bindCavas:(id)arg1;
- (id)newSessionOfUid:(id)arg1;
- (id)sessionOfStrUid:(id)arg1;
- (void)reportByteLogWithLevel:(int)arg1 filename:(id)arg2 tag:(id)arg3 line:(int)arg4 funcName:(id)arg5 format:(id)arg6;
- (void)setupWithAppId:(id)arg1 delegate:(id)arg2 signature:(id)arg3;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

