//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class DYNOProtoMessageId, DYNOProtoUserId;

@interface DYNOProtoMessageReadStateId : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMessageId; // @dynamic hasMessageId;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(retain, nonatomic) DYNOProtoMessageId *messageId; // @dynamic messageId;
@property(retain, nonatomic) DYNOProtoUserId *userId; // @dynamic userId;

@end

