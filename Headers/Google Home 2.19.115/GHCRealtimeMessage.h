//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GHCRealtimeMessage_Event, GPBTimestamp, NSString;

@interface GHCRealtimeMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GHCRealtimeMessage_Event *event; // @dynamic event;
@property(nonatomic) _Bool hasEvent; // @dynamic hasEvent;
@property(nonatomic) _Bool hasTimestamp; // @dynamic hasTimestamp;
@property(copy, nonatomic) NSString *obfuscatedGaiaId; // @dynamic obfuscatedGaiaId;
@property(copy, nonatomic) NSString *sessionId; // @dynamic sessionId;
@property(retain, nonatomic) GPBTimestamp *timestamp; // @dynamic timestamp;

@end

