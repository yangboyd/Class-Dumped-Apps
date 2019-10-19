//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCollectionVisibilityDelegate-Protocol.h"

@class ASCellNode, NSArray, NSSet, UICollectionViewCell;
@protocol YTSectionControllerProtocol;

@protocol YTSectionControllerDelegate <YTCollectionVisibilityDelegate>
@property(nonatomic) _Bool retainBottomContentOffsetOnInsert;
- (ASCellNode *)nodeForItemAtIndex:(long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (unsigned long long)numberOfSections;
- (NSSet *)selectedIndexesInSection:(id <YTSectionControllerProtocol>)arg1;
- (void)deselectItemAtIndex:(unsigned long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (void)selectItemAtIndex:(unsigned long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2 withScrollPosition:(unsigned long long)arg3;
- (void)selectItemAtIndex:(unsigned long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2 atScrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)scrollToTopOfSection:(id <YTSectionControllerProtocol>)arg1 animated:(_Bool)arg2;
- (long long)indexForSectionController:(id <YTSectionControllerProtocol>)arg1;
- (UICollectionViewCell *)cellForItemAtIndex:(long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (void)deleteItemsAtIndexes:(NSArray *)arg1 fromSection:(id <YTSectionControllerProtocol>)arg2;
- (void)insertItemsAtIndexes:(NSArray *)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (void)sectionControllerDidChange:(id <YTSectionControllerProtocol>)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (void)deleteSectionController:(id <YTSectionControllerProtocol>)arg1;
- (void)reloadCellsInSectionController:(id <YTSectionControllerProtocol>)arg1;
- (void)reloadSectionController:(id <YTSectionControllerProtocol>)arg1;
- (void)reloadData;
- (void)cancelPendingInteractiveUpdates;
- (void)reloadCellAtIndex:(long long)arg1 inSection:(id <YTSectionControllerProtocol>)arg2;
- (void)performBatchUpdates:(void (^)(void))arg1 completion:(void (^)(_Bool))arg2;
- (void)invalidateCollectionViewLayoutAnimated;
- (void)invalidateCollectionViewLayout;
- (struct CGSize)collectionViewSize;
- (int)scrollDirection;
- (struct CGSize)maxSizeAvailableForCollectionViewItems;
- (struct CGSize)availableSizeForCollectionViewItems;
@end

