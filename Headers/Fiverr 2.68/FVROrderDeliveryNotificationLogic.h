//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FVROrderDeliveryNotificationLogic : NSObject
{
    NSMutableArray *_notificationsItems;
}

@property(retain, nonatomic) NSMutableArray *notificationsItems; // @synthesize notificationsItems=_notificationsItems;
- (void).cxx_destruct;
- (void)addCalanderEvent:(id)arg1 orderDeliveryTime:(id)arg2 orderId:(id)arg3 controllerCreate:(CDUnknownBlockType)arg4;
- (void)removeNotificationItemsFromNotificationArray:(id)arg1;
- (void)clearAllLocalNotifications;
- (void)cleanIfOutdatedAndReSubscribeNotificationsByUserName:(id)arg1;
- (void)cleanOutdatedNotifications;
- (void)removeNotificationItemByOrderId:(id)arg1 orderDeliveryTime:(id)arg2;
- (void)addNotificationItem:(id)arg1 orderDeliveryTime:(id)arg2 isBuyer:(_Bool)arg3 notificationTitle:(id)arg4;
- (_Bool)isOrderDeliveryWasScheduled:(id)arg1;
- (void)cancelLocalNotification:(id)arg1;
- (void)addLocalNotification:(id)arg1 orderDeliveryTime:(id)arg2 isBuyer:(_Bool)arg3 notificationTitle:(id)arg4 reSubscribe:(_Bool)arg5;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

