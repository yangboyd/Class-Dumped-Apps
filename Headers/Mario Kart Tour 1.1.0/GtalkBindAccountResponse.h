//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkErrorInfo, NSString;

@interface GtalkBindAccountResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GtalkErrorInfo *error; // @dynamic error;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasJid; // @dynamic hasJid;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(copy, nonatomic) NSString *jid; // @dynamic jid;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(nonatomic) int streamId; // @dynamic streamId;

@end

