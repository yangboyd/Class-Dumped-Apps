//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAMapSerializable.h"

@interface SCAShakeMetadata : SCAMapSerializable
{
}

- (void)setWithShakeV2:(_Bool)arg1;
- (void)setShakeId:(id)arg1;
- (void)setIsAutoShake:(_Bool)arg1;
- (double)getPerEventSamplingRate;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end

