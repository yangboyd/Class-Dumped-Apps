//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FCDRPCLog.h"

@class NSString;

@interface FCDMutableRPCLog : FCDRPCLog
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *hostname; // @dynamic hostname;
@property(nonatomic) int httpReturnStatus; // @dynamic httpReturnStatus;
@property(nonatomic) unsigned long long methodType; // @dynamic methodType;
@property(nonatomic) unsigned int payloadLatency; // @dynamic payloadLatency;
@property(nonatomic) unsigned long long payloadSizeReceived; // @dynamic payloadSizeReceived;
@property(nonatomic) unsigned long long payloadSizeSent; // @dynamic payloadSizeSent;
@property(copy, nonatomic) NSString *rpcID; // @dynamic rpcID;

@end

