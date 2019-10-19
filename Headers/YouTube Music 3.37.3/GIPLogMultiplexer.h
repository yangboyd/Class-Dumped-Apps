//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GIPLogAppControl-Protocol.h"
#import "GIPLogMultiplexing-Protocol.h"

@class GIPGTMForwardingLogger, NSSet;
@protocol OS_dispatch_queue;

@interface GIPLogMultiplexer : NSObject <GIPLogAppControl, GIPLogMultiplexing>
{
    NSSet *_filters;
    NSSet *_syncLoggers;
    NSSet *_asyncLoggers;
    GIPGTMForwardingLogger *_gtmForwardingLogger;
    _Bool _captureCallStack;
    _Bool _captureCallStackAddresses;
    NSObject<OS_dispatch_queue> *_loggingQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property _Bool captureCallStackAddresses; // @synthesize captureCallStackAddresses=_captureCallStackAddresses;
@property _Bool captureCallStack; // @synthesize captureCallStack=_captureCallStack;
- (void).cxx_destruct;
- (void)removeAsyncLogger:(id)arg1;
- (void)addAsyncLogger:(id)arg1;
- (void)removeSyncLogger:(id)arg1;
- (void)addSyncLogger:(id)arg1;
- (void)removeLogFilter:(id)arg1;
- (void)addLogFilter:(id)arg1;
- (void)logWithMessage:(id)arg1;
- (void)stopForwardingMessagesToGTMLogger;
- (id)init;

@end

