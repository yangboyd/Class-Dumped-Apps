//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString;

@interface YTINotificationRegistration_ChromeRegistration : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *authKey; // @dynamic authKey;
@property(copy, nonatomic) NSString *browserEndpoint; // @dynamic browserEndpoint;
@property(copy, nonatomic) NSString *deviceId; // @dynamic deviceId;
@property(nonatomic) _Bool hasAuthKey; // @dynamic hasAuthKey;
@property(nonatomic) _Bool hasBrowserEndpoint; // @dynamic hasBrowserEndpoint;
@property(nonatomic) _Bool hasDeviceId; // @dynamic hasDeviceId;
@property(nonatomic) _Bool hasMessagingId; // @dynamic hasMessagingId;
@property(nonatomic) _Bool hasNotificationsDisabledInApp; // @dynamic hasNotificationsDisabledInApp;
@property(nonatomic) _Bool hasP256DhKey; // @dynamic hasP256DhKey;
@property(nonatomic) _Bool hasPermission; // @dynamic hasPermission;
@property(nonatomic) _Bool hasProjectId; // @dynamic hasProjectId;
@property(copy, nonatomic) NSData *messagingId; // @dynamic messagingId;
@property(nonatomic) _Bool notificationsDisabledInApp; // @dynamic notificationsDisabledInApp;
@property(copy, nonatomic) NSString *p256DhKey; // @dynamic p256DhKey;
@property(nonatomic) int permission; // @dynamic permission;
@property(copy, nonatomic) NSString *projectId; // @dynamic projectId;

@end

