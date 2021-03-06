//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMESetupCollectionViewModel-Protocol.h"
#import "MDCCollectionViewStylingDelegate-Protocol.h"

@class HMESetupCollectionLayoutViewController, NSArray, NSString, UICollectionView;

@interface HMEConciergeModuleViewModel : NSObject <HMESetupCollectionViewModel, MDCCollectionViewStylingDelegate>
{
    HMESetupCollectionLayoutViewController *_parent;
    NSArray *_sections;
}

@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(nonatomic) __weak HMESetupCollectionLayoutViewController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (double)collectionView:(id)arg1 layout:(id)arg2 heightForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)registerCellsOnCollectionView:(id)arg1;
- (double)collectionView:(id)arg1 sectionLayout:(id)arg2 heightForItemAtIndexPath:(id)arg3;
- (void)renderCell:(id)arg1 withItemAtIndexPath:(id)arg2;
- (id)itemAtIndexPath:(id)arg1;

// Remaining properties
@property(nonatomic) __weak UICollectionView *collectionView;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

