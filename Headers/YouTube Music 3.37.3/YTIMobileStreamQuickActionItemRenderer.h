//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIMobileStreamQuickActionButtonSupportedRenderers;

@interface YTIMobileStreamQuickActionItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMobileStreamQuickActionButtonSupportedRenderers *button; // @dynamic button;
@property(nonatomic) _Bool hasButton; // @dynamic hasButton;
@property(retain, nonatomic) NSMutableArray *visibilityConditionsArray; // @dynamic visibilityConditionsArray;
@property(readonly, nonatomic) unsigned long long visibilityConditionsArray_Count; // @dynamic visibilityConditionsArray_Count;

@end

