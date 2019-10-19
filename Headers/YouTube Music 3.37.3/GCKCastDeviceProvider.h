//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKDeviceProvider.h"

#import "GCKCastDevicePublisherDelegate-Protocol.h"

@class GCKAnalyticsEventLogger, GCKCastDeviceMDNSScanner, GCKCastDevicePublisher, GCKCastOptions, GCKDatabase, GCKDiscoveryCriteria, GCKNNetworkReachability, GCKRuntimeConfiguration, NSArray, NSString;

@interface GCKCastDeviceProvider : GCKDeviceProvider <GCKCastDevicePublisherDelegate>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKCastOptions *_castOptions;
    GCKDatabase *_database;
    GCKNNetworkReachability *_networkReachability;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKDiscoveryCriteria *_discoveryCriteria;
    GCKCastDeviceMDNSScanner *_MDNSScanner;
    GCKCastDevicePublisher *_publisher;
    _Bool _discovering;
}

- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)devicePublisher:(id)arg1 didUnpublishDevice:(id)arg2;
- (void)devicePublisher:(id)arg1 didUpdateDevice:(id)arg2;
- (void)devicePublisher:(id)arg1 didPublishDevice:(id)arg2;
- (id)createSessionForDevice:(id)arg1 sessionID:(id)arg2;
- (id)createSessionForDevice:(id)arg1 sessionID:(id)arg2 sessionOptions:(struct NSDictionary *)arg3;
- (void)notifyAllOffline;
@property(readonly, copy, nonatomic) NSArray *devices;
- (void)probeNetworkAddress:(id)arg1 servicePort:(unsigned short)arg2 reason:(int)arg3;
- (void)startScanInternal;
- (void)stopDiscovery;
- (void)startDiscovery;
- (void)setPassiveScan:(_Bool)arg1;
- (void)dealloc;
- (id)initWithDeviceCategory:(id)arg1;
- (id)initWithAnalyticsEventLogger:(id)arg1 castOptions:(id)arg2 database:(id)arg3 networkReachability:(id)arg4 runtimeConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

