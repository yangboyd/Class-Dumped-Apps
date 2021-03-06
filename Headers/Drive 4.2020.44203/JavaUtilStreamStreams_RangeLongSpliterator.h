//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilSpliterator_OfLong-Protocol.h"

@class NSString;

@interface JavaUtilStreamStreams_RangeLongSpliterator : NSObject <JavaUtilSpliterator_OfLong>
{
    long long from_;
    long long upTo_;
    int last_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (_Bool)hasCharacteristicsWithInt:(int)arg1;
- (long long)getExactSizeIfKnown;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (long long)splitPointWithLong:(long long)arg1;
- (id)trySplit;
- (id)getComparator;
- (int)characteristics;
- (long long)estimateSize;
- (void)forEachRemainingWithId:(id)arg1;
- (_Bool)tryAdvanceWithId:(id)arg1;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withInt:(int)arg3;
- (id)initWithLong:(long long)arg1 withLong:(long long)arg2 withBoolean:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

