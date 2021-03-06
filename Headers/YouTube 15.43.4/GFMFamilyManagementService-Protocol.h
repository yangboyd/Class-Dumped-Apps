//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/FCDRPCService-Protocol.h>

@class FCDRPC;

@protocol GFMFamilyManagementService <FCDRPCService>
@property(readonly, nonatomic) FCDRPC *optOutSupervisionRPC;
@property(readonly, nonatomic) FCDRPC *setBirthdayRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyManagementPageContentRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyInvitationFlowConfigRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyOnboardFlowConfigRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyManagementConfigRPC;
@property(readonly, nonatomic) FCDRPC *deleteMemberRPC;
@property(readonly, nonatomic) FCDRPC *deleteInvitationRPC;
@property(readonly, nonatomic) FCDRPC *updateInvitationRPC;
@property(readonly, nonatomic) FCDRPC *updateMemberRoleRPC;
@property(readonly, nonatomic) FCDRPC *canUpdateMemberRoleRPC;
@property(readonly, nonatomic) FCDRPC *createInvitationsRPC;
@property(readonly, nonatomic) FCDRPC *deleteFamilyRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyRPC;
@property(readonly, nonatomic) FCDRPC *canAddMemberRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyUpgradeParamsRPC;
@property(readonly, nonatomic) FCDRPC *canUpgradeFamilyRPC;
@property(readonly, nonatomic) FCDRPC *createFamilyRPC;
@property(readonly, nonatomic) FCDRPC *getFamilySetupParamsRPC;
@property(readonly, nonatomic) FCDRPC *canCreateFamilyRPC;
@end

