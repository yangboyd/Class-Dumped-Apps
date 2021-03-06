//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HuluAPI/NSXMLParserDelegate-Protocol.h>

@class NSString, NSXMLParser;

@interface ConvivaXMLParser : NSObject <NSXMLParserDelegate>
{
    _Bool _isRequiredDataFound;
    _Bool _isXMLFetching;
    NSXMLParser *_xmlParser;
    NSString *_stringToFind;
    CDUnknownBlockType _notify;
    id _callBackDelegate;
}

@property(nonatomic) __weak id callBackDelegate; // @synthesize callBackDelegate=_callBackDelegate;
- (void).cxx_destruct;
- (void)cleanup;
- (void)parserDidEndDocument:(id)arg1;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parserDidStartDocument:(id)arg1;
- (void)parseData:(id)arg1 findString:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

