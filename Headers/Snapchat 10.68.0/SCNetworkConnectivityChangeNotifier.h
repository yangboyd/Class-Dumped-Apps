//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCNNetworkTypesConnectivityChangeNotifier-Protocol.h"

@class NSMutableArray;
@protocol SCPerforming;

@interface SCNetworkConnectivityChangeNotifier : NSObject <SCNNetworkTypesConnectivityChangeNotifier>
{
    id <SCPerforming> _queuePerformer;
    NSMutableArray *_listeners;
    long long _currentConnectivity;
}

@property long long currentConnectivity; // @synthesize currentConnectivity=_currentConnectivity;
- (void).cxx_destruct;
- (void)updateCurrentReachability:(long long)arg1;
- (void)notifyListener:(long long)arg1;
- (long long)registerListener:(id)arg1;
- (id)initWithDefaultNetworkReachability:(long long)arg1 queuePerformer:(id)arg2;

@end

