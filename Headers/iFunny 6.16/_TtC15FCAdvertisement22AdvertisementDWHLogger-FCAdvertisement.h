//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/_TtC15FCAdvertisement22AdvertisementDWHLogger.h>

#import <Funny/AdViewedDWHLoggerable-Protocol.h>
#import <Funny/_TtP15FCAdvertisement18AdAttemptDWHLogger_-Protocol.h>
#import <Funny/_TtP15FCAdvertisement20RevenueDWHLoggerable_-Protocol.h>
#import <Funny/_TtP15FCAdvertisement21AdTappedDWHLoggerable_-Protocol.h>
#import <Funny/_TtP15FCAdvertisement24AdRequestedDWHLoggerable_-Protocol.h>

@interface _TtC15FCAdvertisement22AdvertisementDWHLogger (FCAdvertisement) <_TtP15FCAdvertisement20RevenueDWHLoggerable_, AdViewedDWHLoggerable, _TtP15FCAdvertisement21AdTappedDWHLoggerable_, _TtP15FCAdvertisement24AdRequestedDWHLoggerable_, _TtP15FCAdvertisement18AdAttemptDWHLogger_>
- (void)logRevenueWithType:(unsigned long long)arg1 tier:(id)arg2 networkName:(id)arg3 keywords:(id)arg4 revenuePrice:(float)arg5 maxBidPrice:(id)arg6 maxBidPriceLastAuction:(id)arg7 isBidding:(_Bool)arg8;
- (void)logAdViewedWithType:(unsigned long long)arg1 tier:(id)arg2 networkName:(id)arg3 keywords:(id)arg4 feedType:(long long)arg5 isBidding:(_Bool)arg6;
- (void)logTappedWithType:(unsigned long long)arg1 tier:(id)arg2 networkName:(id)arg3 keywords:(id)arg4 feedType:(long long)arg5 isBidding:(_Bool)arg6 creativeId:(id)arg7;
- (void)logRequestedWithType:(unsigned long long)arg1 tier:(id)arg2 networkName:(id)arg3 keywords:(id)arg4 status:(unsigned long long)arg5 timeInMilliseconds:(double)arg6 feedType:(long long)arg7 dspCreativeId:(id)arg8 isBidding:(_Bool)arg9 error:(id)arg10;
- (void)logAttemptWithType:(unsigned long long)arg1 tier:(id)arg2 status:(unsigned long long)arg3 timeInMilliseconds:(double)arg4;
@end

