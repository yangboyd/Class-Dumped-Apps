//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MSAL/MSIDTelemetryBaseEvent.h>

@interface MSIDTelemetryCacheEvent : MSIDTelemetryBaseEvent
{
}

+ (id)propertiesToAggregate;
- (void)setExternalCacheSeedingStatus:(id)arg1;
- (void)setWipeData:(id)arg1;
- (void)setCacheWipeTime:(id)arg1;
- (void)setCacheWipeApp:(id)arg1;
- (void)setToken:(id)arg1;
- (void)setSpeInfo:(id)arg1;
- (void)setFRTStatus:(id)arg1;
- (void)setMRRTStatus:(id)arg1;
- (void)setRTStatus:(id)arg1;
- (void)setIsFRT:(id)arg1;
- (void)setIsMRRT:(id)arg1;
- (void)setIsRT:(id)arg1;
- (void)setStatus:(id)arg1;
- (void)setTokenType:(long long)arg1;
- (id)initWithName:(id)arg1 requestId:(id)arg2 correlationId:(id)arg3;

@end

