//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UIStackView, _TtC10CoreStyles18CoreTertiaryButton, _TtC10CoreStyles9CoreLabel, _TtC7Account24ItemSummaryCellViewModel;

@interface ItemSummaryCell : UITableViewCell
{
    _Bool _isCakeDataShown;
    _TtC10CoreStyles9CoreLabel *_itemNameLabel;
    _TtC10CoreStyles9CoreLabel *_priceLabel;
    _TtC10CoreStyles9CoreLabel *_unitPriceLabel;
    _TtC10CoreStyles9CoreLabel *_quantityLabel;
    _TtC10CoreStyles9CoreLabel *_statusLabel;
    _TtC10CoreStyles9CoreLabel *_discountedPriceLabel;
    _TtC10CoreStyles9CoreLabel *_messageLabel;
    _TtC10CoreStyles9CoreLabel *_noteLabel;
    _TtC10CoreStyles9CoreLabel *_sizeLabel;
    _TtC10CoreStyles9CoreLabel *_flavorLabel;
    _TtC10CoreStyles9CoreLabel *_decorationLabel;
    _TtC10CoreStyles9CoreLabel *_icingLabel;
    _TtC10CoreStyles9CoreLabel *_fillingLabel;
    _TtC10CoreStyles9CoreLabel *_topBorderLabel;
    _TtC10CoreStyles9CoreLabel *_bottomBorderLabel;
    _TtC10CoreStyles9CoreLabel *_addOnServicesLabel;
    _TtC10CoreStyles9CoreLabel *_downPaymentLabel;
    _TtC10CoreStyles9CoreLabel *_monthlyInstallmentLabel;
    _TtC10CoreStyles9CoreLabel *_giftCardLabel;
    _TtC10CoreStyles18CoreTertiaryButton *_resendEmailButton;
    _TtC10CoreStyles18CoreTertiaryButton *_showSelectionButton;
    _TtC10CoreStyles18CoreTertiaryButton *_manageProtectionPlanButton;
    _TtC10CoreStyles18CoreTertiaryButton *_devicePaymentDetailButton;
    UIImageView *_thumbnailImageView;
    UIStackView *_leftStackView;
    UIStackView *_priceStackView;
    UIStackView *_rightStackView;
    UIStackView *_cakeDescriptionStackView;
    UIStackView *_addOnServiceStackView;
    UIStackView *_wirelessStackView;
    _TtC7Account24ItemSummaryCellViewModel *_viewModel;
}

+ (id)placeholderImage;
+ (id)loadingImage;
- (void).cxx_destruct;
@property(retain, nonatomic) _TtC7Account24ItemSummaryCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIStackView *wirelessStackView; // @synthesize wirelessStackView=_wirelessStackView;
@property(retain, nonatomic) UIStackView *addOnServiceStackView; // @synthesize addOnServiceStackView=_addOnServiceStackView;
@property(retain, nonatomic) UIStackView *cakeDescriptionStackView; // @synthesize cakeDescriptionStackView=_cakeDescriptionStackView;
@property(retain, nonatomic) UIStackView *rightStackView; // @synthesize rightStackView=_rightStackView;
@property(retain, nonatomic) UIStackView *priceStackView; // @synthesize priceStackView=_priceStackView;
@property(retain, nonatomic) UIStackView *leftStackView; // @synthesize leftStackView=_leftStackView;
@property(retain, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(nonatomic) _Bool isCakeDataShown; // @synthesize isCakeDataShown=_isCakeDataShown;
@property(retain, nonatomic) _TtC10CoreStyles18CoreTertiaryButton *devicePaymentDetailButton; // @synthesize devicePaymentDetailButton=_devicePaymentDetailButton;
@property(retain, nonatomic) _TtC10CoreStyles18CoreTertiaryButton *manageProtectionPlanButton; // @synthesize manageProtectionPlanButton=_manageProtectionPlanButton;
@property(retain, nonatomic) _TtC10CoreStyles18CoreTertiaryButton *showSelectionButton; // @synthesize showSelectionButton=_showSelectionButton;
@property(retain, nonatomic) _TtC10CoreStyles18CoreTertiaryButton *resendEmailButton; // @synthesize resendEmailButton=_resendEmailButton;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *giftCardLabel; // @synthesize giftCardLabel=_giftCardLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *monthlyInstallmentLabel; // @synthesize monthlyInstallmentLabel=_monthlyInstallmentLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *downPaymentLabel; // @synthesize downPaymentLabel=_downPaymentLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *addOnServicesLabel; // @synthesize addOnServicesLabel=_addOnServicesLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *bottomBorderLabel; // @synthesize bottomBorderLabel=_bottomBorderLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *topBorderLabel; // @synthesize topBorderLabel=_topBorderLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *fillingLabel; // @synthesize fillingLabel=_fillingLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *icingLabel; // @synthesize icingLabel=_icingLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *decorationLabel; // @synthesize decorationLabel=_decorationLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *flavorLabel; // @synthesize flavorLabel=_flavorLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *noteLabel; // @synthesize noteLabel=_noteLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *discountedPriceLabel; // @synthesize discountedPriceLabel=_discountedPriceLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *quantityLabel; // @synthesize quantityLabel=_quantityLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *unitPriceLabel; // @synthesize unitPriceLabel=_unitPriceLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) _TtC10CoreStyles9CoreLabel *itemNameLabel; // @synthesize itemNameLabel=_itemNameLabel;
- (void)prepareForReuse;
- (void)hideResendEmailButton;
- (void)showResendEmailButton;
- (void)hideGiftCardLabel;
- (void)showGiftCardLabel;
- (void)setupConstraints;
- (id)tertiaryButton:(id)arg1;
- (id)coreLabel:(id)arg1 withStyle:(long long)arg2;
- (id)cakeLabelWithName:(id)arg1;
- (void)initView;
- (id)cakeDescriptionLabelTextColor:(id)arg1 value:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateWithViewModel:(id)arg1 loadImage:(_Bool)arg2 showItemStatus:(_Bool)arg3;
- (void)updateWithViewModel:(id)arg1 showItemStatus:(_Bool)arg2;

@end

