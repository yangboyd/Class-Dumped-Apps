//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GDKCollectionViewCell.h>

@class GDKCategoryStringAttributeCellModel, UILabel;

@interface GDKCategoryStringAttributeCell : GDKCollectionViewCell
{
    GDKCategoryStringAttributeCellModel *_stringAttributeModel;
    UILabel *_titleLabel;
    UILabel *_valueLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) GDKCategoryStringAttributeCellModel *stringAttributeModel; // @synthesize stringAttributeModel=_stringAttributeModel;
- (void)configureConstraints;
- (void)applyTheme:(id)arg1;
- (void)bindViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

