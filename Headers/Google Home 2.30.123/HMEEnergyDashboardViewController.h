//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMEAppBarViewController.h"

#import "HMEEnergyDashboardModelControllerInsightsDelegate-Protocol.h"
#import "HMERichTextViewDelegate-Protocol.h"
#import "MDCTabBarViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class HMEEnergyDashboardBarChartViewController, HMEEnergyDashboardBlameView, HMERichTextView, MDCTabBarView, NSArray, NSDate, NSLayoutConstraint, NSString, UIButton, UICollectionView, UILabel, UIScrollView, UIStackView, UIView;
@protocol HMEEnergyDashboardModelController, HMELinkOpener;

@interface HMEEnergyDashboardViewController : HMEAppBarViewController <MDCTabBarViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, HMEEnergyDashboardModelControllerInsightsDelegate, HMERichTextViewDelegate>
{
    UILabel *_titleLabel;
    UILabel *_subheaderLabel;
    UILabel *_timeRangeModifierLabel;
    UIButton *_decrementDateButton;
    UIButton *_incrementDateButton;
    UIStackView *_timeRangeModifierStackView;
    MDCTabBarView *_timeRangePickerTabBar;
    UILabel *_barChartTitleLabel;
    UIScrollView *_scrollView;
    UIView *_contentContainerView;
    HMEEnergyDashboardBlameView *_blameView;
    UIStackView *_blameStackView;
    UICollectionView *_insightsCollectionView;
    NSLayoutConstraint *_insightsCollectionViewHeightConstraint;
    NSArray *_insightsDataArray;
    NSString *_selectedTimeRange;
    NSDate *_selectedDate;
    NSString *_displayName;
    id <HMEEnergyDashboardModelController> _energyDashboardModelController;
    HMEEnergyDashboardBarChartViewController *_barChartViewController;
    id <HMELinkOpener> _linkOpener;
    UIView *_hairlineView;
    UIView *_separatorView;
    UIView *_takeoutContainerView;
    HMERichTextView *_takeoutView;
    NSLayoutConstraint *_insightCollectionViewConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *insightCollectionViewConstraint; // @synthesize insightCollectionViewConstraint=_insightCollectionViewConstraint;
@property(retain, nonatomic) HMERichTextView *takeoutView; // @synthesize takeoutView=_takeoutView;
@property(retain, nonatomic) UIView *takeoutContainerView; // @synthesize takeoutContainerView=_takeoutContainerView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIView *hairlineView; // @synthesize hairlineView=_hairlineView;
@property(readonly, nonatomic) id <HMELinkOpener> linkOpener; // @synthesize linkOpener=_linkOpener;
@property(retain, nonatomic) HMEEnergyDashboardBarChartViewController *barChartViewController; // @synthesize barChartViewController=_barChartViewController;
@property(retain, nonatomic) id <HMEEnergyDashboardModelController> energyDashboardModelController; // @synthesize energyDashboardModelController=_energyDashboardModelController;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSDate *selectedDate; // @synthesize selectedDate=_selectedDate;
@property(retain, nonatomic) NSString *selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(retain, nonatomic) NSArray *insightsDataArray; // @synthesize insightsDataArray=_insightsDataArray;
@property(retain, nonatomic) NSLayoutConstraint *insightsCollectionViewHeightConstraint; // @synthesize insightsCollectionViewHeightConstraint=_insightsCollectionViewHeightConstraint;
@property(retain, nonatomic) UICollectionView *insightsCollectionView; // @synthesize insightsCollectionView=_insightsCollectionView;
@property(retain, nonatomic) UIStackView *blameStackView; // @synthesize blameStackView=_blameStackView;
@property(retain, nonatomic) HMEEnergyDashboardBlameView *blameView; // @synthesize blameView=_blameView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UILabel *barChartTitleLabel; // @synthesize barChartTitleLabel=_barChartTitleLabel;
@property(retain, nonatomic) MDCTabBarView *timeRangePickerTabBar; // @synthesize timeRangePickerTabBar=_timeRangePickerTabBar;
@property(retain, nonatomic) UIStackView *timeRangeModifierStackView; // @synthesize timeRangeModifierStackView=_timeRangeModifierStackView;
@property(retain, nonatomic) UIButton *incrementDateButton; // @synthesize incrementDateButton=_incrementDateButton;
@property(retain, nonatomic) UIButton *decrementDateButton; // @synthesize decrementDateButton=_decrementDateButton;
@property(retain, nonatomic) UILabel *timeRangeModifierLabel; // @synthesize timeRangeModifierLabel=_timeRangeModifierLabel;
@property(retain, nonatomic) UILabel *subheaderLabel; // @synthesize subheaderLabel=_subheaderLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)messageForInsightType:(long long)arg1;
- (id)titleForInsightType:(long long)arg1;
- (void)updateBlameView;
- (id)dayIncrementAccessibilityLabel;
- (id)dayDecrementAccessibilityLabel;
- (id)monthDateFormattedTextForDate:(id)arg1;
- (id)weekDateFormattedTextForDate:(id)arg1;
- (id)dayDateFormattedTextForDate:(id)arg1;
- (void)updateTimeRangeModifierLabelForDate:(id)arg1;
- (id)lastDateOfWeekWithDate:(id)arg1;
- (id)firstDateOfWeekWithDate:(id)arg1;
- (id)adjustedDateForValue:(long long)arg1 calendarUnit:(unsigned long long)arg2 selectedDate:(id)arg3;
- (void)enableIncrementDateButton;
- (void)disableIncrementDateButton;
- (_Bool)shouldIncrementForDate:(id)arg1;
- (void)didTapIncrementDateButton:(id)arg1;
- (void)didTapDecrementDateButton:(id)arg1;
- (void)reloadData;
- (id)bundle;
- (id)barChartTitleForTimeRange:(id)arg1;
- (id)insightIconTintColorForType:(long long)arg1;
- (id)insightIconForType:(long long)arg1;
- (id)todaysDate;
- (id)horizontalLineView;
- (void)tabBarView:(id)arg1 didSelectItem:(id)arg2;
- (void)energyDashboardModelControllerDidReceiveInsightsData;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)setUpConstraints;
- (void)textView:(id)arg1 didSelectURL:(id)arg2;
- (void)selectDefaultTimeRange;
- (id)takeoutText;
- (void)setUpTakeoutView;
- (void)setUpInsightsCollectionView;
- (void)setUpBlameView;
- (void)setUpBarChart;
- (void)setUpBarChartTitleLabel;
- (void)setUpTimeRangeModifierStackView;
- (void)setUpTimeRangeModifierButtons;
- (void)setUpTimeRangeModifierLabel;
- (void)setUpcontentContainerView;
- (void)setUpScrollView;
- (void)setUpTimeRangePickerTabBar;
- (void)setUpHairlineView;
- (void)setUpSubheaderLabel;
- (void)setUpTitleLabel;
- (void)didTapCalendarButton;
- (void)addTodayButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithModelController:(id)arg1 linkOpener:(id)arg2 displayName:(id)arg3 selectedTimeRange:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

