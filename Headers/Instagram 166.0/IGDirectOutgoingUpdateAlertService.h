//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectOutgoingUpdateListener-Protocol.h>

@class IGDirectDjangoThreadSubscriptionService, IGDirectThreadNotificationPresenter, IGUserSession, NSString;

@interface IGDirectOutgoingUpdateAlertService : NSObject <IGDirectOutgoingUpdateListener>
{
    IGUserSession *_userSession;
    IGDirectThreadNotificationPresenter *_notificationPresenter;
    IGDirectDjangoThreadSubscriptionService *_threadSubscriptionService;
}

- (void).cxx_destruct;
- (void)_didRegisterThreadSubscriptionWithThread:(id)arg1 action:(id)arg2;
- (void)_showErrorMessageNotificationForAction:(id)arg1 threadId:(id)arg2;
- (void)_presentAlertViewForAction:(id)arg1;
- (void)directThreadOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directMessageOutgoingUpdate:(id)arg1 didFailWithError:(id)arg2;
- (void)directThreadOutgoingUpdateDidSucceed:(id)arg1;
- (void)directMessageOutgoingUpdateDidSucceed:(id)arg1;
- (void)startListening;
- (id)initWithUserSession:(id)arg1 threadSubscriptionService:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

