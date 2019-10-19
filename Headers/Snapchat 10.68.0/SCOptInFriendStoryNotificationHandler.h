//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCDataCoordinatorListener-Protocol.h"

@class NSString, SCLazy, SCQueuePerformer, SCUserSession;

@interface SCOptInFriendStoryNotificationHandler : NSObject <SCDataCoordinatorListener>
{
    SCUserSession *_userSession;
    SCLazy *_storiesDataCoordinatorLazy;
    SCLazy *_storiesPlaybackDataProviderLazy;
    SCLazy *_docObjectContextLazy;
    SCQueuePerformer *_notificationsPerformer;
    CDUnknownBlockType _prefetchCompletionHandler;
}

- (void).cxx_destruct;
- (void)_invokePrefetchHandlerOnPerformer;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)_addFriendStoryNotificationToMap:(id)arg1;
- (void)_resetFriendStoryNotificationMap;
- (id)_friendStoryNotificationMap;
- (void)_setLastFriendStoryPrefetchDateToNow;
- (_Bool)_shouldPrefetchFriendStoryInBackground;
- (void)_checkAndPostNotification:(id)arg1 isInApp:(_Bool)arg2;
- (void)_prefetchFriendStoryAndRepostNotification:(id)arg1 isInApp:(_Bool)arg2;
- (void)handleOptInFriendStoryNotification:(id)arg1;
- (id)initWithUserSession:(id)arg1 storiesDataCoordinatorLazy:(id)arg2 storiesPlaybackDataProviderLazy:(id)arg3 docObjectContextLazy:(id)arg4 queuePerformer:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

