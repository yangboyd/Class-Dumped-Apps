//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

@interface SCGalleryTabBarCollectionViewLayout : UICollectionViewLayout
{
    NSArray *_layoutAttributesArray;
    struct CGSize _contentSize;
    NSArray *_itemWidthArray;
}

@property(copy, nonatomic) NSArray *itemWidthArray; // @synthesize itemWidthArray=_itemWidthArray;
- (void).cxx_destruct;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (void)prepareLayout;
- (struct CGSize)collectionViewContentSize;

@end

