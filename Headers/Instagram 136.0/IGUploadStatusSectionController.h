//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

#import <InstagramAppCoreFramework/IGFeedItemPostedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGFeedItemUpdatedForAllListener-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaDeletedListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVUploadStatusListener-Protocol.h>
#import <InstagramAppCoreFramework/IGUploadCellContentViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGUploadsUnarchiveListener-Protocol.h>

@class IGPostCreationManager, IGUserSession, NSArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IGAccountSwitching, IGMultipleAccountHandling;

@interface IGUploadStatusSectionController : IGListSectionController <IGFeedItemPostedListener, IGFeedItemUpdatedForAllListener, IGMediaDeletedListener, IGTVUploadStatusListener, IGUploadCellContentViewDelegate, IGUploadsUnarchiveListener>
{
    id <IGAccountSwitching> _accountSwitcher;
    id <IGMultipleAccountHandling> _multipleAccountHandler;
    NSString *_currentUserPk;
    IGPostCreationManager *_postCreationManager;
    IGUserSession *_userSession;
    NSArray *_postSessions;
    NSArray *_postUploadStatusInfos;
    NSMutableDictionary *_postIdToExpandedState;
    NSMutableSet *_exemptedPostSessions;
}

- (void).cxx_destruct;
- (void)_removePendingPostUploadAndRefresh:(id)arg1;
- (void)_scheduleTimerForRemovingPostSessionIfNeeded:(id)arg1;
- (void)_onFeedItemFailedToUpload:(id)arg1;
- (void)_onFeedItemPosted:(id)arg1;
- (void)uploadStatusDidChange:(long long)arg1;
- (void)uploadStatusDidSucceedWithFeedItem:(id)arg1 didSharePreviewToFeed:(_Bool)arg2;
- (void)feedItemWasUpdated:(id)arg1 feedItemChange:(long long)arg2;
- (void)feedItemPostFailed;
- (void)feedItemPosted:(id)arg1 postId:(id)arg2;
- (void)uploadsUnarchived;
- (void)mediaItemDeleted:(id)arg1 storyReelPK:(id)arg2;
- (void)uploadCellWantsRetry:(id)arg1;
- (void)uploadCellActivePostDidConfigureSuccess:(id)arg1;
- (void)uploadCellActivePostDidSuspend:(id)arg1;
- (void)uploadCellWantsDeletion:(id)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (void)_updatePostSessionModels;
- (void)_updateUploads;
- (void)_reloadUploads;
- (void)_observeFeedItemChanges;
- (id)initWithAccountSwitcher:(id)arg1 multipleAccountHandler:(id)arg2 currentUserPk:(id)arg3 postCreationManager:(id)arg4 userSession:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

