//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class IOSClass, NSString;
@protocol JavaUtilIterator;

@interface JavaUtilCollections_CheckedMap_CheckedEntrySet_1 : NSObject <JavaUtilIterator>
{
    id <JavaUtilIterator> val$i_;
    IOSClass *val$valueType_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)next;
- (void)remove;
- (_Bool)hasNext;
- (id)initWithJavaUtilIterator:(id)arg1 withIOSClass:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

