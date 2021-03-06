//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class AAMEffect, AAMThemeDisplayableClipParams_KenBurnsClipParams, AAMThemeDisplayableClipParams_MaxOverlap, GPBDoubleArray, GPBInt32Array;

@interface AAMThemeDisplayableClipParams : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) AAMEffect *effect; // @dynamic effect;
@property(retain, nonatomic) GPBInt32Array *enabledEffectArray; // @dynamic enabledEffectArray;
@property(readonly, nonatomic) unsigned long long enabledEffectArray_Count; // @dynamic enabledEffectArray_Count;
@property(nonatomic) _Bool hasEffect; // @dynamic hasEffect;
@property(nonatomic) _Bool hasKenBurnsParams; // @dynamic hasKenBurnsParams;
@property(nonatomic) _Bool hasMaxOverlapWithNext; // @dynamic hasMaxOverlapWithNext;
@property(nonatomic) _Bool hasMaxOverlapWithPrev; // @dynamic hasMaxOverlapWithPrev;
@property(retain, nonatomic) AAMThemeDisplayableClipParams_KenBurnsClipParams *kenBurnsParams; // @dynamic kenBurnsParams;
@property(retain, nonatomic) AAMThemeDisplayableClipParams_MaxOverlap *maxOverlapWithNext; // @dynamic maxOverlapWithNext;
@property(retain, nonatomic) AAMThemeDisplayableClipParams_MaxOverlap *maxOverlapWithPrev; // @dynamic maxOverlapWithPrev;
@property(retain, nonatomic) GPBDoubleArray *styledValueArray; // @dynamic styledValueArray;
@property(readonly, nonatomic) unsigned long long styledValueArray_Count; // @dynamic styledValueArray_Count;

@end

