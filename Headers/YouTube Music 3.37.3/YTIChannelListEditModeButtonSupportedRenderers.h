//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIButtonRenderer, YTISubscriptionNotificationOptionsRenderer, YTISubscriptionNotificationToggleButtonRenderer, YTIToggleButtonRenderer;

@interface YTIChannelListEditModeButtonSupportedRenderers : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonRenderer *buttonRenderer; // @dynamic buttonRenderer;
@property(nonatomic) _Bool hasButtonRenderer; // @dynamic hasButtonRenderer;
@property(nonatomic) _Bool hasSubscriptionNotificationOptionsRenderer; // @dynamic hasSubscriptionNotificationOptionsRenderer;
@property(nonatomic) _Bool hasSubscriptionNotificationToggleButtonRenderer; // @dynamic hasSubscriptionNotificationToggleButtonRenderer;
@property(nonatomic) _Bool hasToggleButtonRenderer; // @dynamic hasToggleButtonRenderer;
@property(retain, nonatomic) YTISubscriptionNotificationOptionsRenderer *subscriptionNotificationOptionsRenderer; // @dynamic subscriptionNotificationOptionsRenderer;
@property(retain, nonatomic) YTISubscriptionNotificationToggleButtonRenderer *subscriptionNotificationToggleButtonRenderer; // @dynamic subscriptionNotificationToggleButtonRenderer;
@property(retain, nonatomic) YTIToggleButtonRenderer *toggleButtonRenderer; // @dynamic toggleButtonRenderer;

@end

