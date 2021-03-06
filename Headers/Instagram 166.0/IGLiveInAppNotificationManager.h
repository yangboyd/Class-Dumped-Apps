//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGLiveInviteViewerConfirmationRequesting-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerDelegate-Protocol.h>

@class FBTimer, IGLiveInviteViewerConfirmationHandler, IGLiveNotificationStore, IGUserSession, IGVideoLivePrefetcher, NSString;

@interface IGLiveInAppNotificationManager : NSObject <IGLiveInviteViewerConfirmationRequesting, IGStoryViewerDelegate>
{
    IGUserSession *_userSession;
    IGLiveNotificationStore *_notificationStore;
    FBTimer *_seenOperationFlushTimer;
    IGLiveInviteViewerConfirmationHandler *_inviteConfirmationHandler;
    IGVideoLivePrefetcher *_livePrefetcher;
}

- (void).cxx_destruct;
- (_Bool)confirmationHandlerShouldConfirmPresenting:(id)arg1;
- (void)confirmationHandler:(id)arg1 didLoadBroadcast:(id)arg2 error:(id)arg3;
- (void)confirmationHandler:(id)arg1 willLoadBroadcastWithId:(id)arg2;
- (void)storyViewerDidTapViewDay:(id)arg1;
- (void)storyViewerDidTapTryItOn:(id)arg1 onEffectWithID:(id)arg2 effectName:(id)arg3 effectIconURL:(id)arg4;
- (_Bool)storyViewerShouldPresentCamera:(id)arg1;
- (void)storyViewerDidFinish:(id)arg1 navigationAction:(long long)arg2 lastMediaID:(id)arg3 viewerExitContextDict:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storyViewer:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)storyViewer:(id)arg1 didFocusOnReelWithPK:(id)arg2;
- (void)_presentLiveViewerViewControllerForBroadcast:(id)arg1;
- (void)_didTapNotificationWithBroadcast:(id)arg1;
- (void)_displayNotificationBarForBroadcast:(id)arg1;
- (void)_flushSeenTangoBroadcastNotifs;
- (_Bool)_shouldShowStartedNotificationForBroadcast:(id)arg1;
- (_Bool)shouldShowStartedNotificationForBroadcastPK:(id)arg1;
- (void)presentNotificationBarForBroadcast:(id)arg1;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

