//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, SunSecurityUtilDerInputBuffer, SunSecurityUtilDerInputStream;

@interface SunSecurityUtilDerValue : NSObject
{
    BOOL tag_;
    SunSecurityUtilDerInputBuffer *buffer_;
    SunSecurityUtilDerInputStream *data_;
    int length_;
    IOSByteArray *originalEncodedForm_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (BOOL)createTagWithByte:(BOOL)arg1 withBoolean:(_Bool)arg2 withByte:(BOOL)arg3;
+ (_Bool)isPrintableStringCharWithChar:(unsigned short)arg1;
+ (_Bool)doEqualsWithSunSecurityUtilDerValue:(id)arg1 withSunSecurityUtilDerValue:(id)arg2;
- (void)dealloc;
- (unsigned long long)hash;
- (void)resetTagWithByte:(BOOL)arg1;
- (int)length;
- (id)toDerInputStream;
- (id)toByteArray;
- (id)getOriginalEncodedForm;
- (id)description;
- (_Bool)equalsWithSunSecurityUtilDerValue:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)getGeneralizedTime;
- (id)getUTCTime;
- (id)getGeneralString;
- (id)getUTF8String;
- (id)getBMPString;
- (id)getIA5String;
- (id)getT61String;
- (id)getPrintableString;
- (id)getDataBytes;
- (id)getUnalignedBitStringWithBoolean:(_Bool)arg1;
- (id)getBitStringWithBoolean:(_Bool)arg1;
- (id)getAsString;
- (id)getUnalignedBitString;
- (id)getBitString;
- (int)getEnumerated;
- (id)getPositiveBigInteger;
- (id)getBigInteger;
- (int)getInteger;
- (id)getOctetString;
- (id)appendWithByteArray:(id)arg1 withByteArray:(id)arg2;
- (id)getOID;
- (_Bool)getBoolean;
- (BOOL)getTag;
- (id)getData;
- (void)encodeWithSunSecurityUtilDerOutputStream:(id)arg1;
- (id)init__WithBoolean:(_Bool)arg1 withJavaIoInputStream:(id)arg2;
- (id)init__WithByte:(BOOL)arg1 withNSString:(id)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;
- (id)initWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithByteArray:(id)arg1;
- (id)initWithSunSecurityUtilDerInputBuffer:(id)arg1 withBoolean:(_Bool)arg2;
- (id)initWithByte:(BOOL)arg1 withByteArray:(id)arg2;
- (id)initWithByte:(BOOL)arg1 withNSString:(id)arg2;
- (id)initWithNSString:(id)arg1;
- (_Bool)isConstructedWithByte:(BOOL)arg1;
- (_Bool)isConstructed;
- (_Bool)isPrivate;
- (_Bool)isContextSpecificWithByte:(BOOL)arg1;
- (_Bool)isContextSpecific;
- (_Bool)isApplication;
- (_Bool)isUniversal;

@end

