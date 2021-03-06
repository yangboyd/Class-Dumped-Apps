//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTOfflineModeStateObserver-Protocol.h"
#import "SPTSocialListeningService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSocialListeningDataLoader, SPTSocialListeningDialogManager, SPTSocialListeningDialogPresenter, SPTSocialListeningEducationSlatePresenter, SPTSocialListeningGLUETheme, SPTSocialListeningLoggerImplementation, SPTSocialListeningModelImplementation, SPTSocialListeningTestManagerImplementation, SPTSocialListeningUserInterfaceFactoryImplementation;
@protocol CosmosFeature, SPTContainerService, SPTContainerUIService, SPTCosmosDataLoaderService, SPTEncoreIntegrationService, SPTGLUEService, SPTNetworkService, SPTOfflineModeState, SPTPageLoaderViewService, SPTPlayerFeature, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTScannablesRegistration, SPTScannablesService, SPTSessionService, SPTShareFeature, SPTSnackbarService, SPTUBIService, SPTURIDispatchService, SlateFeature, _TtP14ProfileFeature17SPTProfileService_;

@interface SPTSocialListeningServiceImplementation : NSObject <SPTOfflineModeStateObserver, SPTSocialListeningService>
{
    id <SPTGLUEService> _glueService;
    id <SPTScannablesService> _scannablesService;
    id <SPTNetworkService> _networkService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTSessionService> _clientSessionService;
    id <CosmosFeature> _cosmosFeature;
    id <SPTCosmosDataLoaderService> _cosmosDataLoaderService;
    id <SPTShareFeature> _shareFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTURIDispatchService> _URIDispatchService;
    id <_TtP14ProfileFeature17SPTProfileService_> _profileService;
    id <SlateFeature> _slateService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTUBIService> _ubiService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTPageLoaderViewService> _pageLoaderViewService;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
    SPTSocialListeningTestManagerImplementation *_testManager;
    SPTSocialListeningUserInterfaceFactoryImplementation *_userInterfaceFactory;
    SPTSocialListeningGLUETheme *_socialListeningTheme;
    SPTSocialListeningModelImplementation *_model;
    SPTSocialListeningLoggerImplementation *_logger;
    id <SPTScannablesRegistration> _scannablesRegistration;
    SPTSocialListeningDialogPresenter *_dialogPresenter;
    SPTSocialListeningEducationSlatePresenter *_slatePresenter;
    SPTSocialListeningDialogManager *_dialogManager;
    id <SPTOfflineModeState> _offlineModeState;
    SPTSocialListeningDataLoader *_socialListeningDataLoader;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(retain, nonatomic) SPTSocialListeningDataLoader *socialListeningDataLoader; // @synthesize socialListeningDataLoader=_socialListeningDataLoader;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(retain, nonatomic) SPTSocialListeningDialogManager *dialogManager; // @synthesize dialogManager=_dialogManager;
@property(retain, nonatomic) SPTSocialListeningEducationSlatePresenter *slatePresenter; // @synthesize slatePresenter=_slatePresenter;
@property(retain, nonatomic) SPTSocialListeningDialogPresenter *dialogPresenter; // @synthesize dialogPresenter=_dialogPresenter;
@property(retain, nonatomic) id <SPTScannablesRegistration> scannablesRegistration; // @synthesize scannablesRegistration=_scannablesRegistration;
@property(retain, nonatomic) SPTSocialListeningLoggerImplementation *logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTSocialListeningModelImplementation *model; // @synthesize model=_model;
@property(retain, nonatomic) SPTSocialListeningGLUETheme *socialListeningTheme; // @synthesize socialListeningTheme=_socialListeningTheme;
@property(retain, nonatomic) SPTSocialListeningUserInterfaceFactoryImplementation *userInterfaceFactory; // @synthesize userInterfaceFactory=_userInterfaceFactory;
@property(retain, nonatomic) SPTSocialListeningTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(nonatomic) __weak id <SPTPageLoaderViewService> pageLoaderViewService; // @synthesize pageLoaderViewService=_pageLoaderViewService;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SlateFeature> slateService; // @synthesize slateService=_slateService;
@property(nonatomic) __weak id <_TtP14ProfileFeature17SPTProfileService_> profileService; // @synthesize profileService=_profileService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTShareFeature> shareFeature; // @synthesize shareFeature=_shareFeature;
@property(nonatomic) __weak id <SPTCosmosDataLoaderService> cosmosDataLoaderService; // @synthesize cosmosDataLoaderService=_cosmosDataLoaderService;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTScannablesService> scannablesService; // @synthesize scannablesService=_scannablesService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
- (void)offlineModeState:(id)arg1 updated:(_Bool)arg2;
- (id)buildModel;
- (id)buildDialogManager;
- (void)loadModelDataIfNeeded;
- (id)provideLocalSettings;
- (void)unregisterWithScannablesService;
- (void)registerWithScannablesService;
- (void)applicationDidBecomeActive:(id)arg1;
- (id)provideSocialListeningLogger;
- (id)provideSocialListeningModel;
- (id)provideUserInterfaceFactory;
- (id)provideTestManager;
- (void)unload;
- (void)initializeSocialListening;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

