//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIConversationSwitcherInviteItemRenderer, YTIConversationSwitcherItemRenderer, YTIMessageRenderer, YTINotificationRenderer;

@interface YTIMultiPageMenuNotificationSectionItemSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIConversationSwitcherInviteItemRenderer *conversationSwitcherInviteItemRenderer; // @dynamic conversationSwitcherInviteItemRenderer;
@property(retain, nonatomic) YTIConversationSwitcherItemRenderer *conversationSwitcherItemRenderer; // @dynamic conversationSwitcherItemRenderer;
@property(readonly, nonatomic) int itemsOneOfCase; // @dynamic itemsOneOfCase;
@property(retain, nonatomic) YTIMessageRenderer *messageRenderer; // @dynamic messageRenderer;
@property(retain, nonatomic) YTINotificationRenderer *notificationRenderer; // @dynamic notificationRenderer;

@end

