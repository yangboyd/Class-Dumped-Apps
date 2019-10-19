//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray;

@interface YTIVideoQualityPromoTriggers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBEnumArray *connectionWhitelistArray; // @dynamic connectionWhitelistArray;
@property(readonly, nonatomic) unsigned long long connectionWhitelistArray_Count; // @dynamic connectionWhitelistArray_Count;
@property(nonatomic) _Bool hasJoinLatencySeconds; // @dynamic hasJoinLatencySeconds;
@property(nonatomic) _Bool hasRebufferTimeSeconds; // @dynamic hasRebufferTimeSeconds;
@property(nonatomic) _Bool hasRefractorySeconds; // @dynamic hasRefractorySeconds;
@property(nonatomic) _Bool hasWatchTimeWindowSeconds; // @dynamic hasWatchTimeWindowSeconds;
@property(nonatomic) unsigned int joinLatencySeconds; // @dynamic joinLatencySeconds;
@property(nonatomic) unsigned int rebufferTimeSeconds; // @dynamic rebufferTimeSeconds;
@property(nonatomic) unsigned int refractorySeconds; // @dynamic refractorySeconds;
@property(nonatomic) unsigned int watchTimeWindowSeconds; // @dynamic watchTimeWindowSeconds;

@end

