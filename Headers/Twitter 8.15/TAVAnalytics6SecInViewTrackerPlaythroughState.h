//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TAVAnalyticsPlayedRangesTracker;

@interface TAVAnalytics6SecInViewTrackerPlaythroughState : NSObject
{
    _Bool _visibilityAtLeast50Percent;
    _Bool _fired6SecInView;
    TAVAnalyticsPlayedRangesTracker *_playedRangesTracker;
    CDStruct_1b6d18a9 _durationWhileVisibilityAtLeast50Percent;
}

@property(nonatomic) _Bool fired6SecInView; // @synthesize fired6SecInView=_fired6SecInView;
@property(nonatomic) CDStruct_1b6d18a9 durationWhileVisibilityAtLeast50Percent; // @synthesize durationWhileVisibilityAtLeast50Percent=_durationWhileVisibilityAtLeast50Percent;
@property(nonatomic) _Bool visibilityAtLeast50Percent; // @synthesize visibilityAtLeast50Percent=_visibilityAtLeast50Percent;
@property(retain, nonatomic) TAVAnalyticsPlayedRangesTracker *playedRangesTracker; // @synthesize playedRangesTracker=_playedRangesTracker;
- (void).cxx_destruct;
- (void)updateWithPlaybackState:(id)arg1;
- (id)init;

@end

