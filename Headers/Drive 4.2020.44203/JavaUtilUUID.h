//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaIoSerializable-Protocol.h"
#import "JavaLangComparable-Protocol.h"

@class NSString;

@interface JavaUtilUUID : NSObject <JavaIoSerializable, JavaLangComparable>
{
    long long mostSigBits_;
    long long leastSigBits_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)digitsWithLong:(long long)arg1 withInt:(int)arg2;
+ (id)fromStringWithNSString:(id)arg1;
+ (id)nameUUIDFromBytesWithByteArray:(id)arg1;
+ (id)randomUUID;
- (int)compareToWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (long long)node;
- (int)clockSequence;
- (long long)timestamp;
- (int)variant;
- (int)version__;
- (long long)getMostSignificantBits;
- (long long)getLeastSignificantBits;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2;
- (id)initWithByteArray:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

