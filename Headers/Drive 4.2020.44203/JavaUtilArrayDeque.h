//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractCollection.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilDeque-Protocol.h"
#import "NSCopying-Protocol.h"

@class IOSObjectArray, NSString;

@interface JavaUtilArrayDeque : JavaUtilAbstractCollection <JavaUtilDeque, NSCopying, JavaIoSerializable>
{
    IOSObjectArray *elements_;
    int head_;
    int tail_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)spliterator;
- (void)readObjectWithJavaIoObjectInputStream:(id)arg1;
- (void)writeObjectWithJavaIoObjectOutputStream:(id)arg1;
- (id)java_clone;
- (id)toArrayWithNSObjectArray:(id)arg1;
- (id)toArray;
- (void)clear;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)containsWithId:(id)arg1;
- (id)descendingIterator;
- (id)iterator;
- (_Bool)isEmpty;
- (int)size;
- (_Bool)delete__WithInt:(int)arg1;
- (void)checkInvariants;
- (id)pop;
- (void)pushWithId:(id)arg1;
- (id)peek;
- (id)element;
- (id)poll;
- (id)remove;
- (_Bool)offerWithId:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (_Bool)removeLastOccurrenceWithId:(id)arg1;
- (_Bool)removeFirstOccurrenceWithId:(id)arg1;
- (id)peekLast;
- (id)peekFirst;
- (id)getLast;
- (id)getFirst;
- (id)pollLast;
- (id)pollFirst;
- (id)removeLast;
- (id)removeFirst;
- (_Bool)offerLastWithId:(id)arg1;
- (_Bool)offerFirstWithId:(id)arg1;
- (void)addLastWithId:(id)arg1;
- (void)addFirstWithId:(id)arg1;
- (id)initWithJavaUtilCollection:(id)arg1;
- (id)initWithInt:(int)arg1;
- (id)init;
- (void)doubleCapacity;
- (void)allocateElementsWithInt:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

