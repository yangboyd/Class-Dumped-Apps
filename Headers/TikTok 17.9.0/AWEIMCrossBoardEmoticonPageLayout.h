//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSArray, NSMutableArray;

@interface AWEIMCrossBoardEmoticonPageLayout : UICollectionViewFlowLayout
{
    NSArray *_displayDataArr;
    CDUnknownBlockType _getRawDataArrBolck;
    NSMutableArray *_attrsArray;
    struct CGSize _displayContentSize;
}

+ (int)p_emojiColumCount;
+ (struct CGRect)emojiDeleteButtonFrameOnSuperViewFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
@property(nonatomic) struct CGSize displayContentSize; // @synthesize displayContentSize=_displayContentSize;
@property(retain, nonatomic) NSMutableArray *attrsArray; // @synthesize attrsArray=_attrsArray;
@property(copy, nonatomic) CDUnknownBlockType getRawDataArrBolck; // @synthesize getRawDataArrBolck=_getRawDataArrBolck;
@property(retain, nonatomic) NSArray *displayDataArr; // @synthesize displayDataArr=_displayDataArr;
- (void)p_handleSourceThemeModel:(id)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)prepareLayout;

@end

