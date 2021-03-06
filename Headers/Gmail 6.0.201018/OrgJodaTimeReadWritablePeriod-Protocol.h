//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "OrgJodaTimeReadablePeriod-Protocol.h"

@class OrgJodaTimeDurationFieldType;
@protocol OrgJodaTimeReadableInterval, OrgJodaTimeReadablePeriod;

@protocol OrgJodaTimeReadWritablePeriod <OrgJodaTimeReadablePeriod, JavaObject>
- (void)addMillisWithInt:(int)arg1;
- (void)setMillisWithInt:(int)arg1;
- (void)addSecondsWithInt:(int)arg1;
- (void)setSecondsWithInt:(int)arg1;
- (void)addMinutesWithInt:(int)arg1;
- (void)setMinutesWithInt:(int)arg1;
- (void)addHoursWithInt:(int)arg1;
- (void)setHoursWithInt:(int)arg1;
- (void)addDaysWithInt:(int)arg1;
- (void)setDaysWithInt:(int)arg1;
- (void)addWeeksWithInt:(int)arg1;
- (void)setWeeksWithInt:(int)arg1;
- (void)addMonthsWithInt:(int)arg1;
- (void)setMonthsWithInt:(int)arg1;
- (void)addYearsWithInt:(int)arg1;
- (void)setYearsWithInt:(int)arg1;
- (void)addWithOrgJodaTimeReadableInterval:(id <OrgJodaTimeReadableInterval>)arg1;
- (void)addWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (void)addWithOrgJodaTimeReadablePeriod:(id <OrgJodaTimeReadablePeriod>)arg1;
- (void)addWithOrgJodaTimeDurationFieldType:(OrgJodaTimeDurationFieldType *)arg1 withInt:(int)arg2;
- (void)setPeriodWithOrgJodaTimeReadableInterval:(id <OrgJodaTimeReadableInterval>)arg1;
- (void)setPeriodWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7 withInt:(int)arg8;
- (void)setPeriodWithOrgJodaTimeReadablePeriod:(id <OrgJodaTimeReadablePeriod>)arg1;
- (void)setWithOrgJodaTimeDurationFieldType:(OrgJodaTimeDurationFieldType *)arg1 withInt:(int)arg2;
- (void)setValueWithInt:(int)arg1 withInt:(int)arg2;
- (void)clear;
@end

