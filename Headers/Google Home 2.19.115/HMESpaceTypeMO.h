//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString;

@interface HMESpaceTypeMO : NSManagedObject
{
}

+ (id)fetchSpaceTypeWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)fetchSpaceTypesWithID:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (id)insertNewObjectInManagedObjectContext:(id)arg1;
+ (id)fetchRequest;
- (void)setDataFromProto:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *identification; // @dynamic identification;
@property(copy, nonatomic) NSString *localizedName; // @dynamic localizedName;
@property(nonatomic) _Bool requiresCustomName; // @dynamic requiresCustomName;
@property(nonatomic) _Bool shouldBeLast; // @dynamic shouldBeLast;
@property(copy, nonatomic) NSSet *spaces; // @dynamic spaces;

@end

