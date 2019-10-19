//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCTraceEnabled-Protocol.h"

@class AVAsset, NSArray, NSString;

@interface SCVideoAssetRandomAccessor : NSObject <SCTraceEnabled>
{
    _Bool _isReverseOrderAccess;
    unsigned long long _keyFrameInterval;
    AVAsset *_videoAsset;
    struct OpaqueVTDecompressionSession *_videoDecompressionSession;
    NSArray *_compressedVideoFrames;
    struct __CVBuffer *_decompressedImageBuffer;
    long long _videoFrameIndex;
}

- (void).cxx_destruct;
- (void)stopAccessing;
- (struct SCRandomAccessedFrame)accessNextRandomAccessFrame;
- (struct CGSize)startAccessingWithError:(id *)arg1;
- (id)initWithVideoAsset:(id)arg1 keyFrameInterval:(unsigned long long)arg2 isReverseOrderAccess:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

