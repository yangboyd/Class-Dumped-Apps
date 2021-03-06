//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class HMEStructureUserGrants, NSString;

@interface HMEPendingStructureMO : NSManagedObject
{
}

+ (id)fetchPendingStructuresWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)insertNewObjectInManagedObjectContext:(id)arg1;
+ (id)fetchRequest;
- (void)setDataFromProto:(id)arg1;

// Remaining properties
@property(copy, nonatomic) HMEStructureUserGrants *currentUserRoleAndPermissions; // @dynamic currentUserRoleAndPermissions;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(copy, nonatomic) NSString *identification; // @dynamic identification;
@property(copy, nonatomic) NSString *inviterEmail; // @dynamic inviterEmail;
@property(nonatomic) double latitude; // @dynamic latitude;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(nonatomic) double longitude; // @dynamic longitude;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;
@property(nonatomic) long long versionTimestamp; // @dynamic versionTimestamp;

@end

