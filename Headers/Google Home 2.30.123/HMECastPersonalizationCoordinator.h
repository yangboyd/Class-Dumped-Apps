//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEAssistantPersonalizationCoordinatorDelegate-Protocol.h"
#import "HMECastPersonalizationCoordinatorProtocol-Protocol.h"
#import "HMEChromecastPersonalizationCoordinatorDelegate-Protocol.h"
#import "HMESetupEmailSignUpTaskCoordinatorDelegate-Protocol.h"
#import "HMESetupSummaryTaskCoordinatorDelegate-Protocol.h"

@class HMEModel, HMESetupNavigationController, NSArray, NSString, SetupCastDevice;
@protocol HMEAssistantPersonalizationCoordinator, HMECastPersonalizationCoordinatorDelegate, HMEChromecastPersonalizationCoordinator, HMEDeviceData, HMESetupAssistantTutorialModelController, HMESetupEmailSignUpTaskCoordinator, HMESetupSummaryTaskCoordinator;

@interface HMECastPersonalizationCoordinator : NSObject <HMEAssistantPersonalizationCoordinatorDelegate, HMEChromecastPersonalizationCoordinatorDelegate, HMESetupEmailSignUpTaskCoordinatorDelegate, HMESetupSummaryTaskCoordinatorDelegate, HMECastPersonalizationCoordinatorProtocol>
{
    _Bool _shouldSkipSummary;
    _Bool _shouldSkipMediaAppsSetup;
    _Bool _shouldSkipEmailSetup;
    _Bool _deviceLinked;
    _Bool _assistantUDCConsentGiven;
    _Bool _duoAccountConfigured;
    id <HMECastPersonalizationCoordinatorDelegate> _delegate;
    id <HMEDeviceData> _deviceData;
    id <HMESetupAssistantTutorialModelController> _assistantLearnData;
    id <HMEChromecastPersonalizationCoordinator> _chromecastPersonalizationCoordinator;
    id <HMEAssistantPersonalizationCoordinator> _assistantPersonalizationCoordinator;
    id <HMESetupEmailSignUpTaskCoordinator> _emailCoordinator;
    id <HMESetupSummaryTaskCoordinator> _summaryTaskCoordinator;
    SetupCastDevice *_setupDevice;
    HMESetupNavigationController *_navigationController;
    NSString *_currentStructureID;
    NSString *_selectedAssistantLanguage;
    NSString *_ambientMode;
    NSArray *_freshlyLinkedCastDeviceNames;
    HMEModel *_bundledDevicesModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HMEModel *bundledDevicesModel; // @synthesize bundledDevicesModel=_bundledDevicesModel;
@property(copy, nonatomic) NSArray *freshlyLinkedCastDeviceNames; // @synthesize freshlyLinkedCastDeviceNames=_freshlyLinkedCastDeviceNames;
@property(copy, nonatomic) NSString *ambientMode; // @synthesize ambientMode=_ambientMode;
@property(nonatomic) _Bool duoAccountConfigured; // @synthesize duoAccountConfigured=_duoAccountConfigured;
@property(nonatomic) _Bool assistantUDCConsentGiven; // @synthesize assistantUDCConsentGiven=_assistantUDCConsentGiven;
@property(nonatomic) _Bool deviceLinked; // @synthesize deviceLinked=_deviceLinked;
@property(copy, nonatomic) NSString *selectedAssistantLanguage; // @synthesize selectedAssistantLanguage=_selectedAssistantLanguage;
@property(copy, nonatomic) NSString *currentStructureID; // @synthesize currentStructureID=_currentStructureID;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) SetupCastDevice *setupDevice; // @synthesize setupDevice=_setupDevice;
@property(readonly, nonatomic) id <HMESetupSummaryTaskCoordinator> summaryTaskCoordinator; // @synthesize summaryTaskCoordinator=_summaryTaskCoordinator;
@property(readonly, nonatomic) id <HMESetupEmailSignUpTaskCoordinator> emailCoordinator; // @synthesize emailCoordinator=_emailCoordinator;
@property(readonly, nonatomic) id <HMEAssistantPersonalizationCoordinator> assistantPersonalizationCoordinator; // @synthesize assistantPersonalizationCoordinator=_assistantPersonalizationCoordinator;
@property(readonly, nonatomic) id <HMEChromecastPersonalizationCoordinator> chromecastPersonalizationCoordinator; // @synthesize chromecastPersonalizationCoordinator=_chromecastPersonalizationCoordinator;
@property(readonly, nonatomic) id <HMESetupAssistantTutorialModelController> assistantLearnData; // @synthesize assistantLearnData=_assistantLearnData;
@property(readonly, nonatomic) id <HMEDeviceData> deviceData; // @synthesize deviceData=_deviceData;
@property(nonatomic) _Bool shouldSkipEmailSetup; // @synthesize shouldSkipEmailSetup=_shouldSkipEmailSetup;
@property(nonatomic) _Bool shouldSkipMediaAppsSetup; // @synthesize shouldSkipMediaAppsSetup=_shouldSkipMediaAppsSetup;
@property(nonatomic) _Bool shouldSkipSummary; // @synthesize shouldSkipSummary=_shouldSkipSummary;
@property(nonatomic) __weak id <HMECastPersonalizationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)bundledAOGHDevices;
- (void)endTask;
- (void)didCompleteOrSkipSummary;
- (void)summaryTaskDidComplete:(id)arg1;
- (void)startSetupSummary;
- (void)didCompleteOrSkipEmailSignUp;
- (void)emailSignUpTaskDidComplete:(id)arg1;
- (void)startEmailSignUp;
- (void)didCompleteOrSkipDeviceFlow;
- (void)chromecastPersonalizationDidComplete:(id)arg1;
- (void)chromecastPersonalizationDidLink:(id)arg1;
- (void)chromecastPersonalizationCannotLink:(id)arg1;
- (void)assistantPersonalization:(id)arg1 didCompleteWithAssistantUDCConsentGiven:(_Bool)arg2 duoAccountConfigured:(_Bool)arg3 ambientMode:(id)arg4 freshlyLinkedCastDeviceNames:(id)arg5;
- (void)assistantPersonalizationDidLink:(id)arg1 languageCode:(id)arg2;
- (void)didCompleteLinkingWithResult:(_Bool)arg1;
- (void)preloadPostLinkData;
- (void)personalizeDevice:(id)arg1 inStructure:(id)arg2 inSpace:(id)arg3 inNavigationController:(id)arg4;
- (void)preloadSetupDataForDeviceType:(long long)arg1;
- (id)initWithDeviceData:(id)arg1 assistantLearnData:(id)arg2 chromecastPersonalizationCoordinatorFactory:(CDUnknownBlockType)arg3 assistantPersonalizationCoordinatorFactory:(CDUnknownBlockType)arg4 emailCoordinatorFactory:(CDUnknownBlockType)arg5 summaryTaskCoordinatorFactory:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

