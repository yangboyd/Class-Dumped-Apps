//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDoubleArray, GPBInt64Array;

@interface YTIAnalyticsCatalystBandChartRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int chartValuesType; // @dynamic chartValuesType;
@property(nonatomic) _Bool hasChartValuesType; // @dynamic hasChartValuesType;
@property(nonatomic) _Bool hasLineColor; // @dynamic hasLineColor;
@property(nonatomic) int lineColor; // @dynamic lineColor;
@property(retain, nonatomic) GPBDoubleArray *lowerValuesArray; // @dynamic lowerValuesArray;
@property(readonly, nonatomic) unsigned long long lowerValuesArray_Count; // @dynamic lowerValuesArray_Count;
@property(retain, nonatomic) GPBInt64Array *timesArray; // @dynamic timesArray;
@property(readonly, nonatomic) unsigned long long timesArray_Count; // @dynamic timesArray_Count;
@property(retain, nonatomic) GPBDoubleArray *upperValuesArray; // @dynamic upperValuesArray;
@property(readonly, nonatomic) unsigned long long upperValuesArray_Count; // @dynamic upperValuesArray_Count;
@property(retain, nonatomic) GPBDoubleArray *valuesArray; // @dynamic valuesArray;
@property(readonly, nonatomic) unsigned long long valuesArray_Count; // @dynamic valuesArray_Count;

@end

