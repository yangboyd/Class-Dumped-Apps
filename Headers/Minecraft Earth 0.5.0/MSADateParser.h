//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class NSDate, NSString;

@interface MSADateParser : MSABaseXmlParser
{
    long long _dateType;
    NSString *_dateString;
    NSDate *_date;
}

@property(readonly) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (void)onParserFinished;
- (id)initWithParentParser:(id)arg1 forDateType:(long long)arg2;

@end

