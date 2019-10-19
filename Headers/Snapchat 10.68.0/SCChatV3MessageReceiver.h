//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMessageReceiveListener-Protocol.h"
#import "SCChatV3ConversationFetcherHandler-Protocol.h"

@class NSMutableDictionary, NSString, SCChatV3ConversationStore, SCChatV3FeedUpdater, SCChatV3MessageSender, SCChatV3MessageStateHandler, SCChatV3ReceiveBuffer, SCExperimentManager, SCLazy;
@protocol SCChatConversationBatchFetching, SCChatConversationFetcher, SCChatLogger, SCChatMessageActionHandling, SCFideliusUnwrapProtocol, SCGroupManager, SCSnapLogger, SCUserHelperProtocol;

@interface SCChatV3MessageReceiver : NSObject <SCChatMessageReceiveListener, SCChatV3ConversationFetcherHandler>
{
    SCExperimentManager *_experimentManager;
    id <SCChatConversationFetcher> _conversationFetcher;
    SCChatV3ConversationStore *_conversationStore;
    SCChatV3MessageSender *_messageSender;
    SCChatV3MessageStateHandler *_messageStateHandler;
    SCChatV3FeedUpdater *_feedUpdater;
    id <SCGroupManager> _groupManager;
    SCLazy *_snapchattersDataMutator;
    id <SCUserHelperProtocol> _userHelper;
    id <SCSnapLogger> _snapLogger;
    id <SCFideliusUnwrapProtocol> _fideliusHelper;
    id <SCChatMessageActionHandling> _actionHandler;
    id <SCChatLogger> _chatLogger;
    SCChatV3ReceiveBuffer *_receivedBuffer;
    NSString *_username;
    NSMutableDictionary *_gapFillQueue;
    SCLazy *_pinnedConversationsDataCoordinator;
    id <SCChatConversationBatchFetching> _batchFetcher;
    SCLazy *_receiveFlowLogger;
    SCLazy *_autoShakeToReporter;
}

