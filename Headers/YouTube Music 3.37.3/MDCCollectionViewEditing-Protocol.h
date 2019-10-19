//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, UICollectionView;
@protocol MDCCollectionViewEditingDelegate;

@protocol MDCCollectionViewEditing <NSObject>
@property(nonatomic, getter=isEditing) _Bool editing;
@property(nonatomic) double minimumPressDuration;
@property(readonly, nonatomic) long long dismissingSection;
@property(readonly, nonatomic) NSIndexPath *dismissingCellIndexPath;
@property(readonly, nonatomic) NSIndexPath *reorderingCellIndexPath;
@property(nonatomic) __weak id <MDCCollectionViewEditingDelegate> delegate;
@property(readonly, nonatomic) __weak UICollectionView *collectionView;
- (void)updateReorderCellPosition;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
@end

