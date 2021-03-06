//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GTPDate, NSString, POEMBirthday_AgeDisableGracePeriod, POEMPersonFieldMetadata;

@interface POEMBirthday : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) POEMBirthday_AgeDisableGracePeriod *ageDisableGracePeriod; // @dynamic ageDisableGracePeriod;
@property(nonatomic) int birthdayResolution; // @dynamic birthdayResolution;
@property(retain, nonatomic) GTPDate *calendarDay; // @dynamic calendarDay;
@property(nonatomic) long long dateMs; // @dynamic dateMs;
@property(nonatomic) long long dateMsAsNumber; // @dynamic dateMsAsNumber;
@property(nonatomic) _Bool hasAgeDisableGracePeriod; // @dynamic hasAgeDisableGracePeriod;
@property(nonatomic) _Bool hasBirthdayResolution; // @dynamic hasBirthdayResolution;
@property(nonatomic) _Bool hasCalendarDay; // @dynamic hasCalendarDay;
@property(nonatomic) _Bool hasDateMs; // @dynamic hasDateMs;
@property(nonatomic) _Bool hasDateMsAsNumber; // @dynamic hasDateMsAsNumber;
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) POEMPersonFieldMetadata *metadata; // @dynamic metadata;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end

