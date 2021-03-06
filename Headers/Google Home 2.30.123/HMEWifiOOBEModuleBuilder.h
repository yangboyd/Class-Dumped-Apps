//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEWifiOOBEModuleBuilder-Protocol.h"
#import "NSObject-Protocol.h"

@class HMECoreDataStack;
@protocol AnalyticsSessionLogger, GCAConfigurationFlags, GIPAccountID, GIPClock, GNAFrontendGroupsService2, GWCGroupsService2, GWCInsightsService2, GWCNetworkSettingsService2, GWCOobeService2, GWCOperationsService2, GWCUtilityService2, GWCVersionsService2, HMEAuditRecorder, HMEConsentLoggingService, HMEDeviceData, HMELinkOpener, HMESetupAPIProtocol, HMESpaceData, HMEStructureData, HMEUserData, SSOIdentity, SSOService, _TtP47googlemac_iPhone_Home_Wifi_System_WifiInterface13WifiInterface_;

@interface HMEWifiOOBEModuleBuilder : NSObject <NSObject, HMEWifiOOBEModuleBuilder>
{
    // Error parsing type: , name: accountID
    // Error parsing type: , name: localAPI
    // Error parsing type: , name: wifiInterface
    // Error parsing type: , name: analyticsLogger
    // Error parsing type: , name: frontendGroupsService
    // Error parsing type: , name: userData
    // Error parsing type: , name: structureData
    // Error parsing type: , name: deviceData
    // Error parsing type: , name: identity
    // Error parsing type: , name: SSOService
    // Error parsing type: , name: flags
    // Error parsing type: , name: coreDataStack
    // Error parsing type: , name: consentLoggingService
    // Error parsing type: , name: auditRecorder
    // Error parsing type: , name: groupsService
    // Error parsing type: , name: insightsService
    // Error parsing type: , name: networkSettingsService
    // Error parsing type: , name: oobeService
    // Error parsing type: , name: operationsService
    // Error parsing type: , name: utilityService
    // Error parsing type: , name: versionsService
    // Error parsing type: , name: spaceData
    // Error parsing type: , name: helpCoordinatorFactory
    // Error parsing type: , name: olive426CoordinatorFactory
    // Error parsing type: , name: linkOpener
    // Error parsing type: , name: chooseStructureCoordinatorFactory
    // Error parsing type: , name: clock
}

- (void).cxx_destruct;
- (id)init;
- (id)buildForObjc;
@property(nonatomic, retain) id <GIPClock> clock; // @synthesize clock;
@property(nonatomic, copy) CDUnknownBlockType chooseStructureCoordinatorFactory;
@property(nonatomic, retain) id <HMELinkOpener> linkOpener; // @synthesize linkOpener;
@property(nonatomic, copy) CDUnknownBlockType olive426CoordinatorFactory;
@property(nonatomic, copy) CDUnknownBlockType helpCoordinatorFactory;
@property(nonatomic, retain) id <HMESpaceData> spaceData; // @synthesize spaceData;
@property(nonatomic, retain) id <GWCVersionsService2> versionsService; // @synthesize versionsService;
@property(nonatomic, retain) id <GWCUtilityService2> utilityService; // @synthesize utilityService;
@property(nonatomic, retain) id <GWCOperationsService2> operationsService; // @synthesize operationsService;
@property(nonatomic, retain) id <GWCOobeService2> oobeService; // @synthesize oobeService;
@property(nonatomic, retain) id <GWCNetworkSettingsService2> networkSettingsService; // @synthesize networkSettingsService;
@property(nonatomic, retain) id <GWCInsightsService2> insightsService; // @synthesize insightsService;
@property(nonatomic, retain) id <GWCGroupsService2> groupsService; // @synthesize groupsService;
@property(nonatomic, retain) id <HMEAuditRecorder> auditRecorder; // @synthesize auditRecorder;
@property(nonatomic, retain) id <HMEConsentLoggingService> consentLoggingService; // @synthesize consentLoggingService;
@property(nonatomic, retain) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack;
@property(nonatomic, retain) id <GCAConfigurationFlags> flags; // @synthesize flags;
@property(nonatomic, retain) id <SSOService> SSOService; // @synthesize SSOService;
@property(nonatomic, retain) id <SSOIdentity> identity; // @synthesize identity;
@property(nonatomic, retain) id <HMEDeviceData> deviceData; // @synthesize deviceData;
@property(nonatomic, retain) id <HMEStructureData> structureData; // @synthesize structureData;
@property(nonatomic, retain) id <HMEUserData> userData; // @synthesize userData;
@property(nonatomic, retain) id <GNAFrontendGroupsService2> frontendGroupsService; // @synthesize frontendGroupsService;
@property(nonatomic, retain) id <AnalyticsSessionLogger> analyticsLogger; // @synthesize analyticsLogger;
@property(nonatomic, retain) id <_TtP47googlemac_iPhone_Home_Wifi_System_WifiInterface13WifiInterface_> wifiInterface; // @synthesize wifiInterface;
@property(nonatomic, retain) id <HMESetupAPIProtocol> localAPI; // @synthesize localAPI;
@property(nonatomic, retain) id <GIPAccountID> accountID; // @synthesize accountID;

@end

