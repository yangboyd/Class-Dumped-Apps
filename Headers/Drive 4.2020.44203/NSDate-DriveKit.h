//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSDate.h>

@interface NSDate (DriveKit)
+ (id)gdk_dateFormatFromTemplate:(id)arg1;
+ (id)gdk_threadSafeDateFormatter;
+ (id)gdk_fullDateAndTimeStringFromDateMillis:(long long)arg1;
+ (id)gdk_fullDateAndTimeStringFromDate:(id)arg1;
+ (_Bool)gdk_nilSafeIsDate:(id)arg1 equalTo:(id)arg2;
- (id)gdk_dateWithFixedHour:(unsigned long long)arg1;
- (id)gdk_dateByAddingDays:(long long)arg1;
- (long long)gdk_numberOfDaysUntil;
- (id)gdk_startOfDayBefore;
- (id)gdk_startOfDayInCalendar:(id)arg1;
- (id)gdk_startOfDay;
- (id)gdk_firstDayOfLastWeek;
- (id)gdk_firstDayOfThisWeek;
- (id)gdk_dayTimeString;
- (id)gdk_timeString;
- (id)gdk_dateStringWithFormatString:(id)arg1;
- (id)gdk_longDateString;
- (id)gdk_numberedDateString;
- (id)gdk_abbreviatedDayDateAndTimeString;
- (id)gdk_fullDateString;
- (id)gdk_fullDateStringWithLocale:(id)arg1;
- (id)gdk_dateFormatter;
- (id)gdk_smartDayStringRelativeTo:(id)arg1 dateFormat:(id)arg2;
- (id)gdk_smartDayStringRelativeTo:(id)arg1;
- (id)gdk_smartTimeStringRelativeTo:(id)arg1;
- (id)gdk_smartStringRelativeTo:(id)arg1 useYesterdayLabel:(_Bool)arg2;
- (id)gdk_relativeDateStringFromNow;
- (id)gdk_smartStringWithYesterdayLabel:(_Bool)arg1;
- (id)gdk_fullDateAndTimeString;
@end

