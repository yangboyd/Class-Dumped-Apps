//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GoldCoinProductTableViewCell.h"

@class UILabel, UIView;

@interface GoldFeaturedCoinProductTableViewCell : GoldCoinProductTableViewCell
{
    UILabel *_featuredLabel;
    UIView *_featuredLabelContainerView;
}

@property(retain, nonatomic) UIView *featuredLabelContainerView; // @synthesize featuredLabelContainerView=_featuredLabelContainerView;
@property(retain, nonatomic) UILabel *featuredLabel; // @synthesize featuredLabel=_featuredLabel;
- (void).cxx_destruct;
- (id)highlightColor;
- (void)setupViews;
- (void)configureWithProduct:(id)arg1 forAccount:(id)arg2;

@end

