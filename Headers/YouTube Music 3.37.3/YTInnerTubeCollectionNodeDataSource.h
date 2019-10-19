//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ELMCollectionNodeDataSource-Protocol.h"
#import "YTSectionControllerDelegate-Protocol.h"

@class ASCollectionNode, GIMMe, NSMapTable, NSMutableArray, NSString, YTInnerTubeCollectionNodeStatusSection, YTInnerTubeControllerFactory, YTInnerTubeFeedControllerDataSource;
@protocol ELMCollectionNodeDataSourceDelegate, ELMContext, YTInnerTubeCollectionNodeDataSourceDelegate, YTInnerTubeUIService, YTResponder;

@interface YTInnerTubeCollectionNodeDataSource : NSObject <YTSectionControllerDelegate, ELMCollectionNodeDataSource>
{
    id <YTInnerTubeUIService> _service;
    id <YTResponder> _parentResponder;
    YTInnerTubeFeedControllerDataSource *_dataSource;
    NSMutableArray *_contents;
    NSMapTable *_sectionMap;
    YTInnerTubeCollectionNodeStatusSection *_statusSection;
    YTInnerTubeControllerFactory *_controllerFactory;
    id <ELMContext> _context;
    id <ELMCollectionNodeDataSourceDelegate> _delegate;
    GIMMe *_gimme;
    id <YTInnerTubeCollectionNodeDataSourceDelegate> _dataSourceDelegate;
    ASCollectionNode *_collectionNode;
}

@property(nonatomic) __weak ASCollectionNode *collectionNode; // @synthesize collectionNode=_collectionNode;
@property(nonatomic) __weak id <YTInnerTubeCollectionNodeDataSourceDelegate> dataSourceDelegate; // @synthesize dataSourceDelegate=_dataSourceDelegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(nonatomic) __weak id <ELMCollectionNodeDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setShouldUpdateSection:(id)arg1;
- (void)setShouldUpdateSections;
- (id)indexPathWithSection:(id)arg1 index:(long long)arg2;
- (void)appendContents:(id)arg1;
- (void)setActivityIndicatorVisible:(_Bool)arg1;
- (id)selectedIndexesInSection:(id)arg1;
- (void)selectItemAtIndex:(unsigned long long)arg1 inSection:(id)arg2 withScrollPosition:(unsigned long long)arg3;
- (void)selectItemAtIndex:(unsigned long long)arg1 inSection:(id)arg2;
- (void)sectionControllerDidChange:(id)arg1;
- (void)scrollToTopOfSection:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 inSection:(id)arg2 atScrollPosition:(unsigned long long)arg3 animated:(_Bool)arg4;
- (int)scrollDirection;
- (void)reloadSectionController:(id)arg1;
- (void)reloadData;
- (void)cancelPendingInteractiveUpdates;
- (void)reloadCellsInSectionController:(id)arg1;
- (void)reloadCellAtIndex:(long long)arg1 inSection:(id)arg2;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nodeForItemAtIndex:(long long)arg1 inSection:(id)arg2;
- (struct CGSize)maxSizeAvailableForCollectionViewItems;
- (void)invalidateCollectionViewLayoutAnimated;
- (void)invalidateCollectionViewLayout;
- (void)insertItemsAtIndexes:(id)arg1 inSection:(id)arg2;
- (long long)indexForSectionController:(id)arg1;
- (void)deselectItemAtIndex:(unsigned long long)arg1 inSection:(id)arg2;
- (void)deleteSectionController:(id)arg1;
- (void)deleteItemsAtIndexes:(id)arg1 fromSection:(id)arg2;
- (struct CGSize)collectionViewSize;
- (id)cellForItemAtIndex:(long long)arg1 inSection:(id)arg2;
- (struct CGSize)availableSizeForCollectionViewItems;
- (id)visibleSupplementaryViewIndexPaths;
- (id)visibleCellIndexPaths;
@property(nonatomic) _Bool retainBottomContentOffsetOnInsert;
- (void)reload;
- (_Bool)canReload;
- (void)fetchMoreSections;
- (_Bool)canFetchMoreSections;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (id)fetchIndicatorSection;
- (unsigned long long)numberOfSections;
- (void)setInnerTubeFeedControllerDataSource:(id)arg1;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2 context:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

