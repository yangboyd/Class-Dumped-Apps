//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, GPBInt64Array;

@interface OrchPanPrefixSet : GPBMessage
{
}

+ (id)descriptor;
+ (int)matchCardNumber:(id)arg1 withPrefixSets:(id)arg2;
+ (int)matchCardNumber:(id)arg1 withPrefixSet:(id)arg2;

// Remaining properties
@property(nonatomic) long long firstDigits; // @dynamic firstDigits;
@property(nonatomic) _Bool hasFirstDigits; // @dynamic hasFirstDigits;
@property(nonatomic) _Bool hasLength; // @dynamic hasLength;
@property(retain, nonatomic) GPBInt32Array *lastDigitBitsetArray; // @dynamic lastDigitBitsetArray;
@property(readonly, nonatomic) unsigned long long lastDigitBitsetArray_Count; // @dynamic lastDigitBitsetArray_Count;
@property(nonatomic) int length; // @dynamic length;
@property(retain, nonatomic) GPBInt64Array *middleDigitsArray; // @dynamic middleDigitsArray;
@property(readonly, nonatomic) unsigned long long middleDigitsArray_Count; // @dynamic middleDigitsArray_Count;

@end

