//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface LibcoreIoStreams : NSObject
{
}

+ (void)initialize;
+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)readAsciiLineWithJavaIoInputStream:(id)arg1;
+ (int)copy__WithJavaIoInputStream:(id)arg1 withJavaIoOutputStream:(id)arg2;
+ (long long)skipByReadingWithJavaIoInputStream:(id)arg1 withLong:(long long)arg2;
+ (void)skipAllWithJavaIoInputStream:(id)arg1;
+ (id)readFullyWithJavaIoReader:(id)arg1;
+ (id)readFullyNoCloseWithJavaIoInputStream:(id)arg1;
+ (id)readFullyWithJavaIoInputStream:(id)arg1;
+ (void)readFullyWithJavaIoInputStream:(id)arg1 withByteArray:(id)arg2 withInt:(int)arg3 withInt:(int)arg4;
+ (void)readFullyWithJavaIoInputStream:(id)arg1 withByteArray:(id)arg2;
+ (void)writeSingleByteWithJavaIoOutputStream:(id)arg1 withInt:(int)arg2;
+ (int)readSingleByteWithJavaIoInputStream:(id)arg1;
- (id)init;

@end

