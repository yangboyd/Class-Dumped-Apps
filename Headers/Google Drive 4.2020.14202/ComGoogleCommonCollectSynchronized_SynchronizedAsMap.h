//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectSynchronized_SynchronizedMap.h"

@protocol JavaUtilCollection, JavaUtilSet;

@interface ComGoogleCommonCollectSynchronized_SynchronizedAsMap : ComGoogleCommonCollectSynchronized_SynchronizedMap
{
    id <JavaUtilSet> asMapEntrySet_;
    id <JavaUtilCollection> asMapValues_;
}

- (void)dealloc;
- (_Bool)containsValueWithId:(id)arg1;
- (id)values;
- (id)entrySet;
- (id)getWithId:(id)arg1;

@end

