//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface ConcurrencyControlConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *URLPriorityConfigArray; // @dynamic URLPriorityConfigArray;
@property(readonly, nonatomic) unsigned long long URLPriorityConfigArray_Count; // @dynamic URLPriorityConfigArray_Count;
@property(retain, nonatomic) NSMutableArray *bandwidthClassPenaltyConfigArray; // @dynamic bandwidthClassPenaltyConfigArray;
@property(readonly, nonatomic) unsigned long long bandwidthClassPenaltyConfigArray_Count; // @dynamic bandwidthClassPenaltyConfigArray_Count;
@property(nonatomic) int concurrencyControlNum; // @dynamic concurrencyControlNum;
@property(nonatomic) int defaultPriority; // @dynamic defaultPriority;
@property(retain, nonatomic) NSMutableArray *priorityClassConfigArray; // @dynamic priorityClassConfigArray;
@property(readonly, nonatomic) unsigned long long priorityClassConfigArray_Count; // @dynamic priorityClassConfigArray_Count;

@end

