//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/MLPlayerConfig-Protocol.h>

@class NSDictionary, NSString, YTIAudioConfig, YTIDataSaverConfig, YTIFairPlayConfig, YTIHamplayerConfig, YTIHlsProxyConfig, YTIIosAvPlayerConfig, YTILivePlayerConfig, YTIManifestlessWindowedLiveConfig, YTIMediaCommonConfig, YTIPlaybackStartConfig, YTIPlayerConfig, YTIVrConfig;

@interface MLInnerTubePlayerConfig : NSObject <MLPlayerConfig>
{
    YTIPlayerConfig *_playerConfig;
    _Bool _offlineable;
    _Bool _offline;
    _Bool _varispeedAllowed;
    _Bool _useInnerTubeDRMService;
    _Bool _fetchManifestWhenNotActive;
    YTIHlsProxyConfig *_HLSProxyConfig;
    YTIIosAvPlayerConfig *_AVPlayerConfig;
    YTIHamplayerConfig *_hamplayerConfig;
    NSDictionary *_videoToAudioItagMap;
    NSString *_DRMSessionID;
    YTIFairPlayConfig *_fairPlayConfig;
    YTILivePlayerConfig *_livePlayerConfig;
    YTIVrConfig *_VRConfig;
    double _stickyCeilingDuration;
    YTIDataSaverConfig *_dataSaverConfig;
    YTIAudioConfig *_audioConfig;
    YTIMediaCommonConfig *_mediaCommonConfig;
    YTIPlaybackStartConfig *_playbackStartConfig;
    YTIManifestlessWindowedLiveConfig *_manifestlessWindowedLiveConfig;
}

+ (id)playerConfigWithPlayerData:(id)arg1;
+ (id)playerConfigWithPlayerData:(id)arg1 varispeedAllowed:(_Bool)arg2 fetchManifestWhenNotActive:(_Bool)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) YTIManifestlessWindowedLiveConfig *manifestlessWindowedLiveConfig; // @synthesize manifestlessWindowedLiveConfig=_manifestlessWindowedLiveConfig;
@property(readonly, nonatomic) YTIPlaybackStartConfig *playbackStartConfig; // @synthesize playbackStartConfig=_playbackStartConfig;
@property(readonly, nonatomic) _Bool fetchManifestWhenNotActive; // @synthesize fetchManifestWhenNotActive=_fetchManifestWhenNotActive;
@property(readonly, nonatomic) _Bool useInnerTubeDRMService; // @synthesize useInnerTubeDRMService=_useInnerTubeDRMService;
@property(readonly, nonatomic) _Bool varispeedAllowed; // @synthesize varispeedAllowed=_varispeedAllowed;
@property(readonly, nonatomic) YTIMediaCommonConfig *mediaCommonConfig; // @synthesize mediaCommonConfig=_mediaCommonConfig;
@property(readonly, nonatomic) YTIAudioConfig *audioConfig; // @synthesize audioConfig=_audioConfig;
@property(readonly, nonatomic) YTIDataSaverConfig *dataSaverConfig; // @synthesize dataSaverConfig=_dataSaverConfig;
@property(readonly, nonatomic) _Bool offline; // @synthesize offline=_offline;
@property(readonly, nonatomic) _Bool offlineable; // @synthesize offlineable=_offlineable;
@property(readonly, nonatomic) double stickyCeilingDuration; // @synthesize stickyCeilingDuration=_stickyCeilingDuration;
@property(readonly, nonatomic) YTIVrConfig *VRConfig; // @synthesize VRConfig=_VRConfig;
@property(readonly, nonatomic) YTILivePlayerConfig *livePlayerConfig; // @synthesize livePlayerConfig=_livePlayerConfig;
@property(readonly, nonatomic) YTIFairPlayConfig *fairPlayConfig; // @synthesize fairPlayConfig=_fairPlayConfig;
@property(readonly, nonatomic) NSString *DRMSessionID; // @synthesize DRMSessionID=_DRMSessionID;
@property(readonly, nonatomic) NSDictionary *videoToAudioItagMap; // @synthesize videoToAudioItagMap=_videoToAudioItagMap;
@property(readonly, nonatomic) YTIHamplayerConfig *hamplayerConfig; // @synthesize hamplayerConfig=_hamplayerConfig;
@property(readonly, nonatomic) YTIIosAvPlayerConfig *AVPlayerConfig; // @synthesize AVPlayerConfig=_AVPlayerConfig;
@property(readonly, nonatomic) YTIHlsProxyConfig *HLSProxyConfig; // @synthesize HLSProxyConfig=_HLSProxyConfig;
- (id)initWithHLSProxyConfig:(id)arg1 AVPlayerConfig:(id)arg2 hamplayerConfig:(id)arg3 videoToAudioItagMap:(id)arg4 DRMSessionID:(id)arg5 fairPlayConfig:(id)arg6 livePlayerConfig:(id)arg7 VRConfig:(id)arg8 stickyCeilingDuration:(double)arg9 offlineable:(_Bool)arg10 offline:(_Bool)arg11 dataSaverConfig:(id)arg12 audioConfig:(id)arg13 mediaCommonConfig:(id)arg14 varispeedAllowed:(_Bool)arg15 useInnerTubeDRMService:(_Bool)arg16 fetchManifestWhenNotActive:(_Bool)arg17 playbackStartConfig:(id)arg18 manifestlessWindowedLiveConfig:(id)arg19;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

