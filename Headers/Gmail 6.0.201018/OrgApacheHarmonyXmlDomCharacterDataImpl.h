//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrgApacheHarmonyXmlDomLeafNodeImpl.h"

#import "OrgW3cDomCharacterData-Protocol.h"

@class JavaLangStringBuffer, NSString;

@interface OrgApacheHarmonyXmlDomCharacterDataImpl : OrgApacheHarmonyXmlDomLeafNodeImpl <OrgW3cDomCharacterData>
{
    JavaLangStringBuffer *buffer_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)substringDataWithInt:(int)arg1 withInt:(int)arg2;
- (void)setDataWithNSString:(id)arg1;
- (void)replaceDataWithInt:(int)arg1 withInt:(int)arg2 withNSString:(id)arg3;
- (void)insertDataWithInt:(int)arg1 withNSString:(id)arg2;
- (id)getNodeValue;
- (int)getLength;
- (void)appendDataToWithJavaLangStringBuilder:(id)arg1;
- (id)getData;
- (void)deleteDataWithInt:(int)arg1 withInt:(int)arg2;
- (void)appendDataWithNSString:(id)arg1;
- (id)initWithOrgApacheHarmonyXmlDomDocumentImpl:(id)arg1 withNSString:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

