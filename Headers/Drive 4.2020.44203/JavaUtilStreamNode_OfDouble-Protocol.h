//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"
#import "JavaUtilStreamNode_OfPrimitive-Protocol.h"

@class IOSDoubleArray, IOSObjectArray, JavaUtilStreamStreamShape;
@protocol JavaUtilFunctionConsumer, JavaUtilFunctionIntFunction, JavaUtilSpliterator_OfDouble, JavaUtilStreamNode_OfDouble;

@protocol JavaUtilStreamNode_OfDouble <JavaUtilStreamNode_OfPrimitive, JavaObject>
- (IOSDoubleArray *)asPrimitiveArray;
- (id <JavaUtilStreamNode_OfDouble>)getChildWithInt:(int)arg1;
- (id <JavaUtilSpliterator_OfDouble>)spliterator;
- (JavaUtilStreamStreamShape *)getShape;
- (IOSDoubleArray *)newArrayWithInt:(int)arg1;
- (id <JavaUtilStreamNode_OfDouble>)truncateWithLong:(long long)arg1 withLong:(long long)arg2 withJavaUtilFunctionIntFunction:(id <JavaUtilFunctionIntFunction>)arg3;
- (void)copyIntoWithNSObjectArray:(IOSObjectArray *)arg1 withInt:(int)arg2;
- (void)forEachWithJavaUtilFunctionConsumer:(id <JavaUtilFunctionConsumer>)arg1;
@end

