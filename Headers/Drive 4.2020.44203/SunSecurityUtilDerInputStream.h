//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SunSecurityUtilDerInputBuffer;

@interface SunSecurityUtilDerInputStream : NSObject
{
    SunSecurityUtilDerInputBuffer *buffer_;
    BOOL tag_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)getLengthWithInt:(int)arg1 withJavaIoInputStream:(id)arg2;
+ (int)getLengthWithJavaIoInputStream:(id)arg1;
- (void)dealloc;
- (int)available;
- (void)reset;
- (void)markWithInt:(int)arg1;
- (int)getLength;
- (int)peekByte;
- (int)getByte;
- (id)getGeneralizedTime;
- (id)getUTCTime;
- (id)readStringWithByte:(BOOL)arg1 withNSString:(id)arg2 withNSString:(id)arg3;
- (id)getGeneralString;
- (id)getBMPString;
- (id)getIA5String;
- (id)getT61String;
- (id)getPrintableString;
- (id)getUTF8String;
- (id)getDerValue;
- (id)readVectorWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)readVectorWithInt:(int)arg1;
- (id)getSetWithInt:(int)arg1 withBoolean:(_Bool)arg2 withBoolean:(_Bool)arg3;
- (id)getSetWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)getSetWithInt:(int)arg1;
- (id)getSequenceWithInt:(int)arg1;
- (id)getSequenceWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)getOID;
- (void)getNull;
- (void)getBytesWithByteArray:(id)arg1;
- (id)getOctetString;
- (id)getUnalignedBitString;
- (id)getBitString;
- (int)getEnumerated;
- (id)getPositiveBigInteger;
- (id)getBigInteger;
- (int)getInteger;
- (id)toByteArray;
- (id)subStreamWithInt:(int)arg1 withBoolean:(_Bool)arg2;
- (id)initWithSunSecurityUtilDerInputBuffer:(id)arg1;
- (void)init__WithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithByteArray:(id)arg1;

@end

