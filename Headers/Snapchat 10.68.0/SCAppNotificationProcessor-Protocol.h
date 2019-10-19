//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCNotificationProcessor-Protocol.h"

@class NSArray, SCAppNotification;

@protocol SCAppNotificationProcessor <SCNotificationProcessor>
- (void)processNotification:(SCAppNotification *)arg1;
- (long long)shouldFilterNotification:(SCAppNotification *)arg1;

@optional
- (void)didApplicationStateChange:(_Bool)arg1 withCurrentNotifications:(NSArray *)arg2;
- (void)removeNotification:(SCAppNotification *)arg1;
@end

