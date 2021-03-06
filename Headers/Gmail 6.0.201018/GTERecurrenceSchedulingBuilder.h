//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GTEDateTime, GTEMonthDay;

@interface GTERecurrenceSchedulingBuilder : NSObject <NSCopying>
{
    long long _type;
    long long _endType;
    long long _intervalFrequency;
    long long _weekDays;
    GTEMonthDay *_monthDay;
    GTEDateTime *_date;
    GTEDateTime *_endDate;
    long long _maxRepetitions;
}

- (void).cxx_destruct;
@property(nonatomic) long long maxRepetitions; // @synthesize maxRepetitions=_maxRepetitions;
@property(retain, nonatomic) GTEDateTime *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) GTEDateTime *date; // @synthesize date=_date;
@property(retain, nonatomic) GTEMonthDay *monthDay; // @synthesize monthDay=_monthDay;
@property(nonatomic) long long weekDays; // @synthesize weekDays=_weekDays;
@property(nonatomic) long long intervalFrequency; // @synthesize intervalFrequency=_intervalFrequency;
@property(nonatomic) long long endType; // @synthesize endType=_endType;
@property(nonatomic) long long type; // @synthesize type=_type;
- (_Bool)containsValidScheduling;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)buildIfValid;
- (id)build;
- (id)init;

@end

