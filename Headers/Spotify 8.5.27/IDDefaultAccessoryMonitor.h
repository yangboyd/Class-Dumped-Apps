//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDAccessoryMonitor-Protocol.h"
#import "IDBclManagerDelegate-Protocol.h"
#import "IDMessagingServiceSubscriber-Protocol.h"
#import "IDProtocolSelectorDelegate-Protocol.h"
#import "IDVehicleInformationRetrieverDelegate-Protocol.h"

@class IDA4APacketReaderWriterRegistry, IDA4AProtocol, IDAppManifest, IDBackgroundTask, IDBclManager, IDExternalAccessorySelector, IDMessagingService, IDProtocolSelector, IDRhmiAppSwitcher, IDRhmiFeatureSwitcherDataAccess, IDRhmiLegacyFeatureSwitcher, IDVehicleInfo, IDVehicleInformationRetriever, IDVersionInfo, NSConditionLock, NSDictionary, NSString, UIApplication;
@protocol IDFeatureInfoSyncService;

@interface IDDefaultAccessoryMonitor : NSObject <IDBclManagerDelegate, IDProtocolSelectorDelegate, IDVehicleInformationRetrieverDelegate, IDMessagingServiceSubscriber, IDAccessoryMonitor>
{
    _Bool _allRequiredProtocolsForMultisessionSupport;
    _Bool _hasPermissionToConnect;
    IDProtocolSelector *_protocolSelector;
    IDA4AProtocol *_selectedProtocol;
    IDA4AProtocol *_claimedProtocol;
    IDBclManager *_bclManager;
    NSConditionLock *_stateCondition;
    IDVehicleInformationRetriever *_vehicleInfoRetriever;
    IDRhmiLegacyFeatureSwitcher *_legacySwitcher;
    IDRhmiAppSwitcher *_appSwitcher;
    NSString *_currentSystemVersion;
    UIApplication *_uiApplication;
    IDExternalAccessorySelector *_externalAccessorySelector;
    IDBackgroundTask *_backgroundTask;
    IDA4APacketReaderWriterRegistry *_packetReaderWriterRegistry;
    IDMessagingService *_messagingService;
    id <IDFeatureInfoSyncService> _syncService;
    IDAppManifest *_manifest;
    IDRhmiFeatureSwitcherDataAccess *_dataAccess;
    NSDictionary *_customSystemInfoSettings;
}

