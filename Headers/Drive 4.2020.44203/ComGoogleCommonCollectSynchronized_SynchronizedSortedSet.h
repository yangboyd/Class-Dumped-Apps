//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedSet.h"

#import "JavaUtilSortedSet-Protocol.h"

@class NSString;

@interface ComGoogleCommonCollectSynchronized_SynchronizedSortedSet : ComGoogleCommonCollectSynchronized_SynchronizedSet <JavaUtilSortedSet>
{
}

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)last;
- (id)first;
- (id)tailSetWithId:(id)arg1;
- (id)headSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)comparator;
- (id)delegate;
- (id)initWithJavaUtilSortedSet:(id)arg1 withId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

