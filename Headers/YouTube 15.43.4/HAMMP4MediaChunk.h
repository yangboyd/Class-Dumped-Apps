//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/HAMMediaChunk.h>

#import <Module_Framework/HAMMP4DataAccumulatorDelegate-Protocol.h>
#import <Module_Framework/HAMMP4DataAccumulatorMediaDataDelegate-Protocol.h>

@class HAMFormatDescription, NSArray, NSData, NSError, NSString;

@interface HAMMP4MediaChunk : HAMMediaChunk <HAMMP4DataAccumulatorDelegate, HAMMP4DataAccumulatorMediaDataDelegate>
{
    int _timescale;
    NSError *_error;
    HAMFormatDescription *_formatDescription;
    CDStruct_59e9a54d _initializationData;
    struct vector<std::__1::unique_ptr<hamplayer::MovieFragmentAndOffset, std::__1::default_delete<hamplayer::MovieFragmentAndOffset>>, std::__1::allocator<std::__1::unique_ptr<hamplayer::MovieFragmentAndOffset, std::__1::default_delete<hamplayer::MovieFragmentAndOffset>>>> _fragments;
    struct vector<(anonymous namespace)::HAMMP4MdatBox, std::__1::allocator<(anonymous namespace)::HAMMP4MdatBox>> _mdatBoxes;
    long long _mediaDataSizeBytes;
    int _bufferOffset;
    struct MP4SampleIterator _sampleIterator;
    struct MP4SampleIterator _bufferedTimeSampleIterator;
    long long _bufferedMaximumPresentationTime;
    struct vector<CMSampleTimingInfo, std::__1::allocator<CMSampleTimingInfo>> _sampleTimingInfoArray;
    vector_06e666a8 _sampleSizeArray;
    NSArray *_PSSHKeys;
    NSData *_keyID;
    struct flat_hash_set<long long, absl::hash_internal::Hash<long long>, std::__1::equal_to<long long>, std::__1::allocator<long long>> _decryptedSamples;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isSampleIteratorAtSyncSample:(const struct MP4SampleIterator *)arg1;
- (long long)decryptSample:(char *)arg1 length:(unsigned long long)arg2 auxInfo:(char *)arg3 auxInfoLength:(unsigned long long)arg4 error:(id *)arg5;
- (CDStruct_1b6d18a9)bufferedTime;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)prepareAndReturnError:(id *)arg1;
- (long long)readNextWithOptions:(CDStruct_d108fd5f)arg1 sampleBuffer:(id *)arg2 error:(id *)arg3;
- (id)keyID;
- (id)PSSHKeys;
- (id)formatDescription;
- (void)setFormatDescription:(id)arg1;
- (long long)sizeInRAM;
- (void)dealloc;
- (id)initWithFormat:(id)arg1 rangedURL:(id)arg2 segmentNumber:(long long)arg3 timeRange:(CDStruct_e83c9415)arg4;
- (double)productionTimeForDecodeTime:(CDStruct_1b6d18a9)arg1;
- (_Bool)handleTopLevelBoxWithReader:(struct BoxReader *)arg1 error:(id *)arg2;
- (void)dataAccumulatorDidReceiveMediaBytes:(const char *)arg1 length:(int)arg2;
- (void)dataAccumulatorDidBeginMediaDataBoxWithSize:(int)arg1 startOffset:(int)arg2;
- (void)dataAccumulatorDidComplete;
- (void)dataAccumulatorDidCompleteBox:(struct BoxReader *)arg1 startOffset:(int)arg2;
- (void)dataAccumulatorDidFailWithErrorDetails:(id)arg1;
- (void)setTimeRange:(CDStruct_e83c9415)arg1;
- (struct MP4SampleIterator)sampleIterator;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

