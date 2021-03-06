//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBSharedContentDataSourceProtocol-Protocol.h"

@class DBSharedContentAPIClient, DBSharedContentError, DBSharedContentMembersData, DBSharedContentMetadata, DBSharedLinkInfo, DBWeakObserverMap, NSArray, NSString;
@protocol DBFileEntry, DBSharedLinkAPIClient;

@interface DBSharedContentFolderDataSource : NSObject <DBSharedContentDataSourceProtocol>
{
    NSString *_userId;
    id <DBFileEntry> _fileEntry;
    DBSharedContentMetadata *_folderMetadata;
    DBSharedContentMembersData *_membersData;
    DBSharedLinkInfo *_tiburonSharedLinkInfo;
    NSArray *_sharedLinkMetadataList;
    DBSharedContentError *_inviteNewMembersDeniedMetadataError;
    DBWeakObserverMap *_observers;
    _Bool _initialMetadataLoadCompleted;
    _Bool _initialMemberDataReceived;
    _Bool _initialMemberLoadCompleted;
    _Bool _didReceivedMembersCursor;
    unsigned long long _lastMemberRequestID;
    DBSharedContentAPIClient *_sharedContentAPIClient;
    id <DBSharedLinkAPIClient> _sharedLinkAPIClient;
}

+ (id)db_genericDataSourceError;
- (void).cxx_destruct;
- (void)db_notifyObserversOfMemberCountUpdate;
- (void)db_notifyObserversOfMembersUpdate;
- (void)db_notifyObserversOfMetadataUpdate;
- (_Bool)db_isInviteNewMembersDeniedMetadataError:(id)arg1;
- (void)db_receiveMembersResponseWithUsers:(id)arg1 groups:(id)arg2 invitees:(id)arg3 isFirstPage:(_Bool)arg4 complete:(_Bool)arg5 error:(id)arg6 memberCompletion:(CDUnknownBlockType)arg7;
- (void)db_receiveMetadataResponseWithFolderMetadata:(id)arg1 forceLoadMembers:(_Bool)arg2 membersCursor:(id)arg3 error:(id)arg4 metadataCompletion:(CDUnknownBlockType)arg5 memberCompletion:(CDUnknownBlockType)arg6;
- (void)db_addMembersWithContacts:(id)arg1 accessLevel:(long long)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)db_shareFolderWithMemberPolicy:(long long)arg1 sharedLinkPolicy:(long long)arg2 aclUpdatePolicy:(long long)arg3 passPolicy:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)db_shareFolderWithCompletion:(CDUnknownBlockType)arg1;
- (void)db_updateMemberCount;
- (void)db_loadUnsharedFolderInheritedMembersWithMembersCursor:(id)arg1 memberCompletion:(CDUnknownBlockType)arg2;
- (void)db_loadSharedFolderMembersWithMemberCompletion:(CDUnknownBlockType)arg1;
- (void)db_reloadSharedContentDataWithSharedFolderId:(id)arg1 metadataCompletion:(CDUnknownBlockType)arg2 memberCompletion:(CDUnknownBlockType)arg3;
- (id)sharedLinkForAccessLevel:(long long)arg1;
- (id)addDataSourceObserver:(id)arg1;
- (void)unmountFolderWithCompletion:(CDUnknownBlockType)arg1;
- (void)unshareContentWithLeaveACopy:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeMemberWithMembershipInfo:(id)arg1;
- (void)updateMemberWithMembershipInfo:(id)arg1;
- (void)createLinkWithAccessLevel:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePolicyWithMemberPolicy:(long long)arg1 sharedLinkPolicy:(long long)arg2 aclUpdatePolicy:(long long)arg3 passPolicy:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void)revokeSharedLink:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateLinkSettingsWithSettings:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)addMembersWithContacts:(id)arg1 accessLevel:(long long)arg2 message:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reloadSharedContentDataWithMetadataCompletion:(CDUnknownBlockType)arg1 memberCompletion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool initialMemberLoadCompleted;
@property(readonly, nonatomic) _Bool initialMemberDataReceived;
@property(readonly, nonatomic) _Bool initialMetadataLoadCompleted;
@property(readonly, nonatomic) DBSharedContentError *inviteNewMembersDeniedMetadataError;
@property(readonly, nonatomic) DBSharedLinkInfo *tiburonSharedLinkInfo;
@property(readonly, nonatomic) DBSharedContentMetadata *contentMetadata;
@property(readonly, nonatomic) DBSharedContentMembersData *membersData;
@property(readonly, nonatomic) _Bool hasAnyMembers;
@property(readonly, nonatomic) _Bool isSharedContent;
@property(readonly, nonatomic) NSArray *sharedLinkMetadataList;
- (id)initWithFileEntry:(id)arg1 userState:(id)arg2 sharedLinkAPIClient:(id)arg3;
- (id)initWithFileEntry:(id)arg1 userState:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

