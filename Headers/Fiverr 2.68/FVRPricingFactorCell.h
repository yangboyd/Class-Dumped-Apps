//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class FVRGigExtra, NSLayoutConstraint, UIButton, UIImageView, UILabel;
@protocol FVRPricingFactorCellDelegate;

@interface FVRPricingFactorCell : UITableViewCell
{
    FVRGigExtra *_gigExtraFromUserSelectedPackage;
    UIButton *_allCellButton;
    id <FVRPricingFactorCellDelegate> _delegate;
    UILabel *_pricingFactorTitleLabel;
    UILabel *_pricingFactorValueLable;
    UIImageView *_pricingFactorStatusTypeImageView;
    NSLayoutConstraint *_pricingFactorValueLabelLeadingConstrin;
    NSLayoutConstraint *_pricingFactorStatusImageViewLeadingConstrin;
}

+ (id)initWithTableWith:(double)arg1;
@property(nonatomic) __weak NSLayoutConstraint *pricingFactorStatusImageViewLeadingConstrin; // @synthesize pricingFactorStatusImageViewLeadingConstrin=_pricingFactorStatusImageViewLeadingConstrin;
@property(nonatomic) __weak NSLayoutConstraint *pricingFactorValueLabelLeadingConstrin; // @synthesize pricingFactorValueLabelLeadingConstrin=_pricingFactorValueLabelLeadingConstrin;
@property(nonatomic) __weak UIImageView *pricingFactorStatusTypeImageView; // @synthesize pricingFactorStatusTypeImageView=_pricingFactorStatusTypeImageView;
@property(nonatomic) __weak UILabel *pricingFactorValueLable; // @synthesize pricingFactorValueLable=_pricingFactorValueLable;
@property(nonatomic) __weak UILabel *pricingFactorTitleLabel; // @synthesize pricingFactorTitleLabel=_pricingFactorTitleLabel;
@property(nonatomic) __weak id <FVRPricingFactorCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIButton *allCellButton; // @synthesize allCellButton=_allCellButton;
@property(nonatomic) __weak FVRGigExtra *gigExtraFromUserSelectedPackage; // @synthesize gigExtraFromUserSelectedPackage=_gigExtraFromUserSelectedPackage;
- (void).cxx_destruct;
- (void)refreshWithGigItem:(id)arg1 indexForPricingFactor:(long long)arg2 delegate:(id)arg3;
- (void)allCellButtonPress;
- (void)removeAllCellButton;
- (void)setupAllCellButton;
- (void)drawRect:(struct CGRect)arg1;

@end

