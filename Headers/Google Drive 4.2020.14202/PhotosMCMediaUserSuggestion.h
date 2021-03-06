//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCClusterItemSuggestionMetadata, PhotosMCMergeClustersMetadata, PhotosMCPrintingBooksMetadata, PhotosMCPrintingWallArtMetadata, PhotosMCSuggestionId;

@interface PhotosMCMediaUserSuggestion : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasMergeClustersMetadata; // @dynamic hasMergeClustersMetadata;
@property(nonatomic) _Bool hasPersonConfirmationMetadata; // @dynamic hasPersonConfirmationMetadata;
@property(nonatomic) _Bool hasPrintingBooksMetadata; // @dynamic hasPrintingBooksMetadata;
@property(nonatomic) _Bool hasPrintingWallArtMetadata; // @dynamic hasPrintingWallArtMetadata;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasThingConfirmationMetadata; // @dynamic hasThingConfirmationMetadata;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) PhotosMCSuggestionId *id_p; // @dynamic id_p;
@property(retain, nonatomic) PhotosMCMergeClustersMetadata *mergeClustersMetadata; // @dynamic mergeClustersMetadata;
@property(retain, nonatomic) PhotosMCClusterItemSuggestionMetadata *personConfirmationMetadata; // @dynamic personConfirmationMetadata;
@property(retain, nonatomic) PhotosMCPrintingBooksMetadata *printingBooksMetadata; // @dynamic printingBooksMetadata;
@property(retain, nonatomic) PhotosMCPrintingWallArtMetadata *printingWallArtMetadata; // @dynamic printingWallArtMetadata;
@property(nonatomic) int state; // @dynamic state;
@property(retain, nonatomic) PhotosMCClusterItemSuggestionMetadata *thingConfirmationMetadata; // @dynamic thingConfirmationMetadata;
@property(nonatomic) int type; // @dynamic type;

@end

