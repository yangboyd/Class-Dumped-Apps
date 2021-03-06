//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@protocol JavaUtilComparator, JavaUtilFunctionFunction, JavaUtilFunctionToDoubleFunction, JavaUtilFunctionToIntFunction, JavaUtilFunctionToLongFunction;

@protocol JavaUtilComparator <JavaObject>
- (id <JavaUtilComparator>)thenComparingDoubleWithJavaUtilFunctionToDoubleFunction:(id <JavaUtilFunctionToDoubleFunction>)arg1;
- (id <JavaUtilComparator>)thenComparingLongWithJavaUtilFunctionToLongFunction:(id <JavaUtilFunctionToLongFunction>)arg1;
- (id <JavaUtilComparator>)thenComparingIntWithJavaUtilFunctionToIntFunction:(id <JavaUtilFunctionToIntFunction>)arg1;
- (id <JavaUtilComparator>)thenComparingWithJavaUtilFunctionFunction:(id <JavaUtilFunctionFunction>)arg1;
- (id <JavaUtilComparator>)thenComparingWithJavaUtilFunctionFunction:(id <JavaUtilFunctionFunction>)arg1 withJavaUtilComparator:(id <JavaUtilComparator>)arg2;
- (id <JavaUtilComparator>)thenComparingWithJavaUtilComparator:(id <JavaUtilComparator>)arg1;
- (id <JavaUtilComparator>)reversed;
- (_Bool)isEqual:(id)arg1;
- (int)compareWithId:(id)arg1 withId:(id)arg2;
@end

