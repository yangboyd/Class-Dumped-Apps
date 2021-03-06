//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class GPBDuration, GPBTimestamp, GTPDate, GTPTimeOfDay, NSString;

@interface TSKTask_TimeBlock : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBDuration *duration; // @dynamic duration;
@property(nonatomic) _Bool hasDuration; // @dynamic hasDuration;
@property(nonatomic) _Bool hasStartDate; // @dynamic hasStartDate;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasStartTimestamp; // @dynamic hasStartTimestamp;
@property(retain, nonatomic) GTPDate *startDate; // @dynamic startDate;
@property(retain, nonatomic) GTPTimeOfDay *startTime; // @dynamic startTime;
@property(retain, nonatomic) GPBTimestamp *startTimestamp; // @dynamic startTimestamp;
@property(copy, nonatomic) NSString *timeZone; // @dynamic timeZone;

@end

