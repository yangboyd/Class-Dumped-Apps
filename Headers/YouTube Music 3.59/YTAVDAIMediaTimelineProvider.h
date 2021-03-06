//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MLVideoTimeline-Protocol.h"

@class NSString, YTAVDAICommittedTimeline, YTPlaybackTimeline;

@interface YTAVDAIMediaTimelineProvider : NSObject <MLVideoTimeline>
{
    YTPlaybackTimeline *_playbackTimeline;
    YTAVDAICommittedTimeline *_committedTimeline;
}

- (void).cxx_destruct;
- (id)contentCPN;
- (void)commitAvailableSegmentsUpToEndBaseTime:(double)arg1;
- (id)timelineSectionContainingBaseTime:(double)arg1;
- (id)videoSectionsForTimeRangeWithStartBaseTime:(double)arg1 endBaseTime:(double)arg2;
- (id)initWithPlaybackTimeline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

