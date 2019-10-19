//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCTClientInfoMaker, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CCTLogWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_outputStreams;
    CCTClientInfoMaker *_clientInfoMaker;
    NSMutableDictionary *_overrides;
    unsigned long long _backgroundTaskID;
    long long _pendingLogOperations;
}

+ (id)sharedInstance;
+ (void)addGlobalLogTransformer:(id)arg1;
@property(nonatomic) long long pendingLogOperations; // @synthesize pendingLogOperations=_pendingLogOperations;
@property(nonatomic) unsigned long long backgroundTaskID; // @synthesize backgroundTaskID=_backgroundTaskID;
@property(readonly, nonatomic) NSMutableDictionary *overrides; // @synthesize overrides=_overrides;
@property(readonly, nonatomic) CCTClientInfoMaker *clientInfoMaker; // @synthesize clientInfoMaker=_clientInfoMaker;
@property(readonly, nonatomic) NSMutableDictionary *outputStreams; // @synthesize outputStreams=_outputStreams;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)createOutputStreamForContext:(id)arg1 logDirectory:(id)arg2 clock:(id)arg3;
- (id)outputStreamForContext:(id)arg1 logDirectory:(id)arg2 clock:(id)arg3;
- (void)flushInternal;
- (void)waitForQueueToFinish;
- (void)flush;
- (void)invalidateOverridesInLogDirectory:(id)arg1;
- (void)writeLogInternal:(id)arg1 pseudonymousID:(id)arg2 logDirectory:(id)arg3 clock:(id)arg4 logTransformers:(id)arg5;
- (void)writeLog:(id)arg1 pseudonymousID:(id)arg2 logDirectory:(id)arg3 clock:(id)arg4 logTransformers:(id)arg5;
- (void)endBackgroundTask;
- (void)startBackgroundTask;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

