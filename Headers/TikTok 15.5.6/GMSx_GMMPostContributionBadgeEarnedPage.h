//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMBLevel, NSMutableArray, NSString;

@interface GMSx_GMMPostContributionBadgeEarnedPage : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *buttonArray; // @dynamic buttonArray;
@property(readonly, nonatomic) unsigned long long buttonArray_Count; // @dynamic buttonArray_Count;
@property(retain, nonatomic) GMSx_GMMBLevel *earnedLevel; // @dynamic earnedLevel;
@property(nonatomic) _Bool hasEarnedLevel; // @dynamic hasEarnedLevel;
@property(nonatomic) _Bool hasHeaderText; // @dynamic hasHeaderText;
@property(nonatomic) _Bool hasNextLevel; // @dynamic hasNextLevel;
@property(copy, nonatomic) NSString *headerText; // @dynamic headerText;
@property(retain, nonatomic) GMSx_GMMBLevel *nextLevel; // @dynamic nextLevel;

@end

