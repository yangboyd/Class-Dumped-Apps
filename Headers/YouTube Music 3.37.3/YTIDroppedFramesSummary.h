//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface YTIDroppedFramesSummary : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMonitoringDurationMs; // @dynamic hasMonitoringDurationMs;
@property(nonatomic) int monitoringDurationMs; // @dynamic monitoringDurationMs;
@property(retain, nonatomic) NSMutableArray *summariesArray; // @dynamic summariesArray;
@property(readonly, nonatomic) unsigned long long summariesArray_Count; // @dynamic summariesArray_Count;

@end

