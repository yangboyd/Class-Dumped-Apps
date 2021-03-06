//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEPublishTaskMessage-Protocol.h"
#import "AWEUserProfileModuleService-Protocol.h"

@class NSString;

@interface AWEUserProfileModuleService : HTSService <AWEPublishTaskMessage, AWEUserProfileModuleService>
{
}

- (void)task:(id)arg1 didEndWithResult:(long long)arg2 error:(id)arg3;
- (void)task:(id)arg1 didCreateAweme:(_Bool)arg2 error:(id)arg3;
- (id)contactFriendsSearchManager;
- (id)aweRelationListDataControllerWithType:(long long)arg1;
- (Class)aweRelationListDataControllerClass;
- (id)getRelationTableViewCellForTableView:(id)arg1;
- (id)getUserPostsDataManagerWithUserID:(id)arg1;
- (void)showUserPostViewControllerWithUserID:(id)arg1 initialAwemeID:(id)arg2 fromViewController:(id)arg3 referString:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateUserRemoteYellowDotManager:(id)arg1 withUser:(id)arg2;
- (id)newUserRemoteYellowDotManagerWithUserModel:(id)arg1;
- (_Bool)isHomePageBubbleDisplaying;
- (id)profileHeaderActionController;
- (Class)userWorkCollectionViewCellClass;
- (Class)completeInfoUtilClass;
- (_Bool)usernameContainsForbiddenCharacters:(id)arg1;
- (_Bool)resumeAuthorizationFlowWithURL:(id)arg1;
- (void)resetYoutubeAuthorizationFlow;
- (Class)profileActivityManagerClass;
- (id)profileActivityManager;
- (Class)profileEditSubmitManagerClass;
- (id)aweProfileBubblePriorityQueueManager;
- (Class)profileTabHelperClass;
- (id)profileHeaderManager;
- (id)createProfileEditTextViewControllerWithEditType:(long long)arg1 user:(id)arg2;
- (Class)aweUserDetailViewControllerClass;
- (Class)aweUserProfileEditMainControllerClass;
- (Class)aweUserHomeViewControllerClass;
- (id)profilePreloadManager;
- (Class)userDetailHelperProtocolClass;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

