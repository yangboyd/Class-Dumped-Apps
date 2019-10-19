//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class SCGalleryTabBarItem, UIColor, UIImageView, UILabel;

@interface SCGalleryTabBarItemCell : UICollectionViewCell
{
    UILabel *_label1;
    UILabel *_label2;
    UIImageView *_iconView1;
    UIImageView *_iconView2;
    SCGalleryTabBarItem *_item;
    double _highlightLevel;
}

+ (double)minimumWidthForItem:(id)arg1;
@property(nonatomic) double highlightLevel; // @synthesize highlightLevel=_highlightLevel;
@property(retain, nonatomic) SCGalleryTabBarItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (id)_newIconView;
- (id)_newLabel;
@property(retain, nonatomic) UIColor *highlightedStateColor;
@property(retain, nonatomic) UIColor *normalStateColor;
- (id)initWithFrame:(struct CGRect)arg1;

@end

