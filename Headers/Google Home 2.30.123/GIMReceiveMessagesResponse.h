//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GIMInboxMessage, GIMReceiveMessagesResponse_EndOfBatch, GIMReceiveMessagesResponse_Header, GIMReceiveMessagesResponse_Pong, GIMReceiveMessagesResponse_RefreshResult, GIMReceiveMessagesResponse_StartOfBatch;

@interface GIMReceiveMessagesResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(readonly, nonatomic) int bodyOneOfCase; // @dynamic bodyOneOfCase;
@property(retain, nonatomic) GIMReceiveMessagesResponse_EndOfBatch *endOfBatch; // @dynamic endOfBatch;
@property(nonatomic) _Bool hasHeader; // @dynamic hasHeader;
@property(retain, nonatomic) GIMReceiveMessagesResponse_Header *header; // @dynamic header;
@property(retain, nonatomic) GIMInboxMessage *inboxMessage; // @dynamic inboxMessage;
@property(retain, nonatomic) GIMReceiveMessagesResponse_Pong *pong; // @dynamic pong;
@property(retain, nonatomic) GIMReceiveMessagesResponse_RefreshResult *refreshResult; // @dynamic refreshResult;
@property(retain, nonatomic) GIMReceiveMessagesResponse_StartOfBatch *startOfBatch; // @dynamic startOfBatch;

@end

