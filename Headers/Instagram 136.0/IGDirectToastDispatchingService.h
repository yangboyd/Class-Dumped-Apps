//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGDirectRealtimeIrisSyncStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGUserSessionObject-Protocol.h>
#import <InstagramAppCoreFramework/IGWarmStartListener-Protocol.h>

@class IGDirectInboxSubscriptionService, IGDirectThreadNotificationPresenter, IGUserSession, NSString;

@interface IGDirectToastDispatchingService : NSObject <IGDirectRealtimeIrisSyncStatusListener, IGWarmStartListener, IGUserSessionObject>
{
    IGDirectInboxSubscriptionService *_inboxSubscriptionService;
    IGUserSession *_userSession;
    IGDirectThreadNotificationPresenter *_notificationPresenter;
    _Bool _hasDispatchedToastForCurrentForegroundSession;
}

- (void).cxx_destruct;
- (void)_displayToastIfNecessaryForThreadSet:(id)arg1;
- (void)_checkThreadStatesAndDispatchToastIfNecessary;
- (void)irisSyncStatusTrackerChangedStatus:(id)arg1;
- (void)applicationWillEnterForegroundWithTimeIntervalSinceBackground:(double)arg1 warmStartInitializedFromNotification:(_Bool)arg2;
- (void)startService;
- (id)initWithInboxSubscriptionService:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

