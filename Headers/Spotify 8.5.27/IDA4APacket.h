//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface IDA4APacket : NSObject
{
    _Bool _urgent;
    unsigned long long _length;
    unsigned long long _connectionId;
    unsigned long long _type;
    NSData *_payload;
    unsigned long long _remoteAcceptPort;
}

+ (_Bool)isValidAcceptPort:(unsigned short)arg1;
+ (_Bool)isValidPacketType:(unsigned short)arg1;
+ (_Bool)isAcceptPort:(unsigned short)arg1 validForPacketType:(unsigned short)arg2;
+ (_Bool)payloadLength:(unsigned short)arg1 matchesPacketType:(unsigned long long)arg2;
+ (_Bool)isValidHeaderData:(id)arg1;
+ (id)packetWithData:(id)arg1;
+ (id)registerPacketWithType:(unsigned long long)arg1 payload:(id)arg2;
+ (id)broadcastPacketWithPayload:(id)arg1;
+ (id)hangupPacket;
+ (id)applaunchPacketWithPayload:(id)arg1;
+ (id)echoClosePacket;
+ (id)echoOpenPacket;
+ (id)echoDataPacket:(id)arg1;
+ (id)echoDataPacket;
+ (id)dataAcceptedPacketWithBytesAccepted:(unsigned long long)arg1;
+ (id)selectProtocolPacket:(unsigned long long)arg1;
+ (id)closePacketWithConnectionId:(unsigned long long)arg1;
+ (id)dataPacketWithConnectionId:(unsigned long long)arg1 payload:(id)arg2;
+ (id)openPacketWithConnectionId:(unsigned long long)arg1;
+ (id)validAcceptPortsForPacketTypes;
+ (id)validAcceptPorts;
+ (id)validPacketTypes;
@property unsigned long long remoteAcceptPort; // @synthesize remoteAcceptPort=_remoteAcceptPort;
@property(readonly, copy) NSData *payload; // @synthesize payload=_payload;
@property(readonly) _Bool urgent; // @synthesize urgent=_urgent;
@property(readonly) unsigned long long type; // @synthesize type=_type;
@property(readonly) unsigned long long connectionId; // @synthesize connectionId=_connectionId;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly) unsigned long long length; // @synthesize length=_length;
- (id)initWithPacketType:(unsigned long long)arg1 connectionId:(unsigned long long)arg2 remoteAcceptPort:(unsigned long long)arg3 urgent:(_Bool)arg4 payload:(id)arg5;
- (id)dataWithPacket;

@end

