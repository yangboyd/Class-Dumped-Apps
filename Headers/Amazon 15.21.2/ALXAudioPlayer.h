//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALSMBaseStateMachineTarget-Protocol.h"
#import "ALXActionHandler-Protocol.h"
#import "ALXAudioChannelManagerStatusDelegate-Protocol.h"

@class ALXAudioPlayerStateMachine, ALXMediaManager, NSString;

@interface ALXAudioPlayer : NSObject <ALSMBaseStateMachineTarget, ALXAudioChannelManagerStatusDelegate, ALXActionHandler>
{
    ALXAudioPlayerStateMachine *_stateMachine;
    ALXMediaManager *_mediaManager;
}

@property(retain, nonatomic) ALXMediaManager *mediaManager; // @synthesize mediaManager=_mediaManager;
@property(retain, nonatomic) ALXAudioPlayerStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
- (void).cxx_destruct;
- (void)callCompletionHandlerIfAvailable;
- (id)playerActivityForState:(id)arg1;
- (id)context;
- (void)handleAction:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (void)channelOfType:(unsigned long long)arg1 didFailWithError:(id)arg2;
- (void)channelOfType:(unsigned long long)arg1 finishedStallingOnTrack:(id)arg2;
- (void)channelOfType:(unsigned long long)arg1 startedStallingPlayingTrack:(id)arg2;
- (void)channelOfType:(unsigned long long)arg1 nearlyFinishedPlayingTrack:(id)arg2;
- (void)channelOfType:(unsigned long long)arg1 didQueueTrack:(id)arg2;
- (void)channelOfTypeReachedEndOfQueue:(unsigned long long)arg1;
- (void)channelOfType:(unsigned long long)arg1 didFinishPlayingTrack:(id)arg2 atSnapshot:(id)arg3;
- (void)channelOfTypeDidStop:(unsigned long long)arg1 atSnapshot:(id)arg2;
- (void)channelOfTypeDidResumePlaying:(unsigned long long)arg1;
- (void)channelOfTypeDidPause:(unsigned long long)arg1;
- (void)channelOfType:(unsigned long long)arg1 didStartPlayingTrack:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

