//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeChronology.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;

@interface OrgJodaTimeChronoBaseChronology : OrgJodaTimeChronology <JavaIoSerializable>
{
}

- (id)era;
- (id)eras;
- (id)centuryOfEra;
- (id)centuries;
- (id)yearOfCentury;
- (id)yearOfEra;
- (id)year;
- (id)years;
- (id)monthOfYear;
- (id)months;
- (id)weekyearOfCentury;
- (id)weekyear;
- (id)weekyears;
- (id)weekOfWeekyear;
- (id)weeks;
- (id)dayOfYear;
- (id)dayOfMonth;
- (id)dayOfWeek;
- (id)days;
- (id)halfdayOfDay;
- (id)clockhourOfHalfday;
- (id)hourOfHalfday;
- (id)halfdays;
- (id)clockhourOfDay;
- (id)hourOfDay;
- (id)hours;
- (id)minuteOfDay;
- (id)minuteOfHour;
- (id)minutes;
- (id)secondOfDay;
- (id)secondOfMinute;
- (id)seconds;
- (id)millisOfDay;
- (id)millisOfSecond;
- (id)millis;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (long long)addWithOrgJodaTimeReadablePeriod:(id)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (id)getWithOrgJodaTimeReadablePeriod:(id)arg1 withLong:(long long)arg2;
- (id)getWithOrgJodaTimeReadablePeriod:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;
- (long long)setWithOrgJodaTimeReadablePartial:(id)arg1 withLong:(long long)arg2;
- (id)getWithOrgJodaTimeReadablePartial:(id)arg1 withLong:(long long)arg2;
- (void)validateWithOrgJodaTimeReadablePartial:(id)arg1 withIntArray:(id)arg2;
- (long long)getDateTimeMillisWithLong:(long long)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (long long)getDateTimeMillisWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7;
- (long long)getDateTimeMillisWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

