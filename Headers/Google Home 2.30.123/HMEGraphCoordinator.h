//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAccountParticleCoordinatorDelegate-Protocol.h"
#import "HMEChooseStructureCoordinatorDelegate-Protocol.h"
#import "HMEModelObserver-Protocol.h"
#import "HMEMultizoneGroupsGridViewControllerDelegate-Protocol.h"
#import "HMERetryDelegate-Protocol.h"
#import "HMERoutinesImmersiveCoordinatorDelegate-Protocol.h"
#import "HMESpaceEntityViewControllerDelegate-Protocol.h"
#import "HMESpacelessDevicesViewControllerDelegate-Protocol.h"
#import "HMESpacesViewControllerDelegate-Protocol.h"
#import "HMEStructureCoordinator-Protocol.h"

@class HMECoreDataStack, HMEModel, HMESpacesViewController, NSString, UINavigationController;
@protocol AnalyticsLogger, GCAConfigurationFlags, HMEAccountParticleCoordinator, HMEAssistantSettingsCoordinator, HMEAutomationData, HMECastChannelData, HMEChooseStructureCoordinator, HMECoinData, HMEDeviceData, HMEDeviceEligibilityChecker, HMEDeviceInteractionHelper, HMEHelpCoordinator, HMEHomeAutomationDeviceStateCache, HMEHomeAutomationDeviceStateCacheInitialStateManager, HMELightGroupData, HMELinkOpener, HMELocalDeviceData, HMESpaceData, HMESpacesChipData, HMEStructureCoordinatorDelegate, HMEStructureData, HMEStructureDeviceData, HMEStructureModeData, HMEUnifiedDeviceData, SSOAuthorization, SSOService;

