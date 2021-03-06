//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCHvacAction, GPBDuration, GPBEnumArray, GTPTimeOfDay;

@interface GHCThermostatSchedule : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) unsigned int atomId; // @dynamic atomId;
@property(retain, nonatomic) GPBEnumArray *daysOfWeekArray; // @dynamic daysOfWeekArray;
@property(readonly, nonatomic) unsigned long long daysOfWeekArray_Count; // @dynamic daysOfWeekArray_Count;
@property(retain, nonatomic) GPBDuration *duration; // @dynamic duration;
@property(retain, nonatomic) GTPTimeOfDay *endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasLastAction; // @dynamic hasLastAction;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(retain, nonatomic) GHCHvacAction *lastAction; // @dynamic lastAction;
@property(nonatomic) _Bool rollOver; // @dynamic rollOver;
@property(retain, nonatomic) GTPTimeOfDay *startTime; // @dynamic startTime;

@end

