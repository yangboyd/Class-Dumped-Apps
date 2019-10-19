//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol SPTYourLibraryMusicRangeDataLoaderDelegate;

@protocol SPTYourLibraryMusicRangeDataLoader <NSObject>
@property(readonly, nonatomic) NSArray *sectionIndices;
@property(readonly, nonatomic) unsigned long long totalNumberOfItems;
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate;
- (void)loadItemsForRange:(struct _NSRange)arg1 sortRules:(NSArray *)arg2 filterRules:(NSArray *)arg3 textFilter:(NSString *)arg4;
@end

