//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class CDRListProductData, NSString;

@interface CDRItem : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasListItemId; // @dynamic hasListItemId;
@property(nonatomic) _Bool hasListProductData; // @dynamic hasListProductData;
@property(copy, nonatomic) NSString *listItemId; // @dynamic listItemId;
@property(retain, nonatomic) CDRListProductData *listProductData; // @dynamic listProductData;

@end

