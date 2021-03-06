//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray;

@interface SMASHSceneAnimationMetrics : NSObject
{
    unsigned long long _clickTime;
    unsigned long long _animationStartTime;
    unsigned long long _animationEndTime;
    CADisplayLink *_displayLink;
    unsigned long long _lastTimestamp;
    long long _currentAnimationStatus;
    NSMutableArray *_framesInterval;
}

@property(retain, nonatomic) NSMutableArray *framesInterval; // @synthesize framesInterval=_framesInterval;
@property(nonatomic) long long currentAnimationStatus; // @synthesize currentAnimationStatus=_currentAnimationStatus;
@property(nonatomic) unsigned long long lastTimestamp; // @synthesize lastTimestamp=_lastTimestamp;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(nonatomic) unsigned long long animationEndTime; // @synthesize animationEndTime=_animationEndTime;
@property(nonatomic) unsigned long long animationStartTime; // @synthesize animationStartTime=_animationStartTime;
@property(nonatomic) unsigned long long clickTime; // @synthesize clickTime=_clickTime;
- (void).cxx_destruct;
- (unsigned long long)animationEndTimestamp;
- (unsigned long long)animationStartTimestamp;
- (double)averageFps;
- (double)maxFrameInterval;
- (void)handleDisplayUpdate:(id)arg1;
- (void)stopDisplayLink;
- (void)startDisplayLink;
- (void)updateAnimationStatus:(long long)arg1;
- (id)initWithPendingStatus;

@end

