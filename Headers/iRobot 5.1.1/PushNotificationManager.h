//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushNotificationHandlerDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol PushNotificationManagerDelegate;

@interface PushNotificationManager : NSObject <PushNotificationHandlerDelegate>
{
    _Bool _shouldAttemptToProcessNotifications;
    id <PushNotificationManagerDelegate> _delegate;
    NSMutableArray *_pendingPushNotifications;
    NSDictionary *_handlerClassMapping;
    NSMutableArray *_activeNotificationHandlers;
}

+ (id)getInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *activeNotificationHandlers; // @synthesize activeNotificationHandlers=_activeNotificationHandlers;
@property(retain, nonatomic) NSDictionary *handlerClassMapping; // @synthesize handlerClassMapping=_handlerClassMapping;
@property(retain, nonatomic) NSMutableArray *pendingPushNotifications; // @synthesize pendingPushNotifications=_pendingPushNotifications;
@property(nonatomic) _Bool shouldAttemptToProcessNotifications; // @synthesize shouldAttemptToProcessNotifications=_shouldAttemptToProcessNotifications;
@property(nonatomic) __weak id <PushNotificationManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)generateJsonStringFromDictionary:(id)arg1;
- (void)processPendingNotifications;
- (void)notificationHandlerDidHandleUIInternally:(id)arg1;
- (void)notificationHandlerDidFail:(id)arg1;
- (void)notificationHandler:(id)arg1 didGenerateNotificationViewController:(id)arg2;
- (void)processPushNotification:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

