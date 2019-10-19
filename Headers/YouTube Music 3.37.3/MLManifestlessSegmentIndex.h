//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HAMMediaChunkIndex-Protocol.h"
#import "MLHAMCuepointSource-Protocol.h"
#import "MLManifestlessPartialResponseHandlerDelegate-Protocol.h"

@class MLFormat, MLManifestlessSegmentTimeline, NSString, NSURL;
@protocol HAMMediaChunkFactory, MLHAMCuepointRelay, MLManifestlessPartialResponseHandlerDelegate;

@interface MLManifestlessSegmentIndex : NSObject <MLManifestlessPartialResponseHandlerDelegate, HAMMediaChunkIndex, MLHAMCuepointSource>
{
    MLManifestlessSegmentTimeline *_timeline;
    NSURL *_baseURL;
    MLFormat *_format;
    double _targetDuration;
    _Bool _removeOneReadaheadChunk;
    _Bool _streamable;
    id <MLHAMCuepointRelay> _cuepointRelay;
    id <HAMMediaChunkFactory> _mediaChunkFactory;
    id <MLManifestlessPartialResponseHandlerDelegate> _partialResponseHandlerDelegate;
}

@property(nonatomic) __weak id <MLManifestlessPartialResponseHandlerDelegate> partialResponseHandlerDelegate; // @synthesize partialResponseHandlerDelegate=_partialResponseHandlerDelegate;
@property(retain, nonatomic) id <HAMMediaChunkFactory> mediaChunkFactory; // @synthesize mediaChunkFactory=_mediaChunkFactory;
@property(nonatomic) __weak id <MLHAMCuepointRelay> cuepointRelay; // @synthesize cuepointRelay=_cuepointRelay;
- (void).cxx_destruct;
- (id)estimateMediaChunkForTime:(CDStruct_1b6d18a9)arg1;
- (void)rejoinStreamForMediaChunk:(id)arg1;
- (void)enumerateChunksProperties:(unsigned long long)arg1 inTimeRange:(CDStruct_e83c9415)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (_Bool)isLastAvailableMediaChunk:(id)arg1;
- (id)mediaChunkForTime:(CDStruct_1b6d18a9)arg1;
- (id)lastAvailableMediaChunkWithReadaheadSeconds:(double)arg1;
@property(readonly, nonatomic) CDStruct_e83c9415 seekableTimeRange;
@property(retain, nonatomic) NSURL *mediaChunkURL;
- (id)init;
- (id)initWithURL:(id)arg1 format:(id)arg2 timeline:(id)arg3 targetDuration:(double)arg4 config:(id)arg5 livePlayerConfig:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

