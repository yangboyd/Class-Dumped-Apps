//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSSet, NSString, _TtC7Grocery8CartData;

@interface _TtC7Grocery12CartItemData : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic, retain) NSNumber *averageWeight; // @dynamic averageWeight;
@property(nonatomic, retain) _TtC7Grocery8CartData *cart; // @dynamic cart;
@property(nonatomic, retain) NSNumber *isAlcoholic; // @dynamic isAlcoholic;
@property(nonatomic, retain) NSNumber *isOutOfStock; // @dynamic isOutOfStock;
@property(nonatomic, retain) NSNumber *isRollback; // @dynamic isRollback;
@property(nonatomic, retain) NSNumber *isSNAPEligible; // @dynamic isSNAPEligible;
@property(nonatomic, retain) NSNumber *isSubstitutionsAllowed; // @dynamic isSubstitutionsAllowed;
@property(nonatomic, copy) NSString *itemId; // @dynamic itemId;
@property(nonatomic, copy) NSString *largeImage; // @dynamic largeImage;
@property(nonatomic, retain) NSNumber *listPrice; // @dynamic listPrice;
@property(nonatomic, retain) NSNumber *maxAllowed; // @dynamic maxAllowed;
@property(nonatomic, copy) NSString *name; // @dynamic name;
@property(nonatomic, copy) NSString *offerId; // @dynamic offerId;
@property(nonatomic, retain) NSNumber *previousPrice; // @dynamic previousPrice;
@property(nonatomic, retain) NSNumber *priceUnit; // @dynamic priceUnit;
@property(nonatomic, copy) NSString *priceUnitMeasure; // @dynamic priceUnitMeasure;
@property(nonatomic, retain) NSNumber *qty; // @dynamic qty;
@property(nonatomic, copy) NSString *salesUnitRaw; // @dynamic salesUnitRaw;
@property(nonatomic, copy) NSString *src; // @dynamic src;
@property(nonatomic, copy) NSString *thumbnailImage; // @dynamic thumbnailImage;
@property(nonatomic, copy) NSSet *variants; // @dynamic variants;
@property(nonatomic, retain) NSNumber *weight; // @dynamic weight;
@property(nonatomic, retain) NSNumber *weightIncrement; // @dynamic weightIncrement;

@end

