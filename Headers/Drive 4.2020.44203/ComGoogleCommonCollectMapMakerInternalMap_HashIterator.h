//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class ComGoogleCommonCollectMapMakerInternalMap, ComGoogleCommonCollectMapMakerInternalMap_Segment, ComGoogleCommonCollectMapMakerInternalMap_WriteThroughEntry, JavaUtilConcurrentAtomicAtomicReferenceArray, NSString;
@protocol ComGoogleCommonCollectMapMakerInternalMap_InternalEntry;

@interface ComGoogleCommonCollectMapMakerInternalMap_HashIterator : NSObject <JavaUtilIterator>
{
    int nextSegmentIndex_;
    int nextTableIndex_;
    ComGoogleCommonCollectMapMakerInternalMap_Segment *currentSegment_;
    JavaUtilConcurrentAtomicAtomicReferenceArray *currentTable_;
    id <ComGoogleCommonCollectMapMakerInternalMap_InternalEntry> nextEntry_;
    ComGoogleCommonCollectMapMakerInternalMap_WriteThroughEntry *nextExternal_;
    ComGoogleCommonCollectMapMakerInternalMap_WriteThroughEntry *lastReturned_;
    ComGoogleCommonCollectMapMakerInternalMap *this$0_;
}

- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (void)remove;
- (id)nextEntry;
- (_Bool)hasNext;
- (_Bool)advanceToWithComGoogleCommonCollectMapMakerInternalMap_InternalEntry:(id)arg1;
- (_Bool)nextInTable;
- (_Bool)nextInChain;
- (void)advance;
- (id)initWithComGoogleCommonCollectMapMakerInternalMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

