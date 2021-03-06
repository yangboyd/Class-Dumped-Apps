//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSXMLNode.h"

@class NSMutableArray, NSString;

@interface NSXMLElement : NSXMLNode
{
    NSMutableArray *attributes;
    NSMutableArray *children;
    NSString *namespaceURI;
}

+ (id)xmlElement;
- (void).cxx_destruct;
@property(copy) NSString *namespaceURI; // @synthesize namespaceURI;
- (void)setAttribute:(id)arg1 withValue:(id)arg2;
- (void)appendAttributes:(id)arg1;
- (id)innerXML;
- (id)innerXMLWithNamespace:(id)arg1;
- (_Bool)listContainsString:(id)arg1 text:(id)arg2;
- (void)addChild:(id)arg1;
- (id)attributeForName:(id)arg1;
- (id)children;
- (id)elementsForLocalName:(id)arg1 URI:(id)arg2;
- (id)elementsForName:(id)arg1;
- (id)init;

@end

