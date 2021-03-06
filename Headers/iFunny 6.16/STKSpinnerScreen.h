//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, STKSpinnerWindow;

@interface STKSpinnerScreen : NSObject
{
    STKSpinnerWindow *_spinnerWindow;
    NSTimer *_retentionTimer;
}

+ (_Bool)isDisplayed;
+ (void)hide;
+ (void)show;
+ (void)setRetentionDeleay:(double)arg1;
+ (void)setBlurred:(_Bool)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *retentionTimer; // @synthesize retentionTimer=_retentionTimer;
@property(retain, nonatomic) STKSpinnerWindow *spinnerWindow; // @synthesize spinnerWindow=_spinnerWindow;
- (void).cxx_destruct;
- (void)removeTimer;
- (void)startTimer;

@end

