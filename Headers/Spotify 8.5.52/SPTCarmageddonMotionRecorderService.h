//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAccessoryStateObserver-Protocol.h"
#import "SPTCarmageddonMotionManagerDelegate-Protocol.h"
#import "SPTFeatureFlagSignalObserver-Protocol.h"
#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTService-Protocol.h"
#import "SPTWazeNavigationStateObserver-Protocol.h"

@class NSString, NSTimer, SPTAllocationContext, SPTCarmageddonLogger, SPTCarmageddonMotionManager;
@protocol SPTAccessoryManagerService, SPTContainerService, SPTFeatureFlagSignal, SPTFeatureFlaggingService, SPTNetworkService, SPTWazeService;

@interface SPTCarmageddonMotionRecorderService : NSObject <SPTAccessoryStateObserver, SPTCarmageddonMotionManagerDelegate, SPTFeatureFlagSignalObserver, SPTWazeNavigationStateObserver, SPTNetworkConnectivityControllerObserver, SPTService>
{
    _Bool _motionDataLoggingForTrainingEnabled;
    id <SPTAccessoryManagerService> _accessoryManagerService;
    id <SPTContainerService> _containerService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTWazeService> _wazeService;
    id <SPTNetworkService> _networkService;
    id <SPTFeatureFlagSignal> _motionDataLoggingForTrainingEnabledSignal;
    SPTCarmageddonMotionManager *_motionManager;
    SPTCarmageddonLogger *_logger;
    NSString *_lastSensorLoggingReason;
    NSTimer *_delayedRecordingTimer;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) NSTimer *delayedRecordingTimer; // @synthesize delayedRecordingTimer=_delayedRecordingTimer;
@property(copy, nonatomic) NSString *lastSensorLoggingReason; // @synthesize lastSensorLoggingReason=_lastSensorLoggingReason;
@property(retain, nonatomic) SPTCarmageddonLogger *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTCarmageddonMotionManager *motionManager; // @synthesize motionManager=_motionManager;
@property(nonatomic) _Bool motionDataLoggingForTrainingEnabled; // @synthesize motionDataLoggingForTrainingEnabled=_motionDataLoggingForTrainingEnabled;
@property(retain, nonatomic) id <SPTFeatureFlagSignal> motionDataLoggingForTrainingEnabledSignal; // @synthesize motionDataLoggingForTrainingEnabledSignal=_motionDataLoggingForTrainingEnabledSignal;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTWazeService> wazeService; // @synthesize wazeService=_wazeService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTAccessoryManagerService> accessoryManagerService; // @synthesize accessoryManagerService=_accessoryManagerService;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)motionManagerDidFinishProcessingAllRequestedBatches:(id)arg1;
- (void)motionManager:(id)arg1 didFinishBatchRecordingWithResult:(id)arg2;
- (void)wazeNavigationDidEnd;
- (void)wazeNavigationDidStart;
- (void)audioRouteChanged:(id)arg1;
- (id)sensorLoggingReasonForAccessory:(id)arg1;
- (void)accessoryStateManager:(id)arg1 accessoryDidDisconnect:(id)arg2;
- (void)accessoryStateManager:(id)arg1 accessoryDidConnect:(id)arg2;
- (void)featureFlagSignal:(id)arg1 hasAssumedState:(long long)arg2;
- (void)delayedRecordingTimerFired:(id)arg1;
- (void)startRecordingWithLoggingReason:(id)arg1;
- (void)disable;
- (void)enable;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

