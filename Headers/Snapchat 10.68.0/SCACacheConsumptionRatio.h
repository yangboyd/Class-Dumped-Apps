//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCACacheConsumptionRatio : SCAUserTrackedEvent
{
}

- (void)setTotalCacheSizeBytes:(long long)arg1;
- (void)setMediaContextType:(id)arg1;
- (void)setConsumedBytesThirtyDay:(long long)arg1;
- (void)setConsumedBytesSevenDay:(long long)arg1;
- (void)setConsumedBytesOneDay:(long long)arg1;
- (void)setConsumedBytesFourteenDay:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

