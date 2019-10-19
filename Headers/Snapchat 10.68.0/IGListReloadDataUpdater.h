//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListUpdatingDelegate-Protocol.h"

@class NSString;

@interface IGListReloadDataUpdater : NSObject <IGListUpdatingDelegate>
{
}

- (void)_synchronousReloadDataWithCollectionView:(id)arg1;
- (void)reloadCollectionView:(id)arg1 sections:(id)arg2;
- (void)reloadDataWithCollectionView:(id)arg1 reloadUpdateBlock:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)moveSectionInCollectionView:(id)arg1 fromIndex:(long long)arg2 toIndex:(long long)arg3;
- (void)_reloadItemsInCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)reloadItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)moveItemInCollectionView:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)deleteItemsFromCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)insertItemsIntoCollectionView:(id)arg1 indexPaths:(id)arg2;
- (void)performUpdateWithCollectionView:(id)arg1 animated:(_Bool)arg2 itemUpdates:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)performUpdateWithCollectionView:(id)arg1 fromObjects:(id)arg2 toObjects:(id)arg3 animated:(_Bool)arg4 objectTransitionBlock:(CDUnknownBlockType)arg5 completion:(CDUnknownBlockType)arg6;
- (id)objectLookupPointerFunctions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

