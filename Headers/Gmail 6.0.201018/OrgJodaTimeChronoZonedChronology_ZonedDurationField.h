//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgJodaTimeFieldBaseDurationField.h"

@class OrgJodaTimeDateTimeZone, OrgJodaTimeDurationField;

@interface OrgJodaTimeChronoZonedChronology_ZonedDurationField : OrgJodaTimeFieldBaseDurationField
{
    OrgJodaTimeDurationField *iField_;
    _Bool iTimeField_;
    OrgJodaTimeDateTimeZone *iZone_;
}

- (void)dealloc;
- (long long)getDifferenceAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getDifferenceWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)addWithLong:(long long)arg1 withInt:(int)arg2;
- (long long)getMillisWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getMillisWithInt:(int)arg1 withLong:(long long)arg2;
- (long long)getValueAsLongWithLong:(long long)arg1 withLong:(long long)arg2;
- (int)getValueWithLong:(long long)arg1 withLong:(long long)arg2;
- (long long)getUnitMillis;
- (_Bool)isPrecise;

@end

