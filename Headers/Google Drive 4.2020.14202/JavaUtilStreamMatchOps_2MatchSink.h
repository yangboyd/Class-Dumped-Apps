//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamMatchOps_BooleanTerminalSink.h"

#import "JavaUtilStreamSink_OfInt-Protocol.h"

@class JavaUtilStreamMatchOps_MatchKind, NSString;
@protocol JavaUtilFunctionIntPredicate;

@interface JavaUtilStreamMatchOps_2MatchSink : JavaUtilStreamMatchOps_BooleanTerminalSink <JavaUtilStreamSink_OfInt>
{
    JavaUtilStreamMatchOps_MatchKind *val$matchKind_;
    id <JavaUtilFunctionIntPredicate> val$predicate_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)andThenWithJavaUtilFunctionIntConsumer:(id)arg1;
- (void)acceptWithId:(id)arg1;
- (void)acceptWithInt:(int)arg1;
- (id)initWithJavaUtilStreamMatchOps_MatchKind:(id)arg1 withJavaUtilFunctionIntPredicate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

