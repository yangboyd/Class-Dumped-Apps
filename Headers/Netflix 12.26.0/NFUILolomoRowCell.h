//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "NFUILolomoRowCell-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSString, UICollectionView, UICollectionViewFlowLayout;
@protocol NFUILolomoListViewModelProtocol;

@interface NFUILolomoRowCell : UICollectionViewCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, NFUILolomoRowCell>
{
    id <NFUILolomoListViewModelProtocol> viewModel;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewFlowLayout;
}

@property(nonatomic) __weak UICollectionViewFlowLayout *collectionViewFlowLayout; // @synthesize collectionViewFlowLayout=_collectionViewFlowLayout;
@property(nonatomic) __weak UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) id <NFUILolomoListViewModelProtocol> viewModel; // @synthesize viewModel;
- (void).cxx_destruct;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)itemReuseIdentifier;
- (Class)itemClass;
- (id)collectionView:(id)arg1 itemAtIndexPath:(id)arg2;
- (void)configureWithViewModel:(id)arg1;
- (void)viewInitialized:(_Bool)arg1;
- (id)newCollectionFlowLayout;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

