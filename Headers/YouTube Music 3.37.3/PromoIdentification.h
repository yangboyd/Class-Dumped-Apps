//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array;

@interface PromoIdentification : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int impressionCappingId; // @dynamic impressionCappingId;
@property(retain, nonatomic) GPBInt32Array *mendelIdArray; // @dynamic mendelIdArray;
@property(readonly, nonatomic) unsigned long long mendelIdArray_Count; // @dynamic mendelIdArray_Count;

@end

