//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilStreamReduceOps_AccumulatingSink-Protocol.h"
#import "JavaUtilStreamSink_OfLong-Protocol.h"

@class NSString;
@protocol JavaUtilFunctionLongBinaryOperator;

@interface JavaUtilStreamReduceOps_8ReducingSink : NSObject <JavaUtilStreamReduceOps_AccumulatingSink, JavaUtilStreamSink_OfLong>
{
    long long val$identity_;
    id <JavaUtilFunctionLongBinaryOperator> val$operator_;
    long long state_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionLongConsumer:(id)arg1;
- (id)andThenWithJavaUtilFunctionConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (void)acceptWithDouble:(double)arg1;
- (void)acceptWithInt:(int)arg1;
- (_Bool)cancellationRequested;
- (void)end;
- (void)combineWithJavaUtilStreamReduceOps_AccumulatingSink:(id)arg1;
- (id)get;
- (void)acceptWithLong:(long long)arg1;
- (void)beginWithLong:(long long)arg1;
- (id)initWithLong:(long long)arg1 withJavaUtilFunctionLongBinaryOperator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

