//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTNonCriticalStartupScheduler-Protocol.h"

@class NSArray, NSMutableArray, NSSet, NSString;

@interface YTNonCriticalStartupSmartScheduler : NSObject <YTNonCriticalStartupScheduler>
{
    NSArray *_ticks;
    long long _timeoutMs;
    long long _staggerMs;
    NSSet *_whitelistLabels;
    _Bool _doneWaiting;
    NSMutableArray *_pendingWork;
}

- (void).cxx_destruct;
- (_Bool)isLabelWhitelisted:(int)arg1;
- (void)runWorkBlocksHelper:(id)arg1;
- (void)runWorkBlocks:(id)arg1;
- (void)beginWorkBlocks;
- (void)schedule:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)initWithTick:(id)arg1 timeoutMs:(long long)arg2 staggerMs:(long long)arg3 whitelistLabels:(id)arg4;
- (id)initWithConfig:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

