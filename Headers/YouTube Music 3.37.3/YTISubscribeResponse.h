//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIChannelNotificationPreferenceButtonSupportedRenderers, YTIFrameworkUpdateTransport, YTIResponseContext, YTISubscribeHintSupportedRenderers;

@interface YTISubscribeResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(retain, nonatomic) YTIFrameworkUpdateTransport *frameworkUpdates; // @dynamic frameworkUpdates;
@property(nonatomic) _Bool hasFrameworkUpdates; // @dynamic hasFrameworkUpdates;
@property(nonatomic) _Bool hasNewNotificationButton; // @dynamic hasNewNotificationButton;
@property(nonatomic) _Bool hasNotificationToggleButtonHint; // @dynamic hasNotificationToggleButtonHint;
@property(nonatomic) _Bool hasResponseContext; // @dynamic hasResponseContext;
@property(nonatomic) _Bool hasTimestampMs; // @dynamic hasTimestampMs;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *loggingUrlsArray; // @dynamic loggingUrlsArray;
@property(readonly, nonatomic) unsigned long long loggingUrlsArray_Count; // @dynamic loggingUrlsArray_Count;
@property(retain, nonatomic) YTIChannelNotificationPreferenceButtonSupportedRenderers *newNotificationButton; // @dynamic newNotificationButton;
@property(retain, nonatomic) YTISubscribeHintSupportedRenderers *notificationToggleButtonHint; // @dynamic notificationToggleButtonHint;
@property(retain, nonatomic) YTIResponseContext *responseContext; // @dynamic responseContext;
@property(nonatomic) long long timestampMs; // @dynamic timestampMs;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

