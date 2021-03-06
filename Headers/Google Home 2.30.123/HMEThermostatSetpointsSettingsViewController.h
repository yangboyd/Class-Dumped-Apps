//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarViewController.h"

#import "HMEThermostatSetpointViewDelegate-Protocol.h"
#import "HMEThermostatSetpointsSettingsModelControllerDelegate-Protocol.h"

@class GHCTemperatureTarget, HMEThermostatSetpointView, HMEThermostatTemperatureFormatter, MDCActivityIndicator, MDCButton, NSString, UILabel, UIScrollView, UISwitch;
@protocol HMELinkOpener, HMEThermostatSetpointsSettingsModelController, HMEThermostatSetpointsSettingsViewControllerDelegate;

@interface HMEThermostatSetpointsSettingsViewController : HMEAppBarViewController <HMEThermostatSetpointViewDelegate, HMEThermostatSetpointsSettingsModelControllerDelegate>
{
    _Bool _shouldHideHeating;
    _Bool _shouldHideCooling;
    int _scale;
    id <HMEThermostatSetpointsSettingsViewControllerDelegate> _delegate;
    id <HMEThermostatSetpointsSettingsModelController> _modelController;
    HMEThermostatTemperatureFormatter *_temperatureFormatter;
    long long _setpointsType;
    id <HMELinkOpener> _linkOpener;
    UIScrollView *_scrollView;
    UILabel *_descriptionLabel;
    MDCButton *_learnMoreLinkButton;
    UILabel *_heatSetpointSwitchLabel;
    UISwitch *_heatSetpointSwitch;
    HMEThermostatSetpointView *_heatSetpointView;
    UILabel *_coolSetpointSwitchLabel;
    UISwitch *_coolSetpointSwitch;
    HMEThermostatSetpointView *_coolSetpointView;
    UILabel *_heatSafetyLabel;
    MDCActivityIndicator *_spinner;
    GHCTemperatureTarget *_safetyCoolTemperatureTarget;
    GHCTemperatureTarget *_safetyHeatTemperatureTarget;
    GHCTemperatureTarget *_ecoCoolTemperatureTarget;
    GHCTemperatureTarget *_ecoHeatTemperatureTarget;
    GHCTemperatureTarget *_coolTemperatureThresholdTarget;
    GHCTemperatureTarget *_heatTemperatureThresholdTarget;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GHCTemperatureTarget *heatTemperatureThresholdTarget; // @synthesize heatTemperatureThresholdTarget=_heatTemperatureThresholdTarget;
@property(retain, nonatomic) GHCTemperatureTarget *coolTemperatureThresholdTarget; // @synthesize coolTemperatureThresholdTarget=_coolTemperatureThresholdTarget;
@property(retain, nonatomic) GHCTemperatureTarget *ecoHeatTemperatureTarget; // @synthesize ecoHeatTemperatureTarget=_ecoHeatTemperatureTarget;
@property(retain, nonatomic) GHCTemperatureTarget *ecoCoolTemperatureTarget; // @synthesize ecoCoolTemperatureTarget=_ecoCoolTemperatureTarget;
@property(retain, nonatomic) GHCTemperatureTarget *safetyHeatTemperatureTarget; // @synthesize safetyHeatTemperatureTarget=_safetyHeatTemperatureTarget;
@property(retain, nonatomic) GHCTemperatureTarget *safetyCoolTemperatureTarget; // @synthesize safetyCoolTemperatureTarget=_safetyCoolTemperatureTarget;
@property(retain, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UILabel *heatSafetyLabel; // @synthesize heatSafetyLabel=_heatSafetyLabel;
@property(retain, nonatomic) HMEThermostatSetpointView *coolSetpointView; // @synthesize coolSetpointView=_coolSetpointView;
@property(retain, nonatomic) UISwitch *coolSetpointSwitch; // @synthesize coolSetpointSwitch=_coolSetpointSwitch;
@property(retain, nonatomic) UILabel *coolSetpointSwitchLabel; // @synthesize coolSetpointSwitchLabel=_coolSetpointSwitchLabel;
@property(retain, nonatomic) HMEThermostatSetpointView *heatSetpointView; // @synthesize heatSetpointView=_heatSetpointView;
@property(retain, nonatomic) UISwitch *heatSetpointSwitch; // @synthesize heatSetpointSwitch=_heatSetpointSwitch;
@property(retain, nonatomic) UILabel *heatSetpointSwitchLabel; // @synthesize heatSetpointSwitchLabel=_heatSetpointSwitchLabel;
@property(retain, nonatomic) MDCButton *learnMoreLinkButton; // @synthesize learnMoreLinkButton=_learnMoreLinkButton;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(nonatomic) long long setpointsType; // @synthesize setpointsType=_setpointsType;
@property(retain, nonatomic) HMEThermostatTemperatureFormatter *temperatureFormatter; // @synthesize temperatureFormatter=_temperatureFormatter;
@property(retain, nonatomic) id <HMEThermostatSetpointsSettingsModelController> modelController; // @synthesize modelController=_modelController;
@property(nonatomic) _Bool shouldHideCooling; // @synthesize shouldHideCooling=_shouldHideCooling;
@property(nonatomic) _Bool shouldHideHeating; // @synthesize shouldHideHeating=_shouldHideHeating;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(nonatomic) __weak id <HMEThermostatSetpointsSettingsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (float)convertAndFormatTemperatureValue:(float)arg1 fromScale:(int)arg2 toScale:(int)arg3 rounded:(_Bool)arg4;
- (float)defaultHeatTemperature;
- (id)coolTemperatureTarget;
- (id)heatTemperatureTarget;
- (void)updateTemperatureTarget:(id)arg1 withSetpointView:(id)arg2;
- (void)updateSetpointView:(id)arg1 withTemperatureTarget:(id)arg2;
- (void)configureSafetyTemperatureActions;
- (void)disableThermostatSetpointsActions;
- (id)localizedTemperatureTextOff;
- (void)thermostatSetpointsModelControllerDidUpdateSetpoints:(id)arg1;
- (void)formatCoolTemperatureTarget:(id)arg1;
- (void)formatHeatTemperatureTarget:(id)arg1;
- (void)thermostatSetpointsModelController:(id)arg1 didReceiveCoolTemperatureThresholdTarget:(id)arg2 heatTemperatureThresholdTarget:(id)arg3;
- (void)thermostatSetpointsModelController:(id)arg1 didReceiveSafetyCoolTemperatureTarget:(id)arg2 safetyHeatTemperatureTarget:(id)arg3 ecoCoolTemperatureTarget:(id)arg4 ecoHeatTemperatureTarget:(id)arg5;
- (id)defaultTemperatureString;
- (void)updateCoolSetpointDescriptionText;
- (void)updateHeatSetpointDescriptionText;
- (void)increaseCoolSetpointInSetpointView:(id)arg1;
- (void)increaseHeatSetpointInSetpointView:(id)arg1;
- (void)decreaseCoolSetpointInSetpointView:(id)arg1;
- (void)decreaseHeatSetpointInSetpointView:(id)arg1;
- (void)saveTemperatureTargets;
- (void)temperatureSetpointViewShouldIncreaseTemperature:(id)arg1;
- (void)temperatureSetpointViewShouldDecreaseTemperature:(id)arg1;
- (_Bool)canIncreaseCoolTemperature;
- (_Bool)isIncreaseButtonInCoolSetpointViewDisabled;
- (_Bool)canDecreaseCoolTemperature;
- (_Bool)isDecreaseButtonInCoolSetpointViewDisabled;
- (float)currentCoolTemperature;
- (_Bool)canIncreaseHeatTemperature;
- (_Bool)isIncreaseButtonInHeatSetpointViewDisabled;
- (_Bool)canDecreaseHeatTemperature;
- (_Bool)isDecreaseButtonInHeatSetpointViewDisabled;
- (float)currentHeatTemperature;
- (void)didTapLearnMoreButton;
- (void)didTapOverflowButton;
- (void)didTapBackButton;
- (void)setUpConstraints;
- (void)setUpHeatSafetyLabel;
- (void)setUpSetpointSwitches;
- (void)setUpSetpointViews;
- (void)setUpLearnMoreLinkButton;
- (void)setUpDescriptionLabel;
- (void)setUpNavigationBar;
- (void)viewDidLoad;
- (id)initWithModelController:(id)arg1 setpointsType:(long long)arg2 HGSDeviceID:(id)arg3 scale:(int)arg4 shouldHideCooling:(_Bool)arg5 shouldHideHeating:(_Bool)arg6 linkOpener:(id)arg7;
- (id)initWithModelController:(id)arg1 setpointsType:(long long)arg2 HGSDeviceID:(id)arg3 scale:(int)arg4 linkOpener:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

