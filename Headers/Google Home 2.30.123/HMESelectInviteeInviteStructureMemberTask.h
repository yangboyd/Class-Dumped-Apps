//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMEHelpCoordinatorDelegate-Protocol.h"
#import "HMEInviteStructureMemberTask-Protocol.h"
#import "HMEModelObserver-Protocol.h"
#import "HMEPeoplePickerSetupViewControllerDelegate-Protocol.h"

@class HMEModel, HMEMutableStructureInvitation, HMESetupNavigationController, MDCActivityIndicator, NSString, UIViewController;
@protocol AnalyticsLogger, GCAConfigurationFlags, HMEHelpCoordinator, HMEHouseholdMembersData, HMEInviteStructureMemberTaskDelegate, HMEPeoplePickerSetupViewController, HMEStructureData;

@interface HMESelectInviteeInviteStructureMemberTask : NSObject <HMEHelpCoordinatorDelegate, HMEModelObserver, HMEPeoplePickerSetupViewControllerDelegate, HMEInviteStructureMemberTask>
{
    id <HMEInviteStructureMemberTaskDelegate> _delegate;
    NSString *_structureID;
    id <HMEStructureData> _structureData;
    id <HMEHouseholdMembersData> _householdMembersData;
    CDUnknownBlockType _peoplePickerProvider;
    HMEModel *_canInviteHomeMemberToCurrentStructureModel;
    HMEModel *_inviteeEmailAddresses;
    HMEModel *_currentHouseholdMemberEmailAddresses;
    HMESetupNavigationController *_navigationController;
    HMEMutableStructureInvitation *_invitation;
    UIViewController<HMEPeoplePickerSetupViewController> *_peoplePickerSetupViewController;
    MDCActivityIndicator *_activityIndicator;
    id <HMEHelpCoordinator> _helpCoordinator;
    id <AnalyticsLogger> _analyticsLogger;
    id <GCAConfigurationFlags> _flags;
}

+ (id)resendInviteToExistingInviteeAlertSendButton;
+ (id)resendInviteToExistingInviteeAlertCancelButton;
+ (id)resendInviteToExistingInviteeAlertBody;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <GCAConfigurationFlags> flags; // @synthesize flags=_flags;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <HMEHelpCoordinator> helpCoordinator; // @synthesize helpCoordinator=_helpCoordinator;
@property(retain, nonatomic) MDCActivityIndicator *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UIViewController<HMEPeoplePickerSetupViewController> *peoplePickerSetupViewController; // @synthesize peoplePickerSetupViewController=_peoplePickerSetupViewController;
@property(retain, nonatomic) HMEMutableStructureInvitation *invitation; // @synthesize invitation=_invitation;
@property(retain, nonatomic) HMESetupNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(readonly, nonatomic) HMEModel *currentHouseholdMemberEmailAddresses; // @synthesize currentHouseholdMemberEmailAddresses=_currentHouseholdMemberEmailAddresses;
@property(readonly, nonatomic) HMEModel *inviteeEmailAddresses; // @synthesize inviteeEmailAddresses=_inviteeEmailAddresses;
@property(readonly, nonatomic) HMEModel *canInviteHomeMemberToCurrentStructureModel; // @synthesize canInviteHomeMemberToCurrentStructureModel=_canInviteHomeMemberToCurrentStructureModel;
@property(readonly, nonatomic) CDUnknownBlockType peoplePickerProvider; // @synthesize peoplePickerProvider=_peoplePickerProvider;
@property(readonly, nonatomic) id <HMEHouseholdMembersData> householdMembersData; // @synthesize householdMembersData=_householdMembersData;
@property(readonly, nonatomic) id <HMEStructureData> structureData; // @synthesize structureData=_structureData;
@property(readonly, nonatomic) NSString *structureID; // @synthesize structureID=_structureID;
@property(nonatomic) __weak id <HMEInviteStructureMemberTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void)logResendInviteAnalyticsEventWithEmail:(id)arg1;
- (void)resendInviteWithEmail:(id)arg1;
- (void)showResendInviteAlertWithEmail:(id)arg1;
- (void)logSelectInviteeAnalyticsEvent;
- (void)helpCoordinatorShouldExitFeedback:(id)arg1;
- (void)helpCoordinatorShouldExitHelp:(id)arg1;
- (void)helpCoordinator:(id)arg1 shouldShowFeedback:(id)arg2;
- (void)helpCoordinator:(id)arg1 shouldShowHelp:(id)arg2;
- (void)peoplePickerSetupViewControllerDidTapOverflowButton:(id)arg1;
- (void)peoplePickerSetupViewControllerDidCancel:(id)arg1;
- (void)peoplePickerSetupViewController:(id)arg1 didSelectContactWithEmail:(id)arg2 displayName:(id)arg3 photoURL:(id)arg4;
- (void)startInNavigationController:(id)arg1 withInvitation:(id)arg2;
- (long long)taskType;
- (void)modelDidChange:(id)arg1;
- (id)combinedModelStatus;
- (id)initWithStructureID:(id)arg1 structureData:(id)arg2 householdMembersData:(id)arg3 peoplePickerProvider:(CDUnknownBlockType)arg4 helpCoordinatorFactory:(CDUnknownBlockType)arg5 analyticsLogger:(id)arg6 experimentFlags:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

