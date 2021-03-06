//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <FBSharedFramework/IGPlaybackTimelineDelegate-Protocol.h>

@class IGPlaybackTimeline, NSArray, NSMutableArray, NSString;

@interface IGVideoTimelineMaskedRangeView : UIView <IGPlaybackTimelineDelegate>
{
    NSMutableArray *_maskedRanges;
    NSMutableArray *_maskedViews;
    IGPlaybackTimeline *_playbackTimeline;
    double _videoDuration;
}

- (void).cxx_destruct;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void)playbackTimeline:(id)arg1 didUpdateCurrentTime:(double)arg2;
- (void)stopAniamtingMaskedRange;
- (void)startAnimatingMaskedRangeAtRelativeStart:(double)arg1 rate:(double)arg2;
@property(readonly, copy, nonatomic) NSArray *maskedRanges;
- (void)removeLastMaskedRange;
- (void)addMaskedRange:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

