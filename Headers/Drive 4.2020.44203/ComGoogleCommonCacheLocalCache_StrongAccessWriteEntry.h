//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCacheLocalCache_StrongEntry.h"

@protocol ComGoogleCommonCacheReferenceEntry;

@interface ComGoogleCommonCacheLocalCache_StrongAccessWriteEntry : ComGoogleCommonCacheLocalCache_StrongEntry
{
    // Error parsing type: Aq, name: accessTime_
    id <ComGoogleCommonCacheReferenceEntry> nextAccess_;
    id <ComGoogleCommonCacheReferenceEntry> previousAccess_;
    // Error parsing type: Aq, name: writeTime_
    id <ComGoogleCommonCacheReferenceEntry> nextWrite_;
    id <ComGoogleCommonCacheReferenceEntry> previousWrite_;
}

- (void)__javaClone:(id)arg1;
- (void)setPreviousInWriteQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getPreviousInWriteQueue;
- (void)setNextInWriteQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getNextInWriteQueue;
- (void)setWriteTimeWithLong:(long long)arg1;
- (long long)getWriteTime;
- (void)setPreviousInAccessQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getPreviousInAccessQueue;
- (void)setNextInAccessQueueWithComGoogleCommonCacheReferenceEntry:(id)arg1;
- (id)getNextInAccessQueue;
- (void)setAccessTimeWithLong:(long long)arg1;
- (long long)getAccessTime;
- (id)initWithId:(id)arg1 withInt:(int)arg2 withComGoogleCommonCacheReferenceEntry:(id)arg3;

@end

