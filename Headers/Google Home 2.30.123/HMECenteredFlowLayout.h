//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@interface HMECenteredFlowLayout : UICollectionViewFlowLayout
{
    _Bool _centersHorizontally;
    _Bool _centersVertically;
}

@property(nonatomic) _Bool centersVertically; // @synthesize centersVertically=_centersVertically;
@property(nonatomic) _Bool centersHorizontally; // @synthesize centersHorizontally=_centersHorizontally;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGPoint)centeringInset;
- (struct CGSize)collectionViewContentSize;
- (struct CGSize)availableContentArea;
- (id)init;

@end

