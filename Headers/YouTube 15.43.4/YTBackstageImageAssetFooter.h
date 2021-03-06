//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

#import <Module_Framework/UICollectionViewDataSource-Protocol.h>

@class FLXLayout, NSString, UICollectionView, YTLabel;

@interface YTBackstageImageAssetFooter : UICollectionReusableView <UICollectionViewDataSource>
{
    FLXLayout *_layout;
    double _minimumItemSpacing;
    double _numberOfColumns;
    UICollectionView *_collectionView;
    YTLabel *_emptyStateTitle;
    YTLabel *_emptyStateDetails;
}

- (void).cxx_destruct;
@property(retain, nonatomic) YTLabel *emptyStateDetails; // @synthesize emptyStateDetails=_emptyStateDetails;
@property(retain, nonatomic) YTLabel *emptyStateTitle; // @synthesize emptyStateTitle=_emptyStateTitle;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) double numberOfColumns; // @synthesize numberOfColumns=_numberOfColumns;
@property(nonatomic) double minimumItemSpacing; // @synthesize minimumItemSpacing=_minimumItemSpacing;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)layoutSubviews;
- (id)root;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

