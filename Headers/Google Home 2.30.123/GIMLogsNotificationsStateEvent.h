//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface GIMLogsNotificationsStateEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *notificationChannelStateArray; // @dynamic notificationChannelStateArray;
@property(readonly, nonatomic) unsigned long long notificationChannelStateArray_Count; // @dynamic notificationChannelStateArray_Count;
@property(nonatomic) int systemState; // @dynamic systemState;

@end

