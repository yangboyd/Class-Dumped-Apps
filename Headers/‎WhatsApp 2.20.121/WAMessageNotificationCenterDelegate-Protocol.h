//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WAChatSession, WAMessageNotificationCenter;

@protocol WAMessageNotificationCenterDelegate <NSObject>
- (void)messageNotificationCenter:(WAMessageNotificationCenter *)arg1 needsChatSessionMarkedAsRead:(WAChatSession *)arg2;
- (void)sendDisplayedMessageNotificationsToWebClientIfNeededForMessageNotificationCenter:(WAMessageNotificationCenter *)arg1;
- (_Bool)shouldDelayNotificationsForMessageNotificationCenter:(WAMessageNotificationCenter *)arg1;
@end

