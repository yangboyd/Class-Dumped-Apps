//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class LCSignalUser, NSData, NSDictionary, NSString;

@interface LCInteractConfiguration : NSObject
{
    _Bool _enableInEarMonitoring;
    _Bool _enableExternVideo;
    _Bool _retainLastVideoFrame;
    _Bool _enableExternAudio;
    _Bool _enableAVFrameCallback;
    _Bool _enableMixedLivePush;
    _Bool _useExternalRender;
    _Bool _useExternalAudioRender;
    _Bool _forceGlobalAPIServer;
    _Bool _isLandscapeVideo;
    LCSignalUser *_roomOwner;
    LCSignalUser *_currentUser;
    long long _mode;
    long long _playMode;
    NSString *_publishUrl;
    long long _streamWidth;
    long long _streamHeight;
    long long _streamFps;
    long long _streamBitrate;
    long long _streamAudioCodec;
    long long _streamVideoCodec;
    long long _customizedAudioProfile;
    unsigned long long _externAudioSampleRate;
    unsigned long long _externAudioChannelsPerFrame;
    NSString *_project_key;
    NSString *_appChannelType;
    long long _streamGop;
    long long _streamAudioChannels;
    long long _streamAudioSamplerate;
    long long _streamAduiobitrate;
    NSDictionary *_rtcExtInfo;
    NSString *_deviceId;
    long long _envMode;
    NSString *_channelName;
    NSString *_channelKey;
    NSString *_appID;
    NSData *_appKey;
    long long _clientType;
    struct LCVideoProfile _userCustomizedProfile;
    struct LCVideoProfile _sendToRTCProfile;
}

+ (_Bool)isMultiPeopleLink:(long long)arg1;
+ (id)getVideoProfileDesc:(struct LCVideoProfile)arg1;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSData *appKey; // @synthesize appKey=_appKey;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *channelKey; // @synthesize channelKey=_channelKey;
@property(copy, nonatomic) NSString *channelName; // @synthesize channelName=_channelName;
@property(nonatomic) _Bool isLandscapeVideo; // @synthesize isLandscapeVideo=_isLandscapeVideo;
@property(nonatomic) long long envMode; // @synthesize envMode=_envMode;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) _Bool forceGlobalAPIServer; // @synthesize forceGlobalAPIServer=_forceGlobalAPIServer;
@property(copy, nonatomic) NSDictionary *rtcExtInfo; // @synthesize rtcExtInfo=_rtcExtInfo;
@property(nonatomic) long long streamAduiobitrate; // @synthesize streamAduiobitrate=_streamAduiobitrate;
@property(nonatomic) long long streamAudioSamplerate; // @synthesize streamAudioSamplerate=_streamAudioSamplerate;
@property(nonatomic) long long streamAudioChannels; // @synthesize streamAudioChannels=_streamAudioChannels;
@property(nonatomic) long long streamGop; // @synthesize streamGop=_streamGop;
@property(copy, nonatomic) NSString *appChannelType; // @synthesize appChannelType=_appChannelType;
@property(nonatomic) _Bool useExternalAudioRender; // @synthesize useExternalAudioRender=_useExternalAudioRender;
@property(nonatomic) _Bool useExternalRender; // @synthesize useExternalRender=_useExternalRender;
@property(nonatomic) _Bool enableMixedLivePush; // @synthesize enableMixedLivePush=_enableMixedLivePush;
@property(nonatomic) _Bool enableAVFrameCallback; // @synthesize enableAVFrameCallback=_enableAVFrameCallback;
@property(copy, nonatomic) NSString *project_key; // @synthesize project_key=_project_key;
@property(nonatomic) unsigned long long externAudioChannelsPerFrame; // @synthesize externAudioChannelsPerFrame=_externAudioChannelsPerFrame;
@property(nonatomic) unsigned long long externAudioSampleRate; // @synthesize externAudioSampleRate=_externAudioSampleRate;
@property(nonatomic) _Bool enableExternAudio; // @synthesize enableExternAudio=_enableExternAudio;
@property _Bool retainLastVideoFrame; // @synthesize retainLastVideoFrame=_retainLastVideoFrame;
@property(nonatomic) _Bool enableExternVideo; // @synthesize enableExternVideo=_enableExternVideo;
@property(nonatomic) _Bool enableInEarMonitoring; // @synthesize enableInEarMonitoring=_enableInEarMonitoring;
@property(nonatomic) struct LCVideoProfile sendToRTCProfile; // @synthesize sendToRTCProfile=_sendToRTCProfile;
@property(nonatomic) struct LCVideoProfile userCustomizedProfile; // @synthesize userCustomizedProfile=_userCustomizedProfile;
@property(nonatomic) long long customizedAudioProfile; // @synthesize customizedAudioProfile=_customizedAudioProfile;
@property(nonatomic) long long streamVideoCodec; // @synthesize streamVideoCodec=_streamVideoCodec;
@property(nonatomic) long long streamAudioCodec; // @synthesize streamAudioCodec=_streamAudioCodec;
@property(nonatomic) long long streamBitrate; // @synthesize streamBitrate=_streamBitrate;
@property(nonatomic) long long streamFps; // @synthesize streamFps=_streamFps;
@property(nonatomic) long long streamHeight; // @synthesize streamHeight=_streamHeight;
@property(nonatomic) long long streamWidth; // @synthesize streamWidth=_streamWidth;
@property(copy, nonatomic) NSString *publishUrl; // @synthesize publishUrl=_publishUrl;
@property(nonatomic) long long playMode; // @synthesize playMode=_playMode;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) LCSignalUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) LCSignalUser *roomOwner; // @synthesize roomOwner=_roomOwner;
- (void).cxx_destruct;
- (id)descOfMode:(long long)arg1;
- (_Bool)validate;
- (id)sdkParamDescription;
- (id)description;
- (id)init;

@end

