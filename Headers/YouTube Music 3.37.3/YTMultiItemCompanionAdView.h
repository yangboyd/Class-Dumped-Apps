//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTReusableView-Protocol.h"

@class FLXLayout, NSString, YTBadge, YTFormattedStringLabel, YTMultiItemCompanionAdFiveProductsView, YTMultiItemCompanionAdFourProductsView, YTMultiItemCompanionAdOneProductView, YTMultiItemCompanionAdThreeProductsView, YTMultiItemCompanionAdTwoProductsView, YTQTMButton;
@protocol YTMultiItemCompanionAdProductView;

@interface YTMultiItemCompanionAdView : UIView <YTReusableView>
{
    YTQTMButton *_actionButton;
    YTFormattedStringLabel *_titleLabel;
    YTBadge *_adBadge;
    UIView<YTMultiItemCompanionAdProductView> *_productView;
    YTMultiItemCompanionAdOneProductView *_oneProductView;
    YTMultiItemCompanionAdTwoProductsView *_twoProductsView;
    YTMultiItemCompanionAdThreeProductsView *_threeProductsView;
    YTMultiItemCompanionAdFourProductsView *_fourProductsView;
    YTMultiItemCompanionAdFiveProductsView *_fiveProductsView;
    FLXLayout *_layout;
}

@property(readonly, nonatomic) UIView<YTMultiItemCompanionAdProductView> *productView; // @synthesize productView=_productView;
@property(readonly, nonatomic) YTFormattedStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (id)productViewForProductListArray:(id)arg1;
- (void)prepareForReuse;
- (void)setTitle:(id)arg1 showAdBadge:(_Bool)arg2 detailsButton:(id)arg3 menu:(id)arg4 productListArray:(id)arg5;
@property(readonly, nonatomic) YTMultiItemCompanionAdView *root;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

