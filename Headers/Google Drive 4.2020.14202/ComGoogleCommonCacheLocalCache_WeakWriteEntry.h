//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCacheLocalCache_WeakEntry.h"

@protocol ComGoogleCommonCacheReferenceEntry;

@interface ComGoogleCommonCacheLocalCache_WeakWriteEntry : ComGoogleCommonCacheLocalCache_WeakEntry
{
    // Error parsing type: Aq, name: writeTime_
    id <ComGoogleCommonCacheReferenceEntry> nextWrite_;
    id <ComGoogleCommonCacheReferenceEntry> previousWrite_;
}

- (void)dealloc;
- (void)setPreviousInWriteQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getPreviousInWriteQueue;
- (void)setNextInWriteQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getNextInWriteQueue;
- (void)setWriteTimeWithLong:(long long)arg1;
- (long long)getWriteTime;
- (id)initWithJavaLangRefReferenceQueue:(id)arg1 withId:(id)arg2 withInt:(int)arg3 withComGoogleCommonCacheReferenceEntry:(id)arg4;

@end

