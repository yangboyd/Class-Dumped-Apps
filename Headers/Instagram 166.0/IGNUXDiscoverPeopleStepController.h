//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDiscoverPeopleViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGNUXStepControllerProtocol-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationNUXFirstCALViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGRegistrationNUXSecondCALViewControllerDelegate-Protocol.h>

@class IGNUXFlowContext, IGRegistrationNUXFirstCALViewController, IGRegistrationNUXSecondCALViewController, NSString, UIViewController;
@protocol IGNUXFlowCoordinatorProtocol;

@interface IGNUXDiscoverPeopleStepController : NSObject <IGDiscoverPeopleViewControllerDelegate, IGRegistrationNUXFirstCALViewControllerDelegate, IGRegistrationNUXSecondCALViewControllerDelegate, IGNUXStepControllerProtocol>
{
    IGNUXFlowContext *_context;
    UIViewController *_viewController;
    IGRegistrationNUXFirstCALViewController *_firstCalVC;
    IGRegistrationNUXSecondCALViewController *_secondCalVC;
    id <IGNUXFlowCoordinatorProtocol> coordinator;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGNUXFlowCoordinatorProtocol> coordinator; // @synthesize coordinator;
- (void)_startCALFlow;
- (void)_retrieveCALContentWithAccessToken:(id)arg1;
- (void)_exitNUX;
- (void)_onNextButtonTapped;
- (void)secondCalVCDidTapSecondaryButton:(id)arg1;
- (void)secondCalVCDidTapPrimaryButton:(id)arg1;
- (void)calVCDidTapSecondaryButton:(id)arg1;
- (void)calVCDidTapPrimaryButton:(id)arg1;
- (void)discoverPeopleViewControllerDidExposeToCALControlGroup:(id)arg1;
- (void)discoverPeopleViewController:(id)arg1 didTriggerCALFlowWithSDKAccessToken:(id)arg2;
- (void)discoverPeopleViewController:(id)arg1 didTriggerCALFlowWithAccessToken:(id)arg2;
- (id)stepName;
- (id)viewController;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

