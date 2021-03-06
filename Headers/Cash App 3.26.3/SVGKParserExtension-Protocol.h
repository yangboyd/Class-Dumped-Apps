//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, Node, SVGKParseResult, SVGKSource;

@protocol SVGKParserExtension <NSObject>
- (void)handleEndElement:(Node *)arg1 document:(SVGKSource *)arg2 parseResult:(SVGKParseResult *)arg3;
- (Node *)handleStartElement:(NSString *)arg1 document:(SVGKSource *)arg2 namePrefix:(NSString *)arg3 namespaceURI:(NSString *)arg4 attributes:(NSMutableDictionary *)arg5 parseResult:(SVGKParseResult *)arg6 parentNode:(Node *)arg7;
- (NSArray *)supportedTags;
- (NSArray *)supportedNamespaces;
@end

