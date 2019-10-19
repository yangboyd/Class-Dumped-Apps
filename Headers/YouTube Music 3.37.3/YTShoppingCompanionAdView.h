//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "YTPageStyling-Protocol.h"
#import "YTReusableView-Protocol.h"

@class NSArray, NSString, UIImageView, YTBadge, YTFormattedStringLabel, YTQTMButton, YTShoppingCompanionAdRegularOneProductView, YTShoppingCompanionAdRegularThreeOrMoreProductsView, YTShoppingCompanionAdRegularTwoProductsView;
@protocol YTShoppingCompanionAdProductView;

@interface YTShoppingCompanionAdView : UIView <YTPageStyling, YTReusableView>
{
    YTBadge *_adBadge;
    YTFormattedStringLabel *_titleLabel;
    YTFormattedStringLabel *_sponsoredLabel;
    YTFormattedStringLabel *_actionLabel;
    UIImageView *_disclosureArrow;
    UIView<YTShoppingCompanionAdProductView> *_activeProductView;
    YTShoppingCompanionAdRegularOneProductView *_oneProductView;
    YTShoppingCompanionAdRegularTwoProductsView *_twoProductsView;
    YTShoppingCompanionAdRegularThreeOrMoreProductsView *_threeOrMoreProductsView;
    YTQTMButton *_actionButton;
    YTQTMButton *_sponsoredButton;
}

@property(readonly, nonatomic) YTQTMButton *sponsoredButton; // @synthesize sponsoredButton=_sponsoredButton;
@property(readonly, nonatomic) YTQTMButton *actionButton; // @synthesize actionButton=_actionButton;
- (void).cxx_destruct;
- (id)productViewForProductListArray:(id)arg1;
- (void)prepareForReuse;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
@property(readonly, nonatomic) NSArray *thumbnails;
- (void)setTitle:(id)arg1 actionText:(id)arg2 sponsoredText:(id)arg3 actionButtonHidden:(_Bool)arg4 sponsored:(_Bool)arg5 productListArray:(id)arg6;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

