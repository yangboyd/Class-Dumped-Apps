//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface ConfigurationApplied : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *configurationAssignmentId; // @dynamic configurationAssignmentId;
@property(copy, nonatomic) NSString *fetchType; // @dynamic fetchType;
@property(nonatomic) _Bool hasConfigurationAssignmentId; // @dynamic hasConfigurationAssignmentId;
@property(nonatomic) _Bool hasFetchType; // @dynamic hasFetchType;
@property(nonatomic) _Bool hasInstallationId; // @dynamic hasInstallationId;
@property(nonatomic) _Bool hasLastRcsFetchTime; // @dynamic hasLastRcsFetchTime;
@property(nonatomic) _Bool hasPlatform; // @dynamic hasPlatform;
@property(nonatomic) _Bool hasRcClientId; // @dynamic hasRcClientId;
@property(nonatomic) _Bool hasRcClientVersion; // @dynamic hasRcClientVersion;
@property(copy, nonatomic) NSString *installationId; // @dynamic installationId;
@property(nonatomic) long long lastRcsFetchTime; // @dynamic lastRcsFetchTime;
@property(copy, nonatomic) NSString *platform; // @dynamic platform;
@property(retain, nonatomic) GPBInt32Array *policyGroupIdsArray; // @dynamic policyGroupIdsArray;
@property(readonly, nonatomic) unsigned long long policyGroupIdsArray_Count; // @dynamic policyGroupIdsArray_Count;
@property(copy, nonatomic) NSString *rcClientId; // @dynamic rcClientId;
@property(copy, nonatomic) NSString *rcClientVersion; // @dynamic rcClientVersion;

@end

