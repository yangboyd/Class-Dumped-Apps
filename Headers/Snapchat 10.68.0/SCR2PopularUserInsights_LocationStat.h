//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2PopularUserInsights_LocationStat : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long count; // @dynamic count;
@property(nonatomic) int locationType; // @dynamic locationType;
@property(retain, nonatomic) NSMutableArray *locationsArray; // @dynamic locationsArray;
@property(readonly, nonatomic) unsigned long long locationsArray_Count; // @dynamic locationsArray_Count;

@end

