//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HAMDASHAdaptationSetElementParser.h"

@class NSString;

@interface MLHAMDASHAdaptationSetElementParser : HAMDASHAdaptationSetElementParser
{
    NSString *_projectionTypeString;
    NSString *_stereoLayoutString;
}

- (void).cxx_destruct;
- (int)stereoLayout;
- (int)projectionType;
- (_Bool)parseAttribute:(const char *)arg1 value:(const char *)arg2 valueLength:(unsigned long long)arg3;
- (id)startElementWithName:(const char *)arg1;

@end

