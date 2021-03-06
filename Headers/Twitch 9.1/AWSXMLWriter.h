//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AWSCore/AWSNSXMLStreamWriter-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSMutableString, NSString;

@interface AWSXMLWriter : NSObject <AWSNSXMLStreamWriter>
{
    NSMutableString *writer;
    NSString *encoding;
    int level;
    _Bool openElement;
    _Bool emptyElement;
    NSMutableArray *elementLocalNames;
    NSMutableArray *elementNamespaceURIs;
    NSMutableArray *namespaceURIs;
    NSMutableArray *namespaceCounts;
    NSMutableArray *namespaceWritten;
    NSMutableDictionary *namespaceURIPrefixMap;
    NSMutableDictionary *prefixNamespaceURIMap;
    NSString *indentation;
    NSString *lineBreak;
    _Bool automaticEmptyElements;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int level; // @synthesize level;
@property(retain, nonatomic) NSString *lineBreak; // @synthesize lineBreak;
@property(retain, nonatomic) NSString *indentation; // @synthesize indentation;
@property(nonatomic) _Bool automaticEmptyElements; // @synthesize automaticEmptyElements;
- (id)toData;
- (id)toString;
- (void)close;
- (void)flush;
- (void)writeIndentation;
- (void)writeLinebreak;
- (void)writeEscapeCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;
- (void)writeEscape:(id)arg1;
- (void)write:(id)arg1;
- (void)writeCData:(id)arg1;
- (void)writeProcessingInstruction:(id)arg1 data:(id)arg2;
- (void)writeComment:(id)arg1;
- (void)writeCharacters:(id)arg1;
- (void)writeNamespaceToStream:(id)arg1 namespaceURI:(id)arg2;
- (id)getNamespaceURI:(id)arg1;
- (void)writeDefaultNamespace:(id)arg1;
- (void)writeNamespace:(id)arg1 namespaceURI:(id)arg2;
- (void)setDefaultNamespace:(id)arg1;
- (void)writeAttributeWithNamespace:(id)arg1 localName:(id)arg2 value:(id)arg3;
- (void)writeAttribute:(id)arg1 value:(id)arg2;
- (void)writeEmptyElementWithNamespace:(id)arg1 localName:(id)arg2;
- (void)writeEmptyElement:(id)arg1;
- (void)writeEndElementWithNamespace:(id)arg1 localName:(id)arg2;
- (void)writeStartElementWithNamespace:(id)arg1 localName:(id)arg2;
- (void)writeEndElement;
- (void)writeEndElement:(id)arg1;
- (void)writeCloseElement:(_Bool)arg1;
- (void)writeCloseStartElement;
- (void)writeStartElement:(id)arg1;
- (void)writeEndDocument;
- (void)writeStartDocumentWithEncodingAndVersion:(id)arg1 version:(id)arg2;
- (void)writeStartDocumentWithVersion:(id)arg1;
- (void)writeStartDocument;
- (void)popElementStack;
- (void)pushElementStack:(id)arg1 localName:(id)arg2;
- (id)getPrefix:(id)arg1;
- (void)setPrefix:(id)arg1 namespaceURI:(id)arg2;
- (void)popNamespaceStack;
- (void)writeNamespaceAttributes;
- (void)pushNamespaceStack;
- (id)init;

@end

