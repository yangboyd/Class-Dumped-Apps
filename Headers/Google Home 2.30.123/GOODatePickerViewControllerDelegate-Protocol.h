//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GOODatePickerViewController, NSDate;

@protocol GOODatePickerViewControllerDelegate <NSObject>
- (void)datePickerViewControllerDidCancel:(GOODatePickerViewController *)arg1;
- (void)datePickerViewController:(GOODatePickerViewController *)arg1 didSelectDate:(NSDate *)arg2;
@end

