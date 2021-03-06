//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Nbp/NFPlayer-Protocol.h>

@class NFPlayerRequest, NSDictionary, NSString;
@protocol NFPlayerDelegate, NFPlaylist, NFPlaylistPlayerDelegate, NFPlaylistSegment, NFPlaylistTimeConversionDelegate;

@protocol NFPlaylistPlayer <NFPlayer>
@property(nonatomic) __weak id <NFPlaylistTimeConversionDelegate> timeConversionDelegate;
@property(nonatomic) __weak id <NFPlaylistPlayerDelegate> playlistDelegate;
@property(readonly, nonatomic) __weak id <NFPlayerDelegate> delegate;
@property(readonly, nonatomic) id <NFPlaylistSegment> currentSegment;
@property(readonly, nonatomic) id <NFPlaylist> currentPlaylist;
@property(readonly, nonatomic) CDStruct_aa637a14 currentPosition;
- (void)loadPlaylistWithRequest:(NFPlayerRequest *)arg1 completionBlock:(void (^)(id <NFPlaylist>, NSError *))arg2;
- (void)updatePlaylist:(id <NFPlaylist>)arg1 trackingInfo:(NSDictionary *)arg2 startPosition:(CDStruct_aa637a14)arg3;
- (void)updateNextSegmentWeightsForSegmentId:(NSString *)arg1 nextSegmentWeights:(NSDictionary *)arg2;
- (void)gotoSegmentId:(NSString *)arg1 time:(double)arg2 userInitiated:(_Bool)arg3;
- (void)gotoSegmentId:(NSString *)arg1 time:(double)arg2;
- (void)gotoNextSegmentFromCurrentSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)gotoNextSegmentFromCurrentSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2;
- (void)setNextSegmentAfterSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2 userInitiated:(_Bool)arg3;
- (void)setNextSegmentAfterSegmentId:(NSString *)arg1 nextSegmentId:(NSString *)arg2;
- (void)startPlayback;
@end

