//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEFullWidthSectionLayoutDelegate-Protocol.h"
#import "HMESectionedCollectionViewLayoutDelegate-Protocol.h"
#import "NSObject-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class HMESetupCollectionLayoutViewController, UICollectionView;

@protocol HMESetupCollectionViewModel <NSObject, UICollectionViewDataSource, UICollectionViewDelegate, HMEFullWidthSectionLayoutDelegate, HMESectionedCollectionViewLayoutDelegate>
- (void)registerCellsOnCollectionView:(UICollectionView *)arg1;
@property(nonatomic) __weak HMESetupCollectionLayoutViewController *parent;

@optional
@property(nonatomic) __weak UICollectionView *collectionView;
@end

