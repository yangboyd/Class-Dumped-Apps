//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilConcurrentConcurrentHashMap_BulkTask.h"

@protocol JavaUtilFunctionBiFunction, JavaUtilFunctionFunction;

@interface JavaUtilConcurrentConcurrentHashMap_MapReduceValuesTask : JavaUtilConcurrentConcurrentHashMap_BulkTask
{
    id <JavaUtilFunctionFunction> transformer_;
    id <JavaUtilFunctionBiFunction> reducer_;
    id result_;
    JavaUtilConcurrentConcurrentHashMap_MapReduceValuesTask *rights_;
    JavaUtilConcurrentConcurrentHashMap_MapReduceValuesTask *nextRight_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (void)compute;
- (id)getRawResult;
- (id)initWithJavaUtilConcurrentConcurrentHashMap_BulkTask:(id)arg1 withInt:(int)arg2 withInt:(int)arg3 withInt:(int)arg4 withJavaUtilConcurrentConcurrentHashMap_NodeArray:(id)arg5 withJavaUtilConcurrentConcurrentHashMap_MapReduceValuesTask:(id)arg6 withJavaUtilFunctionFunction:(id)arg7 withJavaUtilFunctionBiFunction:(id)arg8;

@end

