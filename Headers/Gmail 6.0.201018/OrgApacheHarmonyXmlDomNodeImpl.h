//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrgW3cDomNode-Protocol.h"

@class NSString, OrgApacheHarmonyXmlDomDocumentImpl;

@interface OrgApacheHarmonyXmlDomNodeImpl : NSObject <OrgW3cDomNode>
{
    OrgApacheHarmonyXmlDomDocumentImpl *document_;
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)createEqualityKeyWithOrgW3cDomNode:(id)arg1;
+ (void)setNameWithOrgApacheHarmonyXmlDomNodeImpl:(id)arg1 withNSString:(id)arg2;
+ (void)setNameNSWithOrgApacheHarmonyXmlDomNodeImpl:(id)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
+ (id)validatePrefixWithNSString:(id)arg1 withBoolean:(_Bool)arg2 withNSString:(id)arg3;
- (void).cxx_destruct;
- (void)__javaClone:(id)arg1;
- (id)getUserDataWithNSString:(id)arg1;
- (id)setUserDataWithNSString:(id)arg1 withId:(id)arg2 withOrgW3cDomUserDataHandler:(id)arg3;
- (id)getFeatureWithNSString:(id)arg1 withNSString:(id)arg2;
- (_Bool)namedNodeMapsEqualWithOrgW3cDomNamedNodeMap:(id)arg1 withOrgW3cDomNamedNodeMap:(id)arg2;
- (_Bool)isEqualNodeWithOrgW3cDomNode:(id)arg1;
- (id)lookupNamespaceURIWithNSString:(id)arg1;
- (_Bool)isDefaultNamespaceWithNSString:(id)arg1;
- (_Bool)isPrefixMappedToUriWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)lookupPrefixWithNSString:(id)arg1;
- (id)getContainingElement;
- (id)getNamespacingElement;
- (_Bool)isSameNodeWithOrgW3cDomNode:(id)arg1;
- (void)setTextContentWithNSString:(id)arg1;
- (void)getTextContentWithJavaLangStringBuilder:(id)arg1;
- (id)getTextContent;
- (short)compareDocumentPositionWithOrgW3cDomNode:(id)arg1;
- (id)sanitizeUriWithNSString:(id)arg1;
- (id)getParentBaseUri;
- (id)getBaseURI;
- (void)setPrefixWithNSString:(id)arg1;
- (void)setNodeValueWithNSString:(id)arg1;
- (id)replaceChildWithOrgW3cDomNode:(id)arg1 withOrgW3cDomNode:(id)arg2;
- (id)removeChildWithOrgW3cDomNode:(id)arg1;
- (void)normalize;
- (_Bool)isSupportedWithNSString:(id)arg1 withNSString:(id)arg2;
- (id)insertBeforeWithOrgW3cDomNode:(id)arg1 withOrgW3cDomNode:(id)arg2;
- (_Bool)hasChildNodes;
- (_Bool)hasAttributes;
- (id)getPreviousSibling;
- (id)getPrefix;
- (id)getParentNode;
- (id)getOwnerDocument;
- (id)getNodeValue;
- (short)getNodeType;
- (id)getNodeName;
- (id)getNextSibling;
- (id)getNamespaceURI;
- (id)getLocalName;
- (id)getLastChild;
- (id)getFirstChild;
- (id)getChildNodes;
- (id)getAttributes;
- (id)cloneNodeWithBoolean:(_Bool)arg1;
- (id)appendChildWithOrgW3cDomNode:(id)arg1;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

