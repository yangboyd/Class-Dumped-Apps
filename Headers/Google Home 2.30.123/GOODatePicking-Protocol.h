//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSCalendar, NSDate, NSLocale, NSTimeZone;

@protocol GOODatePicking <NSObject>
@property(retain, nonatomic) NSTimeZone *timeZone;
@property(nonatomic) long long minuteInterval;
@property(retain, nonatomic) NSDate *minimumDate;
@property(retain, nonatomic) NSDate *maximumDate;
@property(retain, nonatomic) NSLocale *locale;
@property(nonatomic) long long datePickerMode;
@property(retain, nonatomic) NSDate *date;
@property(copy, nonatomic) NSCalendar *calendar;
- (void)setDate:(NSDate *)arg1 animated:(_Bool)arg2;
@end

