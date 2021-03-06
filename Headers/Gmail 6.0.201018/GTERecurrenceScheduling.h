//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTEValueType-Protocol.h"

@class GTEDateTime, GTEMonthDay, NSString;

@interface GTERecurrenceScheduling : NSObject <GTEValueType>
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

+ (_Bool)supportsSecureCoding;
+ (void)load;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long maxRepetitions; // @synthesize maxRepetitions=_maxRepetitions;
@property(readonly, nonatomic) GTEDateTime *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) GTEDateTime *date; // @synthesize date=_date;
@property(readonly, nonatomic) GTEMonthDay *monthDay; // @synthesize monthDay=_monthDay;
@property(readonly, nonatomic) long long weekDays; // @synthesize weekDays=_weekDays;
@property(readonly, nonatomic) long long intervalFrequency; // @synthesize intervalFrequency=_intervalFrequency;
@property(readonly, nonatomic) long long endType; // @synthesize endType=_endType;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)buildUpon;
- (id)initWithType:(long long)arg1 weekDays:(long long)arg2 monthDay:(id)arg3 intervalFrequency:(long long)arg4 date:(id)arg5 endType:(long long)arg6 endDate:(id)arg7 maxRepetitions:(long long)arg8;
- (id)weekDaysString:(long long)arg1;
- (id)weekDayString:(long long)arg1;
- (id)weekDayStrings;
- (id)monthDayDebugDescription;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly) Class superclass;

@end

