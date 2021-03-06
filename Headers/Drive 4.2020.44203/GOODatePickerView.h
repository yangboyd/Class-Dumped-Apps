//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GOODatePickerControlDelegate-Protocol.h"
#import "GOODatePickerYearScrollViewDelegate-Protocol.h"
#import "GOOPickerView-Protocol.h"

@class GOODatePickerColorPalette, GOODatePickerControl, GOODatePickerYearScrollView, NSCalendar, NSDate, NSDateFormatter, NSString, QTMButton;
@protocol GOOPickerViewDelegate;

@interface GOODatePickerView : UIView <GOODatePickerYearScrollViewDelegate, GOODatePickerControlDelegate, GOOPickerView>
{
    NSString *_title;
    UIView *_headerView;
    QTMButton *_subtitleButton;
    QTMButton *_titleButton;
    GOODatePickerControl *_inlineDatePickerView;
    GOODatePickerYearScrollView *_yearScrollView;
    UIView *_footerView;
    QTMButton *_cancelButton;
    QTMButton *_doneButton;
    _Bool _isEditingYear;
    NSCalendar *_calendar;
    NSDateFormatter *_yearLabelFormatter;
    NSDateFormatter *_dateLabelFormatter;
    NSDateFormatter *_yearDateLabelFormatter;
    NSDateFormatter *_accessibilityTitleDateFormatter;
    NSDateFormatter *_accessibilityDoneDateFormatter;
    _Bool _hapticsEnabled;
    long long _style;
    GOODatePickerColorPalette *_colorPalette;
    NSDate *_date;
    NSDate *_minimumDate;
    NSDate *_maximumDate;
    id <GOOPickerViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <GOOPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool hapticsEnabled; // @synthesize hapticsEnabled=_hapticsEnabled;
@property(retain, nonatomic) NSDate *maximumDate; // @synthesize maximumDate=_maximumDate;
@property(retain, nonatomic) NSDate *minimumDate; // @synthesize minimumDate=_minimumDate;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(retain, nonatomic) GOODatePickerColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void)updateSelectedDateWithComponents:(id)arg1;
- (id)dateFormatterWithFormatString:(id)arg1;
- (void)setEditingYear:(_Bool)arg1;
- (void)setTitleString:(id)arg1 forButton:(id)arg2;
- (void)updateHeaderViewTitles;
- (void)uptitleButtonStatesForCurrentEditingStyle;
- (void)updateColorsForCurrentColorStyle;
- (void)didUpdateDate:(id)arg1;
- (void)didTapDate:(id)arg1;
- (void)didTapYear:(id)arg1;
- (void)didTapDone:(id)arg1;
- (void)didTapCancel:(id)arg1;
- (void)datePickerControllerDidTapYear:(id)arg1;
- (void)yearScrollViewDidTapSelectedIndex:(id)arg1;
- (void)yearScrollView:(id)arg1 didSelectIndex:(long long)arg2;
- (double)widthForButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 calendar:(id)arg2 title:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

