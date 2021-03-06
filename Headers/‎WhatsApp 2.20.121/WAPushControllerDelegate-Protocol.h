//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WAChatJID, WAPushController;

@protocol WAPushControllerDelegate <NSObject>
- (_Bool)pushControllerShouldDeferCompletionHandler:(WAPushController *)arg1;
- (void)pushControllerDidReceivePreRegNotification:(WAPushController *)arg1;
- (void)pushController:(WAPushController *)arg1 didReceiveVisiblePushForChatFromJID:(WAChatJID *)arg2;
- (void)pushController:(WAPushController *)arg1 didReceiveCallWithID:(NSString *)arg2;
- (void)pushController:(WAPushController *)arg1 didReceiveMissedCallWithID:(NSString *)arg2;
- (void)pushControllerReloadUserNotificationSettings:(WAPushController *)arg1;
- (void)pushControllerWillRegisterForAPNSToken:(WAPushController *)arg1;
- (_Bool)pushControllerShouldProcessRemoteNotification:(WAPushController *)arg1;
- (void)pushControllerDidWakeForVOIPPush:(WAPushController *)arg1;
@end

