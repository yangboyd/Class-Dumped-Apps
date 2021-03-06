//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListUpdatingDelegate-Protocol.h"

@class IGListBatchUpdateData, IGListBatchUpdates, NSArray, NSMutableArray, NSString;
@protocol IGListAdapterUpdaterDelegate;

@interface IGListAdapterUpdater : NSObject <IGListUpdatingDelegate>
{
    _Bool _movesAsDeletesInserts;
    _Bool _singleItemSectionUpdates;
    _Bool _preferItemReloadsForSectionReloads;
    _Bool _allowsBackgroundReloading;
    _Bool _queuedUpdateIsAnimated;
    _Bool _queuedReloadData;
    id <IGListAdapterUpdaterDelegate> _delegate;
    long long _experiments;
    NSArray *_fromObjects;
    CDUnknownBlockType _toObjectsBlock;
    NSArray *_pendingTransitionToObjects;
    NSMutableArray *_completionBlocks;
    IGListBatchUpdates *_batchUpdates;
    CDUnknownBlockType _objectTransitionBlock;
    CDUnknownBlockType _reloadUpdates;
    long long _state;
    IGListBatchUpdateData *_applyingUpdateData;
}

@property(retain, nonatomic) IGListBatchUpdateData *applyingUpdateData; // @synthesize applyingUpdateData=_applyingUpdateData;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic, getter=hasQueuedReloadData) _Bool queuedReloadData; // @synthesize queuedReloadData=_queuedReloadData;
@property(copy, nonatomic) CDUnknownBlockType reloadUpdates; // @synthesize reloadUpdates=_reloadUpdates;
@property(copy, nonatomic) CDUnknownBlockType objectTransitionBlock; // @synthesize objectTransitionBlock=_objectTransitionBlock;
@property(retain, nonatomic) IGListBatchUpdates *batchUpdates; // @synthesize batchUpdates=_batchUpdates;
@property(nonatomic) _Bool queuedUpdateIsAnimated; // @synthesize queuedUpdateIsAnimated=_queuedUpdateIsAnimated;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(copy, nonatomic) NSArray *pendingTransitionToObjects; // @synthesize pendingTransitionToObjects=_pendingTransitionToObjects;
@property(copy, nonatomic) CDUnknownBlockType toObjectsBlock; // @synthesize toObjectsBlock=_toObjectsBlock;
@property(copy, nonatomic) NSArray *fromObjects; // @synthesize fromObjects=_fromObjects;
@property(nonatomic) long long experiments; // @synthesize experiments=_experiments;
@property(nonatomic) _Bool allowsBackgroundReloading; // @synthesize allowsBackgroundReloading=_allowsBackgroundReloading;
@property(nonatomic) _Bool preferItemReloadsForSectionReloads; // @synthesize preferItemReloadsForSectionReloads=_preferItemReloadsForSectionReloads;
@property(nonatomic) _Bool singleItemSectionUpdates; // @synthesize singleItemSectionUpdates=_singleItemSectionUpdates;
@property(nonatomic) _Bool movesAsDeletesInserts; // @synthesize movesAsDeletesInserts=_movesAsDeletesInserts;
@property(nonatomic) __weak id <IGListAdapterUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)reloadDataWithCollectionViewBlock:(CDUnknownBlockType)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveSectionInCollectionView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)performUpdateWithCollectionViewBlock:(CDUnknownBlockType)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionViewBlock:(CDUnknownBlockType)arg1 fromObjects:(id)arg2 toObjectsBlock:(CDUnknownBlockType)arg3 animated:(_Bool)arg4 objectTransitionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)objectLookupPointerFunctions;
- (void)_queueUpdateWithCollectionViewBlock:(CDUnknownBlockType)arg1;
- (void)_cleanStateAfterUpdates;
- (void)cleanStateBeforeUpdates;
- (void)_performBatchUpdatesItemBlockApplied;
- (void)_beginPerformBatchUpdatesToObjects:(id)arg1;
- (void)performBatchUpdatesWithCollectionViewBlock:(CDUnknownBlockType)arg1;
- (void)performReloadDataWithCollectionViewBlock:(CDUnknownBlockType)arg1;
- (_Bool)hasChanges;
- (id)init;
- (id)debugDescriptionLines;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

