//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetReader, AVAssetReaderTrackOutput;
@protocol OS_dispatch_queue;

@interface IESLiveMTAssetReaderOutput : NSObject
{
    struct queue<opaqueCMSampleBuffer *, std::__1::deque<opaqueCMSampleBuffer *, std::__1::allocator<opaqueCMSampleBuffer *>>> _sampleBufferQueue;
    _Bool _releaseSampleBufferOptimize;
    unsigned long long _preferredFramesPerSecond;
    AVAssetReaderTrackOutput *_output;
    AVAssetReader *_reader;
    NSObject<OS_dispatch_queue> *_readingQueue;
    struct CGSize _videoSize;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readingQueue; // @synthesize readingQueue=_readingQueue;
@property(retain, nonatomic) AVAssetReader *reader; // @synthesize reader=_reader;
@property(retain, nonatomic) AVAssetReaderTrackOutput *output; // @synthesize output=_output;
@property(readonly, nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) _Bool releaseSampleBufferOptimize; // @synthesize releaseSampleBufferOptimize=_releaseSampleBufferOptimize;
@property(nonatomic) unsigned long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (_Bool)hasNextSampleBuffer;
- (void)fillBufferQueueIfNeed;
- (id)initWithURL:(id)arg1 compatibility:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;

@end

