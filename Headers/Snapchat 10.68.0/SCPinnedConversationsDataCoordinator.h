//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCGroupsDataRequestListener-Protocol.h"
#import "SCPinnedConversationsDataCoordinating-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"

@class NSMutableDictionary, NSString, SCDataCoordinatorListenerAnnouncer, SCDocObjectContext, SCQueuePerformer;
@protocol SCGroupsDataTracking, SCSnapchattersDataTracking;

@interface SCPinnedConversationsDataCoordinator : NSObject <SCSnapchattersDataRequestListener, SCGroupsDataRequestListener, SCPinnedConversationsDataCoordinating>
{
    SCDocObjectContext *_docObjectContext;
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    id <SCGroupsDataTracking> _groupsDataTracker;
    SCDataCoordinatorListenerAnnouncer *_eventAnnouncer;
    NSMutableDictionary *_pinnedTimestampsByFeedId;
    long long _maxPinnedConversations;
    SCQueuePerformer *_performer;
}

+ (id)dataCoordinatorIdentifier;
- (void).cxx_destruct;
- (void)_logChatConversationPinWithIdentifier:(id)arg1 pinRank:(long long)arg2;
- (void)_announceDataCoordinatorUpdateWithIdentifier:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (void)handleDataRequest:(id)arg1;
- (void)didUpdateGroupsDataRequest:(long long)arg1 groupId:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
- (_Bool)hasPinnedConversationWithId:(id)arg1;
- (void)fetchPinnedTimestampsByFeedIdWithCompletion:(CDUnknownBlockType)arg1;
- (void)removePinnedConversationWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPinnedConversationWithId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDocObjectContext:(id)arg1 snapchattersDataTracker:(id)arg2 groupsDataTracker:(id)arg3;
- (void)removeDataUpdateListener:(id)arg1;
- (void)addDataUpdateListener:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

