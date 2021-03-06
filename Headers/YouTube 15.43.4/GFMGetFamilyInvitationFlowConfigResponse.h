//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GFMApiResponseHeader, GFMAppUpgradeStatus, GFMInvitationConfig, NSMutableArray, NSString;

@interface GFMGetFamilyInvitationFlowConfigResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GFMApiResponseHeader *apiHeader; // @dynamic apiHeader;
@property(nonatomic) _Bool hasApiHeader; // @dynamic hasApiHeader;
@property(nonatomic) _Bool hasInvitationConfig; // @dynamic hasInvitationConfig;
@property(nonatomic) _Bool hasInviteFunctionalityDisabledReason; // @dynamic hasInviteFunctionalityDisabledReason;
@property(nonatomic) _Bool hasNumInviteeSelectableInContactPicker; // @dynamic hasNumInviteeSelectableInContactPicker;
@property(nonatomic) _Bool hasUpgradeStatus; // @dynamic hasUpgradeStatus;
@property(retain, nonatomic) GFMInvitationConfig *invitationConfig; // @dynamic invitationConfig;
@property(copy, nonatomic) NSString *inviteFunctionalityDisabledReason; // @dynamic inviteFunctionalityDisabledReason;
@property(nonatomic) int numInviteeSelectableInContactPicker; // @dynamic numInviteeSelectableInContactPicker;
@property(retain, nonatomic) NSMutableArray *pagesArray; // @dynamic pagesArray;
@property(readonly, nonatomic) unsigned long long pagesArray_Count; // @dynamic pagesArray_Count;
@property(retain, nonatomic) GFMAppUpgradeStatus *upgradeStatus; // @dynamic upgradeStatus;

@end

