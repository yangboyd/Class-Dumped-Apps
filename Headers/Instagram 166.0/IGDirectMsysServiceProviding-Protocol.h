//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <InstagramAppCoreFramework/NSObject-Protocol.h>

@class IGDeviceSession, IGUserScopedObjects, NSString;
@protocol IGDirectTypingStatusReceiving, IGDirectTypingStatusSending;

@protocol IGDirectMsysServiceProviding <NSObject>
+ (void)activateMsysWithScopedObjects:(IGUserScopedObjects *)arg1;
+ (void)disableMsysSessionWithPk:(NSString *)arg1 deviceSession:(IGDeviceSession *)arg2;
+ (id <IGDirectTypingStatusReceiving>)msysTypingStatusReceiver:(IGUserScopedObjects *)arg1;
+ (id <IGDirectTypingStatusSending>)msysTypingStatusSender:(IGUserScopedObjects *)arg1;
+ (_Bool)isMsysTypingStatusReceivingEnabled:(IGUserScopedObjects *)arg1;
+ (_Bool)isMsysTypingStatusSendingEnabled:(IGUserScopedObjects *)arg1;
+ (_Bool)isMsysEnabled:(IGUserScopedObjects *)arg1;
@end

