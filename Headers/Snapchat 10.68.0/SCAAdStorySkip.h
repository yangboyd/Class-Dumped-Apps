//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAdStorySkip : SCAUserTrackedEvent
{
}

- (void)setStoryType:(long long)arg1;
- (void)setStorySessionId:(long long)arg1;
- (void)setAutoAdvanceIndex:(long long)arg1;
- (void)setAdUnitId:(id)arg1;
- (void)setAdRequestClientId:(id)arg1;
- (void)setAdProductSourceType:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

