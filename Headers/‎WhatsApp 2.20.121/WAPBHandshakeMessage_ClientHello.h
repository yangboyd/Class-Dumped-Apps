//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/GPBMessage.h>

@class NSData;

@interface WAPBHandshakeMessage_ClientHello : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *ephemeral; // @dynamic ephemeral;
@property(nonatomic) _Bool hasEphemeral; // @dynamic hasEphemeral;
@property(nonatomic) _Bool hasPayload; // @dynamic hasPayload;
@property(nonatomic) _Bool hasStatic_p; // @dynamic hasStatic_p;
@property(copy, nonatomic) NSData *payload; // @dynamic payload;
@property(copy, nonatomic) NSData *static_p; // @dynamic static_p;

@end

