//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class HMEHistoryDatePickerModel;
@protocol HMEHistoryDatePicking;

@interface HMEHistoryDatePickerView : UIScrollView
{
    id <HMEHistoryDatePicking> _datePickerDelegate;
    HMEHistoryDatePickerModel *_dateModel;
}

@property(retain, nonatomic) HMEHistoryDatePickerModel *dateModel; // @synthesize dateModel=_dateModel;
@property(nonatomic) __weak id <HMEHistoryDatePicking> datePickerDelegate; // @synthesize datePickerDelegate=_datePickerDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double horizontalGap;
- (double)contentHeight;
- (struct CGSize)intrinsicContentSize;
- (struct CGPoint)idealCenterContentOffsetForDateClosestToOffset:(struct CGPoint)arg1;
- (void)scrollToDateView:(id)arg1 animated:(_Bool)arg2 widthHint:(double)arg3;
- (void)scrollToDate:(id)arg1 animated:(_Bool)arg2 widthHint:(double)arg3;
- (void)setContentSizeForDays:(long long)arg1;
- (_Bool)selectDate:(id)arg1;
- (void)handleTap:(id)arg1;
- (id)addDayForDate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

