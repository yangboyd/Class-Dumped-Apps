//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/NSObject-Protocol.h>

@class GCKNError, GCKNTCPSocket;

@protocol GCKNTCPSocketDelegate <NSObject>
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didCloseWithError:(GCKNError *)arg2;
- (void)tcpSocketDidBecomeWritable:(GCKNTCPSocket *)arg1;
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didReceiveDataOfLength:(unsigned long long)arg2;
- (void)tcpSocket:(GCKNTCPSocket *)arg1 didFailToConnectWithError:(GCKNError *)arg2;
- (void)tcpSocketDidConnect:(GCKNTCPSocket *)arg1;
@end

