//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "LynxUI.h"

#import "BDXVideoPlayerDelegate-Protocol.h"

@class BDXVideoPlayerVideoModel, NSDictionary, NSNumber, NSString;

@interface BDXLynxVideoView : LynxUI <BDXVideoPlayerDelegate>
{
    _Bool _needReplay;
    _Bool _autoPlay;
    _Bool _mute;
    _Bool _isLoop;
    _Bool _useSinglePlayer;
    _Bool _needPreload;
    _Bool _autoLifecycle;
    _Bool _listenDeviceChange;
    double _seekTime;
    NSNumber *_startTime;
    NSNumber *_volume;
    NSNumber *_rate;
    NSString *_posterURL;
    NSString *_fitMode;
    NSString *_control;
    NSDictionary *_paramsDict;
    BDXVideoPlayerVideoModel *_videoModel;
}

+ (id)__lynx_prop_config__13813;
+ (id)__lynx_prop_config__13312;
+ (id)__lynx_prop_config__12711;
+ (id)__lynx_prop_config__12110;
+ (id)__lynx_prop_config__1139;
+ (id)__lynx_prop_config__1078;
+ (id)__lynx_prop_config__1017;
+ (id)__lynx_prop_config__906;
+ (id)__lynx_prop_config__845;
+ (id)__lynx_prop_config__784;
+ (id)__lynx_prop_config__723;
+ (id)__lynx_prop_config__662;
+ (id)__lynx_prop_config__601;
+ (id)__lynx_prop_config__440;
+ (void)load;
- (void).cxx_destruct;
@property(retain, nonatomic) BDXVideoPlayerVideoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) NSDictionary *paramsDict; // @synthesize paramsDict=_paramsDict;
@property(copy, nonatomic) NSString *control; // @synthesize control=_control;
@property(copy, nonatomic) NSString *fitMode; // @synthesize fitMode=_fitMode;
@property(copy, nonatomic) NSString *posterURL; // @synthesize posterURL=_posterURL;
@property(retain, nonatomic) NSNumber *rate; // @synthesize rate=_rate;
@property(retain, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool listenDeviceChange; // @synthesize listenDeviceChange=_listenDeviceChange;
@property(nonatomic) _Bool autoLifecycle; // @synthesize autoLifecycle=_autoLifecycle;
@property(nonatomic) _Bool needPreload; // @synthesize needPreload=_needPreload;
@property(nonatomic) _Bool useSinglePlayer; // @synthesize useSinglePlayer=_useSinglePlayer;
@property(nonatomic) _Bool isLoop; // @synthesize isLoop=_isLoop;
@property(nonatomic) _Bool mute; // @synthesize mute=_mute;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) _Bool needReplay; // @synthesize needReplay=_needReplay;
@property(nonatomic) double seekTime; // @synthesize seekTime=_seekTime;
- (void)didSeek:(double)arg1;
- (void)didDeviceChange:(id)arg1;
- (void)didBufferChangeWithInfo:(id)arg1;
- (void)didBufferChange;
- (void)didFullscreenChange:(id)arg1;
- (void)didTimeUpdate:(id)arg1;
- (void)didError;
- (void)didEnd;
- (void)didPause;
- (void)didPlay;
- (void)__setupVideoModel:(id)arg1;
- (id)__resolveSrcAsUrl:(id)arg1;
- (id)__resolveSrcAsSchema:(id)arg1;
- (id)__resolveSrcAsJSON:(id)arg1;
- (void)__controlPlayerWithCommand:(id)arg1;
- (void)control:(id)arg1 requestReset:(_Bool)arg2;
- (void)listenDeviceChange:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)useSinglePlayer:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)fitMode:(id)arg1 requestReset:(_Bool)arg2;
- (void)posterURL:(id)arg1 requestReset:(_Bool)arg2;
- (void)autoLifecycle:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)rate:(id)arg1 requestReset:(_Bool)arg2;
- (void)volume:(id)arg1 requestReset:(_Bool)arg2;
- (void)mute:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)repeat:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)startTime:(id)arg1 requestReset:(_Bool)arg2;
- (void)preload:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)autoPlay:(_Bool)arg1 requestReset:(_Bool)arg2;
- (void)schema:(id)arg1 requestReset:(_Bool)arg2;
- (id)createView;
- (_Bool)hasCustomLayout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

