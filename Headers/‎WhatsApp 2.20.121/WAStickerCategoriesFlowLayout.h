//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray, NSMutableDictionary;
@protocol WAStickerCategoriesFlowLayoutDelegate;

@interface WAStickerCategoriesFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_insertedIndexPaths;
    NSMutableArray *_deletedIndexPaths;
    NSMutableArray *_reloadedSectionIndexPaths;
    NSMutableDictionary *_currentAttributes;
    NSMutableDictionary *_cachedAttributes;
    id <WAStickerCategoriesFlowLayoutDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <WAStickerCategoriesFlowLayoutDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finalizeCollectionViewUpdates;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (void)prepareLayout;
- (_Bool)flipsHorizontallyInOppositeLayoutDirection;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)triggeringIndexPath;
- (id)init;

@end

