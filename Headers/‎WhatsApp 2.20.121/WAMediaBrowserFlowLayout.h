//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet, WAMediaBrowserCollectionViewCell;

@interface WAMediaBrowserFlowLayout : UICollectionViewFlowLayout
{
    NSMutableSet *_indexPathsToDelete;
    NSMutableSet *_indexPathsToInsert;
    WAMediaBrowserCollectionViewCell *_visibleCell;
}

+ (Class)layoutAttributesClass;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (id)init;

@end

