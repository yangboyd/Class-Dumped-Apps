//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class IOSCharArray, IOSIntArray, JavaIoInputStream, JavaIoReader, NSString;

@protocol OrgXmlpullV1XmlPullParser <JavaObject>
- (int)nextTag;
- (NSString *)nextText;
- (void)requireWithInt:(int)arg1 withNSString:(NSString *)arg2 withNSString:(NSString *)arg3;
- (int)nextToken;
- (int)next;
- (int)getEventType;
- (NSString *)getAttributeValueWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (NSString *)getAttributeValueWithInt:(int)arg1;
- (_Bool)isAttributeDefaultWithInt:(int)arg1;
- (NSString *)getAttributeTypeWithInt:(int)arg1;
- (NSString *)getAttributePrefixWithInt:(int)arg1;
- (NSString *)getAttributeNameWithInt:(int)arg1;
- (NSString *)getAttributeNamespaceWithInt:(int)arg1;
- (int)getAttributeCount;
- (_Bool)isEmptyElementTag;
- (NSString *)getPrefix;
- (NSString *)getName;
- (NSString *)getNamespace;
- (IOSCharArray *)getTextCharactersWithIntArray:(IOSIntArray *)arg1;
- (NSString *)getText;
- (_Bool)isWhitespace;
- (int)getColumnNumber;
- (int)getLineNumber;
- (NSString *)getPositionDescription;
- (int)getDepth;
- (NSString *)getNamespaceWithNSString:(NSString *)arg1;
- (NSString *)getNamespaceUriWithInt:(int)arg1;
- (NSString *)getNamespacePrefixWithInt:(int)arg1;
- (int)getNamespaceCountWithInt:(int)arg1;
- (void)defineEntityReplacementTextWithNSString:(NSString *)arg1 withNSString:(NSString *)arg2;
- (NSString *)getInputEncoding;
- (void)setInputWithJavaIoInputStream:(JavaIoInputStream *)arg1 withNSString:(NSString *)arg2;
- (void)setInputWithJavaIoReader:(JavaIoReader *)arg1;
- (id)getPropertyWithNSString:(NSString *)arg1;
- (void)setPropertyWithNSString:(NSString *)arg1 withId:(id)arg2;
- (_Bool)getFeatureWithNSString:(NSString *)arg1;
- (void)setFeatureWithNSString:(NSString *)arg1 withBoolean:(_Bool)arg2;
@end

