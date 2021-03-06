//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSIndexPath, UIImageView, UILabel, UIView;

@interface AWESearchHistoryCollectionViewCell : UICollectionViewCell
{
    unsigned long long _type;
    NSIndexPath *_indexPath;
    UIImageView *_iconImageView;
    UILabel *_descLabel;
    UIView *_maskView;
    NSArray *_hotItemMaskWidthArray;
    NSArray *_historyItemMaskWidthArray;
    UIImageView *_tagImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(copy, nonatomic) NSArray *historyItemMaskWidthArray; // @synthesize historyItemMaskWidthArray=_historyItemMaskWidthArray;
@property(copy, nonatomic) NSArray *hotItemMaskWidthArray; // @synthesize hotItemMaskWidthArray=_hotItemMaskWidthArray;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)isTrendingType;
- (void)configureIrregularWordsModel:(id)arg1;
- (void)configureSearchHistoryContent:(id)arg1;
- (void)configureSuggestSearchContent:(id)arg1;
- (void)configureNewHotSearchModel:(id)arg1;
- (void)configureHotSearchModel:(id)arg1;
- (void)prepareForReuse;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

