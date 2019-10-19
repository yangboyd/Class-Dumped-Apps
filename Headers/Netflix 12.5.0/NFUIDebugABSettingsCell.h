//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NFLXABTest, UILabel, UISlider;

@interface NFUIDebugABSettingsCell : UICollectionViewCell
{
    UILabel *_testNumberLabel;
    UILabel *_testCellNumber;
    UILabel *_cellDescriptionLabel;
    UISlider *_cellSlider;
    UILabel *_testTitleLabel;
    UILabel *_cellTitleLabel;
    NFLXABTest *_model;
}

@property(retain, nonatomic) NFLXABTest *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *cellTitleLabel; // @synthesize cellTitleLabel=_cellTitleLabel;
@property(nonatomic) __weak UILabel *testTitleLabel; // @synthesize testTitleLabel=_testTitleLabel;
@property(nonatomic) __weak UISlider *cellSlider; // @synthesize cellSlider=_cellSlider;
@property(nonatomic) __weak UILabel *cellDescriptionLabel; // @synthesize cellDescriptionLabel=_cellDescriptionLabel;
@property(nonatomic) __weak UILabel *testCellNumber; // @synthesize testCellNumber=_testCellNumber;
@property(nonatomic) __weak UILabel *testNumberLabel; // @synthesize testNumberLabel=_testNumberLabel;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)cellChanged:(id)arg1;
- (void)updateCellNumberStyle;
- (void)configureWithModel:(id)arg1;
- (void)awakeFromNib;

@end

