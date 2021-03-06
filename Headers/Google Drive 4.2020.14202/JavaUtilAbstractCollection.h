//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilCollection-Protocol.h"

@class NSString;

@interface JavaUtilAbstractCollection : NSObject <JavaUtilCollection>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (int)hugeCapacityWithInt:(int)arg1;
+ (id)finishToArrayWithNSObjectArray:(id)arg1 withJavaUtilIterator:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)parallelStream;
- (id)stream;
- (id)spliterator;
- (_Bool)removeIfWithJavaUtilFunctionPredicate:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)clear;
- (_Bool)retainAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeAllWithJavaUtilCollection:(id)arg1;
- (_Bool)addAllWithJavaUtilCollection:(id)arg1;
- (_Bool)containsAllWithJavaUtilCollection:(id)arg1;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (_Bool)containsWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)iterator;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

