//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilSpliterator-Protocol.h"

@class JavaUtilConcurrentConcurrentLinkedDeque, JavaUtilConcurrentConcurrentLinkedDeque_Node, NSString;

@interface JavaUtilConcurrentConcurrentLinkedDeque_CLDSpliterator : NSObject <JavaUtilSpliterator>
{
    JavaUtilConcurrentConcurrentLinkedDeque *queue_;
    JavaUtilConcurrentConcurrentLinkedDeque_Node *current_;
    int batch_;
    _Bool exhausted_;
}

+ (const struct J2ObjcClassInfo *)__metadata;
- (void)dealloc;
- (id)getComparator;
- (_Bool)hasCharacteristicsWithInt:(int)arg1;
- (long long)getExactSizeIfKnown;
- (int)characteristics;
- (long long)estimateSize;
- (_Bool)tryAdvanceWithJavaUtilFunctionConsumer:(id)arg1;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (id)trySplit;
- (id)initWithJavaUtilConcurrentConcurrentLinkedDeque:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

