//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAGeofilterOndemandEventBase : SCAUserTrackedEvent
{
}

- (void)setSource:(id)arg1;
- (void)setReferrer:(id)arg1;
- (void)setProductType:(long long)arg1;
- (void)setPageSequenceId:(long long)arg1;
- (void)setPageName:(long long)arg1;
- (void)setOdgSessionId:(id)arg1;
- (void)setAdAccountId:(id)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

