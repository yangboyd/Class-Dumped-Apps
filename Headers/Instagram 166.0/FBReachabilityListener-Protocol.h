//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@protocol FBReachabilityListener <NSObject>

@optional
- (void)latencyStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)uploadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)downloadBandwidthStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
- (void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2;
@end

