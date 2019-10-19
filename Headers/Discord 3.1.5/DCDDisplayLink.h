//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSRunLoop, NSString, NSTimer;

@interface DCDDisplayLink : NSObject
{
    _Bool _paused;
    _Bool _resourcesLoaded;
    long long _frameInterval;
    NSRunLoop *_runloop;
    NSString *_mode;
    id _target;
    SEL _selector;
    NSTimer *_timer;
    CADisplayLink *_displayLink;
}

+ (id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2;
@property(nonatomic) _Bool resourcesLoaded; // @synthesize resourcesLoaded=_resourcesLoaded;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) NSString *mode; // @synthesize mode=_mode;
@property(retain, nonatomic) NSRunLoop *runloop; // @synthesize runloop=_runloop;
@property(nonatomic) long long frameInterval; // @synthesize frameInterval=_frameInterval;
@property(nonatomic, getter=isPaused) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)timerLoop;
- (void)maybeResetTimer;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) double timestamp;
- (void)invalidate;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)addToRunLoop:(id)arg1 forMode:(id)arg2;
- (void)switchToTimer;
- (void)switchToDisplayLink;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;

@end

