//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPOIDetailTableViewCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSString, UICollectionView, UILabel, UIView;

@interface AWEPOIDetailTableViewRecommendDishesCell : AWEPOIDetailTableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIView *_headerContainerView;
    UILabel *_recommendDishesLabel;
    UICollectionView *_recommendedDishesCollectionView;
    NSArray *_recommendedDishes;
    struct CGSize _fittingSize;
}

+ (double)cellHeightForRecommendedDishes:(id)arg1;
+ (long long)p_numberOfLinesForRecommendedDishes:(id)arg1;
+ (id)p_filteredDishesForRecommendedDishes:(id)arg1;
@property(nonatomic) struct CGSize fittingSize; // @synthesize fittingSize=_fittingSize;
@property(retain, nonatomic) NSArray *recommendedDishes; // @synthesize recommendedDishes=_recommendedDishes;
@property(retain, nonatomic) UICollectionView *recommendedDishesCollectionView; // @synthesize recommendedDishesCollectionView=_recommendedDishesCollectionView;
@property(retain, nonatomic) UILabel *recommendDishesLabel; // @synthesize recommendDishesLabel=_recommendDishesLabel;
@property(retain, nonatomic) UIView *headerContainerView; // @synthesize headerContainerView=_headerContainerView;
- (void).cxx_destruct;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)p_setupCollectionView;
- (void)p_setupHeader;
- (void)setup;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

