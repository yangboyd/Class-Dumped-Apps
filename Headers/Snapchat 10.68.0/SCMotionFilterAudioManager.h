//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetReader, AVAssetReaderTrackOutput, AVAssetWriter, AVAssetWriterInput, NSFileManager, NSString;
@protocol SCPerforming;

@interface SCMotionFilterAudioManager : NSObject
{
    NSFileManager *_fileManager;
    AVAssetWriter *_assetWriter;
    AVAssetWriterInput *_writerInput;
    AVAssetReader *_assetReader;
    AVAssetReaderTrackOutput *_readerOutput;
    id <SCPerforming> _performer;
    struct opaqueCMSampleBuffer *_sampleBuffer;
    NSString *_uuid;
    AVAsset *_videoAsset;
}

+ (double)playbackRateForSpeed:(long long)arg1;
- (void).cxx_destruct;
- (void)_generateReverseWavFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_generateOriginalWavFileWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)generateReverseAudioDataWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithVideoAsset:(id)arg1;
- (id)originalAudioURL;

@end

