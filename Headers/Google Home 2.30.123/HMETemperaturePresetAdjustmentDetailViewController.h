//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMESetupAbstractBottomChromeViewController.h"

@class GMDCTypographyScheme, HMEStyleFontLoader, HMETemperaturePresetAdjustmentDetailViewModel, MDCActivityIndicator, MDCAppBarViewController, UIImageView, UILabel, UIView;
@protocol HMETemperaturePresetAdjustmentDetailViewControllerDelegate;

@interface HMETemperaturePresetAdjustmentDetailViewController : HMESetupAbstractBottomChromeViewController
{
    id <HMETemperaturePresetAdjustmentDetailViewControllerDelegate> _delegate;
    GMDCTypographyScheme *_typographyScheme;
    HMEStyleFontLoader *_styleLoader;
    UIImageView *_tempPreferenceImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_suggestedTemperatureView;
    UIView *_currentTemperatureView;
    MDCAppBarViewController *_appBarViewController;
    MDCActivityIndicator *_spinnerView;
    HMETemperaturePresetAdjustmentDetailViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMETemperaturePresetAdjustmentDetailViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) MDCActivityIndicator *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(readonly, nonatomic) MDCAppBarViewController *appBarViewController; // @synthesize appBarViewController=_appBarViewController;
@property(retain, nonatomic) UIView *currentTemperatureView; // @synthesize currentTemperatureView=_currentTemperatureView;
@property(retain, nonatomic) UIView *suggestedTemperatureView; // @synthesize suggestedTemperatureView=_suggestedTemperatureView;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *tempPreferenceImageView; // @synthesize tempPreferenceImageView=_tempPreferenceImageView;
@property(readonly, nonatomic) HMEStyleFontLoader *styleLoader; // @synthesize styleLoader=_styleLoader;
@property(readonly, nonatomic) GMDCTypographyScheme *typographyScheme; // @synthesize typographyScheme=_typographyScheme;
@property(nonatomic) __weak id <HMETemperaturePresetAdjustmentDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)showAdjustTempSavingErrorAlert;
- (void)saveTemperatureChanges;
- (void)addSpinnerViewIfRequired;
- (void)showLoadingSpinner;
- (void)hideSpinnerView;
- (void)setupAppNavigationBar;
- (void)addConstraints;
- (id)createTemperatureRowForHeatingTemperature:(id)arg1 coolingTemperature:(id)arg2 shouldHighlighted:(_Bool)arg3;
- (id)createTemperatureViewForHeatingTemperature:(id)arg1 coolingTemperature:(id)arg2 forText:(id)arg3 shouldHighlighted:(_Bool)arg4;
- (void)createSubViews;
- (void)didTapNotNowButton;
- (void)didTapAdjustTempsButton;
- (void)didTapOverflowBarButton;
- (void)didTapBackButton;
- (void)viewDidLoad;
- (id)initWithViewModel:(id)arg1;

@end

