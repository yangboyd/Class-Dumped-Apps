//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray;
@protocol JavaUtilList, OrgJodaTimeFormatPeriodFormatterBuilder_PeriodFieldAffix;

@interface OrgJodaTimeFormatPeriodFormatterBuilder : NSObject
{
    int iMinPrintedDigits_;
    int iPrintZeroSetting_;
    int iMaxParsedDigits_;
    _Bool iRejectSignedValues_;
    id <OrgJodaTimeFormatPeriodFormatterBuilder_PeriodFieldAffix> iPrefix_;
    id <JavaUtilList> iElementPairs_;
    _Bool iNotPrinter_;
    _Bool iNotParser_;
    IOSObjectArray *iFieldFormatters_;
}

- (void)dealloc;
- (id)appendSeparatorWithNSString:(id)arg1 withNSString:(id)arg2 withNSStringArray:(id)arg3;
- (id)appendSeparatorWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendSeparatorIfFieldsBeforeWithNSString:(id)arg1;
- (id)appendSeparatorIfFieldsAfterWithNSString:(id)arg1;
- (id)appendSeparatorWithNSString:(id)arg1;
- (id)appendSuffixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendSuffixWithNSString:(id)arg1;
- (id)appendMillis3Digit;
- (id)appendMillis;
- (id)appendSecondsWithOptionalMillis;
- (id)appendSecondsWithMillis;
- (id)appendSeconds;
- (id)appendMinutes;
- (id)appendHours;
- (id)appendDays;
- (id)appendWeeks;
- (id)appendMonths;
- (id)appendYears;
- (id)appendPrefixWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)appendPrefixWithNSString:(id)arg1;
- (id)printZeroNever;
- (id)printZeroAlways;
- (id)printZeroIfSupported;
- (id)printZeroRarelyFirst;
- (id)printZeroRarelyLast;
- (id)rejectSignedValuesWithBoolean:(_Bool)arg1;
- (id)maximumParsedDigitsWithInt:(int)arg1;
- (id)minimumPrintedDigitsWithInt:(int)arg1;
- (id)appendLiteralWithNSString:(id)arg1;
- (id)appendWithOrgJodaTimeFormatPeriodPrinter:(id)arg1 withOrgJodaTimeFormatPeriodParser:(id)arg2;
- (id)appendWithOrgJodaTimeFormatPeriodFormatter:(id)arg1;
- (void)clear;
- (id)toParser;
- (id)toPrinter;
- (id)toFormatter;

@end

