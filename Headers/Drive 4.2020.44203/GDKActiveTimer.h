//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface GDKActiveTimer : NSObject
{
    _Bool _fired;
    unsigned long long _seconds;
    unsigned long long _elapsedSeconds;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_sem;
    unsigned long long _signalCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long signalCount; // @synthesize signalCount=_signalCount;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *sem; // @synthesize sem=_sem;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) unsigned long long elapsedSeconds; // @synthesize elapsedSeconds=_elapsedSeconds;
@property(readonly, nonatomic) unsigned long long seconds; // @synthesize seconds=_seconds;
@property _Bool fired; // @synthesize fired=_fired;
- (void)tick;
- (void)start;
- (id)initWithSeconds:(unsigned long long)arg1 semaphore:(id)arg2 signalCount:(unsigned long long)arg3;

@end

