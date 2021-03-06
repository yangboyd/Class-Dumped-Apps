//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/FBLigerProvidesNetworkState-Protocol.h>
#import <FBSharedFramework/LigerReachabilityCallbackConfiguring-Protocol.h>

@class NSString;
@protocol LigerReachabilityCallback, OS_dispatch_queue;

@interface IGLigerReachabilityListener : NSObject <FBLigerProvidesNetworkState, LigerReachabilityCallbackConfiguring>
{
    NSObject<OS_dispatch_queue> *_igLigerNetworkSwitchQueue;
    id <LigerReachabilityCallback> _callback;
    long long _reachabilityStatus;
}

+ (id)sharedListener;
- (void).cxx_destruct;
@property(nonatomic) long long reachabilityStatus; // @synthesize reachabilityStatus=_reachabilityStatus;
@property __weak id <LigerReachabilityCallback> callback; // @synthesize callback=_callback;
- (void)_networkStateChanged:(id)arg1;
- (id)networkState;
- (id)_stringFromNetworkReachabilityStatus:(long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

