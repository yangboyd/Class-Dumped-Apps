//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SKTSendTarget;
@protocol SKTPeoplePicker;

@protocol SKTPeoplePickerDelegate <NSObject>

@optional
- (void)shareSheet:(id <SKTPeoplePicker>)arg1 didDeselectTarget:(SKTSendTarget *)arg2;
- (void)shareSheet:(id <SKTPeoplePicker>)arg1 didSelectTarget:(SKTSendTarget *)arg2;
- (_Bool)shareSheet:(id <SKTPeoplePicker>)arg1 shouldSelectTarget:(SKTSendTarget *)arg2;
@end

