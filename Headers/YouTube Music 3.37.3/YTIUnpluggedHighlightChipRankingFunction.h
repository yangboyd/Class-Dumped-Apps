//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFloatArray;

@interface YTIUnpluggedHighlightChipRankingFunction : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBFloatArray *playRatingBreakpointsArray; // @dynamic playRatingBreakpointsArray;
@property(readonly, nonatomic) unsigned long long playRatingBreakpointsArray_Count; // @dynamic playRatingBreakpointsArray_Count;
@property(retain, nonatomic) GPBFloatArray *playRatingCoefficientsArray; // @dynamic playRatingCoefficientsArray;
@property(readonly, nonatomic) unsigned long long playRatingCoefficientsArray_Count; // @dynamic playRatingCoefficientsArray_Count;

@end

