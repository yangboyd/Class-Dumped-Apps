//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_CollectionView.h"

#import "JavaIoSerializable-Protocol.h"
#import "JavaUtilCollection-Protocol.h"

@class NSString;

@interface JavaUtilConcurrentConcurrentHashMap_ValuesView : JavaUtilConcurrentConcurrentHashMap_CollectionView <JavaUtilCollection, JavaIoSerializable>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)forEachWithJavaUtilFunctionConsumer:(id)arg1;
- (id)spliterator;
- (_Bool)removeIfWithJavaUtilFunctionPredicate:(id)arg1;
- (_Bool)addAllWithJavaUtilCollection:(id)arg1;
- (_Bool)addWithId:(id)arg1;
- (id)iterator;
- (_Bool)removeWithId:(id)arg1;
- (_Bool)containsWithId:(id)arg1;
- (id)initWithJavaUtilConcurrentConcurrentHashMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

