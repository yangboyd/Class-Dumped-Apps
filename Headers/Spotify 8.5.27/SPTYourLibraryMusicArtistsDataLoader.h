//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicRangeDataLoader-Protocol.h"

@class NSArray, NSString;
@protocol SPTCollectionPlatformDataLoader, SPTCollectionPlatformDataLoaderRequestToken, SPTSortingFilteringSortRule, SPTYourLibraryMusicRangeDataLoaderDelegate;

@interface SPTYourLibraryMusicArtistsDataLoader : NSObject <SPTYourLibraryMusicRangeDataLoader>
{
    id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    unsigned long long _artistFilter;
    id <SPTSortingFilteringSortRule> _sortRuleOverride;
    unsigned long long _totalNumberOfItems;
    NSArray *_sectionIndices;
    id <SPTCollectionPlatformDataLoaderRequestToken> _subscription;
}

@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSArray *sectionIndices; // @synthesize sectionIndices=_sectionIndices;
@property(nonatomic) unsigned long long totalNumberOfItems; // @synthesize totalNumberOfItems=_totalNumberOfItems;
@property(readonly, nonatomic) id <SPTSortingFilteringSortRule> sortRuleOverride; // @synthesize sortRuleOverride=_sortRuleOverride;
@property(readonly, nonatomic) unsigned long long artistFilter; // @synthesize artistFilter=_artistFilter;
@property(readonly, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(nonatomic) __weak id <SPTYourLibraryMusicRangeDataLoaderDelegate> rangeDataLoaderDelegate; // @synthesize rangeDataLoaderDelegate;
- (void).cxx_destruct;
- (void)loadItemsForRange:(struct _NSRange)arg1 sortRules:(id)arg2 filterRules:(id)arg3 textFilter:(id)arg4;
- (id)initWithCollectionDataLoader:(id)arg1 artistFilter:(unsigned long long)arg2 sortRuleOverride:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

