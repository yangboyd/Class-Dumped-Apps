//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator_OfPrimitive.h"

#import "JavaUtilFunctionLongConsumer-Protocol.h"
#import "JavaUtilSpliterator_OfLong-Protocol.h"

@class NSString;

@interface JavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator_OfLong : JavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator_OfPrimitive <JavaUtilSpliterator_OfLong, JavaUtilFunctionLongConsumer>
{
    long long tmpValue_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (id)andThenWithJavaUtilFunctionLongConsumer:(id)arg1;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (id)makeSpliteratorWithJavaUtilSpliterator:(id)arg1;
- (id)bufferCreateWithInt:(int)arg1;
- (void)acceptConsumedWithId:(id)arg1;
- (void)acceptWithLong:(long long)arg1;
- (id)initWithJavaUtilSpliterator_OfLong:(id)arg1 withJavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator_OfLong:(id)arg2;
- (id)initWithJavaUtilSpliterator_OfLong:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

