//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBDuration, GTPDate, SGAPSearchProfileEntity, SGAPSearchProfileLocationInfo;

@interface SGAPSearchProfileLocation : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GTPDate *endTime; // @dynamic endTime;
@property(nonatomic) _Bool hasEndTime; // @dynamic hasEndTime;
@property(nonatomic) _Bool hasLengthOfStay; // @dynamic hasLengthOfStay;
@property(nonatomic) _Bool hasPlace; // @dynamic hasPlace;
@property(nonatomic) _Bool hasPoint; // @dynamic hasPoint;
@property(nonatomic) _Bool hasStartTime; // @dynamic hasStartTime;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(retain, nonatomic) GPBDuration *lengthOfStay; // @dynamic lengthOfStay;
@property(retain, nonatomic) SGAPSearchProfileEntity *place; // @dynamic place;
@property(retain, nonatomic) SGAPSearchProfileLocationInfo *point; // @dynamic point;
@property(retain, nonatomic) GTPDate *startTime; // @dynamic startTime;
@property(nonatomic) int type; // @dynamic type;

@end

