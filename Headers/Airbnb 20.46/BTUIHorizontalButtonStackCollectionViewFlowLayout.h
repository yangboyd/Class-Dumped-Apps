//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableArray;

@interface BTUIHorizontalButtonStackCollectionViewFlowLayout : UICollectionViewFlowLayout
{
    NSMutableArray *_cachedLayoutAttributes;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *cachedLayoutAttributes; // @synthesize cachedLayoutAttributes=_cachedLayoutAttributes;
- (void)calculateAndCacheLayoutAttributes;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)prepareLayout;
- (id)init;

@end

