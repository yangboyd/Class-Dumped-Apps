//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <APIGuard/NSURLSessionDelegate-Protocol.h>

@class  0,  4,  u, AtomicInteger32, NSString, NSURLSession, Reachability;
@protocol APIGuardDelegate, OS_dispatch_queue;

@interface  I : NSObject <NSURLSessionDelegate>
{
    _Bool _connectionRequired;
    _Bool _registeredForReachability;
    long long _state;
    id <APIGuardDelegate> _agDelegate;
    AtomicInteger32 *_reentryLock;
    AtomicInteger32 *_externalUpdateReentryLock;
     4 *_configManager;
     0 *_payloadStore;
     u *_executor;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_delayQueue;
    long long _failCount;
    long long _lastConfigFetchTimestamp;
    Reachability *_hostReachability;
    Reachability *_internetReachability;
    long long _hostNetworkStatus;
    long long _internetStatus;
}

@property _Bool registeredForReachability; // @synthesize registeredForReachability=_registeredForReachability;
@property _Bool connectionRequired; // @synthesize connectionRequired=_connectionRequired;
@property long long internetStatus; // @synthesize internetStatus=_internetStatus;
@property long long hostNetworkStatus; // @synthesize hostNetworkStatus=_hostNetworkStatus;
@property(retain, nonatomic) Reachability *internetReachability; // @synthesize internetReachability=_internetReachability;
@property(retain, nonatomic) Reachability *hostReachability; // @synthesize hostReachability=_hostReachability;
@property long long lastConfigFetchTimestamp; // @synthesize lastConfigFetchTimestamp=_lastConfigFetchTimestamp;
@property(nonatomic) long long failCount; // @synthesize failCount=_failCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delayQueue; // @synthesize delayQueue=_delayQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *updateQueue; // @synthesize updateQueue=_updateQueue;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic)  u *executor; // @synthesize executor=_executor;
@property(retain, nonatomic)  0 *payloadStore; // @synthesize payloadStore=_payloadStore;
- (void)setConfigManager:(id)arg1;
- (id)configManager;
@property(retain, nonatomic) AtomicInteger32 *externalUpdateReentryLock; // @synthesize externalUpdateReentryLock=_externalUpdateReentryLock;
@property(retain, nonatomic) AtomicInteger32 *reentryLock; // @synthesize reentryLock=_reentryLock;
@property __weak id <APIGuardDelegate> agDelegate; // @synthesize agDelegate=_agDelegate;
- (void)E;
@property long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (_Bool)wK;
- (id)DY;
- (id)rX;
- (id)xG;
- (_Bool)VA;
- (id)BV;
- (void)M1;
- (long long)runUpdate:(id)arg1;
- (void)3C;
- (void)xS;
- (void)kb;
- (void)periodicalUpdate;
- (void)D;
- (void)stateTransitionWithCheckTTL;
- (void)stateTransitionWithUpdateStatus:(long long)arg1;
- (_Bool)Tn;
- (void)0W;
- (id)createExecutor;
- (void)onUIApplicationWillEnterForeGround:(id)arg1;
- (void)Cc;
- (_Bool)vz;
- (void)networkReachabilityChange:(id)arg1;
- (id)Zv;

// Remaining properties
@property(retain, nonatomic)  4 * yManager; // @synthesize  yManager=_configManager;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

