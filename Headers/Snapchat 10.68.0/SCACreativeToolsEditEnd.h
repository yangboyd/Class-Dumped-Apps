//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACreativeToolsEditEnd : SCAUserTrackedEvent
{
}

- (void)setTti:(double)arg1;
- (void)setTfi:(double)arg1;
- (void)setEditToolName:(long long)arg1;
- (void)setDuration:(double)arg1;
- (void)setCaptureSessionId:(id)arg1;
- (void)setCancelled:(_Bool)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

