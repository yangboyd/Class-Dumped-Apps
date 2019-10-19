//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GRWSAndroidNotificationUi_NotificationIcon, GRWSGeneralPromptUi_Action, NSMutableArray, NSString;

@interface GRWSAndroidNotificationUi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(retain, nonatomic) GRWSGeneralPromptUi_Action *defaultUserAction; // @dynamic defaultUserAction;
@property(nonatomic) int displayChannel; // @dynamic displayChannel;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasDefaultUserAction; // @dynamic hasDefaultUserAction;
@property(nonatomic) _Bool hasDisplayChannel; // @dynamic hasDisplayChannel;
@property(nonatomic) _Bool hasImportance; // @dynamic hasImportance;
@property(nonatomic) _Bool hasLargeIcon; // @dynamic hasLargeIcon;
@property(nonatomic) _Bool hasSmallIcon; // @dynamic hasSmallIcon;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) int importance; // @dynamic importance;
@property(retain, nonatomic) GRWSAndroidNotificationUi_NotificationIcon *largeIcon; // @dynamic largeIcon;
@property(retain, nonatomic) GRWSAndroidNotificationUi_NotificationIcon *smallIcon; // @dynamic smallIcon;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSMutableArray *userActionsArray; // @dynamic userActionsArray;
@property(readonly, nonatomic) unsigned long long userActionsArray_Count; // @dynamic userActionsArray_Count;

@end

