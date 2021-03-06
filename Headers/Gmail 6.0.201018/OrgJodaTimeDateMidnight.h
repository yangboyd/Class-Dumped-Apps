//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeBaseBaseDateTime.h"

#import "JavaIoSerializable-Protocol.h"
#import "OrgJodaTimeReadableDateTime-Protocol.h"

@class NSString;

@interface OrgJodaTimeDateMidnight : OrgJodaTimeBaseBaseDateTime <OrgJodaTimeReadableDateTime, JavaIoSerializable>
{
}

- (id)dayOfWeek;
- (id)dayOfMonth;
- (id)dayOfYear;
- (id)weekOfWeekyear;
- (id)monthOfYear;
- (id)weekyear;
- (id)year;
- (id)yearOfEra;
- (id)yearOfCentury;
- (id)centuryOfEra;
- (id)era;
- (id)withDayOfWeekWithInt:(int)arg1;
- (id)withDayOfMonthWithInt:(int)arg1;
- (id)withDayOfYearWithInt:(int)arg1;
- (id)withWeekOfWeekyearWithInt:(int)arg1;
- (id)withMonthOfYearWithInt:(int)arg1;
- (id)withWeekyearWithInt:(int)arg1;
- (id)withYearWithInt:(int)arg1;
- (id)withYearOfCenturyWithInt:(int)arg1;
- (id)withYearOfEraWithInt:(int)arg1;
- (id)withCenturyOfEraWithInt:(int)arg1;
- (id)withEraWithInt:(int)arg1;
- (id)toInterval;
- (id)toLocalDate;
- (id)toYearMonthDay;
- (id)propertyWithOrgJodaTimeDateTimeFieldType:(id)arg1;
- (id)minusDaysWithInt:(int)arg1;
- (id)minusWeeksWithInt:(int)arg1;
- (id)minusMonthsWithInt:(int)arg1;
- (id)minusYearsWithInt:(int)arg1;
- (id)minusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)minusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)minusWithLong:(long long)arg1;
- (id)plusDaysWithInt:(int)arg1;
- (id)plusWeeksWithInt:(int)arg1;
- (id)plusMonthsWithInt:(int)arg1;
- (id)plusYearsWithInt:(int)arg1;
- (id)plusWithOrgJodaTimeReadablePeriod:(id)arg1;
- (id)plusWithOrgJodaTimeReadableDuration:(id)arg1;
- (id)plusWithLong:(long long)arg1;
- (id)withPeriodAddedWithOrgJodaTimeReadablePeriod:(id)arg1 withInt:(int)arg2;
- (id)withDurationAddedWithOrgJodaTimeReadableDuration:(id)arg1 withInt:(int)arg2;
- (id)withDurationAddedWithLong:(long long)arg1 withInt:(int)arg2;
- (id)withFieldAddedWithOrgJodaTimeDurationFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldWithOrgJodaTimeDateTimeFieldType:(id)arg1 withInt:(int)arg2;
- (id)withFieldsWithOrgJodaTimeReadablePartial:(id)arg1;
- (id)withZoneRetainFieldsWithOrgJodaTimeDateTimeZone:(id)arg1;
- (id)withChronologyWithOrgJodaTimeChronology:(id)arg1;
- (id)withMillisWithLong:(long long)arg1;
- (long long)checkInstantWithLong:(long long)arg1 withOrgJodaTimeChronology:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

