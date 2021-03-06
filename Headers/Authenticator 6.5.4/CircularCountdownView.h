//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSTimer;

@interface CircularCountdownView : UIView
{
    unsigned long long _countdown;
    NSTimer *_timer;
    unsigned long long _maxCountdown;
}

- (void).cxx_destruct;
@property unsigned long long maxCountdown; // @synthesize maxCountdown=_maxCountdown;
- (void)startCountdownFrom:(double)arg1;
- (void)startCountdown;
- (void)animate;
- (void)drawCircleAtCenter:(struct CGPoint)arg1 radius:(double)arg2 startAngle:(double)arg3 endAngle:(double)arg4 color:(id)arg5;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

