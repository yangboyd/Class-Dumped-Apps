//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, SCCORECompositeStoryId, SCSNTFTargetUserInfo;

@interface SCSNTFNotificationRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *customPoolId; // @dynamic customPoolId;
@property(nonatomic) long long displayDurationSecs; // @dynamic displayDurationSecs;
@property(nonatomic) _Bool hasStoryId; // @dynamic hasStoryId;
@property(nonatomic) _Bool hasTargetInfo; // @dynamic hasTargetInfo;
@property(nonatomic) _Bool isCustomPoolOnly; // @dynamic isCustomPoolOnly;
@property(nonatomic) _Bool isDryRun; // @dynamic isDryRun;
@property(nonatomic) _Bool isEmployeesOnly; // @dynamic isEmployeesOnly;
@property(nonatomic) _Bool isViewMyStoryCustom; // @dynamic isViewMyStoryCustom;
@property(nonatomic) long long lastCutoffTimestampMsecs; // @dynamic lastCutoffTimestampMsecs;
@property(nonatomic) long long lastSuccessPushTimestampMsecs; // @dynamic lastSuccessPushTimestampMsecs;
@property(copy, nonatomic) NSString *message; // @dynamic message;
@property(copy, nonatomic) NSString *notificationId; // @dynamic notificationId;
@property(copy, nonatomic) NSString *notificationKey; // @dynamic notificationKey;
@property(nonatomic) int notificationReason; // @dynamic notificationReason;
@property(nonatomic) int notificationType; // @dynamic notificationType;
@property(nonatomic) long long scheduleTimestampMsecs; // @dynamic scheduleTimestampMsecs;
@property(nonatomic) _Bool sendToAllEmployees; // @dynamic sendToAllEmployees;
@property(retain, nonatomic) SCCORECompositeStoryId *storyId; // @dynamic storyId;
@property(retain, nonatomic) SCSNTFTargetUserInfo *targetInfo; // @dynamic targetInfo;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(copy, nonatomic) NSString *userEmail; // @dynamic userEmail;
@property(copy, nonatomic) NSString *userId; // @dynamic userId;

@end