@interface HMEGraphCoordinator : NSObject <HMEAccountParticleCoordinatorDelegate, HMESpaceEntityViewControllerDelegate, HMESpacesViewControllerDelegate, HMESpacelessDevicesViewControllerDelegate, HMEMultizoneGroupsGridViewControllerDelegate, HMEChooseStructureCoordinatorDelegate, HMERoutinesImmersiveCoordinatorDelegate, HMERetryDelegate, HMEModelObserver, HMEStructureCoordinator>
{
    id <HMEStructureCoordinatorDelegate> _delegate;
    NSString *_structureID;
    HMECoreDataStack *_coreDataStack;
    id <HMEStructureData> _structureData;
    id <HMESpaceData> _spaceData;
    id <HMECastChannelData> _castChannelData;
    id <HMEDeviceData> _deviceData;
    id <HMELocalDeviceData> _localDeviceData;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <HMEStructureDeviceData> _structureDeviceData;
    id <HMEAutomationData> _homeAutomationData;
    id <HMESpacesChipData> _spacesChipData;
    id <HMESpacesChipData> _structureScopedSpacesChipData;
    id <HMECoinData> _coinData;
    NSString *_networkHost;
    id <SSOAuthorization> _authorization;
    id <SSOService> _SSOService;
    id <HMEChooseStructureCoordinator> _chooseStructureCoordinator;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMEAccountParticleCoordinator> _accountParticleCoordinator;
    HMEModel *_structures;
    id <GCAConfigurationFlags> _flags;
    id <HMEDeviceEligibilityChecker> _deviceEligibilityChecker;
    UINavigationController *_navigationController;
    HMESpacesViewController *_spacesViewController;
    id <AnalyticsLogger> _analyticsLogger;
    id <HMEDeviceInteractionHelper> _deviceInteractionHelper;
    id <HMELightGroupData> _lightGroupData;
    id <HMEStructureModeData> _structureModeData;
    id <HMELinkOpener> _linkOpener;
    id <HMEAssistantSettingsCoordinator> _assistantSettingsCoordinator;
    id <HMEHomeAutomationDeviceStateCache> _deviceStateCache;
    id <HMEHomeAutomationDeviceStateCacheInitialStateManager> _initialStateManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCacheInitialStateManager> initialStateManager; // @synthesize initialStateManager=_initialStateManager;
@property(readonly, nonatomic) id <HMEHomeAutomationDeviceStateCache> deviceStateCache; // @synthesize deviceStateCache=_deviceStateCache;
@property(readonly, nonatomic) id <HMEAssistantSettingsCoordinator> assistantSettingsCoordinator; // @synthesize assistantSettingsCoordinator=_assistantSettingsCoordinator;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(readonly, nonatomic) id <HMEStructureModeData> structureModeData; // @synthesize structureModeData=_structureModeData;
@property(readonly, nonatomic) id <HMELightGroupData> lightGroupData; // @synthesize lightGroupData=_lightGroupData;
@property(readonly, nonatomic) id <HMEDeviceInteractionHelper> deviceInteractionHelper; // @synthesize deviceInteractionHelper=_deviceInteractionHelper;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) HMESpacesViewController *spacesViewController; // @synthesize spacesViewController=_spacesViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) id <HMEDeviceEligibilityChecker> deviceEligibilityChecker; // @synthesize deviceEligibilityChecker=_deviceEligibilityChecker;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) HMEModel *structures; // @synthesize structures=_structures;
@property(readonly, nonatomic) id <HMEAccountParticleCoordinator> accountParticleCoordinator; // @synthesize accountParticleCoordinator=_accountParticleCoordinator;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) id <HMEChooseStructureCoordinator> chooseStructureCoordinator; // @synthesize chooseStructureCoordinator=_chooseStructureCoordinator;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(readonly, copy, nonatomic) NSString *networkHost; // @synthesize networkHost=_networkHost;
@property(readonly, nonatomic) id <HMECoinData> coinData; // @synthesize coinData=_coinData;
@property(readonly, nonatomic) id <HMESpacesChipData> structureScopedSpacesChipData; // @synthesize structureScopedSpacesChipData=_structureScopedSpacesChipData;
@property(readonly, nonatomic) id <HMESpacesChipData> spacesChipData; // @synthesize spacesChipData=_spacesChipData;
@property(readonly, nonatomic) id <HMEAutomationData> homeAutomationData; // @synthesize homeAutomationData=_homeAutomationData;
@property(readonly, nonatomic) id <HMEStructureDeviceData> structureDeviceData; // @synthesize structureDeviceData=_structureDeviceData;
@property(readonly, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) id <HMECastChannelData> castChannelData; // @synthesize castChannelData=_castChannelData;
@property(readonly, nonatomic) id <HMESpaceData> spaceData; // @synthesize spaceData=_spaceData;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) HMECoreDataStack *coreDataStack; // @synthesize coreDataStack=_coreDataStack;
@property(readonly, copy, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(nonatomic) __weak id <HMEStructureCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissModal;
- (void)presentModal:(id)arg1;
- (void)showDefaultOverflow;
- (void)pushViewControllerWithDefaultOverflow:(id)arg1;
- (void)showUniversalRemoteForGCKDeviceID:(id)arg1;
- (void)showUniversalRemoteForThirdPartyDevices:(id)arg1 displayName:(id)arg2;
- (void)showCameraOrUniversalRemoteForCloudDeviceID:(id)arg1;
- (void)showUniversalRemoteForCloudDeviceID:(id)arg1;
- (void)didTapLightGroup:(id)arg1 fromViewController:(id)arg2;
- (void)didTapLightGroup:(id)arg1;
- (void)handleUnsupportedDevice:(id)arg1 fromViewController:(id)arg2;
- (void)didTapGraphDevice:(id)arg1 explicitlyAsCamera:(_Bool)arg2 fromViewController:(id)arg3;
- (void)verifySelectedStructure;
- (void)updateDeviceStateCache;
- (void)showErrorSnackbar;
- (void)updateHomeGraphAsNeeded;
- (_Bool)checkCurrentStructureLinkedWithNestStructure;
- (void)modelDidChange:(id)arg1;
- (void)multizoneGroupsGridViewController:(id)arg1 didTapMultizoneGroup:(id)arg2;
- (void)spacelessDevicesViewController:(id)arg1 didSelectDevice:(id)arg2;
- (void)showOverflowWithAdditionalActions:(id)arg1;
- (void)shouldPopViewController;
- (void)chooseStructureCoordinatorShouldShowZeroStructure:(id)arg1;
- (void)chooseStructureCoordinatorShouldExit:(id)arg1;
- (void)structureCoordinator:(id)arg1 didAcceptInvitationForStructureWithID:(id)arg2 inviterEmail:(id)arg3;
- (void)structureCoordinator:(id)arg1 didChooseStructureID:(id)arg2;
- (void)spaceWasDeleted:(id)arg1;
- (void)spaceEntityViewController:(id)arg1 didTapLightGroup:(id)arg2;
- (void)spaceEntityViewController:(id)arg1 didTapUnifiedDevice:(id)arg2;
- (void)spaceEntityViewController:(id)arg1 didTapSettingsForSpace:(id)arg2;
- (id)currentViewController;
- (void)performRecoveryActionForDevice:(id)arg1;
- (id)inlineRecoveryActionNameForDevice:(id)arg1;
- (_Bool)hasPendingRecoveryStateForDeviceID:(id)arg1;
- (void)finishSetupOfDevice:(id)arg1;
- (void)lockDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)unlockDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)turnOff:(id)arg1;
- (void)turnOn:(id)arg1;
- (void)turnLightGroupOff:(id)arg1;
- (void)turnLightGroupOn:(id)arg1;
- (void)playLiveTVOnDevice:(id)arg1;
- (void)playSomethingOnDevice:(id)arg1;
- (void)pauseOnDevice:(id)arg1;
- (void)playOnDevice:(id)arg1;
- (void)spacesViewController:(id)arg1 openURL:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)spacesViewControllerShouldShowCameraImmersive:(id)arg1;
- (void)spacesViewControllerShouldShowWifiImmersive:(id)arg1;
- (void)spacesViewController:(id)arg1 shouldCallHomeToStructure:(id)arg2;
- (void)didTapHealthCheckFromSpacesViewController:(id)arg1;
- (void)spacesViewController:(id)arg1 didTapChipLinkMediaProviderForLinkableAppId:(id)arg2 accountSetupInfo:(id)arg3 accountLegalInfo:(id)arg4;
- (void)spacesViewController:(id)arg1 didTapChipToLinkHomeControlProviderWithAgentID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)spacesViewControllerDidTapPendingInvites:(id)arg1;
- (void)viewController:(id)arg1 didTapLightGroup:(id)arg2;
- (void)spacesViewController:(id)arg1 didTapLightGroup:(id)arg2;
- (void)spacesViewController:(id)arg1 didTapCameraDeviceID:(id)arg2;
- (void)spacesViewController:(id)arg1 didTapDeviceID:(id)arg2;
- (void)openAssistantRoutinesSettings;
- (void)broadcastWithQuery:(id)arg1 toCloudCastDeviceIDs:(id)arg2;
- (void)spacesViewController:(id)arg1 didTapUnifiedDevice:(id)arg2;
- (void)spacesViewControllerDidTapLocalDevices:(id)arg1;
- (void)spacesViewControllerDidTapGroups:(id)arg1;
- (void)spacesViewControllerDidTapLinkedDevicesGroup:(id)arg1;
- (void)spacesViewControllerDidTapSpacelessDevicesGroup:(id)arg1;
- (void)spacesViewController:(id)arg1 didTapSpace:(id)arg2;
- (void)refetchStructureModeFromSpacesViewController:(id)arg1;
- (void)spacesViewController:(id)arg1 didSelectStructureMode:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)spacesViewController:(id)arg1 didSelectStructureMode:(long long)arg2;
- (void)spacesViewController:(id)arg1 didPickStructure:(id)arg2;
- (void)dismissRoutinesImmersive;
- (void)showRoutineWithURL:(id)arg1 in:(id)arg2;
- (void)pushToHomeAwayOOBE:(id)arg1;
- (void)pushToHomeAwayOOBEFromSpacesViewController:(id)arg1;
- (void)spaceViewControllerShouldShowRoutinesImmersive:(id)arg1 routinesModel:(id)arg2 suggestedRoutineCardsModel:(id)arg3;
- (void)spacesViewControllerShouldShowNowPlaying:(id)arg1;
- (void)spacesViewController:(id)arg1 didTapSetupNewmanCameraForDevice:(id)arg2 entryPoint:(long long)arg3;
- (void)spacesViewControllerDidTapImportWifiNetwork:(id)arg1 migrationTriggerSource:(id)arg2;
- (void)spacesViewControllerDidTapInviteHomeMember:(id)arg1;
- (void)spacesViewControllerShouldShowSettings:(id)arg1;
- (void)spacesViewControllerShouldShowAddMenu:(id)arg1;
- (void)spacesViewController:(id)arg1 shouldSetupAOGHDevicesWithType:(id)arg2;
- (void)spacesViewControllerShouldSetupDevices:(id)arg1;
- (void)shouldRetry;
- (void)accountParticleCoordinatorShouldShowDeveloperTools:(id)arg1;
- (void)accountParticleCoordinatorShouldShowMyActivity:(id)arg1;
- (void)accountParticleCoordinatorShouldShowFeedback:(id)arg1;
- (void)accountParticleCoordinatorShouldShowHelp:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAssistantSettings:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAppAndAccountSettings:(id)arg1;
- (void)accountParticleCoordinator:(id)arg1 didSwitchToIdentity:(id)arg2;
@property(readonly, nonatomic) UINavigationController *rootViewController;
- (void)pushUniversalRemoteForHGSID:(id)arg1 presentingController:(id)arg2;
- (void)cleanupUIForExternalIntent:(CDUnknownBlockType)arg1;
- (void)popToRootViewController;
- (id)initWithStructureID:(id)arg1 coreDataStack:(id)arg2 structureData:(id)arg3 spaceData:(id)arg4 castChannelData:(id)arg5 deviceData:(id)arg6 linkableAppData:(id)arg7 localDeviceData:(id)arg8 unifiedDeviceData:(id)arg9 structureModeData:(id)arg10 spacesChipDataFactory:(CDUnknownBlockType)arg11 coinDataFactory:(CDUnknownBlockType)arg12 homeAutomationData:(id)arg13 networkHost:(id)arg14 accountParticleCoordinatorFactory:(CDUnknownBlockType)arg15 chooseStructureCoordinatorFactory:(CDUnknownBlockType)arg16 helpCoordinatorFactory:(CDUnknownBlockType)arg17 authorization:(id)arg18 ssoService:(id)arg19 analyticsLogger:(id)arg20 flags:(id)arg21 homeAutomationManager:(id)arg22 deviceEligibilityChecker:(id)arg23 deviceInteractionHelper:(id)arg24 appReviewManager:(id)arg25 appDataConfiguration:(id)arg26 structureDeviceData:(id)arg27 lightGroupData:(id)arg28 homeAutomationDeviceStateCache:(id)arg29 homeAutomationDeviceStateCacheInitialStateManager:(id)arg30 linkOpener:(id)arg31 assistantSettingsCoordinatorFactory:(CDUnknownBlockType)arg32;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

