//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIFormattedString, YTIRenderer, YTISubscriptionNotificationToggleStateSupportedRenderers;

@interface YTISubscriptionNotificationToggleState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasInlineMenuButton; // @dynamic hasInlineMenuButton;
@property(nonatomic) _Bool hasInlineMenuText; // @dynamic hasInlineMenuText;
@property(nonatomic) _Bool hasNextStateId; // @dynamic hasNextStateId;
@property(nonatomic) _Bool hasState; // @dynamic hasState;
@property(nonatomic) _Bool hasStateId; // @dynamic hasStateId;
@property(retain, nonatomic) YTIRenderer *inlineMenuButton; // @dynamic inlineMenuButton;
@property(retain, nonatomic) YTIFormattedString *inlineMenuText; // @dynamic inlineMenuText;
@property(nonatomic) int nextStateId; // @dynamic nextStateId;
@property(retain, nonatomic) YTISubscriptionNotificationToggleStateSupportedRenderers *state; // @dynamic state;
@property(nonatomic) int stateId; // @dynamic stateId;

@end

