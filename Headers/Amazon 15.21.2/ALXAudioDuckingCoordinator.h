//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ALXAudioCoordinating-Protocol.h"

@class ALXAudioChannelManager, ALXAudioSessionWrapper, ALXConcreteDispatchTimer, ALXMetricsLogger, NSString;

@interface ALXAudioDuckingCoordinator : NSObject <ALXAudioCoordinating>
{
    _Bool _isContentInterrupted;
    _Bool _isInteracting;
    _Bool _isStopDirective;
    double _timerDuration;
    ALXAudioSessionWrapper *_audioSession;
    ALXAudioChannelManager *_audioChannelManager;
    ALXMetricsLogger *_metrics;
    ALXConcreteDispatchTimer *_timer;
    unsigned long long _ongoingDirectiveCount;
}

+ (id)queue;
@property(nonatomic) _Bool isStopDirective; // @synthesize isStopDirective=_isStopDirective;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) unsigned long long ongoingDirectiveCount; // @synthesize ongoingDirectiveCount=_ongoingDirectiveCount;
@property(nonatomic) _Bool isContentInterrupted; // @synthesize isContentInterrupted=_isContentInterrupted;
@property(retain, nonatomic) ALXConcreteDispatchTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) ALXMetricsLogger *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) ALXAudioChannelManager *audioChannelManager; // @synthesize audioChannelManager=_audioChannelManager;
@property(retain, nonatomic) ALXAudioSessionWrapper *audioSession; // @synthesize audioSession=_audioSession;
- (void).cxx_destruct;
- (void)synchronize:(CDUnknownBlockType)arg1;
- (void)setAudioSessionPreferences;
- (void)resume3pAudio;
- (void)resume1pAudio;
- (void)resumeAudio;
- (void)endInteraction;
- (void)beginInteraction;
@property(nonatomic) double timerDuration; // @synthesize timerDuration=_timerDuration;
- (void)actionDidFinish;
- (void)actionWillStart;
- (void)contentAudioWillStart;
- (void)stopDuckingDirectiveDidReceive;
- (void)stopDirectiveDidReceive;
- (void)systemDidInterruptAudio;
- (void)appWillResignActive;
- (void)prepareAudio;
- (id)initWithAudioSession:(id)arg1 audioChannelManager:(id)arg2 metricLogger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

