//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class AWEDatePickerTopBar, NSDate, NSDateFormatter, NSString, UIDatePicker;

@interface AWEAdDatePickerViewController : UIViewController <UIViewControllerTransitioningDelegate>
{
    CDUnknownBlockType _didFinishPicking;
    NSDate *_date;
    AWEDatePickerTopBar *_topBar;
    UIDatePicker *_datePicker;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(retain, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) AWEDatePickerTopBar *topBar; // @synthesize topBar=_topBar;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
@property(copy, nonatomic) CDUnknownBlockType didFinishPicking; // @synthesize didFinishPicking=_didFinishPicking;
- (void)doneButtonAction:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (void)datePickerValueChanged:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

