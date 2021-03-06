//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Smooch/SKTInAppNotificationViewControllerDelegate-Protocol.h>

@class NSString, NSTimer, NSURLSessionDataTask, SKTConversation, SKTInAppNotificationWindow, SKTSettings, UNUserNotificationCenter;

@interface SKTInAppNotificationHandler : NSObject <SKTInAppNotificationViewControllerDelegate>
{
    SKTSettings *_settings;
    SKTInAppNotificationWindow *_inAppNotificationWindow;
    NSTimer *_timer;
    NSURLSessionDataTask *_imageTask;
    UNUserNotificationCenter *_userNotificationCenter;
    SKTConversation *_conversation;
}

@property(retain) SKTConversation *conversation; // @synthesize conversation=_conversation;
@property(retain) UNUserNotificationCenter *userNotificationCenter; // @synthesize userNotificationCenter=_userNotificationCenter;
@property(retain) NSURLSessionDataTask *imageTask; // @synthesize imageTask=_imageTask;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property(retain) SKTInAppNotificationWindow *inAppNotificationWindow; // @synthesize inAppNotificationWindow=_inAppNotificationWindow;
@property(retain) SKTSettings *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)notificationViewControllerDidDismissNotification:(id)arg1;
- (void)notificationViewControllerDidSelectNotification:(id)arg1;
- (void)invalidateTimerAndHideWindow;
- (void)removeInAppNotificationWindow;
- (void)timeOut;
- (void)showViewControllerWithMessage:(id)arg1 avatar:(id)arg2 conversation:(id)arg3;
- (id)notificationContentBodyStringForMessage:(id)arg1;
- (void)showLocalNotification:(id)arg1 conversation:(id)arg2;
- (void)showSmoochNotification:(id)arg1 conversation:(id)arg2;
- (void)showInAppNotification:(id)arg1 conversation:(id)arg2;
- (_Bool)shouldShowInAppNotification:(id)arg1 conversation:(id)arg2;
- (void)dealloc;
- (id)initWithSettings:(id)arg1 userNotificationCenter:(id)arg2 conversation:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

