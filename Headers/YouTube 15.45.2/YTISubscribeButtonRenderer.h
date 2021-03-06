//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSMutableArray, NSString, YTIAccessibilitySupportedDatas, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIHintSupportedRenderers, YTIIcon, YTISubscribeButtonNotificationOptionsSupportedRenderers, YTISubscribeButtonOptionsSupportedRenderers, YTISubscribeButtonStyle, YTISubscribeButtonTheme, YTISubscribeMessageSupportedRenderers, YTIUnsubscribeMessageSupportedRenderers;

@interface YTISubscribeButtonRenderer : GPBMessage
{
}

+ (id)descriptor;
- (id)dialogRenderer;
- (id)unsubscribeEndpoint;
- (id)subscribeEndpoint;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(nonatomic) long long androidClientLastUpdatedTimestamp; // @dynamic androidClientLastUpdatedTimestamp;
@property(readonly, nonatomic) int buttonStyleOneOfCase; // @dynamic buttonStyleOneOfCase;
@property(retain, nonatomic) YTIFormattedString *buttonText; // @dynamic buttonText;
@property(copy, nonatomic) NSString *channelId; // @dynamic channelId;
@property(nonatomic) _Bool enabled; // @dynamic enabled;
@property(nonatomic) _Bool hasAndroidClientLastUpdatedTimestamp; // @dynamic hasAndroidClientLastUpdatedTimestamp;
@property(nonatomic) _Bool hasButtonText; // @dynamic hasButtonText;
@property(nonatomic) _Bool hasChannelId; // @dynamic hasChannelId;
@property(nonatomic) _Bool hasEnabled; // @dynamic hasEnabled;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIcon; // @dynamic hasIcon;
@property(nonatomic) _Bool hasIncludeGaiaIdForDebug; // @dynamic hasIncludeGaiaIdForDebug;
@property(nonatomic) _Bool hasLongSubscriberCountText; // @dynamic hasLongSubscriberCountText;
@property(nonatomic) _Bool hasNotificationPreferenceButton; // @dynamic hasNotificationPreferenceButton;
@property(nonatomic) _Bool hasNotificationPreferenceToggleButton; // @dynamic hasNotificationPreferenceToggleButton;
@property(nonatomic) _Bool hasReadSubscribedValueFromEntityStore; // @dynamic hasReadSubscribedValueFromEntityStore;
@property(nonatomic) _Bool hasServerTimestampMs; // @dynamic hasServerTimestampMs;
@property(nonatomic) _Bool hasShortSubscriberCountText; // @dynamic hasShortSubscriberCountText;
@property(nonatomic) _Bool hasShowPreferences; // @dynamic hasShowPreferences;
@property(nonatomic) _Bool hasSignInEndpoint; // @dynamic hasSignInEndpoint;
@property(nonatomic) _Bool hasSubscribeAccessibility; // @dynamic hasSubscribeAccessibility;
@property(nonatomic) _Bool hasSubscribeButtonOptions; // @dynamic hasSubscribeButtonOptions;
@property(nonatomic) _Bool hasSubscribeMessage; // @dynamic hasSubscribeMessage;
@property(nonatomic) _Bool hasSubscribed; // @dynamic hasSubscribed;
@property(nonatomic) _Bool hasSubscribedButtonText; // @dynamic hasSubscribedButtonText;
@property(nonatomic) _Bool hasSubscribedEntityKey; // @dynamic hasSubscribedEntityKey;
@property(nonatomic) _Bool hasSubscribedTimestamp; // @dynamic hasSubscribedTimestamp;
@property(nonatomic) _Bool hasSubscriberCountText; // @dynamic hasSubscriberCountText;
@property(nonatomic) _Bool hasSubscriberCountWithSubscribeText; // @dynamic hasSubscriberCountWithSubscribeText;
@property(nonatomic) _Bool hasSubscriberCountWithUnsubscribeText; // @dynamic hasSubscriberCountWithUnsubscribeText;
@property(nonatomic) _Bool hasTargetId; // @dynamic hasTargetId;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUnsubscribeAccessibility; // @dynamic hasUnsubscribeAccessibility;
@property(nonatomic) _Bool hasUnsubscribeButtonText; // @dynamic hasUnsubscribeButtonText;
@property(nonatomic) _Bool hasUnsubscribeConfirmTimeLimit; // @dynamic hasUnsubscribeConfirmTimeLimit;
@property(nonatomic) _Bool hasUnsubscribeMessage; // @dynamic hasUnsubscribeMessage;
@property(nonatomic) _Bool hasUnsubscribedButtonText; // @dynamic hasUnsubscribedButtonText;
@property(retain, nonatomic) YTIHintSupportedRenderers *hint; // @dynamic hint;
@property(retain, nonatomic) YTIIcon *icon; // @dynamic icon;
@property(nonatomic) _Bool includeGaiaIdForDebug; // @dynamic includeGaiaIdForDebug;
@property(retain, nonatomic) YTIFormattedString *longSubscriberCountText; // @dynamic longSubscriberCountText;
@property(retain, nonatomic) YTISubscribeButtonNotificationOptionsSupportedRenderers *notificationPreferenceButton; // @dynamic notificationPreferenceButton;
@property(retain, nonatomic) YTIButtonSupportedRenderers *notificationPreferenceToggleButton; // @dynamic notificationPreferenceToggleButton;
@property(retain, nonatomic) NSMutableArray *onSubscribeEndpointsArray; // @dynamic onSubscribeEndpointsArray;
@property(readonly, nonatomic) unsigned long long onSubscribeEndpointsArray_Count; // @dynamic onSubscribeEndpointsArray_Count;
@property(retain, nonatomic) NSMutableArray *onUnsubscribeEndpointsArray; // @dynamic onUnsubscribeEndpointsArray;
@property(readonly, nonatomic) unsigned long long onUnsubscribeEndpointsArray_Count; // @dynamic onUnsubscribeEndpointsArray_Count;
@property(nonatomic) _Bool readSubscribedValueFromEntityStore; // @dynamic readSubscribedValueFromEntityStore;
@property(nonatomic) long long serverTimestampMs; // @dynamic serverTimestampMs;
@property(retain, nonatomic) NSMutableArray *serviceEndpointsArray; // @dynamic serviceEndpointsArray;
@property(readonly, nonatomic) unsigned long long serviceEndpointsArray_Count; // @dynamic serviceEndpointsArray_Count;
@property(retain, nonatomic) YTIFormattedString *shortSubscriberCountText; // @dynamic shortSubscriberCountText;
@property(nonatomic) _Bool showPreferences; // @dynamic showPreferences;
@property(retain, nonatomic) YTICommand *signInEndpoint; // @dynamic signInEndpoint;
@property(retain, nonatomic) YTISubscribeButtonStyle *style; // @dynamic style;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *subscribeAccessibility; // @dynamic subscribeAccessibility;
@property(retain, nonatomic) YTISubscribeButtonOptionsSupportedRenderers *subscribeButtonOptions; // @dynamic subscribeButtonOptions;
@property(retain, nonatomic) YTISubscribeMessageSupportedRenderers *subscribeMessage; // @dynamic subscribeMessage;
@property(nonatomic) _Bool subscribed; // @dynamic subscribed;
@property(retain, nonatomic) YTIFormattedString *subscribedButtonText; // @dynamic subscribedButtonText;
@property(copy, nonatomic) NSString *subscribedEntityKey; // @dynamic subscribedEntityKey;
@property(nonatomic) long long subscribedTimestamp; // @dynamic subscribedTimestamp;
@property(retain, nonatomic) YTIFormattedString *subscriberCountText; // @dynamic subscriberCountText;
@property(retain, nonatomic) YTIFormattedString *subscriberCountWithSubscribeText; // @dynamic subscriberCountWithSubscribeText;
@property(retain, nonatomic) YTIFormattedString *subscriberCountWithUnsubscribeText; // @dynamic subscriberCountWithUnsubscribeText;
@property(copy, nonatomic) NSString *targetId; // @dynamic targetId;
@property(retain, nonatomic) YTISubscribeButtonTheme *theme; // @dynamic theme;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *unsubscribeAccessibility; // @dynamic unsubscribeAccessibility;
@property(retain, nonatomic) YTIFormattedString *unsubscribeButtonText; // @dynamic unsubscribeButtonText;
@property(copy, nonatomic) NSString *unsubscribeConfirmTimeLimit; // @dynamic unsubscribeConfirmTimeLimit;
@property(retain, nonatomic) YTIUnsubscribeMessageSupportedRenderers *unsubscribeMessage; // @dynamic unsubscribeMessage;
@property(retain, nonatomic) YTIFormattedString *unsubscribedButtonText; // @dynamic unsubscribedButtonText;

@end

