//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCListEntitlementRecordsForStructureResponse_LegacyNestAwareEntitlement, NSMutableArray;

@interface GHCListEntitlementRecordsForStructureResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *entitlementRecordsArray; // @dynamic entitlementRecordsArray;
@property(readonly, nonatomic) unsigned long long entitlementRecordsArray_Count; // @dynamic entitlementRecordsArray_Count;
@property(nonatomic) _Bool hasLegacyNestAwareEntitlement; // @dynamic hasLegacyNestAwareEntitlement;
@property(nonatomic) _Bool isNestAwareAvailableInRegion; // @dynamic isNestAwareAvailableInRegion;
@property(retain, nonatomic) GHCListEntitlementRecordsForStructureResponse_LegacyNestAwareEntitlement *legacyNestAwareEntitlement; // @dynamic legacyNestAwareEntitlement;
@property(nonatomic) _Bool structureHasBeenEntitled; // @dynamic structureHasBeenEntitled;

@end

