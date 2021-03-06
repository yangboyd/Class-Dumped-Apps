//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MtProtoKit/NSObject-Protocol.h>

@class MTTcpConnection, NSData;

@protocol MTTcpConnectionDelegate <NSObject>

@optional
- (void)tcpConnectionProgressUpdated:(MTTcpConnection *)arg1 packetProgressToken:(id)arg2 packetLength:(unsigned long long)arg3 progress:(float)arg4;
- (void)tcpConnectionDecodePacketProgressToken:(MTTcpConnection *)arg1 data:(NSData *)arg2 token:(long long)arg3 completion:(void (^)(long long, id))arg4;
- (void)tcpConnectionReceivedQuickAck:(MTTcpConnection *)arg1 quickAck:(int)arg2;
- (void)tcpConnectionReceivedData:(MTTcpConnection *)arg1 data:(NSData *)arg2;
- (void)tcpConnectionClosed:(MTTcpConnection *)arg1 error:(_Bool)arg2;
- (void)tcpConnectionOpened:(MTTcpConnection *)arg1;
@end

