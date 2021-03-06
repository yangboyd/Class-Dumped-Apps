//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Nbp/NFPlaylist-Protocol.h>

@class NSMutableDictionary, NSString;

@interface Playlist : NSObject <NFPlaylist>
{
    NSString *_playlistId;
    double _duration;
    NSString *_type;
    NSString *_initialSegmentId;
    NSMutableDictionary *_segmentMap;
}

@property(retain, nonatomic) NSMutableDictionary *segmentMap; // @synthesize segmentMap=_segmentMap;
@property(retain, nonatomic) NSString *initialSegmentId; // @synthesize initialSegmentId=_initialSegmentId;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (CDStruct_aa637a14)positionAtViewableTime:(double)arg1 inVideoId:(id)arg2;
- (CDStruct_aa637a14)positionAtSegment:(id)arg1 segmentOffset:(double)arg2;
- (CDStruct_aa637a14)positionAtSegment:(id)arg1 viewableTime:(double)arg2;
- (CDStruct_aa637a14)positionAtStartOfSegment:(id)arg1;
- (CDStruct_aa637a14)positionAtPlaylistOffsetAlongDefaultPlaybackPath:(double)arg1;
- (CDStruct_aa637a14)initialPosition;
- (void)calculateDefaultPathDuration;
- (_Bool)depthFirstTraversalFromSegment:(id)arg1 segmentDepth:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3 visitedSegments:(id)arg4;
- (void)depthFirstTraversalFromSegmentId:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)defaultPathTraversal:(CDUnknownBlockType)arg1;
- (double)playerTimeForPlaylistOffset:(double)arg1;
- (double)playlistOffsetForPlayerTime:(double)arg1 inSegment:(id)arg2;
- (_Bool)isPlaybackContiguousFromSegment:(id)arg1 toSegment:(id)arg2;
- (id)segmentIdAtPlaylistTime:(double)arg1;
- (id)segmentIdsForPosition:(double)arg1 inViewableId:(unsigned long long)arg2;
- (id)segmentById:(id)arg1;
- (id)buildTransitions:(id)arg1 fromSourceSegment:(id)arg2;
- (id)buildSegment:(id)arg1 withDetails:(id)arg2 defaultViewableId:(id)arg3;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) NSString *playlistId;
- (void)validatePlaylist;
- (id)initWithDictionary:(id)arg1 defaultViewableId:(id)arg2;
- (id)initWithDictionary:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

