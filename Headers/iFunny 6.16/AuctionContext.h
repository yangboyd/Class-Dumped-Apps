//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/GPBMessage.h>

@class ADCOMContext, ADCOMPlacement, NSString, ORTBRequest_Item;

@interface AuctionContext : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int at; // @dynamic at;
@property(retain, nonatomic) ADCOMContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasItem; // @dynamic hasItem;
@property(nonatomic) _Bool hasPlacement; // @dynamic hasPlacement;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(retain, nonatomic) ORTBRequest_Item *item; // @dynamic item;
@property(retain, nonatomic) ADCOMPlacement *placement; // @dynamic placement;
@property(nonatomic) int placementTag; // @dynamic placementTag;
@property(nonatomic) _Bool test; // @dynamic test;
@property(copy, nonatomic) NSString *timestamp; // @dynamic timestamp;

@end

