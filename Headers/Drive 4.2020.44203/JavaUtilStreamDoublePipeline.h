//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamAbstractPipeline.h"

#import "JavaUtilStreamDoubleStream-Protocol.h"

@class NSString;

@interface JavaUtilStreamDoublePipeline : JavaUtilStreamAbstractPipeline <JavaUtilStreamDoubleStream>
{
}

+ (const struct J2ObjcClassInfo *)__metadata;
+ (id)adaptWithJavaUtilSpliterator:(id)arg1;
+ (id)adaptWithJavaUtilStreamSink:(id)arg1;
- (id)toArray;
- (id)findAny;
- (id)findFirst;
- (_Bool)noneMatchWithJavaUtilFunctionDoublePredicate:(id)arg1;
- (_Bool)allMatchWithJavaUtilFunctionDoublePredicate:(id)arg1;
- (_Bool)anyMatchWithJavaUtilFunctionDoublePredicate:(id)arg1;
- (id)collectWithJavaUtilFunctionSupplier:(id)arg1 withJavaUtilFunctionObjDoubleConsumer:(id)arg2 withJavaUtilFunctionBiConsumer:(id)arg3;
- (id)reduceWithJavaUtilFunctionDoubleBinaryOperator:(id)arg1;
- (double)reduceWithDouble:(double)arg1 withJavaUtilFunctionDoubleBinaryOperator:(id)arg2;
- (id)summaryStatistics;
- (long long)count;
- (id)average;
- (id)max;
- (id)min;
- (double)sum;
- (void)forEachOrderedWithJavaUtilFunctionDoubleConsumer:(id)arg1;
- (void)forEachWithJavaUtilFunctionDoubleConsumer:(id)arg1;
- (id)distinct;
- (id)sorted;
- (id)skipWithLong:(long long)arg1;
- (id)limitWithLong:(long long)arg1;
- (id)peekWithJavaUtilFunctionDoubleConsumer:(id)arg1;
- (id)filterWithJavaUtilFunctionDoublePredicate:(id)arg1;
- (id)unordered;
- (id)flatMapWithJavaUtilFunctionDoubleFunction:(id)arg1;
- (id)mapToLongWithJavaUtilFunctionDoubleToLongFunction:(id)arg1;
- (id)mapToIntWithJavaUtilFunctionDoubleToIntFunction:(id)arg1;
- (id)mapToObjWithJavaUtilFunctionDoubleFunction:(id)arg1;
- (id)mapWithJavaUtilFunctionDoubleUnaryOperator:(id)arg1;
- (id)boxed;
- (id)spliterator;
- (id)iterator;
- (id)makeNodeBuilderWithLong:(long long)arg1 withJavaUtilFunctionIntFunction:(id)arg2;
- (void)forEachWithCancelWithJavaUtilSpliterator:(id)arg1 withJavaUtilStreamSink:(id)arg2;
- (id)lazySpliteratorWithJavaUtilFunctionSupplier:(id)arg1;
- (id)wrapWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilFunctionSupplier:(id)arg2 withBoolean:(_Bool)arg3;
- (id)evaluateToNodeWithJavaUtilStreamPipelineHelper:(id)arg1 withJavaUtilSpliterator:(id)arg2 withBoolean:(_Bool)arg3 withJavaUtilFunctionIntFunction:(id)arg4;
- (id)getOutputShape;
- (id)initWithJavaUtilStreamAbstractPipeline:(id)arg1 withInt:(int)arg2;
- (id)initWithJavaUtilSpliterator:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;
- (id)initWithJavaUtilFunctionSupplier:(id)arg1 withInt:(int)arg2 withBoolean:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

