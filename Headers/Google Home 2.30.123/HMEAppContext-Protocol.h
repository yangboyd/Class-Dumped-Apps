//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AnalyticsLogger, GCKCastContext, HMEEnvironment, SetupAnalyticsLogger, UIViewController;
@protocol BluetoothDeviceScanner, GCAFlags, GTMSessionFetcherServiceProtocol, HMEAccountLinkingCoordinator, HMEAppReviewManager, HMEAppUpdateRequiredCoordinator, HMEAssistantContactUploaderCoordinator, HMEAssistantContactUploaderService, HMEAssistantCoordinator, HMEAssistantSettings, HMEAuthCoordinator, HMEBackupProtectedFileManager, HMEBreakpadCoordinator, HMECastCertificateManager, HMECastDeviceMediaServiceProtocol, HMEGrowthKitCoordinator, HMEHelpCoordinator, HMELinkOpener, HMELocalDeviceData, HMELogsModule, HMENotificationsManagerProtocol, HMETAGContainer, HMEWelcomeCoordinator, SSOService, SetupDeviceScanner;

@protocol HMEAppContext <NSObject>
@property(readonly, nonatomic) CDUnknownBlockType welcomeCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType TAGContainerInjector;
@property(readonly, nonatomic) CDUnknownBlockType SSOServiceInjector;
@property(readonly, nonatomic) CDUnknownBlockType setupAnalyticsLoggerInjector;
@property(readonly, nonatomic) CDUnknownBlockType notificationsManagerInjector;
@property(readonly, nonatomic) CDUnknownBlockType logsModuleInjector;
@property(readonly, nonatomic) CDUnknownBlockType localDeviceDataInjector;
@property(readonly, nonatomic) CDUnknownBlockType linkOpenerInjector;
@property(readonly, nonatomic) CDUnknownBlockType helpCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType growthKitCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType flagsInjector;
@property(readonly, nonatomic) CDUnknownBlockType fetcherServiceInjector;
@property(readonly, nonatomic) CDUnknownBlockType environmentInjector;
@property(readonly, nonatomic) CDUnknownBlockType deviceScannerInjector;
@property(readonly, nonatomic) CDUnknownBlockType contactUploaderCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType contactUploaderInjector;
@property(readonly, nonatomic) CDUnknownBlockType castDeviceMediaServiceInjector;
@property(readonly, nonatomic) CDUnknownBlockType castContextInjector;
@property(readonly, nonatomic) CDUnknownBlockType castCertificateManagerInjector;
@property(readonly, nonatomic) CDUnknownBlockType breakpadCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType bluetoothScannerInjector;
@property(readonly, nonatomic) CDUnknownBlockType backupProtectedFileManagerInjector;
@property(readonly, nonatomic) CDUnknownBlockType authCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType assistantSettingsInjector;
@property(readonly, nonatomic) CDUnknownBlockType assistantCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType appUpdateRequiredCoordinatorInjector;
@property(readonly, nonatomic) CDUnknownBlockType appReviewManagerInjector;
@property(readonly, nonatomic) CDUnknownBlockType analyticsLoggerInjector;
@property(readonly, nonatomic) CDUnknownBlockType accountLinkingCoordinatorInjector;
@property(readonly, nonatomic) UIViewController<HMEWelcomeCoordinator> *welcomeCoordinator;
@property(readonly, nonatomic) id <HMETAGContainer> TAGContainer;
@property(readonly, nonatomic) id <SSOService> SSOService;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger;
@property(readonly, nonatomic) id <HMENotificationsManagerProtocol> notificationsManager;
@property(readonly, nonatomic) id <HMELogsModule> logsModule;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator;
@property(readonly, nonatomic) id <HMEGrowthKitCoordinator> growthKitCoordinator;
@property(readonly, nonatomic) id <GCAFlags> flags;
@property(readonly, nonatomic) id <GTMSessionFetcherServiceProtocol> fetcherService;
@property(readonly, nonatomic) HMEEnvironment *environment;
@property(readonly, nonatomic) id <SetupDeviceScanner> deviceScanner;
@property(readonly, nonatomic) id <HMEAssistantContactUploaderCoordinator> contactUploaderCoordinator;
@property(readonly, nonatomic) id <HMEAssistantContactUploaderService> contactUploader;
@property(readonly, nonatomic) id <HMECastDeviceMediaServiceProtocol> castDeviceMediaService;
@property(readonly, nonatomic) GCKCastContext *castContext;
@property(readonly, nonatomic) id <HMECastCertificateManager> castCertificateManager;
@property(readonly, nonatomic) id <HMEBreakpadCoordinator> breakpadCoordinator;
@property(readonly, nonatomic) id <BluetoothDeviceScanner> bluetoothScanner;
@property(readonly, nonatomic) id <HMEBackupProtectedFileManager> backupProtectedFileManager;
@property(readonly, nonatomic) id <HMEAuthCoordinator> authCoordinator;
@property(readonly, nonatomic) id <HMEAssistantSettings> assistantSettings;
@property(readonly, nonatomic) id <HMEAssistantCoordinator> assistantCoordinator;
@property(readonly, nonatomic) id <HMEAppUpdateRequiredCoordinator> appUpdateRequiredCoordinator;
@property(readonly, nonatomic) id <HMEAppReviewManager> appReviewManager;
@property(readonly, nonatomic) AnalyticsLogger *analyticsLogger;
@property(readonly, nonatomic) id <HMEAccountLinkingCoordinator> accountLinkingCoordinator;
@end

