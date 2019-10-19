//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"
#import "SPTPodcastBrowseConnectivityMonitor-Protocol.h"

@class NSString, SPTNetworkConnectivityController, SPTObserverManager;

@interface SPTPodcastBrowseConnectivityMonitorImplementation : NSObject <SPTNetworkConnectivityControllerObserver, SPTPodcastBrowseConnectivityMonitor>
{
    SPTNetworkConnectivityController *_connectivityController;
    SPTObserverManager *_observers;
    unsigned long long _state;
}

@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(readonly, nonatomic) SPTObserverManager *observers; // @synthesize observers=_observers;
@property(readonly, nonatomic) SPTNetworkConnectivityController *connectivityController; // @synthesize connectivityController=_connectivityController;
- (void).cxx_destruct;
- (void)updateConnectivityState;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (void)networkConnectivityController:(id)arg1 didChangeConnectionType:(long long)arg2 oldConnectionType:(long long)arg3;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)initWithNetworkConnectivityController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

