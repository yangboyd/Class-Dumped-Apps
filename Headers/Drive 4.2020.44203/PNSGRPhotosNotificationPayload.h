//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class PhotosMCAssistantMessage, PhotosMCAssistantMessageId;

@interface PNSGRPhotosNotificationPayload : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosMCAssistantMessage *assistantMessage; // @dynamic assistantMessage;
@property(retain, nonatomic) PhotosMCAssistantMessageId *assistantMessageId; // @dynamic assistantMessageId;
@property(nonatomic) _Bool hasAssistantMessage; // @dynamic hasAssistantMessage;
@property(nonatomic) _Bool hasAssistantMessageId; // @dynamic hasAssistantMessageId;

@end

