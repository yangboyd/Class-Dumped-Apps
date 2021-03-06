//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGRTCKragleKitIntf-Protocol.h>

@class NSString;

@interface IGRTCKragleKitImpl : NSObject <IGRTCKragleKitIntf>
{
}

+ (id)coWatchMediaSyncControllerWithUserScopedObjects:(id)arg1 userStore:(id)arg2 networker:(id)arg3 legacyEventHandler:(id)arg4 logger:(id)arg5 getIsMediaSyncEnabledForUser:(CDUnknownBlockType)arg6;
+ (void)hangupWithReason:(long long)arg1 withUserScopedObjects:(id)arg2;
+ (id)rtcCallControllerWithUserScopedObjects:(id)arg1 loggingContext:(id)arg2 videoDelegate:(id)arg3 connectionDelegate:(id)arg4;
+ (void)handlePushNotificationPayload:(id)arg1 withUserScopedObjects:(id)arg2;
+ (void)parseDismissNotificationForRtcMessageData:(id)arg1 withDismissHandler:(CDUnknownBlockType)arg2;
+ (void)shouldShowRingScreenForRtcMessageData:(id)arg1 withRingHandler:(CDUnknownBlockType)arg2;
+ (void)prepareWithUserScopedObjects:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

