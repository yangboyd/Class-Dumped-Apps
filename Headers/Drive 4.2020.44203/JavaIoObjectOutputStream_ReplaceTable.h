//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IOSObjectArray, JavaIoObjectOutputStream_HandleTable;

@interface JavaIoObjectOutputStream_ReplaceTable : NSObject
{
    JavaIoObjectOutputStream_HandleTable *htab_;
    IOSObjectArray *reps_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)grow;
- (int)size;
- (void)clear;
- (id)lookupWithId:(id)arg1;
- (void)assignWithId:(id)arg1 withId:(id)arg2;
- (id)initWithInt:(int)arg1 withFloat:(float)arg2;

@end

