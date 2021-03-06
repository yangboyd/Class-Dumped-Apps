//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

#import <FBSharedFramework/IGGridItemPositionProvider-Protocol.h>
#import <FBSharedFramework/IGListCollectionViewLayoutCompatible-Protocol.h>

@class NSString;
@protocol IGCollectionViewLayoutDataSource;

@interface IGWaterfallCollectionViewLayout : UICollectionViewLayout <IGGridItemPositionProvider, IGListCollectionViewLayoutCompatible>
{
    id <IGCollectionViewLayoutDataSource> _dataSource;
    struct unordered_map<std::__1::pair<long, long>, IGWaterfallLayoutCachedItem, std::__1::hash<IGWaterfallIndexPath>, std::__1::equal_to<std::__1::pair<long, long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<long, long>, IGWaterfallLayoutCachedItem>>> _cachedItems;
    struct set<std::__1::pair<long, long>, std::__1::less<std::__1::pair<long, long>>, std::__1::allocator<std::__1::pair<long, long>>> _cachedIndexPaths;
    long long _leadingModifiedSection;
    long long _layoutStyle;
    struct IGGridLayoutConfiguration _layoutConfig;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) struct IGGridLayoutConfiguration layoutConfig; // @synthesize layoutConfig=_layoutConfig;
- (CDStruct_4bcfbbae)positionForItemAtIndexPath:(id)arg1;
- (void)didModifySection:(long long)arg1;
- (void)_rebuildCacheAsNeededToExposeIndexPath:(id)arg1;
- (struct CGRect)_cellFrameForItemAtIndexPath:(id)arg1;
- (struct CGSize)_cellSizeForItemAtIndexPath:(id)arg1;
- (long long)_totalItemCount;
- (long long)_totalItemCountInSection:(long long)arg1;
- (long long)_totalSectionCount;
- (void)_cacheItem:(struct IGWaterfallLayoutCachedItem)arg1 atIndexPath:(id)arg2;
- (struct IGWaterfallLayoutCachedItem *)_cachedItemAtIndexPath:(id)arg1;
- (id)_cachedIndexPathPrecedingIndexPath:(id)arg1;
- (void)_clearLayoutCacheFromSection:(id)arg1;
- (void)_clearLayoutCacheAtIndexPaths:(id)arg1;
- (void)_clearLayoutCache;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutWithContext:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)initWithDataSource:(id)arg1 layoutConfiguration:(struct IGGridLayoutConfiguration)arg2 layoutStyle:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

