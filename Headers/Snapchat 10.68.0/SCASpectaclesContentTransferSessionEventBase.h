//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCASpectaclesTemperatureTrackedEvent.h"

@interface SCASpectaclesContentTransferSessionEventBase : SCASpectaclesTemperatureTrackedEvent
{
}

- (void)setWifiFrequencyMhz:(long long)arg1;
- (void)setTransferType:(long long)arg1;
- (void)setTransferSessionId:(id)arg1;
- (void)setTransferChannel:(long long)arg1;
- (void)setIsCharging:(_Bool)arg1;
- (void)setDurationSec:(double)arg1;
- (void)setDeviceStorage:(long long)arg1;
- (void)setDeviceBattery:(long long)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

