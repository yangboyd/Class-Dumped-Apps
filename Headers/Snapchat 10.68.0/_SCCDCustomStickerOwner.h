//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSSet, NSString, SCCDCustomStickerOwnerID;

@interface _SCCDCustomStickerOwner : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (id)stickersSet;
- (id)deletionSet;
@property(readonly, nonatomic) SCCDCustomStickerOwnerID *objectID;

// Remaining properties
@property(retain, nonatomic) NSSet *deletion; // @dynamic deletion;
@property(retain, nonatomic) NSSet *stickers; // @dynamic stickers;
@property(retain, nonatomic) NSString *userId; // @dynamic userId;

@end

