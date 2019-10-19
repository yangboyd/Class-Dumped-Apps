//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIProgressView.h>

@class NSTimer;

@interface SPTWebViewProgressView : UIProgressView
{
    _Bool _simulatingProgress;
    _Bool _continuousProgress;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(nonatomic) _Bool continuousProgress; // @synthesize continuousProgress=_continuousProgress;
@property(nonatomic, getter=isSimulatingProgress) _Bool simulatingProgress; // @synthesize simulatingProgress=_simulatingProgress;
- (void).cxx_destruct;
- (float)nextProgressValue;
- (void)incrementProgress;
- (void)endContinuousProgress;
- (void)beginContinuousProgress;
- (void)endSimulatedProgress;
- (void)beginSimulatedProgress;
- (void)hideAnimated:(_Bool)arg1;
- (void)showAnimated:(_Bool)arg1;
- (void)reset;
- (void)dealloc;

@end

