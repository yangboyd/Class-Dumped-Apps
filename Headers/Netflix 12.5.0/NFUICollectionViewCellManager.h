//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NFUICollectionViewCellManagerProtocol-Protocol.h"
#import "NFUIReusableViewDelegatesProtocol-Protocol.h"

@class LolomoListViewModel, NFUICollectionViewCellManagerSizeCache, NFUICollectionViewCellManagerViewModelCache, NFUIReusableViewManager, NSString, UICollectionView, UIViewController;
@protocol NFUICollectionViewCellManagerDelegate;

@interface NFUICollectionViewCellManager : NSObject <NFUICollectionViewCellManagerProtocol, NFUIReusableViewDelegatesProtocol>
{
    UICollectionView *_delegateCollectionView;
    LolomoListViewModel *delegateListViewModel;
    UIViewController *delegateViewController;
    CDUnknownBlockType dequeueBlock;
    CDUnknownBlockType vmBlock;
    CDUnknownBlockType sizeBlock;
    CDUnknownBlockType prefetchFilterBlock;
    id <NFUICollectionViewCellManagerDelegate> _delegate;
    NFUICollectionViewCellManagerSizeCache *_sizeCache;
    NFUICollectionViewCellManagerViewModelCache *_viewModelCache;
    NFUIReusableViewManager *_viewManager;
}

+ (void)registerCell:(id)arg1 forTypes:(id)arg2 withClass:(Class)arg3 withPriority:(long long)arg4;
+ (void)registerCell:(id)arg1 forTypes:(id)arg2 withClass:(Class)arg3;
+ (void)registerCell:(id)arg1 forType:(id)arg2 withClass:(Class)arg3 withPriority:(long long)arg4;
+ (void)registerCell:(id)arg1 forType:(id)arg2 withClass:(Class)arg3;
+ (id)generateReusableViewObject:(id)arg1;
+ (void)registerCell:(id)arg1;
@property(retain, nonatomic) NFUIReusableViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) NFUICollectionViewCellManagerViewModelCache *viewModelCache; // @synthesize viewModelCache=_viewModelCache;
@property(retain, nonatomic) NFUICollectionViewCellManagerSizeCache *sizeCache; // @synthesize sizeCache=_sizeCache;
@property(retain, nonatomic) id <NFUICollectionViewCellManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType prefetchFilterBlock; // @synthesize prefetchFilterBlock;
@property(copy, nonatomic) CDUnknownBlockType sizeBlock; // @synthesize sizeBlock;
@property(copy, nonatomic) CDUnknownBlockType vmBlock; // @synthesize vmBlock;
@property(copy, nonatomic) CDUnknownBlockType dequeueBlock; // @synthesize dequeueBlock;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController;
@property(nonatomic) __weak LolomoListViewModel *delegateListViewModel; // @synthesize delegateListViewModel;
- (void).cxx_destruct;
- (struct CGSize)cellSizeForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3;
- (id)configureCellWithViewModel:(id)arg1 withModel:(id)arg2 forIndexPath:(id)arg3 forKind:(id)arg4;
- (id)cellForModel:(id)arg1 forIndexPath:(id)arg2 forKind:(id)arg3;
- (void)startPrefetch;
@property(nonatomic) __weak UICollectionView *delegateCollectionView; // @synthesize delegateCollectionView=_delegateCollectionView;
- (void)registerCellsWithDistinctListTypes:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

