//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class AVPlayer, NSDate, NSDictionary, NSError, NSNumber, SegmentItem;
@protocol NFPlaylistSegment;

@protocol SegmentItemDelegate
- (void)segmentItem:(SegmentItem *)arg1 didOpenMovieWithChoiceMap:(NSDictionary *)arg2 withExpiration:(NSDate *)arg3 andError:(NSError *)arg4;
- (void)segmentItem:(SegmentItem *)arg1 shouldStartPreparingNextSegment:(id <NFPlaylistSegment>)arg2 withWeight:(NSNumber *)arg3 allowSkip:(_Bool)arg4;
- (void)segmentItemDidEnterNextSegmentPreparationRange:(SegmentItem *)arg1;
- (AVPlayer *)sharedAVPlayerForSegmentItem:(SegmentItem *)arg1;
- (void)segmentItem:(SegmentItem *)arg1 playerEffectiveRateChangedFrom:(float)arg2 to:(float)arg3;
- (void)segmentItem:(SegmentItem *)arg1 playerRateChangedFrom:(float)arg2 to:(float)arg3;
- (void)segmentItem:(SegmentItem *)arg1 updatedPts:(double)arg2;
- (void)segmentItemReachedEnd:(SegmentItem *)arg1 withError:(NSError *)arg2;
- (void)segmentItemStateChanged:(SegmentItem *)arg1 fromState:(int)arg2 toState:(int)arg3;
@end

