//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGMwsRealtimeTopicHandlingService, IGRealtimeMqttClient, IGVideoCallLoggingContext, NSString;
@protocol IGAPIClient, IGRTCVideoCallControllerConnectionDelegate, IGRTCVideoCallControllerIntf, IGRTCVideoCallControllerParticipantDelegate, IGUserExperimentSetProviding;

@protocol IGWebRTCVideoCallKitIntf <NSObject>
+ (id <IGRTCVideoCallControllerIntf>)rtcCallControllerWithUserPk:(NSString *)arg1 experimentSet:(id <IGUserExperimentSetProviding>)arg2 mqttClient:(IGRealtimeMqttClient *)arg3 mwsRealtimeTopicHandlingService:(IGMwsRealtimeTopicHandlingService *)arg4 networker:(id <IGAPIClient>)arg5 loggingContext:(IGVideoCallLoggingContext *)arg6 videoDelegate:(id <IGRTCVideoCallControllerParticipantDelegate>)arg7 connectionDelegate:(id <IGRTCVideoCallControllerConnectionDelegate>)arg8;
@end

