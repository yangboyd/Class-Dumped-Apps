//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FVRPickerViewDelegate-Protocol.h"

@class FVRPickerView, NSLayoutConstraint, NSString, UILabel, UIView;
@protocol FVRCreateCustomOfferDeliveryTimeCellDelegate;

@interface FVRCreateCustomOfferDeliveryTimeCell : UITableViewCell <FVRPickerViewDelegate>
{
    _Bool _shouldLayoutWithRevisionsCell;
    long long _selectedDaysNumber;
    id <FVRCreateCustomOfferDeliveryTimeCellDelegate> _delegate;
    UIView *_viewForPicker;
    FVRPickerView *_pickerView;
    UILabel *_daysNumberLabel;
    NSLayoutConstraint *_topSeparatorLeadingConstraint;
    long long _maxNumberOfDays;
    long long _minNumberOfDays;
}

+ (double)cellHeight;
@property(nonatomic) long long minNumberOfDays; // @synthesize minNumberOfDays=_minNumberOfDays;
@property(nonatomic) long long maxNumberOfDays; // @synthesize maxNumberOfDays=_maxNumberOfDays;
@property(nonatomic) __weak NSLayoutConstraint *topSeparatorLeadingConstraint; // @synthesize topSeparatorLeadingConstraint=_topSeparatorLeadingConstraint;
@property(nonatomic) __weak UILabel *daysNumberLabel; // @synthesize daysNumberLabel=_daysNumberLabel;
@property(retain, nonatomic) FVRPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(nonatomic) _Bool shouldLayoutWithRevisionsCell; // @synthesize shouldLayoutWithRevisionsCell=_shouldLayoutWithRevisionsCell;
@property(nonatomic) __weak UIView *viewForPicker; // @synthesize viewForPicker=_viewForPicker;
@property(nonatomic) id <FVRCreateCustomOfferDeliveryTimeCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long selectedDaysNumber; // @synthesize selectedDaysNumber=_selectedDaysNumber;
- (void).cxx_destruct;
- (void)pickerViewSelectionChanged:(id)arg1 selectedIndex:(long long)arg2;
- (void)pickerViewCancelled:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateConstraints;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

