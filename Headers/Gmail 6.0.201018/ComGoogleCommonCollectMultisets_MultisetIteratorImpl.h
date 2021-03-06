//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JavaUtilIterator-Protocol.h"

@class NSString;
@protocol ComGoogleCommonCollectMultiset, ComGoogleCommonCollectMultiset_Entry, JavaUtilIterator;

@interface ComGoogleCommonCollectMultisets_MultisetIteratorImpl : NSObject <JavaUtilIterator>
{
    id <ComGoogleCommonCollectMultiset> multiset_;
    id <JavaUtilIterator> entryIterator_;
    id <ComGoogleCommonCollectMultiset_Entry> currentEntry_;
    int laterCount_;
    int totalCount_;
    _Bool canRemove_;
}

- (void)dealloc;
- (void)forEachRemainingWithJavaUtilFunctionConsumer:(id)arg1;
- (void)remove;
- (id)next;
- (_Bool)hasNext;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

