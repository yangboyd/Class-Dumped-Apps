//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCAccountLegalInfo, GHCAccountSetupInfo, GHCBanner, GHCFreeTrialDialog, GHCLinkableApplication_ApplicationCategory, NSString;

@interface GHCLinkableApplication : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accountStatusDescription; // @dynamic accountStatusDescription;
@property(retain, nonatomic) GHCBanner *banner; // @dynamic banner;
@property(copy, nonatomic) NSString *castAppId; // @dynamic castAppId;
@property(retain, nonatomic) GHCLinkableApplication_ApplicationCategory *category; // @dynamic category;
@property(retain, nonatomic) GHCFreeTrialDialog *freeTrialDialog; // @dynamic freeTrialDialog;
@property(nonatomic) _Bool hasBanner; // @dynamic hasBanner;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasFreeTrialDialog; // @dynamic hasFreeTrialDialog;
@property(nonatomic) _Bool hasLinkingLegalInfo; // @dynamic hasLinkingLegalInfo;
@property(nonatomic) _Bool hasSetupInfo; // @dynamic hasSetupInfo;
@property(nonatomic) _Bool hasUnlinkingLegalInfo; // @dynamic hasUnlinkingLegalInfo;
@property(copy, nonatomic) NSString *iconURL; // @dynamic iconURL;
@property(copy, nonatomic) NSString *kgMid; // @dynamic kgMid;
@property(nonatomic) int linkStatus; // @dynamic linkStatus;
@property(nonatomic) int linkableApplicationCategory; // @dynamic linkableApplicationCategory;
@property(retain, nonatomic) GHCAccountLegalInfo *linkingLegalInfo; // @dynamic linkingLegalInfo;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) GHCAccountSetupInfo *setupInfo; // @dynamic setupInfo;
@property(nonatomic) int subscriptionStatus; // @dynamic subscriptionStatus;
@property(retain, nonatomic) GHCAccountLegalInfo *unlinkingLegalInfo; // @dynamic unlinkingLegalInfo;
@property(nonatomic) int userPreferenceSetting; // @dynamic userPreferenceSetting;

@end

