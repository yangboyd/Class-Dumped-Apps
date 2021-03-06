//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDateComponentsFormatter, NSTimer, UILabel;

@interface HMEThermostatFanTimerSheetTimerView : UIView
{
    double _timerEnd;
    CDUnknownBlockType _cancelTimerCallback;
    CDUnknownBlockType _expiredTimerCallback;
    UILabel *_timerLabel;
    NSTimer *_timer;
    NSDateComponentsFormatter *_intervalFormatter;
}

@property(retain, nonatomic) NSDateComponentsFormatter *intervalFormatter; // @synthesize intervalFormatter=_intervalFormatter;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *timerLabel; // @synthesize timerLabel=_timerLabel;
@property(copy, nonatomic) CDUnknownBlockType expiredTimerCallback; // @synthesize expiredTimerCallback=_expiredTimerCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelTimerCallback; // @synthesize cancelTimerCallback=_cancelTimerCallback;
@property(nonatomic) double timerEnd; // @synthesize timerEnd=_timerEnd;
- (void).cxx_destruct;
- (void)timerExpired;
- (void)setToAutoButtonTapped:(id)arg1;
- (void)updateTimer;
- (void)initializeViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

