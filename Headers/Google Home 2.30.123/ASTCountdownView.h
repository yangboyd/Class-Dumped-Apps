//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSNumberFormatter, NSTimer, UIButton, UILabel;

@interface ASTCountdownView : UIView
{
    NSNumberFormatter *_numFormatter;
    UILabel *_countdownLabel;
    UILabel *_cancelLabel;
    UIButton *_cancelButton;
    NSTimer *_countdownTimer;
    CDUnknownBlockType _countdownCompletion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType countdownCompletion; // @synthesize countdownCompletion=_countdownCompletion;
@property(retain, nonatomic) NSTimer *countdownTimer; // @synthesize countdownTimer=_countdownTimer;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UILabel *cancelLabel; // @synthesize cancelLabel=_cancelLabel;
@property(retain, nonatomic) UILabel *countdownLabel; // @synthesize countdownLabel=_countdownLabel;
@property(retain, nonatomic) NSNumberFormatter *numFormatter; // @synthesize numFormatter=_numFormatter;
- (void)didTapOnCancelButton;
- (void)orientationChanged:(id)arg1;
- (void)updateCountdown;
- (void)stopCountdown:(_Bool)arg1;
- (void)stopCountdown;
- (void)startCountdownSeconds:(long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (_Bool)active;
- (void)dealloc;
- (void)layoutSubViews;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

