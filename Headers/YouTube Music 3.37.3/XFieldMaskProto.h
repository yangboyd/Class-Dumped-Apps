//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt32Array, NSMutableArray;

@interface XFieldMaskProto : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt32Array *fieldArray; // @dynamic fieldArray;
@property(readonly, nonatomic) unsigned long long fieldArray_Count; // @dynamic fieldArray_Count;
@property(retain, nonatomic) NSMutableArray *fieldMaskArray; // @dynamic fieldMaskArray;
@property(readonly, nonatomic) unsigned long long fieldMaskArray_Count; // @dynamic fieldMaskArray_Count;
@property(nonatomic) _Bool inverted; // @dynamic inverted;

@end

