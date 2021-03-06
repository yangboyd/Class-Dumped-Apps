//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserSessionPayload-Protocol.h>

@class IGPushNotificationHandlerIntent, IGPushNotificationInfo, NSString;

@interface IGPushCoordinatorHandlingOperationCompletionPayload : NSObject <IGUserSessionPayload>
{
    _Bool _needToSwitchAccounts;
    _Bool _isFromColdStart;
    IGPushNotificationHandlerIntent *_intent;
    IGPushNotificationInfo *_notificationInfo;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isFromColdStart; // @synthesize isFromColdStart=_isFromColdStart;
@property(readonly, nonatomic) _Bool needToSwitchAccounts; // @synthesize needToSwitchAccounts=_needToSwitchAccounts;
@property(readonly, retain, nonatomic) IGPushNotificationInfo *notificationInfo; // @synthesize notificationInfo=_notificationInfo;
@property(readonly, retain, nonatomic) IGPushNotificationHandlerIntent *intent; // @synthesize intent=_intent;
- (id)initWithIntent:(id)arg1 notificationInfo:(id)arg2 needToSwitchAccounts:(_Bool)arg3 isFromColdStart:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

