//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/HAMChunkLoadTask-Protocol.h>
#import <Module_Framework/HAMPurgeableRAMCacheWriterChunkDataObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;
@protocol HAMChunkLoadTaskDelegate, OS_dispatch_queue;

@interface HAMPurgeableRAMCacheLoadTask : NSObject <HAMChunkLoadTask, HAMPurgeableRAMCacheWriterChunkDataObserver>
{
    id <HAMChunkLoadTaskDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _isCancelled;
    unsigned long long _chunksCompleted;
    NSMutableDictionary *_streamingChunks;
    NSArray *_chunks;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *chunks; // @synthesize chunks=_chunks;
- (void)chunkID:(id)arg1 didCompleteLoadingWithError:(id)arg2;
- (void)chunkID:(id)arg1 didProgressWithData:(id)arg2;
- (id)cancel;
- (id)initWithChunks:(id)arg1 chunkBuffers:(id)arg2 chunkWriters:(id)arg3 delegate:(id)arg4 queue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

