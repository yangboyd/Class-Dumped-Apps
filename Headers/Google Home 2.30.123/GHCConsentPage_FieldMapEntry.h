//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCConsentPage_FieldEntry, NSMutableArray;

@interface GHCConsentPage_FieldMapEntry : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int fieldType; // @dynamic fieldType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) NSMutableArray *orderedValuesArray; // @dynamic orderedValuesArray;
@property(readonly, nonatomic) unsigned long long orderedValuesArray_Count; // @dynamic orderedValuesArray_Count;
@property(retain, nonatomic) GHCConsentPage_FieldEntry *value; // @dynamic value;

@end

