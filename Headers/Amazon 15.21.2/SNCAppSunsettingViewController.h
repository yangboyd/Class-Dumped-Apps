//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class AWSkinnableButton, NSString, NSURL, NSUserDefaults, UIImageView, UILabel;
@protocol SONICAppSunsettingMetricsService;

@interface SNCAppSunsettingViewController : UIViewController
{
    UIImageView *_logoView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    AWSkinnableButton *_actionButton;
    AWSkinnableButton *_settingsButton;
    AWSkinnableButton *_dismissButton;
    NSString *_latestInterstitialEvent;
    id <SONICAppSunsettingMetricsService> _metricsLogger;
    NSUserDefaults *_userDefaults;
    NSURL *_actionURL;
}

@property(retain, nonatomic) NSURL *actionURL; // @synthesize actionURL=_actionURL;
@property(retain, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(retain, nonatomic) id <SONICAppSunsettingMetricsService> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(retain, nonatomic) NSString *latestInterstitialEvent; // @synthesize latestInterstitialEvent=_latestInterstitialEvent;
@property(retain, nonatomic) AWSkinnableButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) AWSkinnableButton *settingsButton; // @synthesize settingsButton=_settingsButton;
@property(retain, nonatomic) AWSkinnableButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *logoView; // @synthesize logoView=_logoView;
- (void).cxx_destruct;
- (void)incrememntNumberOfTimesShownForWarning:(id)arg1;
- (void)setLastWarningForState:(id)arg1 forType:(id)arg2;
- (void)osWarningShown;
- (void)osBlockShown;
- (void)appWarningShown;
- (void)appBlockShown;
- (void)deviceWarningShown;
- (void)deviceBlockShown;
- (void)logActionButtonTappedMetric;
- (void)logDismissButtonTappedMetric;
- (void)dismissButtonTapped:(id)arg1;
- (void)settingsButtonTapped:(id)arg1;
- (void)actionButtonTapped:(id)arg1;
- (void)setViewForAppWarning;
- (void)setViewForAppBlock;
- (void)setViewForOSWarning:(id)arg1;
- (void)setViewForOSBlock:(id)arg1;
- (void)setViewForDeviceWarning;
- (void)setViewForDeviceBlock;
- (void)viewDidLoad;
- (id)init;

@end

