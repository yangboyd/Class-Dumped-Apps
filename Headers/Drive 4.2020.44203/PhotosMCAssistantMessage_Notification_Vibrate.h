//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class NSString;

@interface PhotosMCAssistantMessage_Notification_Vibrate : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasQuietPeriodSec; // @dynamic hasQuietPeriodSec;
@property(nonatomic) _Bool hasThrottlingKey; // @dynamic hasThrottlingKey;
@property(nonatomic) int quietPeriodSec; // @dynamic quietPeriodSec;
@property(copy, nonatomic) NSString *throttlingKey; // @dynamic throttlingKey;

@end

