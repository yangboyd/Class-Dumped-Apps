//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class GPBInt64Array;

@interface DrishtiTimeHistogram : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBInt64Array *countArray; // @dynamic countArray;
@property(readonly, nonatomic) unsigned long long countArray_Count; // @dynamic countArray_Count;
@property(nonatomic) _Bool hasIntervalSizeUsec; // @dynamic hasIntervalSizeUsec;
@property(nonatomic) _Bool hasNumIntervals; // @dynamic hasNumIntervals;
@property(nonatomic) _Bool hasTotal; // @dynamic hasTotal;
@property(nonatomic) long long intervalSizeUsec; // @dynamic intervalSizeUsec;
@property(nonatomic) long long numIntervals; // @dynamic numIntervals;
@property(nonatomic) long long total; // @dynamic total;

@end

