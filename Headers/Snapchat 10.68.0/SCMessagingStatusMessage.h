//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCMessagingCallingStatusMessage, SCMessagingGroupChatCreatedStatusMessage, SCMessagingMessageEraseStatusMessage, SCMessagingNameChangeStatusMessage, SCMessagingParticipantChangeStatusMessage, SCMessagingScreenCaptureStatusMessage;

@interface SCMessagingStatusMessage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCMessagingCallingStatusMessage *callingStatus; // @dynamic callingStatus;
@property(retain, nonatomic) SCMessagingGroupChatCreatedStatusMessage *groupChatCreated; // @dynamic groupChatCreated;
@property(retain, nonatomic) SCMessagingMessageEraseStatusMessage *messageErase; // @dynamic messageErase;
@property(retain, nonatomic) SCMessagingNameChangeStatusMessage *nameStatusChange; // @dynamic nameStatusChange;
@property(retain, nonatomic) SCMessagingParticipantChangeStatusMessage *participantChange; // @dynamic participantChange;
@property(retain, nonatomic) SCMessagingScreenCaptureStatusMessage *screenCapture; // @dynamic screenCapture;
@property(readonly, nonatomic) int statusOneOfCase; // @dynamic statusOneOfCase;

@end

