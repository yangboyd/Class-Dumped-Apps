//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSModelsCommonDasherDomainPolicies_Builder.h"

@class DYNSModelsCommonDasherDomainPolicies_DasherEntityType, DYNSModelsCommonDomainOtrState, JavaLangBoolean, JavaUtilOptional;

@interface DYNSModelsCommonAutoValue_DasherDomainPolicies_Builder : DYNSModelsCommonDasherDomainPolicies_Builder
{
    JavaUtilOptional *isAutoAcceptInvitationsEnabled_;
    JavaLangBoolean *isBotFeaturesEnabled_;
    JavaLangBoolean *isIncomingWebhookFeaturesEnabled_;
    JavaUtilOptional *isGoogleDriveEnabled_;
    JavaUtilOptional *integrationCustomerPolicies_;
    DYNSModelsCommonDomainOtrState *domainOtrState_;
    JavaUtilOptional *userGuestAccessSettings_;
    JavaUtilOptional *roomGuestAccessKillSwitch_;
    DYNSModelsCommonDasherDomainPolicies_DasherEntityType *dasherEntityType_;
    JavaUtilOptional *dasherAccountUserCapabilities_;
    JavaUtilOptional *userFileSharingSettings_;
}

- (void)dealloc;
- (id)build;
- (id)setUserFileSharingSettingsWithJavaUtilOptional:(id)arg1;
- (id)setDasherAccountUserCapabilitiesWithJavaUtilOptional:(id)arg1;
- (id)setDasherEntityTypeWithDYNSModelsCommonDasherDomainPolicies_DasherEntityType:(id)arg1;
- (id)setRoomGuestAccessKillSwitchWithJavaUtilOptional:(id)arg1;
- (id)setUserGuestAccessSettingsWithJavaUtilOptional:(id)arg1;
- (id)setDomainOtrStateWithDYNSModelsCommonDomainOtrState:(id)arg1;
- (id)setIntegrationCustomerPoliciesWithJavaUtilOptional:(id)arg1;
- (id)setIsGoogleDriveEnabledWithJavaUtilOptional:(id)arg1;
- (id)setIsIncomingWebhookFeaturesEnabledWithBoolean:(_Bool)arg1;
- (id)setIsBotFeaturesEnabledWithBoolean:(_Bool)arg1;
- (id)setIsAutoAcceptInvitationsEnabledWithJavaUtilOptional:(id)arg1;

@end

