//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAAppBatteryMetrics : SCAUserTrackedEvent
{
}

- (void)prepareDictionary:(id)arg1;
- (void)setWakelocks:(id)arg1;
- (void)setSessionTimeMs:(long long)arg1;
- (void)setRuntime:(id)arg1;
- (void)setRestrictions:(id)arg1;
- (void)setPowerProfile:(id)arg1;
- (void)setPageTypeAttr:(id)arg1;
- (void)setPackets:(id)arg1;
- (void)setNetworkRadioUptime:(id)arg1;
- (void)setNetworkRadioOverhead:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setJiffies:(id)arg1;
- (void)setHealthStatsMap:(id)arg1;
- (void)setFreq:(id)arg1;
- (void)setDischarge:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setBytes:(id)arg1;
- (void)setBattLevelTotal:(double)arg1;
- (void)setAppTimeMs:(long long)arg1;
- (void)setAppState:(long long)arg1;
- (void)setAppOpenId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

