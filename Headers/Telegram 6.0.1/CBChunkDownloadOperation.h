//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/CBGenericDownloadOperation.h>

@interface CBChunkDownloadOperation : CBGenericDownloadOperation
{
    long long _chunkIdx;
    CDUnknownBlockType _chunkDownloadedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType chunkDownloadedBlock; // @synthesize chunkDownloadedBlock=_chunkDownloadedBlock;
@property(nonatomic) long long chunkIdx; // @synthesize chunkIdx=_chunkIdx;
- (void).cxx_destruct;
- (id)clone;
- (void)successChunkDownload;
- (void)downloadChunk;
- (void)start;

@end

