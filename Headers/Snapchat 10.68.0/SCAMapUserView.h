//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAMapUserView : SCAUserTrackedEvent
{
}

- (void)setViewportFriendCount:(long long)arg1;
- (void)setTargetViewedStatusCount:(long long)arg1;
- (void)setTargetViewedBestFriendCount:(long long)arg1;
- (void)setTargetUserIds:(id)arg1;
- (void)setTargetUnviewedStatusCount:(long long)arg1;
- (void)setTargetCount:(long long)arg1;
- (void)setSource:(long long)arg1;
- (void)setMapSessionId:(long long)arg1;
- (void)setMapFriendCount:(long long)arg1;
- (void)setMapBestFriendCount:(long long)arg1;
- (void)setIsTargetHighlighted:(_Bool)arg1;
- (void)setGhost_target_user_ids:(id)arg1;
- (void)setDistanceFromUserMeter:(double)arg1;
- (void)setAction:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

