//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilAbstractMap.h"

#import "JavaIoSerializable-Protocol.h"

@class NSString;
@protocol JavaUtilCollection, JavaUtilSet;

@interface JavaUtilCollections_SingletonMap : JavaUtilAbstractMap <JavaIoSerializable>
{
    id k_;
    id v_;
    id <JavaUtilSet> keySet_SingletonMap_;
    id <JavaUtilSet> entrySet_;
    id <JavaUtilCollection> values_SingletonMap_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)mergeWithId:(id)arg1 withId:(id)arg2 withJavaUtilFunctionBiFunction:(id)arg3;
- (id)computeWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfPresentWithId:(id)arg1 withJavaUtilFunctionBiFunction:(id)arg2;
- (id)computeIfAbsentWithId:(id)arg1 withJavaUtilFunctionFunction:(id)arg2;
- (id)replaceWithId:(id)arg1 withId:(id)arg2;
- (_Bool)replaceWithId:(id)arg1 withId:(id)arg2 withId:(id)arg3;
- (_Bool)removeWithId:(id)arg1 withId:(id)arg2;
- (id)putIfAbsentWithId:(id)arg1 withId:(id)arg2;
- (void)replaceAllWithJavaUtilFunctionBiFunction:(id)arg1;
- (void)forEachWithJavaUtilFunctionBiConsumer:(id)arg1;
- (id)getOrDefaultWithId:(id)arg1 withId:(id)arg2;
- (id)values;
- (id)entrySet;
- (id)keySet;
- (id)getWithId:(id)arg1;
- (_Bool)containsValueWithId:(id)arg1;
- (_Bool)containsKeyWithId:(id)arg1;
- (_Bool)isEmpty;
- (int)size;
- (id)initWithId:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

