//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDKReachabilityObserving-Protocol.h"

@class GDKSettableObservable, GIPReachability, NSString;
@protocol OS_dispatch_queue;

@interface GDKReachabilityObserver : NSObject <GDKReachabilityObserving>
{
    _Bool _reachable;
    _Bool _monitoring;
    GIPReachability *_reachability;
    NSObject<OS_dispatch_queue> *_serialQueue;
    GDKSettableObservable *_settableObservable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic, getter=isMonitoring) _Bool monitoring; // @synthesize monitoring=_monitoring;
@property(nonatomic, getter=wasReachable) _Bool reachable; // @synthesize reachable=_reachable;
@property(readonly, nonatomic) GDKSettableObservable *settableObservable; // @synthesize settableObservable=_settableObservable;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
@property(readonly, nonatomic) GIPReachability *reachability; // @synthesize reachability=_reachability;
- (_Bool)isNetworkReachable;
- (void)observeReachabilityWithQueue:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)handleReachabilityChange;
- (void)reachabilityDidChange:(id)arg1;
- (void)startMonitoringInternalWithCompletion:(CDUnknownBlockType)arg1;
- (void)startMonitoringWithCompletion:(id)arg1;
- (id)initWithReachability:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

