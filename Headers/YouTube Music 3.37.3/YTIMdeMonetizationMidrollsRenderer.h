//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIFormattedString;

@interface YTIMdeMonetizationMidrollsRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIFormattedString *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasLabel; // @dynamic hasLabel;
@property(retain, nonatomic) YTIFormattedString *label; // @dynamic label;
@property(retain, nonatomic) NSMutableArray *timesArray; // @dynamic timesArray;
@property(readonly, nonatomic) unsigned long long timesArray_Count; // @dynamic timesArray_Count;

@end

