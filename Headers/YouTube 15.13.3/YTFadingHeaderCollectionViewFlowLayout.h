//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/YTSeparatorCollectionViewFlowLayout.h>

@class NSIndexPath, NSMutableDictionary, UICollectionViewLayoutAttributes;

@interface YTFadingHeaderCollectionViewFlowLayout : YTSeparatorCollectionViewFlowLayout
{
    NSIndexPath *_fadingHeaderIndexPath;
    long long _fadingHeaderPushySection;
    struct CGRect _originalHeaderFrame;
    UICollectionViewLayoutAttributes *_cachedFadingHeaderAttributes;
    NSMutableDictionary *_cachedSeparatorAttributes;
    _Bool _enableHeaderSnapping;
    double _fadeExpandStartDistance;
}

@property(nonatomic) double fadeExpandStartDistance; // @synthesize fadeExpandStartDistance=_fadeExpandStartDistance;
@property(nonatomic) _Bool enableHeaderSnapping; // @synthesize enableHeaderSnapping=_enableHeaderSnapping;
- (void).cxx_destruct;
- (struct CGRect)frameForFirstFadingSectionHeaderBeforeSection:(unsigned long long)arg1;
- (double)verticalOffsetForSection:(unsigned long long)arg1;
- (long long)fadingHeaderPushySection;
- (id)fadingHeaderIndexPath;
- (_Bool)isSeparatorAttributes:(id)arg1;
- (_Bool)isFadingHeaderAttributes:(id)arg1;
- (struct CGRect)adjustBoundsWithVerticalLookAhead:(struct CGRect)arg1;
- (void)invalidateOtherElementsLayoutIfNeededForBoundsChange:(struct CGRect)arg1 separatorsOnly:(_Bool)arg2;
- (void)invalidateStickyHeaderLayoutIfNeededForBoundsChange:(struct CGRect)arg1;
- (void)adjustPanGestureTranslationIfNeededOnBoundsChange:(struct CGRect)arg1;
- (id)adjustOtherElementsAttributes:(id)arg1;
- (id)adjustFadingHeaderAttributes:(id)arg1;
- (void)scrollViewDidEndDecelerating;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;
- (id)init;

@end

