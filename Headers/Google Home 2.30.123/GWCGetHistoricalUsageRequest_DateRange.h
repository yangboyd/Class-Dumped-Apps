//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBTimestamp;

@interface GWCGetHistoricalUsageRequest_DateRange : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBTimestamp *endTimestamp; // @dynamic endTimestamp;
@property(nonatomic) _Bool hasEndTimestamp; // @dynamic hasEndTimestamp;
@property(nonatomic) _Bool hasStartTimestamp; // @dynamic hasStartTimestamp;
@property(retain, nonatomic) GPBTimestamp *startTimestamp; // @dynamic startTimestamp;

@end

