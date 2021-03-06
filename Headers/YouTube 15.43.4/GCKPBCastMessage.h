//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface GCKPBCastMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool continued; // @dynamic continued;
@property(copy, nonatomic) NSString *destinationId; // @dynamic destinationId;
@property(nonatomic) _Bool hasContinued; // @dynamic hasContinued;
@property(nonatomic) _Bool hasDestinationId; // @dynamic hasDestinationId;
@property(nonatomic) _Bool hasNamespace_p; // @dynamic hasNamespace_p;
@property(nonatomic) _Bool hasPayloadBinary; // @dynamic hasPayloadBinary;
@property(nonatomic) _Bool hasPayloadType; // @dynamic hasPayloadType;
@property(nonatomic) _Bool hasPayloadUtf8; // @dynamic hasPayloadUtf8;
@property(nonatomic) _Bool hasProtocolVersion; // @dynamic hasProtocolVersion;
@property(nonatomic) _Bool hasRemainingLength; // @dynamic hasRemainingLength;
@property(nonatomic) _Bool hasSourceId; // @dynamic hasSourceId;
@property(copy, nonatomic) NSString *namespace_p; // @dynamic namespace_p;
@property(copy, nonatomic) NSData *payloadBinary; // @dynamic payloadBinary;
@property(nonatomic) int payloadType; // @dynamic payloadType;
@property(copy, nonatomic) NSString *payloadUtf8; // @dynamic payloadUtf8;
@property(nonatomic) int protocolVersion; // @dynamic protocolVersion;
@property(nonatomic) unsigned int remainingLength; // @dynamic remainingLength;
@property(copy, nonatomic) NSString *sourceId; // @dynamic sourceId;

@end

