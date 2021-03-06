//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GCKCastSocket, GCKError, GCKSSecurityTrust, NSData;

@protocol GCKCastSocketDelegate <NSObject>
- (void)castSocket:(GCKCastSocket *)arg1 didDisconnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 canAcceptDataOfLength:(unsigned long long)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didReceiveMessage:(NSData *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didFailToConnectWithError:(GCKError *)arg2;
- (void)castSocket:(GCKCastSocket *)arg1 didConnectWithPeerSecurityTrust:(GCKSSecurityTrust *)arg2;
@end

