//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ASTUIDeliveryAddress, NSData;

@interface ASTUIDeliveryAddressUpdateResult : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *addressCollectionParameters; // @dynamic addressCollectionParameters;
@property(retain, nonatomic) ASTUIDeliveryAddress *deliveryAddress; // @dynamic deliveryAddress;
@property(nonatomic) _Bool hasAddressCollectionParameters; // @dynamic hasAddressCollectionParameters;
@property(nonatomic) _Bool hasDeliveryAddress; // @dynamic hasDeliveryAddress;

@end

