//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AnchorCommonStruct, AnchorShopLinkStruct, AnchorWikipediaStruct, NSString;

@interface AnchorStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *anchorId; // @dynamic anchorId;
@property(retain, nonatomic) AnchorCommonStruct *anchorInfo; // @dynamic anchorInfo;
@property(nonatomic) int businessType; // @dynamic businessType;
@property(nonatomic) _Bool hasAnchorId; // @dynamic hasAnchorId;
@property(nonatomic) _Bool hasAnchorInfo; // @dynamic hasAnchorInfo;
@property(nonatomic) _Bool hasBusinessType; // @dynamic hasBusinessType;
@property(nonatomic) _Bool hasShopLink; // @dynamic hasShopLink;
@property(nonatomic) _Bool hasShowType; // @dynamic hasShowType;
@property(nonatomic) _Bool hasWikipediaInfo; // @dynamic hasWikipediaInfo;
@property(retain, nonatomic) AnchorShopLinkStruct *shopLink; // @dynamic shopLink;
@property(nonatomic) int showType; // @dynamic showType;
@property(retain, nonatomic) AnchorWikipediaStruct *wikipediaInfo; // @dynamic wikipediaInfo;

@end

