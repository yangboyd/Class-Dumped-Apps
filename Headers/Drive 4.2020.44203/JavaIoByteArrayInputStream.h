//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaIoInputStream.h"

@class IOSByteArray;

@interface JavaIoByteArrayInputStream : JavaIoInputStream
{
    IOSByteArray *buf_;
    int pos_;
    int mark_;
    int count_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)close;
- (void)reset;
- (void)markWithInt:(int)arg1;
- (_Bool)markSupported;
- (int)available;
- (long long)skipWithLong:(long long)arg1;
- (int)readWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (int)read;
- (id)initWithByteArray:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;
- (id)initWithByteArray:(id)arg1;

@end