@property(retain) NSDictionary *customSystemInfoSettings; // @synthesize customSystemInfoSettings=_customSystemInfoSettings;
@property _Bool hasPermissionToConnect; // @synthesize hasPermissionToConnect=_hasPermissionToConnect;
@property _Bool allRequiredProtocolsForMultisessionSupport; // @synthesize allRequiredProtocolsForMultisessionSupport=_allRequiredProtocolsForMultisessionSupport;
@property(retain) IDRhmiFeatureSwitcherDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(retain) IDAppManifest *manifest; // @synthesize manifest=_manifest;
@property(retain, nonatomic) id <IDFeatureInfoSyncService> syncService; // @synthesize syncService=_syncService;
@property(retain, nonatomic) IDMessagingService *messagingService; // @synthesize messagingService=_messagingService;
@property(retain, nonatomic) IDA4APacketReaderWriterRegistry *packetReaderWriterRegistry; // @synthesize packetReaderWriterRegistry=_packetReaderWriterRegistry;
@property(retain) IDBackgroundTask *backgroundTask; // @synthesize backgroundTask=_backgroundTask;
@property __weak IDExternalAccessorySelector *externalAccessorySelector; // @synthesize externalAccessorySelector=_externalAccessorySelector;
@property __weak UIApplication *uiApplication; // @synthesize uiApplication=_uiApplication;
@property(retain) NSString *currentSystemVersion; // @synthesize currentSystemVersion=_currentSystemVersion;
@property(retain) IDRhmiAppSwitcher *appSwitcher; // @synthesize appSwitcher=_appSwitcher;
@property(retain) IDRhmiLegacyFeatureSwitcher *legacySwitcher; // @synthesize legacySwitcher=_legacySwitcher;
@property(retain) IDVehicleInformationRetriever *vehicleInfoRetriever; // @synthesize vehicleInfoRetriever=_vehicleInfoRetriever;
@property(retain) NSConditionLock *stateCondition; // @synthesize stateCondition=_stateCondition;
@property(retain) IDBclManager *bclManager; // @synthesize bclManager=_bclManager;
@property(retain) IDA4AProtocol *claimedProtocol; // @synthesize claimedProtocol=_claimedProtocol;
@property(retain) IDA4AProtocol *selectedProtocol; // @synthesize selectedProtocol=_selectedProtocol;
@property(retain) IDProtocolSelector *protocolSelector; // @synthesize protocolSelector=_protocolSelector;
- (void).cxx_destruct;
- (_Bool)systemHasRequiredMinimumVersionForApplaunch:(id)arg1;
- (_Bool)systemHasRequiredMinimumVersionForBackgrounding:(id)arg1;
- (_Bool)systemHasRequiredMinimumVersionForA4A:(id)arg1;
- (id)stringFromIDAccessoryMonitorState:(unsigned long long)arg1;
- (_Bool)isAllowedToConnectWhileUIApplicationNotActive;
- (void)stopBclManager;
- (void)stopProtocolSelector;
- (void)startProtocolSelector;
- (long long)getApplicationState;
- (void)persistLastUsedCommunicationProtocol:(id)arg1;
- (id)connectionInfoDict;
- (void)overrideSystemInfoWithCustomSettings:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleRequest:(id)arg1;
- (void)handleNotification:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)handleDidEnterBackground:(id)arg1;
- (void)handleDidBecomeActive:(id)arg1;
- (void)notifyAccessoryDidDisconnect;
- (void)notifyAccessoryDidConnect;
- (void)handleAccessoryDidDisappear:(id)arg1;
- (void)handleAccessoryDidAppear:(id)arg1;
- (void)vehicleinformationRetriever:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)shouldConnectLegacyFeatureSwitcher;
- (_Bool)shouldConnectAppSwitcher;
- (void)disconnectAppswitcher;
- (void)connectAppswitcher;
- (void)vehicleinformationRetrieverDidRetrieveVehicleInformation:(id)arg1;
- (void)protocolSelectorDidFailToSelectProtocol:(id)arg1;
- (void)protocolSelector:(id)arg1 willSelectProtocol:(id)arg2;
- (void)protocolSelector:(id)arg1 didSelectProtocol:(id)arg2;
- (void)bclManagerDidDisconnnect:(id)arg1;
- (void)bclManager:(id)arg1 didFailToConnectWithError:(id)arg2;
- (void)bclManagerDidConnect:(id)arg1;
- (void)deregisterApplication:(id)arg1;
- (void)registerNonStickyApplication:(id)arg1;
- (void)registerStickyApplication:(id)arg1;
- (void)registerApplicationForApplicationLaunch;
- (void)launchApplication:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)disconnectAccessory;
- (void)stopMonitoring;
- (void)startMonitoringWithManifest:(id)arg1;
- (void)startMonitoring;
@property(readonly) _Bool supportsA4AMultisession;
@property(readonly) _Bool supportsA4AConnectionInBackground;
- (id)proxyInfo;
@property(readonly, nonatomic) IDVersionInfo *etchVersion;
@property(readonly, nonatomic) IDVersionInfo *cdsVersion;
@property(readonly, nonatomic) IDVehicleInfo *vehicleInfo;
- (id)initWithCurrentSystemVersion:(id)arg1 legacyCommunicationProtocolSupport:(_Bool)arg2 allRequiredProtocolsForMultisessionSupport:(_Bool)arg3 uiApplication:(id)arg4 externalAccessorySelector:(id)arg5 protocolSelector:(id)arg6 bclManager:(id)arg7 registry:(id)arg8;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

