//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSString;

@interface WAPBCatalogOrderItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *currencyCode; // @dynamic currencyCode;
@property(nonatomic) _Bool hasCurrencyCode; // @dynamic hasCurrencyCode;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool hasPrice1000; // @dynamic hasPrice1000;
@property(nonatomic) _Bool hasQuantity; // @dynamic hasQuantity;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasThumbnailId; // @dynamic hasThumbnailId;
@property(nonatomic) _Bool hasThumbnailURL; // @dynamic hasThumbnailURL;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) long long price1000; // @dynamic price1000;
@property(nonatomic) int quantity; // @dynamic quantity;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *thumbnailId; // @dynamic thumbnailId;
@property(copy, nonatomic) NSString *thumbnailURL; // @dynamic thumbnailURL;

@end

