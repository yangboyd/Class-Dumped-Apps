//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath, WAStickerCategoriesFlowLayout;

@protocol WAStickerCategoriesFlowLayoutDelegate
- (_Bool)stickerCategoriesFlowLayoutEmotionCategoryAvailable:(WAStickerCategoriesFlowLayout *)arg1;
- (_Bool)stickerCategoriesFlowLayoutShouldShowDecoration:(WAStickerCategoriesFlowLayout *)arg1;
- (_Bool)stickerCategoriesFlowLayout:(WAStickerCategoriesFlowLayout *)arg1 shouldStartEmotionContractionWithIndexPath:(NSIndexPath *)arg2;
- (_Bool)stickerCategoriesFlowLayout:(WAStickerCategoriesFlowLayout *)arg1 shouldStartEmotionExpansionWithIndexPath:(NSIndexPath *)arg2;
- (void)stickerCategoriesFlowLayoutFinalizedUpdates:(WAStickerCategoriesFlowLayout *)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutNonExpandedDecorationFrame:(WAStickerCategoriesFlowLayout *)arg1;
- (struct CGRect)stickerCategoriesFlowLayoutExpandedDecorationFrame:(WAStickerCategoriesFlowLayout *)arg1;
- (struct CGPoint)stickerCategoriesFlowLayoutTriggeringCenter:(WAStickerCategoriesFlowLayout *)arg1;
- (NSIndexPath *)stickerCategoriesFlowLayoutTriggeringIndexPath:(WAStickerCategoriesFlowLayout *)arg1;
@end

