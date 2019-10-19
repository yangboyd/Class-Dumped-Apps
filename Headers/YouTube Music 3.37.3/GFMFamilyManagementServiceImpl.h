//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCService.h"

#import "GFMFamilyManagementService-Protocol.h"

@class FCDRPC, FCDRPCContext, NSArray, NSString;
@protocol FCDRPCAuthorizer, FCDRPCManager, FCDTransport;

@interface GFMFamilyManagementServiceImpl : FCDRPCService <GFMFamilyManagementService>
{
    FCDRPC *_rpcs[40];
}

+ (id)oauthScopesForRPCID:(id)arg1;
+ (id)serviceHostNames;
+ (id)servicePackage;
+ (id)serviceName;
- (void).cxx_destruct;
@property(readonly, nonatomic) FCDRPC *createUnicornLiteProfileRPC;
@property(readonly, nonatomic) FCDRPC *storeParentalConsentRPC;
@property(readonly, nonatomic) FCDRPC *cloneFamilyProductCorrelationIdStateRPC;
@property(readonly, nonatomic) FCDRPC *getActiveFamilyProductsRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyFormOfPaymentDetailsRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyFormOfPaymentStatusRPC;
@property(readonly, nonatomic) FCDRPC *blacklistDirectAddFamilyRPC;
@property(readonly, nonatomic) FCDRPC *acceptDirectAddInvitationRPC;
@property(readonly, nonatomic) FCDRPC *getSupervisionNominationInfoRPC;
@property(readonly, nonatomic) FCDRPC *acceptSupervisionNominationTrustedAccountConsentRPC;
@property(readonly, nonatomic) FCDRPC *acceptSupervisionNominationRPC;
@property(readonly, nonatomic) FCDRPC *canAcceptSupervisionNominationRPC;
@property(readonly, nonatomic) FCDRPC *nominateParentForSupervisionAndroidOnboardingRPC;
@property(readonly, nonatomic) FCDRPC *nominateParentForEligibilityCheckRPC;
@property(readonly, nonatomic) FCDRPC *nominateParentForSupervisionRPC;
@property(readonly, nonatomic) FCDRPC *canNominateParentForSupervisionRPC;
@property(readonly, nonatomic) FCDRPC *directAddMembersRPC;
@property(readonly, nonatomic) FCDRPC *acceptInvitationRPC;
@property(readonly, nonatomic) FCDRPC *optOutSupervisionRPC;
@property(readonly, nonatomic) FCDRPC *optInSupervisionRPC;
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
@property(readonly, nonatomic) FCDRPC *recreateInvitationRPC;
@property(readonly, nonatomic) FCDRPC *createInvitationsRPC;
@property(readonly, nonatomic) FCDRPC *deleteFamilyRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyRPC;
@property(readonly, nonatomic) FCDRPC *canAddMemberRPC;
@property(readonly, nonatomic) FCDRPC *getFamilyUpgradeParamsRPC;
@property(readonly, nonatomic) FCDRPC *canUpgradeFamilyRPC;
@property(readonly, nonatomic) FCDRPC *createFamilyRPC;
@property(readonly, nonatomic) FCDRPC *getFamilySetupParamsRPC;
@property(readonly, nonatomic) FCDRPC *canCreateFamilyRPC;
- (id)initWithAuthorizer:(id)arg1 RPCManager:(id)arg2 RPCServiceInterceptorsProvider:(id)arg3 transport:(id)arg4 serviceInterceptorsProvider:(id)arg5;

// Remaining properties
@property(readonly, nonatomic) id <FCDRPCAuthorizer> authorizer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *interceptors;
@property(readonly, nonatomic) FCDRPCContext *rpcContext;
@property(readonly, nonatomic) id <FCDRPCManager> rpcManager;
@property(readonly) Class superclass;
@property(readonly, nonatomic) id <FCDTransport> transport;

@end

