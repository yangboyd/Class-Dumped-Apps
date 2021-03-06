//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/FBLiveTraceLoggerProtocol-Protocol.h>

@class NSDate, NSString;
@protocol FBFacecastLiveTraceLoggerDelegate;

@interface FBFacecastLiveTraceLogger : NSObject <FBLiveTraceLoggerProtocol>
{
    NSString *_broadcastID;
    struct linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
    struct uniform_int_distribution<unsigned long long> _distribution;
    NSDate *_interruptionBeginTimestamp;
    id <FBFacecastLiveTraceLoggerDelegate> _delegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_logLiveTraceEvent:(id)arg1 severity:(id)arg2 traceID:(unsigned int)arg3 metadata:(id)arg4;
- (void)logSessionFailed:(unsigned long long)arg1 error:(id)arg2;
- (void)logSessionStarted:(unsigned long long)arg1;
- (void)logSessionEnded:(unsigned long long)arg1;
- (void)logEncodingError:(id)arg1;
- (void)logBroadcastEndedWithError:(id)arg1;
- (void)logBroadcastInterruptionEnded;
- (void)logBroadcastInterruption:(unsigned long long)arg1;
- (void)logLiveSwapBack;
- (void)logLiveSwap;
- (void)logEmbedLiveTraceID:(unsigned int)arg1 bitrate:(int)arg2 framerate:(int)arg3 pts:(CDStruct_1b6d18a9)arg4 dts:(CDStruct_1b6d18a9)arg5;
- (void)logBroadcastStarted;
- (void)logBroadcastCreated:(id)arg1 version:(id)arg2 appID:(id)arg3;
- (void)finallyFetchedBroadcastID:(id)arg1;
- (id)initWithBroadcastID:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

