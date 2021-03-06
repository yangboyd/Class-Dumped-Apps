//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeChronoBaseChronology.h"

@class OrgJodaTimeChronology, OrgJodaTimeDateTimeField, OrgJodaTimeDurationField;

@interface OrgJodaTimeChronoAssembledChronology : OrgJodaTimeChronoBaseChronology
{
    OrgJodaTimeChronology *iBase_;
    id iParam_;
    OrgJodaTimeDurationField *iMillis_;
    OrgJodaTimeDurationField *iSeconds_;
    OrgJodaTimeDurationField *iMinutes_;
    OrgJodaTimeDurationField *iHours_;
    OrgJodaTimeDurationField *iHalfdays_;
    OrgJodaTimeDurationField *iDays_;
    OrgJodaTimeDurationField *iWeeks_;
    OrgJodaTimeDurationField *iWeekyears_;
    OrgJodaTimeDurationField *iMonths_;
    OrgJodaTimeDurationField *iYears_;
    OrgJodaTimeDurationField *iCenturies_;
    OrgJodaTimeDurationField *iEras_;
    OrgJodaTimeDateTimeField *iMillisOfSecond_;
    OrgJodaTimeDateTimeField *iMillisOfDay_;
    OrgJodaTimeDateTimeField *iSecondOfMinute_;
    OrgJodaTimeDateTimeField *iSecondOfDay_;
    OrgJodaTimeDateTimeField *iMinuteOfHour_;
    OrgJodaTimeDateTimeField *iMinuteOfDay_;
    OrgJodaTimeDateTimeField *iHourOfDay_;
    OrgJodaTimeDateTimeField *iClockhourOfDay_;
    OrgJodaTimeDateTimeField *iHourOfHalfday_;
    OrgJodaTimeDateTimeField *iClockhourOfHalfday_;
    OrgJodaTimeDateTimeField *iHalfdayOfDay_;
    OrgJodaTimeDateTimeField *iDayOfWeek_;
    OrgJodaTimeDateTimeField *iDayOfMonth_;
    OrgJodaTimeDateTimeField *iDayOfYear_;
    OrgJodaTimeDateTimeField *iWeekOfWeekyear_;
    OrgJodaTimeDateTimeField *iWeekyear_;
    OrgJodaTimeDateTimeField *iWeekyearOfCentury_;
    OrgJodaTimeDateTimeField *iMonthOfYear_;
    OrgJodaTimeDateTimeField *iYear_;
    OrgJodaTimeDateTimeField *iYearOfEra_;
    OrgJodaTimeDateTimeField *iYearOfCentury_;
    OrgJodaTimeDateTimeField *iCenturyOfEra_;
    OrgJodaTimeDateTimeField *iEra_;
    int iBaseFlags_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getParam;
- (id)getBase;
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
- (long long)getDateTimeMillisWithLong:(long long)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5;
- (long long)getDateTimeMillisWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withInt:(int)arg5 withInt:(int)arg6 withInt:(int)arg7;
- (long long)getDateTimeMillisWithInt:(int)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4;
- (id)getZone;

@end

