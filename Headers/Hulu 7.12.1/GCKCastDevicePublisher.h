//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <GoogleCast/GCKGuestModeProberDelegate-Protocol.h>
#import <GoogleCast/NSObject-Protocol.h>

@class GCKAnalyticsEventLogger, GCKCastOptions, GCKDBNetworkInfo, GCKDatabase, GCKDevice, GCKDiscoveryCriteria, GCKGuestModeProber, GCKNNetworkReachability, GCKProberScheduler, GCKRuntimeConfiguration, NSArray, NSMutableDictionary, NSString, NSTimer;
@protocol GCKCastDevicePublisherDelegate;

@interface GCKCastDevicePublisher : NSObject <NSObject, GCKGuestModeProberDelegate>
{
    GCKAnalyticsEventLogger *_analyticsEventLogger;
    GCKCastOptions *_castOptions;
    GCKDatabase *_database;
    GCKRuntimeConfiguration *_runtimeConfiguration;
    GCKNNetworkReachability *_networkReachability;
    GCKDBNetworkInfo *_currentNetworkInfo;
    unsigned short _currentIPAddressHighBytes;
    NSTimer *_processDatabaseTimer;
    NSMutableDictionary *_publishedDevices;
    GCKDiscoveryCriteria *_discoveryCriteria;
    GCKProberScheduler *_proberScheduler;
    unsigned long long _iterationCount;
    GCKDevice *_nearbyDevice;
    _Bool _isNearbyDevicePublished;
    long long _status;
    GCKGuestModeProber *_guestModeProber;
    id <GCKCastDevicePublisherDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GCKCastDevicePublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)guestModeProber:(id)arg1 didFailProbingApplicationID:(id)arg2 withError:(id)arg3;
- (void)guestModeProber:(id)arg1 didSucceedProbingApplicationID:(id)arg2 supported:(_Bool)arg3;
- (long long)supportStateForDiscoveryCriteriaInAppSupportState:(id)arg1;
- (long long)supportedStateForGuestMode;
- (long long)supportStateForDiscoveryCriteriaInDevice:(id)arg1;
- (void)updateDevices:(id)arg1 withConnectionMode:(unsigned int)arg2;
- (void)unpublishDevices:(id)arg1;
- (void)publishDevices:(id)arg1 withConnectionMode:(unsigned int)arg2;
- (id)deviceWithDeviceInfo:(id)arg1 deviceConnectionMode:(unsigned int)arg2;
- (void)logPublishedDevices:(id)arg1 rejectedDevices:(id)arg2;
- (void)handleNetworkReachabilityChange;
- (void)probeIPFragmentsFromBLEBeacons;
- (unsigned long long)priorityFromProbingReason:(int)arg1;
- (void)probeNetworkAddress:(id)arg1 servicePort:(unsigned short)arg2 reason:(int)arg3;
- (unsigned long long)devicePublishActionWithLocalConnectionInfo:(id)arg1 probingEnabled:(_Bool)arg2;
- (void)scanDatabaseForOnlineDevices:(id)arg1 rejectedDevices:(id)arg2;
- (id)devicePublished:(id)arg1;
- (id)localPublishedDevices;
- (id)publishedDevicesForMode:(unsigned int)arg1;
- (id)guestModePublishedDevices;
@property(readonly, copy, nonatomic) NSArray *publishedDevices;
- (void)processDatabase;
- (void)stopPublishing;
- (void)startPublishing;
- (id)createGuestModeProber;
- (id)createProberScheduler;
- (id)initWithAnalyticsEventLogger:(id)arg1 castOptions:(id)arg2 database:(id)arg3 networkReachability:(id)arg4 runtimeConfiguration:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

