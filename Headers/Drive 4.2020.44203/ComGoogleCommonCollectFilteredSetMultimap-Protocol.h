//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleCommonCollectFilteredMultimap-Protocol.h"
#import "ComGoogleCommonCollectSetMultimap-Protocol.h"
#import "JavaObject-Protocol.h"

@protocol ComGoogleCommonCollectSetMultimap, JavaLangIterable, JavaUtilSet;

@protocol ComGoogleCommonCollectFilteredSetMultimap <ComGoogleCommonCollectFilteredMultimap, ComGoogleCommonCollectSetMultimap, JavaObject>
- (id <JavaUtilSet>)removeAllWithId:(id)arg1;
- (id <JavaUtilSet>)replaceValuesWithId:(id)arg1 withJavaLangIterable:(id <JavaLangIterable>)arg2;
- (id <JavaUtilSet>)entries;
- (id <JavaUtilSet>)getWithId:(id)arg1;
- (id <ComGoogleCommonCollectSetMultimap>)unfiltered;
@end

