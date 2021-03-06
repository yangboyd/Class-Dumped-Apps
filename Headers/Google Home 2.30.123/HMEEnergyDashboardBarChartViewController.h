//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HMEEnergyDashboardModelControllerThermostatUsageDelegate-Protocol.h"

@class HMEEnergyDashboardDayTickProviderFormatter, HMEEnergyDashboardMaxMidMeasureTickProviderFormatter, HMEEnergyDashboardMonthTickProviderFormatter, HMEEnergyDashboardPopoverView, HMEEnergyDashboardWeekTickProviderFormatter, NSArray, NSDate, NSDateFormatter, NSNumber, NSString, UIView;
@protocol GAVChart, HMEEnergyDashboardModelController;

@interface HMEEnergyDashboardBarChartViewController : UIViewController <HMEEnergyDashboardModelControllerThermostatUsageDelegate>
{
    NSString *_selectedTimeRange;
    id <HMEEnergyDashboardModelController> _energyDashboardModelController;
    NSArray *_dailyPopoverDataArray;
    NSArray *_weeklyPopoverDataArray;
    NSArray *_monthlyPopoverDataArray;
    UIView<GAVChart> *_chart;
    HMEEnergyDashboardPopoverView *_popoverView;
    HMEEnergyDashboardDayTickProviderFormatter *_dayDomainTickProviderFormatter;
    HMEEnergyDashboardWeekTickProviderFormatter *_weekDomainTickProviderFormatter;
    HMEEnergyDashboardMonthTickProviderFormatter *_monthDomainTickProviderFormatter;
    HMEEnergyDashboardMaxMidMeasureTickProviderFormatter *_maxMidMeasureTickProviderFormatter;
    NSDateFormatter *_accessibilityLabelDomainFormatter;
    NSNumber *_maxMeasureValueInMinutes;
    UIView *_weeklyLeafsEarnedView;
    NSArray *_weeklyDataArray;
    NSDate *_selectedDomain;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDate *selectedDomain; // @synthesize selectedDomain=_selectedDomain;
@property(retain, nonatomic) NSArray *weeklyDataArray; // @synthesize weeklyDataArray=_weeklyDataArray;
@property(retain, nonatomic) UIView *weeklyLeafsEarnedView; // @synthesize weeklyLeafsEarnedView=_weeklyLeafsEarnedView;
@property(retain, nonatomic) NSNumber *maxMeasureValueInMinutes; // @synthesize maxMeasureValueInMinutes=_maxMeasureValueInMinutes;
@property(retain, nonatomic) NSDateFormatter *accessibilityLabelDomainFormatter; // @synthesize accessibilityLabelDomainFormatter=_accessibilityLabelDomainFormatter;
@property(retain, nonatomic) HMEEnergyDashboardMaxMidMeasureTickProviderFormatter *maxMidMeasureTickProviderFormatter; // @synthesize maxMidMeasureTickProviderFormatter=_maxMidMeasureTickProviderFormatter;
@property(retain, nonatomic) HMEEnergyDashboardMonthTickProviderFormatter *monthDomainTickProviderFormatter; // @synthesize monthDomainTickProviderFormatter=_monthDomainTickProviderFormatter;
@property(retain, nonatomic) HMEEnergyDashboardWeekTickProviderFormatter *weekDomainTickProviderFormatter; // @synthesize weekDomainTickProviderFormatter=_weekDomainTickProviderFormatter;
@property(retain, nonatomic) HMEEnergyDashboardDayTickProviderFormatter *dayDomainTickProviderFormatter; // @synthesize dayDomainTickProviderFormatter=_dayDomainTickProviderFormatter;
@property(retain, nonatomic) HMEEnergyDashboardPopoverView *popoverView; // @synthesize popoverView=_popoverView;
@property(retain, nonatomic) UIView<GAVChart> *chart; // @synthesize chart=_chart;
@property(retain, nonatomic) NSArray *monthlyPopoverDataArray; // @synthesize monthlyPopoverDataArray=_monthlyPopoverDataArray;
@property(retain, nonatomic) NSArray *weeklyPopoverDataArray; // @synthesize weeklyPopoverDataArray=_weeklyPopoverDataArray;
@property(retain, nonatomic) NSArray *dailyPopoverDataArray; // @synthesize dailyPopoverDataArray=_dailyPopoverDataArray;
@property(retain, nonatomic) id <HMEEnergyDashboardModelController> energyDashboardModelController; // @synthesize energyDashboardModelController=_energyDashboardModelController;
@property(retain, nonatomic) NSString *selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
- (void)clearDomainSelection;
- (id)formattedStringForDuration:(id)arg1;
- (id)formattedStringForDate:(id)arg1 timeRange:(id)arg2;
- (void)updatePopover:(id)arg1;
- (void)updateLeafVisibilityForData:(id)arg1 view:(id)arg2;
- (void)updateLeafPositionForData:(id)arg1;
- (void)onLayoutWithNotification:(id)arg1;
- (id)bundle;
- (id)measureStringForValue:(float)arg1;
- (float)midRoundedValueForMaxRoundedValue:(float)arg1;
- (float)maxRoundedValueForTotalMaxValue:(float)arg1;
- (void)updateMeasureFormatterForHeatingData:(id)arg1 coolingData:(id)arg2;
- (float)maxValueForHeatingData:(id)arg1 coolingData:(id)arg2;
- (void)hideDomainAxisForDay:(_Bool)arg1 week:(_Bool)arg2 month:(_Bool)arg3;
- (id)zeroUsageDataMeasureForMaxValueInMinutes:(float)arg1;
- (_Bool)dateToday:(id)arg1;
- (_Bool)dateBeforeNow:(id)arg1;
- (id)zeroUsageDataArrayForData:(id)arg1 timeRange:(id)arg2;
- (void)energyDashboardModelControllerDidReceiveThermostatUsageData;
- (void)drawChartWithHeatingData:(id)arg1 coolingData:(id)arg2 zeroUsageData:(id)arg3 heatSeriesKey:(id)arg4 coolSeriesKey:(id)arg5 zeroUsageSeriesKey:(id)arg6;
- (id)barSeriesSpec:(id)arg1 domainAxisName:(id)arg2 measureAxisName:(id)arg3;
- (void)setUpConstraints;
- (id)configureDomainAxisMonth;
- (id)configureDomainAxisWeek;
- (id)configureDomainAxisDay;
- (id)createStylePackForHeatColor:(id)arg1 coolColor:(id)arg2 zeroUsageColor:(id)arg3;
- (void)createChart;
- (id)leafImageViewWithTag:(long long)arg1;
- (id)setUpWeeklyLeafsEarnedView;
- (void)viewDidLoad;
- (id)initWithModelController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

