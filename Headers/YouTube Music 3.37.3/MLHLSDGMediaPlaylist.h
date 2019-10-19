//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MLCondensedURLExpander, NSArray, NSDate, NSMutableArray;

@interface MLHLSDGMediaPlaylist : NSObject
{
    struct HLSPlaylist _playlist;
    NSMutableArray *_cuepoints;
    NSArray *_allSegments;
    MLCondensedURLExpander *_expander;
    double _desiredDuration;
}

+ (id)playlistByParsingData:(id)arg1 deterministicOutputVersion:(int)arg2 error:(id *)arg3;
@property(nonatomic) double desiredDuration; // @synthesize desiredDuration=_desiredDuration;
@property(readonly, nonatomic) MLCondensedURLExpander *expander; // @synthesize expander=_expander;
@property(readonly, nonatomic) NSArray *cuepoints; // @synthesize cuepoints=_cuepoints;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)linearSearchIndexOfFirstSegmentBetweenStartDate:(id)arg1 endDate:(id)arg2 leeway:(double)arg3 reverse:(_Bool)arg4;
- (unsigned long long)indexOfSegmentContainingIngestionTime:(id)arg1;
- (unsigned long long)indexOfFirstSegmentBetweenStartDate:(id)arg1 endDate:(id)arg2 reverse:(_Bool)arg3;
- (void)addItem:(const struct HLSPlaylistItem *)arg1;
- (id)parseFrom:(id)arg1;
- (void)setMediaSequence:(long long)arg1;
- (void)expandAllCondensedURLs;
- (id)createEmptyCopy;
- (id)VODSegmentsStartingAtOffset:(double)arg1 duration:(double)arg2 truncateSegments:(_Bool)arg3 setStartIngestionTime:(id)arg4;
- (id)liveSegmentsStartingAtIngestionTime:(id)arg1 endIngestionTime:(id)arg2;
@property(readonly, nonatomic) NSDate *endProductionDate;
@property(readonly, nonatomic) NSDate *startProductionDate;
@property(readonly, nonatomic) double duration;
- (void)setDeterministicOutputVersion:(int)arg1;
- (unsigned long long)indexOfSegmentContainingMediaTime:(double)arg1;
- (void)addSegment:(id)arg1;
@property(readonly, nonatomic) NSArray *allSegments; // @synthesize allSegments=_allSegments;
@property(readonly, nonatomic) long long segmentCount;
@property(readonly, nonatomic) long long latestSegmentSequenceNumber;
@property(readonly, nonatomic, getter=hasEndlist) _Bool endlist;
@property(readonly, nonatomic) long long mediaSequence;
- (void)clearItems;
- (id)playlistData;
- (void)appendPlaylist:(id)arg1;
- (id)initWithDeterministicOutputVersion:(int)arg1;

@end

