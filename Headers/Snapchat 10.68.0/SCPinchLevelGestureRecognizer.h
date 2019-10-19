//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPinchGestureRecognizer.h>

@class NSSet;

@interface SCPinchLevelGestureRecognizer : UIPinchGestureRecognizer
{
    double _oneFingerStartScale;
    double _oneFingerStartDistance;
    struct CGPoint _oneFingerStartCenter;
    NSSet *_lastTouches;
    long long _minimumLevel;
    long long _maximumLevel;
}

@property(nonatomic) long long maximumLevel; // @synthesize maximumLevel=_maximumLevel;
@property(nonatomic) long long minimumLevel; // @synthesize minimumLevel=_minimumLevel;
- (void).cxx_destruct;
- (id)competingGestureRecognizers;
@property(readonly, nonatomic) double levelPercentage;
@property(readonly, nonatomic) long long scaleLevel;
- (void)_handleTouchesStopped:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)init;

@end

