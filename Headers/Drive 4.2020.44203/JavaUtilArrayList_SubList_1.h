//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilListIterator-Protocol.h"

@class JavaUtilArrayList_SubList, NSString;

@interface JavaUtilArrayList_SubList_1 : NSObject <JavaUtilListIterator>
{
    JavaUtilArrayList_SubList *this$0_;
    int val$offset_;
    int cursor_;
    int lastRet_;
    int expectedModCount_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)addWithId:(id)arg1;
- (void)setWithId:(id)arg1;
- (void)remove;
- (int)previousIndex;
- (int)nextIndex;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)previous;
- (_Bool)hasPrevious;
- (id)next;
- (_Bool)hasNext;
- (id)initWithJavaUtilArrayList_SubList:(id)arg1 withInt:(int)arg2 withInt:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

