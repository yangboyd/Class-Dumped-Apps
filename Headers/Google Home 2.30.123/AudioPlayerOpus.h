//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AudioPlayer.h"

@class NSThread;

@interface AudioPlayerOpus : AudioPlayer
{
    struct SkipInterpCounter _skipInterpCounter;
    struct vector<short, std::__1::allocator<short>> _skipInterpFrameBuffer;
    struct vector<short, std::__1::allocator<short>> _ratioLookup16;
    int _frameGroupSizeInFrames;
    struct OpusDecoder *_decoder;
    NSThread *_bufferWaiter;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) int frameGroupSizeInFrames; // @synthesize frameGroupSizeInFrames=_frameGroupSizeInFrames;
@property(retain, nonatomic) NSThread *bufferWaiter; // @synthesize bufferWaiter=_bufferWaiter;
@property(nonatomic) struct OpusDecoder *decoder; // @synthesize decoder=_decoder;
- (void)bufferWaiterThreadEntry;
- (void)queueNextPackets;
- (void)fillBuffer:(struct AudioQueueBuffer *)arg1;
- (void)adjustPlaySpeed:(id)arg1;
- (_Bool)crossfadeTwoPacketInto:(struct AudioQueueBuffer *)arg1 sourcePacket:(id)arg2;
- (_Bool)decodeInto:(struct AudioQueueBuffer *)arg1 sourcePacket:(id)arg2;
- (int)_decodeInto:(short *)arg1 maxGroupSizeInFrames:(int)arg2 sourcePacket:(id)arg3;
- (_Bool)interpolateInto:(struct AudioQueueBuffer *)arg1;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithSampleRate:(int)arg1 packetBuffer:(id)arg2 privateData:(id)arg3 remoteSessionStartTime:(id)arg4 userRequestedStartTime:(id)arg5;
- (void)configGroupSizeInFrames:(int)arg1;

@end

