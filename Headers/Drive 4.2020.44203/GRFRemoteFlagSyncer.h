//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GIPReachability, GRFRemoteFlagSyncExecutor, NSDictionary, NSTimer;
@protocol GRFRemoteFlagSyncerDelegate;

@interface GRFRemoteFlagSyncer : NSObject
{
    _Bool _deviceOnline;
    _Bool _lastRemoteFetchSucceeded;
    id <GRFRemoteFlagSyncerDelegate> _delegate;
    GIPReachability *_reachability;
    GRFRemoteFlagSyncExecutor *_syncExecutor;
    NSTimer *_syncTimer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSTimer *syncTimer; // @synthesize syncTimer=_syncTimer;
@property(readonly, nonatomic) GRFRemoteFlagSyncExecutor *syncExecutor; // @synthesize syncExecutor=_syncExecutor;
@property(readonly, nonatomic) GIPReachability *reachability; // @synthesize reachability=_reachability;
@property(nonatomic) _Bool lastRemoteFetchSucceeded; // @synthesize lastRemoteFetchSucceeded=_lastRemoteFetchSucceeded;
@property(nonatomic, getter=isDeviceOnline) _Bool deviceOnline; // @synthesize deviceOnline=_deviceOnline;
@property(nonatomic) __weak id <GRFRemoteFlagSyncerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSyncExecutor:(id)arg1;
- (void)setReachability:(id)arg1;
- (_Bool)isOnline;
- (void)syncFile;
- (void)reachabilityChanged:(id)arg1;
- (void)syncTimerFired:(id)arg1;
@property(readonly, nonatomic) NSDictionary *flags;
- (void)startSyncing;
- (void)stopSyncing;
- (void)dealloc;
- (id)initForTesting;
- (id)initWithGstaticFilePath:(id)arg1 localFileURL:(id)arg2 fetcherService:(id)arg3;
- (id)init;

@end

