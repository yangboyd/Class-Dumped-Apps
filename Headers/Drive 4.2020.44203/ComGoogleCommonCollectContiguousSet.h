//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectImmutableSortedSet.h"

@class ComGoogleCommonCollectDiscreteDomain;

@interface ComGoogleCommonCollectContiguousSet : ComGoogleCommonCollectImmutableSortedSet
{
    ComGoogleCommonCollectDiscreteDomain *domain_;
}

+ (id)builder;
+ (id)closedOpenWithLong:(long long)arg1 withLong:(long long)arg2;
+ (id)closedOpenWithInt:(int)arg1 withInt:(int)arg2;
+ (id)closedWithLong:(long long)arg1 withLong:(long long)arg2;
+ (id)closedWithInt:(int)arg1 withInt:(int)arg2;
+ (id)createWithComGoogleCommonCollectRange:(id)arg1 withComGoogleCommonCollectDiscreteDomain:(id)arg2;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)description;
- (id)createDescendingSet;
- (id)tailSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)tailSetWithId:(id)arg1;
- (id)subSetWithId:(id)arg1 withBoolean:(_Bool)arg2 withId:(id)arg3 withBoolean:(_Bool)arg4;
- (id)subSetWithId:(id)arg1 withId:(id)arg2;
- (id)headSetWithId:(id)arg1 withBoolean:(_Bool)arg2;
- (id)headSetWithId:(id)arg1;
- (id)initWithComGoogleCommonCollectDiscreteDomain:(id)arg1;

@end

