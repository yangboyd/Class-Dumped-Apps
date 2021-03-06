//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GAKAudioUnit.h"

@class AVAudioTime, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GAKAudioPlayerUnit : GAKAudioUnit
{
    struct AudioStreamBasicDescription _audioFormat;
    NSMutableArray *_bufferQueue;
    // Error parsing type: A@, name: _head
    // Error parsing type: A@, name: _read
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _bufferConsumedCallback;
    // Error parsing type: AI, name: _state
    // Error parsing type: A{GAKTimeStamp}, name: _lastRenderTimeStamp
    unsigned long long _framesRendered;
}

- (void)tidyQueue;
- (void)addBufferToQueue:(id)arg1;
@property(readonly, nonatomic) AVAudioTime *playerTime;
- (void)stop;
- (void)pause;
- (void)play;
- (void)setPlaying:(_Bool)arg1;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
- (void)scheduleBuffer:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)joinGraph:(id)arg1;
- (void)dealloc;
- (id)initWithAudioFormat:(struct AudioStreamBasicDescription)arg1;

@end

