//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTICommand, YTIFormattedString;

@interface YTIExpandedShelfContentsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasShowMoreText; // @dynamic hasShowMoreText;
@property(nonatomic) _Bool hasViewAllEndpoint; // @dynamic hasViewAllEndpoint;
@property(nonatomic) _Bool hasViewAllText; // @dynamic hasViewAllText;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(retain, nonatomic) YTIFormattedString *showMoreText; // @dynamic showMoreText;
@property(retain, nonatomic) YTICommand *viewAllEndpoint; // @dynamic viewAllEndpoint;
@property(retain, nonatomic) YTIFormattedString *viewAllText; // @dynamic viewAllText;

@end

