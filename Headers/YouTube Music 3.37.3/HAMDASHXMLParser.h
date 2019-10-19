//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HAMDASHBaseElementParser, NSError, NSMutableArray, NSString;

@interface HAMDASHXMLParser : NSObject
{
    HAMDASHBaseElementParser *_rootElementParser;
    NSString *_rootElementName;
    struct _xmlParserCtxt *_context;
    NSMutableArray *_elementParsers;
    NSError *_error;
    unsigned long long _numElementsBeingSkipped;
}

- (void).cxx_destruct;
- (void)errorEncounteredSAX;
- (void)charactersFoundSAX:(const char *)arg1 length:(unsigned long long)arg2;
- (void)endElementSAXWithName:(const char *)arg1;
- (_Bool)parseAttributes:(const char **)arg1 numAttributes:(unsigned long long)arg2 elementParser:(id)arg3 elementName:(const char *)arg4;
- (void)startElementSAXWithName:(const char *)arg1 attributes:(const char **)arg2 numAttributes:(unsigned long long)arg3;
- (_Bool)parseString:(id)arg1 error:(id *)arg2;
- (_Bool)parse:(id)arg1 error:(id *)arg2;
- (id)initWithRootElementParser:(id)arg1 rootElementName:(id)arg2;

@end

