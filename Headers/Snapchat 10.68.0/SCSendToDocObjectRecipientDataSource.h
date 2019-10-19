//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableDictionary, NSString, SCLazy, SCQueuePerformer, SCSendToListsDataRepository, SCSendToRanker, SCSendToSnappableSnapchattersFetcher, SCSendToThisChatRecipientsFetcher, SCUserSession;
@protocol OS_dispatch_queue, SCGroupManager, SCSnapchattersDataSearching;

@interface SCSendToDocObjectRecipientDataSource : NSObject <SCSnapchattersDataRequestListener, SCTraceEnabled>
{
    SCLazy *_snapchattersDataFetcher;
    id <SCSnapchattersDataSearching> _snapchattersSearchDataProvider;
    SCSendToSnappableSnapchattersFetcher *_snappableSnapchattersFetcher;
    SCSendToThisChatRecipientsFetcher *_thisChatRecipientsFetcher;
    SCSendToListsDataRepository *_listsDataRepository;
    SCLazy *_snapchattersDataTracker;
    id <SCGroupManager> _groupManager;
    SCLazy *_groupsDataTracker;
    SCUserSession *_userSession;
    SCQueuePerformer *_performer;
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_userIdToSnapchatterMap;
    NSMutableDictionary *_sectionRecipientsCountMap;
    SCSendToRanker *_recentsSectionASTRanker;
}

@property(copy, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
- (void).cxx_destruct;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (void)_updateRecipientsCount:(unsigned long long)arg1 SectionType:(id)arg2;
- (unsigned long long)recipientsCountForSectionType:(id)arg1;
- (void)_deleteUserIdFromSnapchatterMap:(id)arg1;
- (void)_updateUserIdToSnapchatterMap:(id)arg1;
- (void)_updateUserIdToSnapchatterMapAsynchronously:(id)arg1;
- (void)_fetchAndCacheSnapchattersWithUserIds:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchAndCacheSnapchattersWithUserId:(id)arg1;
- (void)_snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_fetchOutgoingSnapchattersIncludingMyself:(_Bool)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_snapStarsSnapchattersWithSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_snappableFriendsSectionSnapchattersFromSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_searchGroupsSectionRecipientsForGroupIds:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_searchGroupsSectionRecipientsForQuery:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_searchFriendsSectionRecipientsForSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_searchFriendsSectionRecipientsForQuery:(id)arg1 snapchatters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_searchGeneralSectionRecipientsForQuery:(id)arg1 snapchatters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_listSectionRecipientsWithListId:(id)arg1 snapchatters:(id)arg2 groups:(id)arg3 completionHandler:(CDUnknownBlockType)arg4 error:(id)arg5;
- (void)_searchAddFriendsSectionSnapchattersWithLocalSnapchatters:(id)arg1 remoteSnapchatters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_thisChatSectionRecipientsFromSnapchatters:(id)arg1 groups:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_recentsSectionRecipientsFromSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_quickAddSectionSnapchattersWithSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_snapBackSectionSnapchattersWithSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_bestFriendsSectionSnapchattersWithSnapchatters:(id)arg1 completionHandler:(CDUnknownBlockType)arg2 error:(id)arg3;
- (void)_friendsSectionSnapchattersForLetterKey:(id)arg1 snapchatters:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_allFriendsSectionSnapchattersWithSnapchatters:(id)arg1 includingNonMutualSnapPros:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3 error:(id)arg4;
- (void)_setupRecentsASTRanker;
- (void)removeListsDataRequestListener:(id)arg1;
- (void)addListsDataRequestListener:(id)arg1;
- (void)removeGroupsDataRequestListener:(id)arg1;
- (void)addGroupsDataRequestListener:(id)arg1;
- (void)removeSnapchattersDataRequestListener:(id)arg1;
- (void)addSnapchattersDataRequestListener:(id)arg1;
- (id)groupsSectionAllGroups;
- (id)groupsSectionNewGroups;
- (id)groupsSectionRecentGroups;
- (id)groupsWithGroupIds:(id)arg1;
- (id)groupWithGroupId:(id)arg1;
- (void)allRecipientsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)snapStarsSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)snappableSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)searchGroupsSectionRecipientsWithGroupIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchGroupsSectionRecipientsWithQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchFriendsSectionRecipientsWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)listSectionRecipientsWithListId:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)searchFriendsSectionRecipientsWithQuery:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchGeneralSectionRecipientsWithQuery:(id)arg1 includingMyself:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchAddFriendsSectionSnapchattersWithQuery:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)thisChatSectionRecipientsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)recentsSectionRecipientsWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)myFriendsSectionSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)quickAddSectionSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)snapBackSectionSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)bestFriendsSectionSnapchattersWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)friendsSectionSnapchattersForLetterKey:(id)arg1 includingMyself:(_Bool)arg2 includingNonMutualSnapPros:(_Bool)arg3 completionQueue:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)allFriendsSectionSnapchattersIncludingMyself:(_Bool)arg1 includingNonMutualSnapPros:(_Bool)arg2 completionQueue:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)allFriendsSectionSnapchattersIncludingMyself:(_Bool)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)snapchattersWithUserIds:(id)arg1 completionQueue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithSnapchattersDataFetcher:(id)arg1 snapchattersSearchDataProvider:(id)arg2 snappableSnapchattersFetcher:(id)arg3 thisChatRecipientsFetcher:(id)arg4 listsDataRepository:(id)arg5 snapchattersDataTracker:(id)arg6 groupManager:(id)arg7 groupsDataTracker:(id)arg8 userSession:(id)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

