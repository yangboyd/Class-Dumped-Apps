//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEConciergeCoordinator-Protocol.h"
#import "HMEConciergeFreeTrialTaskCoordinatorDelegate-Protocol.h"
#import "HMEConciergeModuleCoordinatorDelegate-Protocol.h"
#import "HMEConciergeSetupCoordinatorDelegate-Protocol.h"
#import "HMEOlive426TaskCoordinatorDelegate-Protocol.h"
#import "HMESetupNavigationControllerDelegate-Protocol.h"

@class HMEConciergeFreeTrialTaskCoordinator, HMEConciergeSetupCoordinator, HMEOlive426TaskCoordinator, HMESetupNavigationController, NSDictionary, NSString, SetupAnalyticsLogger;
@protocol HMEConciergeCoordinatorDelegate, HMEHelpCoordinator;

@interface HMEConciergeCoordinator : NSObject <HMEConciergeModuleCoordinatorDelegate, HMEConciergeFreeTrialTaskCoordinatorDelegate, HMEConciergeSetupCoordinatorDelegate, HMEOlive426TaskCoordinatorDelegate, HMESetupNavigationControllerDelegate, HMEConciergeCoordinator>
{
    id <HMEConciergeCoordinatorDelegate> _delegate;
    HMEConciergeFreeTrialTaskCoordinator *_conciergeFreeTrialTaskCoordinator;
    HMEConciergeSetupCoordinator *_conciergeSetupCoordinator;
    HMEOlive426TaskCoordinator *_olive426TaskCoordinator;
    NSDictionary *_moduleCoordinatorMap;
    id <HMEHelpCoordinator> _helpCoordinator;
    SetupAnalyticsLogger *_setupAnalyticsLogger;
    HMESetupNavigationController *_navigationController;
}

@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) SetupAnalyticsLogger *setupAnalyticsLogger; // @synthesize setupAnalyticsLogger=_setupAnalyticsLogger;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(readonly, nonatomic) NSDictionary *moduleCoordinatorMap; // @synthesize moduleCoordinatorMap=_moduleCoordinatorMap;
@property(readonly, nonatomic) HMEOlive426TaskCoordinator *olive426TaskCoordinator; // @synthesize olive426TaskCoordinator=_olive426TaskCoordinator;
@property(readonly, nonatomic) HMEConciergeSetupCoordinator *conciergeSetupCoordinator; // @synthesize conciergeSetupCoordinator=_conciergeSetupCoordinator;
@property(readonly, nonatomic) HMEConciergeFreeTrialTaskCoordinator *conciergeFreeTrialTaskCoordinator; // @synthesize conciergeFreeTrialTaskCoordinator=_conciergeFreeTrialTaskCoordinator;
@property(nonatomic) __weak id <HMEConciergeCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showExitConfirmationAlert;
- (void)willExit;
- (void)didComplete;
- (void)didSkip;
- (id)createSetupNavigationController;
- (void)olive426TaskCoordinatorDidSucceed:(id)arg1;
- (void)olive426TaskCoordinatorDidFail:(id)arg1;
- (void)conciergeSetupDidSkip:(id)arg1;
- (void)conciergeSetupDidComplete:(id)arg1;
- (void)conciergeModuleDidSkip:(id)arg1;
- (void)conciergeModuleDidFinish:(id)arg1;
- (void)conciergeFreeTrialDidSkip:(id)arg1;
- (void)conciergeFreeTrialDidComplete:(id)arg1;
- (void)cancelSetupFlow;
- (void)shouldShowHelpWithContext:(id)arg1;
- (id)overflowActionsForViewController:(id)arg1;
- (void)startSetupNestAwareInNavigationController:(id)arg1;
- (void)startSetupNestAwareInPresentingController:(id)arg1;
- (void)startModuleInNavigationController:(id)arg1 module:(int)arg2;
- (void)startNonPayerWelcomeInNavigationController:(id)arg1;
- (void)startFreeTrialInNavigationController:(id)arg1;
- (void)startModuleInPresentingController:(id)arg1 module:(int)arg2;
- (void)startNonPayerWelcomeInPresentingController:(id)arg1;
- (void)startFreeTrialInPresentingController:(id)arg1;
- (id)initWithStructureID:(id)arg1 conciergeFreeTrialTaskCoordinatorFactory:(CDUnknownBlockType)arg2 conciergeModuleCoordinatorsFactory:(CDUnknownBlockType)arg3 conciergeSetupCoordinatorFactory:(CDUnknownBlockType)arg4 olive426CoordinatorFactory:(CDUnknownBlockType)arg5 helpCoordinatorFactory:(CDUnknownBlockType)arg6 setupAnalyticsLogger:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

