//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOALSLocationManagerDelegate-Protocol.h"

@class GOALSDeviceStatusProvider, GOALSRMDebugLogger, GOALSRegionTokenProvider, GOALSServiceProxy, GOALSTrackingSession, GOALSTrackingSessionRepository, GOALSTrackingSessionValidator, NSDate, NSMutableArray, NSString;
@protocol GOALSLocationManager, GOALSMetricEventManager, GOALSRegionManager, GOALSWeblab;

@interface GOALSRegionMonitoringClient : NSObject <GOALSLocationManagerDelegate>
{
    id <GOALSLocationManager> _locationManager;
    GOALSRMDebugLogger *_debugLogger;
    GOALSServiceProxy *_goalsService;
    NSString *_applicationInstallId;
    NSString *_clientId;
    GOALSTrackingSession *_trackingSession;
    NSDate *_lastLocationSentTime;
    long long _createdTimeInMillis;
    NSMutableArray *_locationsBuffer;
    GOALSTrackingSessionRepository *_goalsTrackingSessionRepository;
    GOALSTrackingSessionValidator *_goalsTrackingSessionValidator;
    GOALSDeviceStatusProvider *_goalsDeviceStatusProvider;
    id <GOALSMetricEventManager> _metricEventManager;
    id <GOALSRegionManager> _regionManager;
    GOALSRegionTokenProvider *_regionTokenProvider;
    id <GOALSWeblab> _goalsWeblab;
}

@property(readonly, nonatomic) id <GOALSWeblab> goalsWeblab; // @synthesize goalsWeblab=_goalsWeblab;
@property(readonly, nonatomic) GOALSRegionTokenProvider *regionTokenProvider; // @synthesize regionTokenProvider=_regionTokenProvider;
@property(retain, nonatomic) id <GOALSRegionManager> regionManager; // @synthesize regionManager=_regionManager;
@property(retain, nonatomic) id <GOALSMetricEventManager> metricEventManager; // @synthesize metricEventManager=_metricEventManager;
@property(retain, nonatomic) GOALSDeviceStatusProvider *goalsDeviceStatusProvider; // @synthesize goalsDeviceStatusProvider=_goalsDeviceStatusProvider;
@property(retain, nonatomic) GOALSTrackingSessionValidator *goalsTrackingSessionValidator; // @synthesize goalsTrackingSessionValidator=_goalsTrackingSessionValidator;
@property(retain, nonatomic) GOALSTrackingSessionRepository *goalsTrackingSessionRepository; // @synthesize goalsTrackingSessionRepository=_goalsTrackingSessionRepository;
@property(retain, nonatomic) NSMutableArray *locationsBuffer; // @synthesize locationsBuffer=_locationsBuffer;
@property long long createdTimeInMillis; // @synthesize createdTimeInMillis=_createdTimeInMillis;
@property(retain) NSDate *lastLocationSentTime; // @synthesize lastLocationSentTime=_lastLocationSentTime;
@property(retain) GOALSTrackingSession *trackingSession; // @synthesize trackingSession=_trackingSession;
@property(readonly, nonatomic) NSString *clientId; // @synthesize clientId=_clientId;
@property(readonly, nonatomic) NSString *applicationInstallId; // @synthesize applicationInstallId=_applicationInstallId;
@property(readonly, nonatomic) GOALSServiceProxy *goalsService; // @synthesize goalsService=_goalsService;
@property(readonly, nonatomic) GOALSRMDebugLogger *debugLogger; // @synthesize debugLogger=_debugLogger;
@property(retain, nonatomic) id <GOALSLocationManager> locationManager; // @synthesize locationManager=_locationManager;
- (void).cxx_destruct;
- (id)createMonitoredRegionData:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 radius:(int)arg4;
- (_Bool)hasPermission;
- (id)mapArray:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)getGOALSTrackingLocationUpdates;
- (void)sendLocationUpdates;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)refreshRegionMonitors:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancelTracking;
- (void)getSessionsStatus:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)cancelTracking:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)startTracking:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (id)initWithClientId:(id)arg1 applicationInstallId:(id)arg2 locationManager:(id)arg3 goalsServiceProxy:(id)arg4 metricsEventManagerProvider:(id)arg5 regionManager:(id)arg6 weblab:(id)arg7;
- (id)initWithClientId:(id)arg1 applicationInstallId:(id)arg2 locationManager:(id)arg3 metricsEventManagerProvider:(id)arg4 regionManager:(id)arg5 weblab:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

