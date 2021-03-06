//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveMTScreenCastService-Protocol.h"

@class AVPlayer, AVPlayerLayer, MPVolumeView, NSString, UIView;
@protocol IESLiveMTScreenCastDevice, IESLiveMTScreenCastInfo;

@interface IESLiveMTScreenCastServiceImpl : NSObject <IESLiveMTScreenCastService>
{
    _Bool _airPlayPlayerCurrentTimeProgressed;
    unsigned long long _currentStatus;
    id <IESLiveMTScreenCastInfo> _currentCastInfo;
    id <IESLiveMTScreenCastDevice> _currentCastDevice;
    id <IESLiveMTScreenCastInfo> _temporaryCastInfo;
    UIView *_airPlayView;
    AVPlayer *_airPlayPlayer;
    AVPlayerLayer *_airPlayPlayerLayer;
    UIView *_airPlayHostView;
    id _airPlayPlayerObserverToken;
    MPVolumeView *_airPlayDetectorView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool airPlayPlayerCurrentTimeProgressed; // @synthesize airPlayPlayerCurrentTimeProgressed=_airPlayPlayerCurrentTimeProgressed;
@property(retain, nonatomic) MPVolumeView *airPlayDetectorView; // @synthesize airPlayDetectorView=_airPlayDetectorView;
@property(retain, nonatomic) id airPlayPlayerObserverToken; // @synthesize airPlayPlayerObserverToken=_airPlayPlayerObserverToken;
@property(retain, nonatomic) UIView *airPlayHostView; // @synthesize airPlayHostView=_airPlayHostView;
@property(retain, nonatomic) AVPlayerLayer *airPlayPlayerLayer; // @synthesize airPlayPlayerLayer=_airPlayPlayerLayer;
@property(retain, nonatomic) AVPlayer *airPlayPlayer; // @synthesize airPlayPlayer=_airPlayPlayer;
@property(retain, nonatomic) UIView *airPlayView; // @synthesize airPlayView=_airPlayView;
@property(retain, nonatomic) id <IESLiveMTScreenCastInfo> temporaryCastInfo; // @synthesize temporaryCastInfo=_temporaryCastInfo;
@property(retain, nonatomic) id <IESLiveMTScreenCastDevice> currentCastDevice; // @synthesize currentCastDevice=_currentCastDevice;
@property(retain, nonatomic) id <IESLiveMTScreenCastInfo> currentCastInfo; // @synthesize currentCastInfo=_currentCastInfo;
@property(nonatomic) unsigned long long currentStatus; // @synthesize currentStatus=_currentStatus;
- (id)currentAirPlayOutputPort;
- (void)setupAirPlayerHostView;
- (void)showAirPlayPicker;
- (void)airPlayPlayerCurrentTimeDidChange;
- (void)airPlayPlayerStatusDidChage:(long long)arg1;
- (void)airPlayDevicePlaybackDidBecomeActive:(_Bool)arg1;
- (void)audioSessionRouteDidChange:(id)arg1;
- (void)stopAirPlaying;
- (void)tryBeginAirPlaying;
- (void)resetToIdle;
- (void)stopAndResetForcibly:(_Bool)arg1;
- (void)stopScreenCasting;
- (void)tryStartingScreenCastWithInfo:(id)arg1;
- (void)showCastDevicePickerWithInfo:(id)arg1;
- (void)beginDetectingDevicesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isCastingInRoomWithID:(id)arg1;
- (_Bool)isSystemConncetedToCastDevice;
- (_Bool)isMirroringMainScreen;
- (id)makeCastInfoWithRoom:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

