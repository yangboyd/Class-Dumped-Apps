//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIInnerTubeContext;

@interface YTIModifyChannelNotificationPreferenceRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasNotificationPermissionsAttempted; // @dynamic hasNotificationPermissionsAttempted;
@property(nonatomic) _Bool hasNotificationsEnabledDeviceLevel; // @dynamic hasNotificationsEnabledDeviceLevel;
@property(nonatomic) _Bool hasNotificationsSetting; // @dynamic hasNotificationsSetting;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool notificationPermissionsAttempted; // @dynamic notificationPermissionsAttempted;
@property(nonatomic) _Bool notificationsEnabledDeviceLevel; // @dynamic notificationsEnabledDeviceLevel;
@property(nonatomic) int notificationsSetting; // @dynamic notificationsSetting;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(retain, nonatomic) NSMutableArray *secondaryParamsArray; // @dynamic secondaryParamsArray;
@property(readonly, nonatomic) unsigned long long secondaryParamsArray_Count; // @dynamic secondaryParamsArray_Count;

@end

