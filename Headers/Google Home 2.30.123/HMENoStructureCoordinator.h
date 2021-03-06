//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAccountParticleCoordinatorDelegate-Protocol.h"
#import "HMEChooseStructureCoordinatorDelegate-Protocol.h"
#import "HMENoStructureViewControllerDelegate-Protocol.h"
#import "HMESpacesDeviceCellDelegate-Protocol.h"
#import "HMEStructureCoordinator-Protocol.h"

@class HMENoStructureViewController, NSString, UINavigationController;
@protocol GCAConfigurationFlags, HMEAccountParticleCoordinator, HMEChooseStructureCoordinator, HMEDeviceInteractionHelper, HMEHelpCoordinator, HMELocalDeviceData, HMESpacesChipData, HMEStructureCoordinatorDelegate, HMEStructureData, HMEUnifiedDeviceData, SSOAuthorization;

@interface HMENoStructureCoordinator : NSObject <HMENoStructureViewControllerDelegate, HMEAccountParticleCoordinatorDelegate, HMESpacesDeviceCellDelegate, HMEChooseStructureCoordinatorDelegate, HMEStructureCoordinator>
{
    id <HMEStructureCoordinatorDelegate> _delegate;
    id <GCAConfigurationFlags> _flags;
    id <HMELocalDeviceData> _localDeviceData;
    id <HMEUnifiedDeviceData> _unifiedDeviceData;
    id <HMESpacesChipData> _spacesChipData;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMEChooseStructureCoordinator> _chooseStructureCoordinator;
    UINavigationController *_navigationController;
    HMENoStructureViewController *_noStructureViewController;
    id <HMEDeviceInteractionHelper> _deviceInteractionHelper;
    id <HMEStructureData> _structureData;
    NSString *_networkHost;
    id <SSOAuthorization> _authorization;
    id <HMEAccountParticleCoordinator> _accountParticleCoordinator;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <HMEAccountParticleCoordinator> accountParticleCoordinator; // @synthesize accountParticleCoordinator=_accountParticleCoordinator;
@property(readonly, nonatomic) id <SSOAuthorization> authorization; // @synthesize authorization=_authorization;
@property(readonly, copy, nonatomic) NSString *networkHost; // @synthesize networkHost=_networkHost;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) id <HMEDeviceInteractionHelper> deviceInteractionHelper; // @synthesize deviceInteractionHelper=_deviceInteractionHelper;
@property(readonly, nonatomic) HMENoStructureViewController *noStructureViewController; // @synthesize noStructureViewController=_noStructureViewController;
@property(readonly, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) id <HMEChooseStructureCoordinator> chooseStructureCoordinator; // @synthesize chooseStructureCoordinator=_chooseStructureCoordinator;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) id <HMESpacesChipData> spacesChipData; // @synthesize spacesChipData=_spacesChipData;
@property(readonly, nonatomic) id <HMEUnifiedDeviceData> unifiedDeviceData; // @synthesize unifiedDeviceData=_unifiedDeviceData;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(nonatomic) __weak id <HMEStructureCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)chooseStructureCoordinatorShouldShowZeroStructure:(id)arg1;
- (void)chooseStructureCoordinatorShouldExit:(id)arg1;
- (void)structureCoordinator:(id)arg1 didAcceptInvitationForStructureWithID:(id)arg2 inviterEmail:(id)arg3;
- (void)structureCoordinator:(id)arg1 didChooseStructureID:(id)arg2;
- (void)performRecoveryActionForDevice:(id)arg1;
- (id)inlineRecoveryActionNameForDevice:(id)arg1;
- (_Bool)hasPendingRecoveryStateForDeviceID:(id)arg1;
- (void)finishSetupOfDevice:(id)arg1;
- (void)unlockDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)lockDevice:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)turnOff:(id)arg1;
- (void)turnOn:(id)arg1;
- (void)turnLightGroupOn:(id)arg1;
- (void)turnLightGroupOff:(id)arg1;
- (void)playLiveTVOnDevice:(id)arg1;
- (void)playSomethingOnDevice:(id)arg1;
- (void)playOnDevice:(id)arg1;
- (void)pauseOnDevice:(id)arg1;
- (void)didTapHealthCheckFromNoStructureViewController:(id)arg1;
- (void)noStructureViewController:(id)arg1 didTapChipLinkMediaProviderForLinkableAppId:(id)arg2 accountSetupInfo:(id)arg3 accountLegalInfo:(id)arg4;
- (void)noStructureViewControllerDidTapPendingInvites:(id)arg1;
- (void)noStructureViewControllerShouldSetupDevice:(id)arg1;
- (void)noStructureViewControllerDidTapGetStarted:(id)arg1;
- (void)noStructureViewController:(id)arg1 didTapUnifiedDevice:(id)arg2;
- (void)accountParticleCoordinatorShouldShowDeveloperTools:(id)arg1;
- (void)accountParticleCoordinatorShouldShowMyActivity:(id)arg1;
- (void)accountParticleCoordinatorShouldShowFeedback:(id)arg1;
- (void)accountParticleCoordinatorShouldShowHelp:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAssistantSettings:(id)arg1;
- (void)accountParticleCoordinatorShouldShowAppAndAccountSettings:(id)arg1;
- (void)accountParticleCoordinator:(id)arg1 didSwitchToIdentity:(id)arg2;
- (void)pushViewControllerWithDefaultOverflow:(id)arg1;
- (void)showDefaultOverflow;
@property(readonly, nonatomic) UINavigationController *rootViewController;
- (void)cleanupUIForExternalIntent:(CDUnknownBlockType)arg1;
- (void)popToRootViewController;
- (void)pushUniversalRemoteForHGSID:(id)arg1 presentingController:(id)arg2;
- (id)initWithUnifiedDeviceData:(id)arg1 localDeviceData:(id)arg2 spacesChipDataFactory:(CDUnknownBlockType)arg3 helpCoordinatorFactory:(CDUnknownBlockType)arg4 homeAutomationData:(id)arg5 assistantSettingsCoordinatorFactory:(CDUnknownBlockType)arg6 chooseStructureCoordinatorFactory:(CDUnknownBlockType)arg7 deviceEligibilityChecker:(id)arg8 deviceInteractionHelper:(id)arg9 structureData:(id)arg10 networkHost:(id)arg11 authorization:(id)arg12 analyticsLogger:(id)arg13 accountParticleCoordinatorFactory:(CDUnknownBlockType)arg14 flags:(id)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

