//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMAudioSessionEventObserver-Protocol.h"
#import "HAMSystemNotificationsObserver-Protocol.h"

@class AVAudioEngine, AVAudioMixerNode, AVAudioSession, GIMMe, HAMTimer, NSHashTable, NSMutableArray, NSString;
@protocol HAMAudioSessionDelegate, HAMClock, OS_dispatch_queue, OS_dispatch_source;

@interface HAMAudioEngine : NSObject <HAMAudioSessionEventObserver, HAMSystemNotificationsObserver>
{
    CDStruct_491657e7 _config;
    id <HAMClock> _clock;
    AVAudioSession *_session;
    AVAudioEngine *_engine;
    id <HAMAudioSessionDelegate> _audioSessionDelegate;
    _Bool _terminated;
    _Bool _interrupted;
    _Bool _backgrounded;
    _Bool _inactive;
    float _outputLatency;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_attemptStartTimer;
    AVAudioMixerNode *_mixerNode;
    NSMutableArray *_playerNodes;
    NSHashTable *_playingPlayerNodes;
    HAMTimer *_idleTimer;
    float _outputVolume;
    double _prepareTimeout;
    // Error parsing type: {atomic<bool>="__a_"AB}, name: _appIsTerminating
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) float outputVolume; // @synthesize outputVolume=_outputVolume;
- (void).cxx_destruct;
- (void)updateCachedOutputLatency;
- (void)pauseOrStop;
- (void)onIdleTimer;
- (void)cancelIdleTimer;
- (void)maybeCreateIdleTimer;
- (_Bool)isPreparing;
- (_Bool)isIdle;
- (void)forceStartAfterInterruption;
- (void)destroyAudioEngine;
- (void)createAudioEngine;
- (void)executeBlockOnAllPlayerNodes:(CDUnknownBlockType)arg1;
- (void)handleMediaServicesReset;
- (void)handleAudioEngineConfigurationChange;
- (void)attemptStart;
- (void)endAttemptStartTimer;
- (void)beginAttemptStartTimer;
- (_Bool)canBeginAttemptStartTimer;
- (void)connectPlayerNode:(id)arg1;
- (void)appWillTerminate:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)audioEngineConfigurationDidChange:(id)arg1;
- (void)onAudioSessionRouteChange:(id)arg1;
- (void)onAudioSessionInterruption:(id)arg1;
- (void)onAudioSessionMediaServicesReset:(id)arg1;
- (id)playerNodeWithContext:(id)arg1 format:(id)arg2 processingChain:(id)arg3;
- (void)setConfig:(CDStruct_491657e7)arg1;
- (void)terminate;
- (void)stop;
- (void)prepare;
- (void)dealloc;
- (id)initWithConfig:(CDStruct_491657e7)arg1 audioSessionDelegate:(id)arg2;
- (id)initWithConfig:(CDStruct_491657e7)arg1 queue:(id)arg2 audioSessionDelegate:(id)arg3;
- (void)forceRestart;
- (void)playerNodeDidTerminate:(id)arg1;
- (void)playerNodeDidPause:(id)arg1;
- (void)playerNodeWillPlay:(id)arg1;
- (float)outputPresentationLatencyForNode:(id)arg1;
@property(readonly) _Bool running;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

