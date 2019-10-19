//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSMutableDictionary;
@protocol SCOperaWebAppConversationCellViewModelProvider;

@interface SCOperaWebAppConversationViewLayout : UICollectionViewLayout
{
    id <SCOperaWebAppConversationCellViewModelProvider> _viewModelProvider;
    NSMutableDictionary *_cellRects;
    double _contentHeight;
    double _cellVerticalSpacing;
}

@property(nonatomic) double cellVerticalSpacing; // @synthesize cellVerticalSpacing=_cellVerticalSpacing;
- (void).cxx_destruct;
- (void)invalidateLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (double)contentYOffsetToIndex:(long long)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)initWithViewModelProvider:(id)arg1;

@end

