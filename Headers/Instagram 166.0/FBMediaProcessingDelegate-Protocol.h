//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/NSObject-Protocol.h>

@class FBMediaFileStreamListenerAnnouncerWrapper, FBMediaUploadChunkDetail, NSArray, NSError;
@protocol FBMediaProcessing, FBVideoTranscoding;

@protocol FBMediaProcessingDelegate <NSObject>
- (void)transcodeFlow:(id <FBMediaProcessing>)arg1 didCreateTranscoder:(id <FBVideoTranscoding>)arg2;
- (void)didReceiveTranscodeFlow:(id <FBMediaProcessing>)arg1 imageSample:(struct opaqueCMSampleBuffer *)arg2;
- (void)didUpdateTranscodeFlow:(id <FBMediaProcessing>)arg1 progress:(double)arg2;
- (void)didFailTranscodeFlow:(id <FBMediaProcessing>)arg1 withError:(NSError *)arg2 restartUploadInRaw:(_Bool)arg3;
- (void)didCancelTranscodeFlow:(id <FBMediaProcessing>)arg1;
- (void)didFinishTranscodeFlowForAllSegments:(id <FBMediaProcessing>)arg1 timeStamps:(NSArray *)arg2;
- (void)didMakeUploadableSegment:(FBMediaUploadChunkDetail *)arg1 forTranscodeFlow:(id <FBMediaProcessing>)arg2 streamAnnouncer:(FBMediaFileStreamListenerAnnouncerWrapper *)arg3;
- (void)didStartTranscodeFlow:(id <FBMediaProcessing>)arg1;
@end

