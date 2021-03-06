//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEDeviceImportCoordinatorDelegate-Protocol.h"
#import "HMEFamilyMemberInvitationAcceptStructureMemberTaskCoordinatorDelegate-Protocol.h"
#import "HMEManagerSetupCoordinator-Protocol.h"
#import "HMEMediaAppsTaskCoordinatorDelegate-Protocol.h"
#import "HMESetupConsentCoordinatorDelegate-Protocol.h"
#import "HMESetupEmailSignUpTaskCoordinatorDelegate-Protocol.h"
#import "HMESetupNavigationControllerDelegate-Protocol.h"
#import "HMESetupSummaryTaskCoordinatorDelegate-Protocol.h"
#import "HMEVoiceEnrollmentCoordinatorDelegate-Protocol.h"

@class HMESetupNavigationController, NSArray, NSString, SetupAnalyticsLogger, UIViewController;
@protocol GCAConfigurationFlags, HMEDeviceData, HMEDeviceImportCoordinator, HMEFamilyMemberInvitationAcceptStructureMemberTaskCoordinator, HMEHelpCoordinator, HMELocalDeviceData, HMEManagerSetupCoordinatorDelegate, HMEMediaAppsTaskCoordinator, HMESetupConsentCoordinator, HMESetupEmailSignUpTaskCoordinator, HMESetupSummaryTaskCoordinator, HMEStructureDeviceData, HMEVoiceEnrollmentCoordinator, SSOIdentity;

