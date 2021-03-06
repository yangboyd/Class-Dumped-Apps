//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Funny/NSObject-Protocol.h>

@class MDCInkTouchController, MDCInkView, NSArray, NSIndexPath, UICollectionView, UIColor;

@protocol MDCCollectionViewStylingDelegate <NSObject>

@optional
- (MDCInkView *)collectionView:(UICollectionView *)arg1 inkTouchController:(MDCInkTouchController *)arg2 inkViewAtIndexPath:(NSIndexPath *)arg3;
- (UIColor *)collectionView:(UICollectionView *)arg1 inkColorAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 hidesInkViewAtIndexPath:(NSIndexPath *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didRemoveInlayFromItemAtIndexPaths:(NSArray *)arg2;
- (void)collectionView:(UICollectionView *)arg1 didApplyInlayToItemAtIndexPaths:(NSArray *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideFooterSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideHeaderSeparatorForSection:(long long)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideItemSeparatorAtIndexPath:(NSIndexPath *)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideFooterBackgroundForSection:(long long)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideHeaderBackgroundForSection:(long long)arg2;
- (_Bool)collectionView:(UICollectionView *)arg1 shouldHideItemBackgroundAtIndexPath:(NSIndexPath *)arg2;
- (UIColor *)collectionView:(UICollectionView *)arg1 cellBackgroundColorAtIndexPath:(NSIndexPath *)arg2;
- (unsigned long long)collectionView:(UICollectionView *)arg1 cellStyleForSection:(long long)arg2;
- (double)collectionView:(UICollectionView *)arg1 cellHeightAtIndexPath:(NSIndexPath *)arg2;
@end

