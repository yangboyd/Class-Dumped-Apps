//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DBMemoryWatchdogEventLogger, OS_dispatch_source;

@interface DBMemoryWatchdog : NSObject
{
    _Bool _running;
    NSObject<OS_dispatch_source> *_memory_pressure_source;
    id <DBMemoryWatchdogEventLogger> _logger;
}

+ (void)setupWatchDogWithLogger:(id)arg1;
+ (id)sharedWatchdog;
- (void).cxx_destruct;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithLogger:(id)arg1;

@end

