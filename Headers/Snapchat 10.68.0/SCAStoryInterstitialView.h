//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAStoryInterstitialView : SCAUserTrackedEvent
{
}

- (void)setViewTimeSec:(double)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setType:(long long)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setServerRankingId:(id)arg1;
- (void)setRelativeStoryIndex:(long long)arg1;
- (void)setRankingModelId:(id)arg1;
- (void)setRankingId:(id)arg1;
- (void)setPosterId:(id)arg1;
- (void)setGhost_poster_id:(id)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setEditionId:(id)arg1;
- (void)setAbsoluteStoryIndex:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

