//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSByteArray, IOSObjectArray;

@interface JavaIoObjectInputStream_HandleTable : NSObject
{
    IOSByteArray *status_;
    IOSObjectArray *entries_;
    IOSObjectArray *deps_;
    int lowDep_;
    int size_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)grow;
- (int)size;
- (void)clear;
- (id)lookupExceptionWithInt:(int)arg1;
- (id)lookupObjectWithInt:(int)arg1;
- (void)setObjectWithInt:(int)arg1 withId:(id)arg2;
- (void)finishWithInt:(int)arg1;
- (void)markExceptionWithInt:(int)arg1 withJavaLangClassNotFoundException:(id)arg2;
- (void)markDependencyWithInt:(int)arg1 withInt:(int)arg2;
- (int)assignWithId:(id)arg1;
- (id)initWithInt:(int)arg1;

@end

