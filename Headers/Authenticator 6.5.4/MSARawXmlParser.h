//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class NSString;

@interface MSARawXmlParser : MSABaseXmlParser
{
    NSString *_parentParserLastStartNode;
    long long _startingIndex;
    NSString *_outerXml;
}

- (void).cxx_destruct;
@property(readonly) NSString *outerXml; // @synthesize outerXml=_outerXml;
- (struct _NSRange)findEndNode:(id)arg1 startingIndex:(unsigned long long)arg2;
- (unsigned long long)findStartNode:(id)arg1 startingIndex:(unsigned long long)arg2;
- (void)onParserFinished;
- (long long)findStartingIndex;
- (id)initWithParentParser:(id)arg1;

@end