@interface HMEManagerSetupCoordinator : NSObject <HMESetupConsentCoordinatorDelegate, HMEVoiceEnrollmentCoordinatorDelegate, HMEMediaAppsTaskCoordinatorDelegate, HMEDeviceImportCoordinatorDelegate, HMESetupEmailSignUpTaskCoordinatorDelegate, HMEFamilyMemberInvitationAcceptStructureMemberTaskCoordinatorDelegate, HMESetupSummaryTaskCoordinatorDelegate, HMESetupNavigationControllerDelegate, HMEManagerSetupCoordinator>
{
    _Bool _assistantUDCConsentGiven;
    id <SSOIdentity> _identity;
    NSString *_structureID;
    id <HMEManagerSetupCoordinatorDelegate> _delegate;
    HMESetupNavigationController *_navigationController;
    NSString *_inviterEmail;
    id <HMELocalDeviceData> _localDeviceData;
    id <HMEDeviceData> _deviceData;
    id <HMEStructureDeviceData> _structureDeviceData;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <HMESetupConsentCoordinator> _consentCoordinator;
    id <HMEVoiceEnrollmentCoordinator> _voiceEnrollmentCoordinator;
    id <HMEMediaAppsTaskCoordinator> _audioAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _radioAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _videoAppsCoordinator;
    id <HMEMediaAppsTaskCoordinator> _liveTvAppsCoordinator;
    id <HMEDeviceImportCoordinator> _deviceImportCoordinator;
    id <HMESetupEmailSignUpTaskCoordinator> _emailCoordinator;
    id <HMEFamilyMemberInvitationAcceptStructureMemberTaskCoordinator> _familyAcceptCoordinator;
    id <HMESetupSummaryTaskCoordinator> _summaryCoordinator;
    SetupAnalyticsLogger *_setupAnalyticsLogger;
    id <GCAConfigurationFlags> _experimentFlags;
    NSArray *_linkedDeviceNames;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *linkedDeviceNames; // @synthesize linkedDeviceNames=_linkedDeviceNames;
@property(nonatomic) _Bool assistantUDCConsentGiven; // @synthesize assistantUDCConsentGiven=_assistantUDCConsentGiven;
@property(readonly, nonatomic) id <GCAConfigurationFlags> experimentFlags; // @synthesize experimentFlags=_experimentFlags;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger; // @synthesize setupAnalyticsLogger=_setupAnalyticsLogger;
@property(readonly, nonatomic) id <HMESetupSummaryTaskCoordinator> summaryCoordinator; // @synthesize summaryCoordinator=_summaryCoordinator;
@property(readonly, nonatomic) id <HMEFamilyMemberInvitationAcceptStructureMemberTaskCoordinator> familyAcceptCoordinator; // @synthesize familyAcceptCoordinator=_familyAcceptCoordinator;
@property(readonly, nonatomic) id <HMESetupEmailSignUpTaskCoordinator> emailCoordinator; // @synthesize emailCoordinator=_emailCoordinator;
@property(readonly, nonatomic) id <HMEDeviceImportCoordinator> deviceImportCoordinator; // @synthesize deviceImportCoordinator=_deviceImportCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> liveTvAppsCoordinator; // @synthesize liveTvAppsCoordinator=_liveTvAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> videoAppsCoordinator; // @synthesize videoAppsCoordinator=_videoAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> radioAppsCoordinator; // @synthesize radioAppsCoordinator=_radioAppsCoordinator;
@property(readonly, nonatomic) id <HMEMediaAppsTaskCoordinator> audioAppsCoordinator; // @synthesize audioAppsCoordinator=_audioAppsCoordinator;
@property(readonly, nonatomic) id <HMEVoiceEnrollmentCoordinator> voiceEnrollmentCoordinator; // @synthesize voiceEnrollmentCoordinator=_voiceEnrollmentCoordinator;
@property(readonly, nonatomic) id <HMESetupConsentCoordinator> consentCoordinator; // @synthesize consentCoordinator=_consentCoordinator;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) id <HMEStructureDeviceData> structureDeviceData; // @synthesize structureDeviceData=_structureDeviceData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(readonly, nonatomic) id <HMELocalDeviceData> localDeviceData; // @synthesize localDeviceData=_localDeviceData;
@property(copy, nonatomic) NSString *inviterEmail; // @synthesize inviterEmail=_inviterEmail;
@property(readonly, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak id <HMEManagerSetupCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(readonly, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
- (void)exitSetup;
- (void)showError:(id)arg1;
- (id)unenrolledAssistantDeviceList;
- (void)shouldShowHelpWithContext:(id)arg1;
- (id)overflowActionsForViewController:(id)arg1;
- (void)cancelSetupFlow;
- (void)summaryTaskDidComplete:(id)arg1;
- (void)startSummary;
- (void)didCompleteOrSkipAcceptFamilyInvitation;
- (void)acceptFamilyInvitationTaskDidComplete;
- (void)startAcceptFamilyInvitation;
- (void)didCompleteOrSkipEmailSignUp;
- (void)emailSignUpTaskDidComplete:(id)arg1;
- (void)startEmailSignUp;
- (void)didCompleteOrSkipDeviceImport;
- (void)deviceImport:(id)arg1 didCompleteWithImportedDeviceNames:(id)arg2;
- (void)startDeviceImport;
- (void)didCompleteOrSkipAssistantSetup;
- (void)didCompleteOrSkipLiveTvAppsSetup;
- (void)didCompleteOrSkipVideoAppsSetup;
- (void)didCompleteOrSkipRadioAppsSetup;
- (void)didCompleteOrSkipAudioAppsSetup;
- (void)didCompleteOrSkipMediaAppsWithContentType:(long long)arg1;
- (void)mediaAppsTaskCoordinatorDidCancel:(id)arg1;
- (void)mediaAppsTaskCoordinatorDidSkip:(id)arg1;
- (void)mediaAppsTaskCoordinatorDidComplete:(id)arg1;
- (void)startMediaAppsCoordinator:(id)arg1;
- (void)startLiveTvAppsSetup;
- (void)startVideoAppsSetup;
- (void)startRadioAppsSetup;
- (void)startAudioAppsSetup;
- (void)startMediaAppsSetup;
- (void)didCompleteOrSkipVoiceEnrollment;
- (void)enrollment:(id)arg1 failedWithError:(id)arg2;
- (void)enrollmentCompleted:(id)arg1;
- (void)enrollmentSkipped:(id)arg1;
- (void)enrollment:(id)arg1 isBusy:(_Bool)arg2;
- (void)startVoiceEnrollment;
- (void)didSkipConsent;
- (void)didCompleteConsent;
- (void)setupConsent:(id)arg1 didCompleteWithAssistantUDCConsentGiven:(_Bool)arg2;
- (void)startConsent;
- (_Bool)hasAssistantDevicesInCurrentStructure;
- (void)startWithInviterEmail:(id)arg1;
@property(readonly, nonatomic) UIViewController *rootViewController;
- (id)initWithIdentity:(id)arg1 structureID:(id)arg2 setupAnalyticsLogger:(id)arg3 experimentFlags:(id)arg4 localDeviceData:(id)arg5 deviceData:(id)arg6 unifiedDeviceData:(id)arg7 helpCoordinatorFactory:(CDUnknownBlockType)arg8 consentCoordinatorFactory:(CDUnknownBlockType)arg9 voiceEnrollmentCoordinatorFactory:(CDUnknownBlockType)arg10 mediaAppsTaskCoordinatorFactory:(CDUnknownBlockType)arg11 deviceImportCoordinatorFactory:(CDUnknownBlockType)arg12 emailCoordinatorFactory:(CDUnknownBlockType)arg13 familyAcceptCoordinatorFactory:(CDUnknownBlockType)arg14 summaryCoordinatorFactory:(CDUnknownBlockType)arg15;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

