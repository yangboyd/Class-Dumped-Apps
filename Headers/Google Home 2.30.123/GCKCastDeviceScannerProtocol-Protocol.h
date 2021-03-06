//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKAnalyticsEventLogger, GCKDatabase, GCKDiscoveryCriteria, GCKNNetworkReachability, GCKRuntimeConfiguration;

@protocol GCKCastDeviceScannerProtocol <NSObject>
@property(nonatomic) _Bool passiveScan;
@property(readonly, nonatomic) GCKDiscoveryCriteria *discoveryCriteria;
- (void)stopScan;
- (void)startScan;
- (id)initWithDiscoveryCriteria:(GCKDiscoveryCriteria *)arg1 analyticsEventLogger:(GCKAnalyticsEventLogger *)arg2 database:(GCKDatabase *)arg3 networkReachability:(GCKNNetworkReachability *)arg4 runtimeConfiguration:(GCKRuntimeConfiguration *)arg5 customMulticastEnabled:(_Bool)arg6;
@end

