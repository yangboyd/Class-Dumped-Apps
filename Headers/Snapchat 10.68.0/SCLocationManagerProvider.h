//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLocationObserver-Protocol.h"
#import "SCLocationProvider-Protocol.h"

@class NSString, SCLocationListenerAnnouncer, SCLocationManager;
@protocol SCPerforming;

@interface SCLocationManagerProvider : NSObject <SCLocationObserver, SCLocationProvider>
{
    SCLocationManager *_locationManager;
    SCLocationListenerAnnouncer *_locationAnnouncer;
    id <SCPerforming> _performer;
}

- (void).cxx_destruct;
- (void)onLocationMonitoredBeaconRegionsUpdated;
- (void)onLocationAuthorizationStatusChange:(int)arg1;
- (void)onLocationError:(id)arg1;
- (void)onLocationHeadingChange:(id)arg1;
- (void)onLocationUpdate:(id)arg1;
- (id)locationObserverIdentifier;
- (id)locationObserverDispatchQueue;
- (_Bool)locationObserverWantsActiveLocationMonitoring;
- (id)locationAnnouncer;
- (id)requestActiveLocationUpdatesWithRequest:(id)arg1;
- (_Bool)hasRecentAuthorizationStatus;
- (_Bool)hasAuthorizationStatus;
- (_Bool)lastAuthorized;
- (int)lastAuthorizationStatus;
- (id)beacons;
- (id)heading;
- (id)location;
- (id)initWithLocationManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

