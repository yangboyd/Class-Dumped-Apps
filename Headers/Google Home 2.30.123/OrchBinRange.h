//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSString;

@interface OrchBinRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardNumberLength; // @dynamic cardNumberLength;
@property(retain, nonatomic) GPBInt32Array *digitGroupingArray; // @dynamic digitGroupingArray;
@property(readonly, nonatomic) unsigned long long digitGroupingArray_Count; // @dynamic digitGroupingArray_Count;
@property(copy, nonatomic) NSString *end; // @dynamic end;
@property(copy, nonatomic) NSString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasCardNumberLength; // @dynamic hasCardNumberLength;
@property(nonatomic) _Bool hasEnd; // @dynamic hasEnd;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasStart; // @dynamic hasStart;
@property(copy, nonatomic) NSString *start; // @dynamic start;

@end

