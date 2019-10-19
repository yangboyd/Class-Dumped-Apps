//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIFormattedString, YTIMenuSupportedRenderers;

@interface YTIConversationSwitcherItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIMenuSupportedRenderers *contextMenu; // @dynamic contextMenu;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) YTIFormattedString *conversationName; // @dynamic conversationName;
@property(nonatomic) _Bool hasContextMenu; // @dynamic hasContextMenu;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationName; // @dynamic hasConversationName;
@property(nonatomic) _Bool hasHasUnreadContent; // @dynamic hasHasUnreadContent;
@property(nonatomic) _Bool hasJoinMessage; // @dynamic hasJoinMessage;
@property(nonatomic) _Bool hasLastPostActivity; // @dynamic hasLastPostActivity;
@property(nonatomic) _Bool hasLastPostTimestamp; // @dynamic hasLastPostTimestamp;
@property(nonatomic) _Bool hasLastPostTimestampText; // @dynamic hasLastPostTimestampText;
@property(nonatomic) _Bool hasLastVideoThumbnailsText; // @dynamic hasLastVideoThumbnailsText;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasParticipantsText; // @dynamic hasParticipantsText;
@property(nonatomic) _Bool hasReadReceiptText; // @dynamic hasReadReceiptText;
@property(nonatomic) _Bool hasServiceEndpoint; // @dynamic hasServiceEndpoint;
@property(nonatomic) _Bool hasShowMutedLogo; // @dynamic hasShowMutedLogo;
@property(nonatomic) _Bool hasShowRepliesDisabled; // @dynamic hasShowRepliesDisabled;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnreadContent; // @dynamic hasUnreadContent;
@property(retain, nonatomic) YTIFormattedString *joinMessage; // @dynamic joinMessage;
@property(retain, nonatomic) YTIFormattedString *lastPostActivity; // @dynamic lastPostActivity;
@property(nonatomic) long long lastPostTimestamp; // @dynamic lastPostTimestamp;
@property(retain, nonatomic) YTIFormattedString *lastPostTimestampText; // @dynamic lastPostTimestampText;
@property(retain, nonatomic) NSMutableArray *lastVideoThumbnailsArray; // @dynamic lastVideoThumbnailsArray;
@property(readonly, nonatomic) unsigned long long lastVideoThumbnailsArray_Count; // @dynamic lastVideoThumbnailsArray_Count;
@property(retain, nonatomic) YTIFormattedString *lastVideoThumbnailsText; // @dynamic lastVideoThumbnailsText;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIFormattedString *participantsText; // @dynamic participantsText;
@property(retain, nonatomic) YTIFormattedString *readReceiptText; // @dynamic readReceiptText;
@property(retain, nonatomic) YTICommand *serviceEndpoint; // @dynamic serviceEndpoint;
@property(nonatomic) _Bool showMutedLogo; // @dynamic showMutedLogo;
@property(nonatomic) _Bool showRepliesDisabled; // @dynamic showRepliesDisabled;
@property(retain, nonatomic) NSMutableArray *showcasedParticipantThumbnailsArray; // @dynamic showcasedParticipantThumbnailsArray;
@property(readonly, nonatomic) unsigned long long showcasedParticipantThumbnailsArray_Count; // @dynamic showcasedParticipantThumbnailsArray_Count;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

