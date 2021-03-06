//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MTNetworkUsageCalculationInfo, MTQueue, MTTimer, NSMutableDictionary;

@interface MTNetworkUsageManagerImpl : NSObject
{
    MTQueue *_queue;
    MTNetworkUsageCalculationInfo *_info;
    NSMutableDictionary *_pendingIncomingBytes;
    NSMutableDictionary *_pendingOutgoingBytes;
    MTTimer *_timer;
}

- (void).cxx_destruct;
- (id)currentStatsForKeys:(id)arg1;
- (void)resetKeys:(id)arg1 setKeys:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOutgoingBytes:(unsigned long long)arg1 interface:(int)arg2;
- (void)addIncomingBytes:(unsigned long long)arg1 interface:(int)arg2;
- (void)sync;
- (void)scheduleSync;
- (void)dealloc;
- (id)initWithQueue:(id)arg1 info:(id)arg2;

@end

