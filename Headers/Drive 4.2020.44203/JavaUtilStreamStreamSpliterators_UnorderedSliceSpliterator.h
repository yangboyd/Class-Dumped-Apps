//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JavaUtilConcurrentAtomicAtomicLong;
@protocol JavaUtilSpliterator;

@interface JavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator : NSObject
{
    id <JavaUtilSpliterator> s_;
    _Bool unlimited_;
    long long skipThreshold_;
    JavaUtilConcurrentAtomicAtomicLong *permits_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (int)characteristics;
- (long long)estimateSize;
- (id)makeSpliteratorWithJavaUtilSpliterator:(id)arg1;
- (id)trySplit;
- (id)permitStatus;
- (long long)acquirePermitsWithLong:(long long)arg1;
- (id)initWithJavaUtilSpliterator:(id)arg1 withJavaUtilStreamStreamSpliterators_UnorderedSliceSpliterator:(id)arg2;
- (id)initWithJavaUtilSpliterator:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3;

@end

