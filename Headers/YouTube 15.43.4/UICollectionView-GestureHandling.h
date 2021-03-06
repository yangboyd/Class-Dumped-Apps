//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionView.h>

@interface UICollectionView (GestureHandling)
- (void)yt_didDoubleTap:(id)arg1;
- (void)yt_addDoubleTapGestureHandling;
- (id)ych_boxedTargetBottomOffset;
- (double)ych_bottomOffset;
- (void)ych_updateContentInset;
- (void)ych_scrollToBottomAnimated:(_Bool)arg1;
- (void)ych_clearTargetBottomOffset;
@property(nonatomic) double ych_desiredTopInset;
@property(readonly, nonatomic) struct CGPoint ych_targetBottomOffset;
@property(readonly, nonatomic) _Bool ych_isScrollingToBottom;
@property(readonly, nonatomic) _Bool ych_isScrolledToBottom;
@property(readonly, nonatomic) _Bool ych_areVisibleCellsInFocus;
- (long long)as_numberOfItemsInModelSection:(long long)arg1;
@property(readonly, nonatomic) int yt_scrollDirection;
- (id)grw_visibleFooterViewForSection:(long long)arg1;
- (id)grw_dequeueViewOfKind:(id)arg1 withClass:(Class)arg2 forIndexPath:(id)arg3;
- (void)grw_registerViewOfKind:(id)arg1 withClass:(Class)arg2;
- (id)grw_dequeueCellWithClass:(Class)arg1 forIndexPath:(id)arg2;
- (void)grw_registerCellClass:(Class)arg1;
- (id)debugDescriptionLines;
- (void)ig_applyBatchUpdateData:(id)arg1;
@end

