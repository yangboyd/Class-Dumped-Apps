//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSMutableArray, PhotosMCAutoAddSettings_AutoAddNotificationSettings;

@interface PhotosMCAutoAddSettings : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *autoAddClusterInfoArray; // @dynamic autoAddClusterInfoArray;
@property(readonly, nonatomic) unsigned long long autoAddClusterInfoArray_Count; // @dynamic autoAddClusterInfoArray_Count;
@property(retain, nonatomic) PhotosMCAutoAddSettings_AutoAddNotificationSettings *autoAddNotificationSettings; // @dynamic autoAddNotificationSettings;
@property(nonatomic) _Bool hasAutoAddNotificationSettings; // @dynamic hasAutoAddNotificationSettings;

@end

