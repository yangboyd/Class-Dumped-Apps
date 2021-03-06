//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGUserBlockingActionListener-Protocol.h>

@class IGBlockedListNetworkDataSource, NSMutableOrderedSet, NSString;
@protocol IGBlockedUserControllerDelegate, IGUserBlockingActionAnnouncer;

@interface IGBlockedUserController : NSObject <IGUserBlockingActionListener>
{
    IGBlockedListNetworkDataSource *_blockedUsersNetworkDataSource;
    id <IGUserBlockingActionAnnouncer> _blockedUserControllerAnnouncer;
    long long _datasourceType;
    _Bool _hasSyncedWithServer;
    _Bool _hasFailedSyncWithServer;
    id <IGBlockedUserControllerDelegate> _delegate;
    NSMutableOrderedSet *_blockedUsers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool hasFailedSyncWithServer; // @synthesize hasFailedSyncWithServer=_hasFailedSyncWithServer;
@property(readonly, nonatomic) _Bool hasSyncedWithServer; // @synthesize hasSyncedWithServer=_hasSyncedWithServer;
@property(readonly, nonatomic) NSMutableOrderedSet *blockedUsers; // @synthesize blockedUsers=_blockedUsers;
@property(nonatomic) __weak id <IGBlockedUserControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_stopUserBlockListening;
- (void)_startUserBlockListening;
- (void)user:(id)arg1 blocked:(_Bool)arg2 messagingOnlyBlocked:(_Bool)arg3;
- (void)_updateUserForSuggestedBlockUserList:(id)arg1 blocked:(_Bool)arg2;
- (void)_updateUserForBlockedUserList:(id)arg1 blocked:(_Bool)arg2;
- (void)syncWithServer;
- (void)dealloc;
- (id)initWithNetworkDataSource:(id)arg1 blockedUserControllerAnnouncer:(id)arg2 dataSourceType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

