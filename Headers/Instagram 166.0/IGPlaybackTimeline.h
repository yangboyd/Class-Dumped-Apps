//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableDictionary;
@protocol IGPlaybackTimelineDelegate;

@interface IGPlaybackTimeline : NSObject
{
    CADisplayLink *_displayLink;
    double _hostTimeReferencePoint;
    double _timeAtHostTimeReferencePoint;
    double _prevTime;
    NSMutableDictionary *_intervalForPeriodicTimeObserver;
    NSMutableDictionary *_timeForBoundaryTimeObserver;
    NSMutableDictionary *_blocksForTimeObserver;
    id <IGPlaybackTimelineDelegate> _delegate;
    double _currentPlaybackRate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) double currentPlaybackRate; // @synthesize currentPlaybackRate=_currentPlaybackRate;
@property(nonatomic) __weak id <IGPlaybackTimelineDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeAllTimeObservers;
- (void)removeTimeObserver:(id)arg1;
- (id)addBoundaryTimeObserverForTime:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)_displayLinkDidFire:(id)arg1;
- (void)setPlaybackRate:(double)arg1 time:(double)arg2 atHostTime:(double)arg3;
@property(readonly, nonatomic) double currentTime;
- (void)dealloc;
- (id)init;

@end