@property(retain, nonatomic) SCChatV3ReceiveBuffer *receivedBuffer; // @synthesize receivedBuffer=_receivedBuffer;
- (void).cxx_destruct;
- (id)messageBufferBatchForConversationId:(id)arg1;
- (id)_newestOpenSnapTimestampInMessages:(id)arg1;
- (id)_updateLastOpenSnapTimestampIfPossible:(id)arg1 newMessages:(id)arg2;
- (id)_updatelastOpenTimestampsForConversation:(id)arg1 chatConversation:(id)arg2;
- (id)_updatelastOpenTimestampsForConversation:(id)arg1 mischief:(id)arg2;
- (void)fetchConversationForMissingMessage:(id)arg1;
- (void)handleChatConversation:(id)arg1;
- (id)_conversation:(id)arg1 handleUpdateMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleMessagePreservationMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleMessageStateMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleEraseMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleOneOnOneSnapStateMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleSnapStateMessage:(id)arg2;
- (id)_handleOneOnOneSnap:(id)arg1 forConversation:(id)arg2;
- (id)_releaseMesssagesFromConversation:(id)arg1 releaseWithTimestamp:(id)arg2 sender:(id)arg3 toPointer:(struct NSDictionary *)arg4 mischiefVersion:(unsigned long long)arg5;
- (id)_conversation:(id)arg1 handleOneOnOneReleaseMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleGroupReleaseMessage:(id)arg2;
- (id)_conversation:(id)arg1 handleChatMessage:(id)arg2;
- (id)_updateConversation:(id)arg1 withUnknownMessage:(id)arg2;
- (id)conversation:(id)arg1 addMessages:(id)arg2;
- (id)conversation:(id)arg1 addMessage:(id)arg2;
- (id)conversation:(id)arg1 handleSeqMessage:(id)arg2;
- (id)conversation:(id)arg1 applyMessage:(id)arg2;
- (id)_updateConversation:(id)arg1 withStickerFavorites:(id)arg2;
- (id)_updateConversation:(id)arg1 markMessagesAsSent:(struct NSDictionary *)arg2;
- (id)_updateConversation:(id)arg1 withLastMischiefContentFromChat:(id)arg2 username:(id)arg3;
- (id)_updateAllMessagesWithRetentionPolicy:(unsigned long long)arg1 conversation:(id)arg2 oldConversation:(id)arg3;
- (id)_releaseSnapsWithConversationLastReleasedTimestamps:(id)arg1;
- (id)_releaseMessagesWithConversationSeenChatSeqNums:(id)arg1 releaseParticipantMap:(id)arg2;
- (id)_viewedTimestampForOneOnOneMessage:(id)arg1 releaseParticipantMap:(id)arg2;
- (id)_mappedMessagesToBeReleased:(id)arg1 conversation:(id)arg2 releaseParticipantMap:(id)arg3;
- (id)_participantMappedMessagesToReleaseForConversation:(id)arg1;
- (id)_updateConversation:(id)arg1 withSeqNumsFromChat:(id)arg2;
- (id)_updateConversation:(id)arg1 withSeqNumsFromMischief:(id)arg2;
- (id)_updateConversation:(id)arg1 withHistoricMessagesFromMischief:(id)arg2;
- (id)_updateConversation:(id)arg1 withMessagesFromMischief:(id)arg2 oldConversation:(id)arg3 buffer:(id)arg4;
- (id)_updateConversation:(id)arg1 withGroupFromMischief:(id)arg2;
- (id)updateConversation:(id)arg1 withMischief:(id)arg2 buffer:(id)arg3;
- (_Bool)_localSnapExpired:(id)arg1 forChat:(id)arg2;
- (id)_updateConversation:(id)arg1 withMessagesFromChat:(id)arg2 oldConversation:(id)arg3 buffer:(id)arg4 isPagination:(_Bool)arg5;
- (id)_updateLocalMessage:(id)arg1 serverWireMessage:(id)arg2 conversation:(id)arg3;
- (_Bool)_shouldReceiveMessage:(id)arg1;
- (id)_mostRecentChatTimestampInConversation:(id)arg1;
- (id)_updateConversation:(id)arg1 withLastClearTsFromChat:(id)arg2;
- (id)_updateConversation:(id)arg1 withLastInteractionTsFromChat:(id)arg2;
- (id)_updateConversation:(id)arg1 withLastReleasedSnapTimestamps:(id)arg2;
- (id)updateConversation:(id)arg1 withChat:(id)arg2 buffer:(id)arg3 isPagination:(_Bool)arg4 isOneOnOnePlaceHolder:(_Bool)arg5 isCleared:(_Bool)arg6;
- (void)_updateConversationsWithMischiefs:(id)arg1 conversations:(id)arg2 fetchContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (_Bool)_shouldFetchPinnedConversationsWithTriggerType:(long long)arg1;
- (void)updateConversationsWithMischiefs:(id)arg1 conversations:(id)arg2 fetchContext:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)didReceiveMischiefs:(id)arg1 conversations:(id)arg2 username:(id)arg3 fetchContext:(id)arg4;
- (void)_handleStreakUpdateIfNecessaryForMessage:(id)arg1;
- (void)didReceiveWireMessage:(id)arg1;
- (id)receiveFlowLogger;
- (void)dealloc;
- (id)initWithConversationFetcher:(id)arg1 withConversationStore:(id)arg2 messageSender:(id)arg3 withMessageStateHandler:(id)arg4 feedUpdater:(id)arg5 withMessageActionHandler:(id)arg6 withExperimentManager:(id)arg7 withGroupManager:(id)arg8 withSnapchattersDataMutator:(id)arg9 withUserHelper:(id)arg10 snapLogger:(id)arg11 fideliusHelper:(id)arg12 username:(id)arg13 chatLogger:(id)arg14 pinnedConversationsDataCoordinator:(id)arg15 batchFetcher:(id)arg16 receiveFlowLogger:(id)arg17 autoShakeToReporter:(id)arg18;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

