//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGroupStoryDelete : SCAUserTrackedEvent
{
}

- (void)setStoryTypeSpecific:(long long)arg1;
- (void)setSnapCount:(long long)arg1;
- (void)setMySnapCount:(long long)arg1;
- (void)setLeaveReason:(long long)arg1;
- (void)setGroupStoryId:(id)arg1;
- (void)setFriendSnapCount:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

