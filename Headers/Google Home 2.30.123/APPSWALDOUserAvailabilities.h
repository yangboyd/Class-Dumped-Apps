//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class APPSWALDOWorkingHours, GPBTimestamp, NSMutableArray;

@interface APPSWALDOUserAvailabilities : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *availabilitiesArray; // @dynamic availabilitiesArray;
@property(readonly, nonatomic) unsigned long long availabilitiesArray_Count; // @dynamic availabilitiesArray_Count;
@property(nonatomic) _Bool hasNextPollTime; // @dynamic hasNextPollTime;
@property(nonatomic) _Bool hasWorkingHours; // @dynamic hasWorkingHours;
@property(retain, nonatomic) GPBTimestamp *nextPollTime; // @dynamic nextPollTime;
@property(retain, nonatomic) APPSWALDOWorkingHours *workingHours; // @dynamic workingHours;

@end

