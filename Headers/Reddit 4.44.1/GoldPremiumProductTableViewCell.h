//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GoldProductTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface GoldPremiumProductTableViewCell : GoldProductTableViewCell
{
    UIView *_containerView;
    UIImageView *_premiumLogoImageView;
    UILabel *_descriptionLabel;
    UIButton *_purchaseButton;
}

@property(retain, nonatomic) UIButton *purchaseButton; // @synthesize purchaseButton=_purchaseButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIImageView *premiumLogoImageView; // @synthesize premiumLogoImageView=_premiumLogoImageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)setupViews;
- (void)updatePurchaseButtonTitle;
- (void)handleCellDidTap:(id)arg1;
- (void)configureWithProduct:(id)arg1 forAccount:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

