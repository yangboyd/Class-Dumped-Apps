//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoFilterInputStream.h"

@class IOSByteArray, JavaUtilZipDeflater;

@interface JavaUtilZipDeflaterInputStream : JavaIoFilterInputStream
{
    JavaUtilZipDeflater *def_;
    IOSByteArray *buf_;
    IOSByteArray *rbuf_;
    _Bool usesDefaultDeflater_;
    _Bool reachEOF_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)reset;
- (void)markWithInt:(int)arg1;
- (_Bool)markSupported;
- (int)available;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (void)close;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaUtilZipDeflater:(id)arg2 withInt:(int)arg3;
- (id)initWithJavaIoInputStream:(id)arg1 withJavaUtilZipDeflater:(id)arg2;
- (id)initWithJavaIoInputStream:(id)arg1;
- (void)ensureOpen;

@end

