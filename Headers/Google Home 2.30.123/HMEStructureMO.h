//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class HMEAddress, HMEStructureUserGrants, HMEWifiNetworkMO, NSSet, NSString;

@interface HMEStructureMO : NSManagedObject
{
}

+ (id)fetchStructureWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3 shouldCreate:(_Bool)arg4;
+ (id)fetchOrCreateStructureWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchStructureWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchStructuresWithServerID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)insertNewObjectInManagedObjectContext:(id)arg1;
+ (id)fetchRequest;
- (_Bool)hasMultipleManagers;
- (void)setDataFromProto:(id)arg1;

// Remaining properties
@property(copy, nonatomic) HMEAddress *address; // @dynamic address;
@property(copy, nonatomic) NSString *agentId; // @dynamic agentId;
@property(copy, nonatomic) NSSet *applicants; // @dynamic applicants;
@property(copy, nonatomic) NSString *callHomeDeeplink; // @dynamic callHomeDeeplink;
@property(nonatomic) _Bool conciergeAvailable; // @dynamic conciergeAvailable;
@property(copy, nonatomic) NSString *conciergeOwnerEmail; // @dynamic conciergeOwnerEmail;
@property(copy, nonatomic) HMEStructureUserGrants *currentUserRoleAndPermissions; // @dynamic currentUserRoleAndPermissions;
@property(copy, nonatomic) NSSet *devices; // @dynamic devices;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) long long emergencyServicesAddressVerificationState; // @dynamic emergencyServicesAddressVerificationState;
@property(nonatomic) _Bool hasActiveConciergeEntitlement; // @dynamic hasActiveConciergeEntitlement;
@property(nonatomic) _Bool hasActiveFreeTrialConciergeEntitlement; // @dynamic hasActiveFreeTrialConciergeEntitlement;
@property(nonatomic) _Bool hasLegacyNestAwareEntitlement; // @dynamic hasLegacyNestAwareEntitlement;
@property(copy, nonatomic) NSString *identification; // @dynamic identification;
@property(copy, nonatomic) NSSet *invitees; // @dynamic invitees;
@property(nonatomic) _Bool isLinkedWithNestStructure; // @dynamic isLinkedWithNestStructure;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(copy, nonatomic) NSSet *managers; // @dynamic managers;
@property(copy, nonatomic) NSString *nestStructureOwnerEmail; // @dynamic nestStructureOwnerEmail;
@property(copy, nonatomic) NSSet *spaces; // @dynamic spaces;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(nonatomic) long long versionTimestamp; // @dynamic versionTimestamp;
@property(retain, nonatomic) HMEWifiNetworkMO *wifiNetwork; // @dynamic wifiNetwork;

@end

