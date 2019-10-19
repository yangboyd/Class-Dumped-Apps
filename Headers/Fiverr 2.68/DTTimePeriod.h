//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface DTTimePeriod : NSObject
{
    NSDate *_StartDate;
    NSDate *_EndDate;
}

+ (id)dateWithSubtractedTime:(unsigned long long)arg1 amount:(long long)arg2 baseDate:(id)arg3;
+ (id)dateWithAddedTime:(unsigned long long)arg1 amount:(long long)arg2 baseDate:(id)arg3;
+ (id)timePeriodWithAllTime;
+ (id)timePeriodWithSize:(unsigned long long)arg1 amount:(long long)arg2 endingAt:(id)arg3;
+ (id)timePeriodWithSize:(unsigned long long)arg1 endingAt:(id)arg2;
+ (id)timePeriodWithSize:(unsigned long long)arg1 amount:(long long)arg2 startingAt:(id)arg3;
+ (id)timePeriodWithSize:(unsigned long long)arg1 startingAt:(id)arg2;
+ (id)timePeriodWithStartDate:(id)arg1 endDate:(id)arg2;
@property(retain, nonatomic) NSDate *EndDate; // @synthesize EndDate=_EndDate;
@property(retain, nonatomic) NSDate *StartDate; // @synthesize StartDate=_StartDate;
- (void).cxx_destruct;
- (id)copy;
- (void)shortenWithAnchorDate:(unsigned long long)arg1 size:(unsigned long long)arg2 amount:(long long)arg3;
- (void)shortenWithAnchorDate:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)lengthenWithAnchorDate:(unsigned long long)arg1 size:(unsigned long long)arg2 amount:(long long)arg3;
- (void)lengthenWithAnchorDate:(unsigned long long)arg1 size:(unsigned long long)arg2;
- (void)shiftLaterWithSize:(unsigned long long)arg1 amount:(long long)arg2;
- (void)shiftLaterWithSize:(unsigned long long)arg1;
- (void)shiftEarlierWithSize:(unsigned long long)arg1 amount:(long long)arg2;
- (void)shiftEarlierWithSize:(unsigned long long)arg1;
- (_Bool)containsDate:(id)arg1 interval:(unsigned long long)arg2;
- (double)gapBetween:(id)arg1;
- (unsigned long long)relationToPeriod:(id)arg1;
- (_Bool)intersects:(id)arg1;
- (_Bool)overlapsWith:(id)arg1;
- (_Bool)contains:(id)arg1;
- (_Bool)isInside:(id)arg1;
- (_Bool)isEqualToPeriod:(id)arg1;
- (double)durationInSeconds;
- (double)durationInMinutes;
- (double)durationInHours;
- (double)durationInDays;
- (double)durationInWeeks;
- (double)durationInYears;
- (_Bool)isMoment;
- (_Bool)hasEndDate;
- (_Bool)hasStartDate;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2;

@end

