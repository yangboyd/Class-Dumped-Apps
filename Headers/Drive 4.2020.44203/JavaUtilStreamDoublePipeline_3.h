//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamIntPipeline_StatelessOp.h"

@protocol JavaUtilFunctionDoubleToIntFunction;

@interface JavaUtilStreamDoublePipeline_3 : JavaUtilStreamIntPipeline_StatelessOp
{
    id <JavaUtilFunctionDoubleToIntFunction> val$mapper_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)opWrapSinkWithInt:(int)arg1 withJavaUtilStreamSink:(id)arg2;
- (id)initWithJavaUtilFunctionDoubleToIntFunction:(id)arg1 withJavaUtilStreamAbstractPipeline:(id)arg2 withJavaUtilStreamStreamShape:(id)arg3 withInt:(int)arg4;

@end

