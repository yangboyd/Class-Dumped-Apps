//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAStoryStoryPost : SCAUserTrackedEvent
{
}

- (void)setWithSearch:(_Bool)arg1;
- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setStoryType:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapSource:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setGalleryContextMenuSource:(long long)arg1;
- (void)setGalleryCollectionId:(id)arg1;
- (void)setGalleryCollectionCategory:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

