//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLCircularRegion, CLLocation, CLLocationManager, GMSTimer, NSArray, NSMutableArray, NSMutableSet, NSString;
@protocol GMSGeofencerDelegate, GMSTimerFactory, OS_dispatch_queue;

@interface GMSGeofencer : NSObject <CLLocationManagerDelegate>
{
    _Bool _hasPrepared;
    CLLocation *_recentLocation;
    unsigned long long _operationsAwaitingLocation;
    NSMutableArray *_reportHandlers;
    GMSTimer *_regionEntryExitTimer;
    NSMutableSet *_exitedRegions;
    NSMutableSet *_enteredRegions;
    CLLocation *_candidateLocation;
    GMSTimer *_candidateLocationTimer;
    CLCircularRegion *_refreshRegion;
    id <GMSGeofencerDelegate> _delegate;
    CLLocationManager *_locationManager;
    unsigned long long _maxNumberOfZones;
    NSObject<OS_dispatch_queue> *_locationOperationQueue;
    NSObject<OS_dispatch_queue> *_regionOperationQueue;
    id <GMSTimerFactory> _timerFactory;
    NSArray *_alertingRegions;
    Class _clLocationManagerClass;
    double _maxWaitForAccurateLocation;
}

@property(nonatomic) double maxWaitForAccurateLocation; // @synthesize maxWaitForAccurateLocation=_maxWaitForAccurateLocation;
@property(retain, nonatomic) Class clLocationManagerClass; // @synthesize clLocationManagerClass=_clLocationManagerClass;
@property(copy, nonatomic) NSArray *alertingRegions; // @synthesize alertingRegions=_alertingRegions;
@property(retain, nonatomic) id <GMSTimerFactory> timerFactory; // @synthesize timerFactory=_timerFactory;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *regionOperationQueue; // @synthesize regionOperationQueue=_regionOperationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *locationOperationQueue; // @synthesize locationOperationQueue=_locationOperationQueue;
@property(nonatomic) unsigned long long maxNumberOfZones; // @synthesize maxNumberOfZones=_maxNumberOfZones;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) __weak id <GMSGeofencerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)runOperations:(unsigned long long)arg1 withLocation:(id)arg2;
- (unsigned long long)getAndResetOperationsAwaitingLocation;
- (void)fetchLocationForOperation:(unsigned long long)arg1;
- (void)useCandidateLocation;
- (void)didEnterOrExitRegions;
- (void)handleZoneEntryExitWithLocation:(id)arg1;
- (void)setGeofencesForRegions:(id)arg1;
- (_Bool)regions:(id)arg1 containsRegion:(id)arg2;
- (void)updateGeofencesForLocation:(id)arg1;
- (void)coalesceRegionEntriesAndExits;
- (_Bool)prepare:(id *)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 monitoringDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)restoreGeofences;
- (void)invalidateTimers;
- (void)stopMonitoringRegions;
- (void)monitorRegions:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

