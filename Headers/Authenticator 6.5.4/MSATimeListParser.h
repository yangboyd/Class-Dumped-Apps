//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSABaseXmlParser.h"

@class MSADateParser, NSDate;

@interface MSATimeListParser : MSABaseXmlParser
{
    _Bool _shouldIgnoreFirstStartNode;
    MSADateParser *_dateParser;
    NSDate *_expires;
}

- (void).cxx_destruct;
@property(readonly) NSDate *expires; // @synthesize expires=_expires;
- (void)onParserFinished;
- (void)onStartElement:(id)arg1 namespaceURI:(id)arg2 attributes:(id)arg3;
- (id)initWithData:(id)arg1;

@end

