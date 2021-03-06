//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class A9VSFezCollectionPickerDataSource, A9VSFezProduct, NSArray, NSLayoutConstraint, NSMutableArray, NSString, UICollectionView, UILabel;
@protocol A9VSFezProductCollectionCellDelegate;

@interface A9VSFezProductCollectionsCell : UICollectionViewCell <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <A9VSFezProductCollectionCellDelegate> _delegate;
    NSArray *_flatProductList;
    NSMutableArray *_visibilityArray;
    UILabel *_productTitleLabel;
    UICollectionView *_addCollectionsCollectionView;
    A9VSFezCollectionPickerDataSource *_dataSource;
    NSString *_sessionType;
    NSLayoutConstraint *_productTitleLabelHeightConstraint;
    A9VSFezProduct *_pickedProduct;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) A9VSFezProduct *pickedProduct; // @synthesize pickedProduct=_pickedProduct;
@property(retain, nonatomic) NSLayoutConstraint *productTitleLabelHeightConstraint; // @synthesize productTitleLabelHeightConstraint=_productTitleLabelHeightConstraint;
@property(retain, nonatomic) NSString *sessionType; // @synthesize sessionType=_sessionType;
@property(nonatomic) __weak A9VSFezCollectionPickerDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UICollectionView *addCollectionsCollectionView; // @synthesize addCollectionsCollectionView=_addCollectionsCollectionView;
@property(retain, nonatomic) UILabel *productTitleLabel; // @synthesize productTitleLabel=_productTitleLabel;
@property(retain, nonatomic) NSMutableArray *visibilityArray; // @synthesize visibilityArray=_visibilityArray;
@property(readonly, nonatomic) NSArray *flatProductList; // @synthesize flatProductList=_flatProductList;
@property(nonatomic) __weak id <A9VSFezProductCollectionCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)sendRoomDecoratorComplementAddSheetScrolledMetrics;
- (void)makePositionVisible:(long long)arg1;
- (void)computeVisibility:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)didSelectProduct:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)scrollToTheBeginningOfCollection;
- (void)configureWithDataSource:(id)arg1 titleText:(id)arg2;
- (void)prepareForReuse;
- (void)tuneLayout;
- (double)paddingOffset;
- (void)setUpLayout;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)setupFlatProductList;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

