//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTDrivingModeService-Protocol.h"
#import "SPTDrivingModeTestManagerObserver-Protocol.h"

@class NSString, SPTAllocationContext, SPTDrivingModeControllerImplementation, SPTDrivingModeFactory, SPTDrivingModeTestManagerImplementation;
@protocol SPTDrivingStateDetectionService, SPTRemoteConfigurationService;

@interface SPTDrivingModeServiceImplementation : NSObject <SPTDrivingModeTestManagerObserver, SPTDrivingModeService>
{
    _Bool _carViewEnabled;
    id <SPTDrivingStateDetectionService> _drivingDetectionService;
    SPTDrivingModeTestManagerImplementation *_testManager;
    SPTDrivingModeControllerImplementation *_drivingModeController;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    SPTDrivingModeFactory *_drivingModeFactory;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTDrivingModeFactory *drivingModeFactory; // @synthesize drivingModeFactory=_drivingModeFactory;
@property(nonatomic) _Bool carViewEnabled; // @synthesize carViewEnabled=_carViewEnabled;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(retain, nonatomic) SPTDrivingModeControllerImplementation *drivingModeController; // @synthesize drivingModeController=_drivingModeController;
@property(retain, nonatomic) SPTDrivingModeTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTDrivingStateDetectionService> drivingDetectionService; // @synthesize drivingDetectionService=_drivingDetectionService;
- (void).cxx_destruct;
- (void)testManager:(id)arg1 didChangeCarViewEnabled:(_Bool)arg2;
- (void)disableDrivingMode;
- (void)enableDrivingMode;
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

