//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IGVideoCallCurrentUserNotificationHandler : NSObject
{
}

+ (void)handleNotificationTapped:(id)arg1 context:(id)arg2 displayType:(long long)arg3 userSession:(id)arg4 navigateToThreadHandler:(CDUnknownBlockType)arg5;
+ (void)_handleDismissNotificationReceived:(id)arg1 context:(id)arg2 resolvedSession:(id)arg3 presentNotificationInForeground:(CDUnknownBlockType)arg4;
+ (void)_handleRingNotificationReceived:(id)arg1 context:(id)arg2 resolvedSession:(id)arg3 presentNotificationInForeground:(CDUnknownBlockType)arg4;
+ (void)handleNotificationReceived:(id)arg1 context:(id)arg2 resolvedSession:(id)arg3 presentNotificationInForeground:(CDUnknownBlockType)arg4;

@end

