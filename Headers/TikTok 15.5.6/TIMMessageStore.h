//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMKeyValueStoreProtocol-Protocol.h"
#import "TIMMessageStoreProtocol-Protocol.h"

@class NSDictionary, NSString, TIMMulticastDelegate;
@protocol OS_os_log, TIMCurrentUserCredentialProtocol;

@interface TIMMessageStore : NSObject <TIMMessageStoreProtocol, TIMKeyValueStoreProtocol>
{
    id <TIMCurrentUserCredentialProtocol> _currentUserImp;
    NSDictionary *_openedDatabases;
    TIMMulticastDelegate *_observerMulticast;
    NSObject<OS_os_log> *_slog;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSObject<OS_os_log> *slog; // @synthesize slog=_slog;
@property(retain, nonatomic) TIMMulticastDelegate *observerMulticast; // @synthesize observerMulticast=_observerMulticast;
@property(copy, nonatomic) NSDictionary *openedDatabases; // @synthesize openedDatabases=_openedDatabases;
@property(retain, nonatomic) id <TIMCurrentUserCredentialProtocol> currentUserImp; // @synthesize currentUserImp=_currentUserImp;
- (void).cxx_destruct;
- (id)getTransactionFromDatabase:(id)arg1;
- (void)notifyWithUpdate:(id)arg1;
- (void)removeObserverWithIdentifier:(id)arg1;
- (id)addSyncWeakChangesObserver:(id)arg1 priority:(int)arg2;
- (id)addWeakChangesObserver:(id)arg1 onQueue:(id)arg2 priority:(int)arg3;
- (id)addWeakChangesObserver:(id)arg1 onQueue:(id)arg2;
- (id)dataForKey:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setTexts:(id)arg1;
- (id)textForKey:(id)arg1;
- (void)setText:(id)arg1 forKey:(id)arg2;
- (void)removeAllParticipantReadReceiptsInConversation:(id)arg1;
- (void)removeParticipants:(id)arg1 participantCount:(id)arg2 inConversation:(id)arg3;
- (void)removeAllParticipantsInConversation:(id)arg1;
- (id)messagesInConversation:(id)arg1 baseMessage:(id)arg2 limit:(unsigned long long)arg3 InMessageTypes:(id)arg4 slideDirection:(unsigned long long)arg5;
- (id)participantReadReceiptsInConversation:(id)arg1;
- (id)participantsInConversation:(id)arg1;
- (id)maxSortOrderParticipantInConversation:(id)arg1;
- (void)insertParticipantReadReceipts:(id)arg1;
- (void)insertParticipantsInConversation:(id)arg1 participants:(id)arg2;
- (void)overrideAllParticipantsInConversation:(id)arg1 participants:(id)arg2;
- (id)oldestUnreadMentionMessageInConversation:(id)arg1;
- (id)neverUpdatedTicketConversations;
- (void)deleteMessageNewPropertyKey:(id)arg1 messageID:(id)arg2 conversationID:(id)arg3 idempotentID:(id)arg4;
- (id)batchGetMessageNewPropertyWithStatus:(id)arg1;
- (id)getMessageNewPropertyKey:(id)arg1 messageID:(id)arg2 conversationID:(id)arg3 idempotentID:(id)arg4;
- (void)insertOrUpdateMessageNewProperty:(id)arg1 needNotify:(_Bool)arg2;
- (id)batchGetMessageAllNewProperty:(id)arg1 withTransaction:(id)arg2;
- (id)getMessageAllNewProperty:(id)arg1 withTransaction:(id)arg2;
- (void)deleteConversationAllNewProperty:(id)arg1 withTransaction:(id)arg2;
- (void)deleteMessageAllNewProperty:(id)arg1 withTransaction:(id)arg2;
- (void)handleInsertMessageNewProperty:(id)arg1 withTransaction:(id)arg2 withUpdate:(id)arg3;
- (void)insertConversationWithIdentifier:(id)arg1 type:(int)arg2 configBlock:(CDUnknownBlockType)arg3;
- (id)conversationLocalInfoWithIdentifier:(id)arg1;
- (id)conversationSettingsInfoWithIdentifier:(id)arg1;
- (id)conversationCoreInfoWithIdentifier:(id)arg1;
- (id)conversationWithIdentifier:(id)arg1;
- (id)conversationsWithInboxes:(id)arg1;
- (id)conversations;
- (long long)minOrderIndex;
- (long long)maxOrderIndex;
- (long long)maxOrderIndexInConversationWithIdentifier:(id)arg1 withTransaction:(id)arg2;
- (long long)maxOrderIndexInConversationWithIdentifier:(id)arg1;
- (long long)minPullIndexInConversationWithIdentifier:(id)arg1;
- (long long)maxPullIndexInConversationWithIdentifier:(id)arg1;
- (id)firstVisibleUnreadMessageInConversation:(id)arg1;
- (id)deleteAnchorMessagesInConversation:(id)arg1;
- (id)messagesInConversation:(id)arg1 afterMessage:(id)arg2 limit:(unsigned long long)arg3 includeSoftDeleted:(_Bool)arg4;
- (id)messagesInConversation:(id)arg1 beforeMessage:(id)arg2 limit:(unsigned long long)arg3 includeSoftDeleted:(_Bool)arg4;
- (id)messagesBeforeOrderIndex:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(_Bool)arg3;
- (void)markAllConversationsAsRead:(id)arg1 readIndexChangedConversationModels:(id)arg2;
- (void)markConversationAsRead:(id)arg1 tillIndex:(id)arg2;
- (void)hardDeleteConversation:(id)arg1 withOptions:(unsigned long long)arg2;
- (void)hardDeleteConversation:(id)arg1;
- (void)hardDeleteAllMessagesInConversation:(id)arg1 withNotify:(_Bool)arg2;
- (void)hardDeleteAllMessagesInConversation:(id)arg1;
- (void)softDeleteMessageWithIdentifier:(id)arg1 inConversationWithIdentifier:(id)arg2;
- (void)hardDeleteFilesInConversation:(id)arg1;
- (void)hardDeleteFilesBelongToMessage:(id)arg1 InConversation:(id)arg2;
- (id)filesBelongToMessage:(id)arg1 InConversation:(id)arg2;
- (id)fileWithIdentifier:(id)arg1;
- (id)messageWithServerMessageID:(long long)arg1 inConversationWithIdentifier:(id)arg2;
- (id)messageWithPullIndex:(long long)arg1 inConversationWithIdentifier:(id)arg2;
- (id)messageWithLocalMessageID:(long long)arg1 deviceID:(id)arg2 inConversationWithIdentifier:(id)arg3;
- (id)messagesBelongingInMessageTypes:(id)arg1 inConversation:(id)arg2;
- (id)messageWithIdentifier:(id)arg1 inConversationWithIdentifier:(id)arg2;
- (void)updateFile:(id)arg1 alterBlock:(CDUnknownBlockType)arg2;
- (void)updateConversation:(id)arg1 alterBlock:(CDUnknownBlockType)arg2;
- (void)updateMessage:(id)arg1 inConversationWithIdentifier:(id)arg2 alterBlock:(CDUnknownBlockType)arg3;
- (void)insertMessages:(id)arg1 conversationTypes:(id)arg2 conversationShortIDs:(id)arg3 files:(id)arg4 inbox:(int)arg5 reason:(id)arg6;
- (_Bool)shouldMarkAsReadAfterVersionChange:(id)arg1;
- (void)insertFile:(id)arg1;
- (void)markAllSendingAsFailed:(id)arg1;
- (id)currentUserDatabase;
- (void)removeDatabaseInstanceForUser:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)warnMainThreadWritingIOIfNeeded;
- (void)warnMainThreadReadingIOIfNeeded;
- (id)sharedNotifyQueue;
- (id)sharedWritableQueue;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

