//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWATextFieldFormatter.h"

@class GWADateFormat;

@interface GWADateFormatter : GWATextFieldFormatter
{
    GWADateFormat *_format;
}

- (void).cxx_destruct;
- (unsigned long long)substringIndexOfComponentString:(id)arg1 forDateComponent:(id)arg2;
- (id)formattingCharacters;
- (id)formatText:(id)arg1;
- (id)initWithDateFormat:(id)arg1;

@end

