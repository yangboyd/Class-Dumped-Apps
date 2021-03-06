//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/XMPPConnection.h>

#import "WAOutgoingAckHandlerDelegate-Protocol.h"
#import "WAServiceExtensionProcessingWatchdogDelegate-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSString, WABatchDispatcher, WAFieldStatsEventChatConnectionAttribution, WAMessageHandler, WAOutgoingAckHandler, WAPeerMessagesQueue, WAPersistentKeyValueStoreCursor, WAPersistentStanzaQueue, WAServiceExtensionProcessingFieldstats, WAServiceExtensionProcessingWatchdog, XMPPRequestSetProfilePicture;
@protocol XMPPConnectionMainPersistedMessageStanzaProcessingDelegate;

@interface XMPPConnectionMain : XMPPConnection <WAServiceExtensionProcessingWatchdogDelegate, WAOutgoingAckHandlerDelegate>
{
    WAPersistentStanzaQueue *_offlinePopStanzaQueue;
    WAFieldStatsEventChatConnectionAttribution *_chatConnectionAttribution;
    XMPPRequestSetProfilePicture *_pendingSetProfilePictureRequest;
    _Bool _hasInFlightSetProfilePictureRequest;
    WABatchDispatcher *_receiptAcksDispatcher;
    NSMutableDictionary *_dirtyBitTypeHandlers;
    NSMutableDictionary *_unackedPlayedReceipts;
    NSMutableDictionary *_sentReadReceipts;
    NSMutableDictionary *_unackedReadReceipts;
    WAOutgoingAckHandler *_outgoingAckHandler;
    unsigned long long _serviceExtensionProcessingState;
    WAPersistentKeyValueStoreCursor *_serviceExtensionProcessingCursor;
    NSMutableDictionary *_processingPersistentStanzaForKey;
    NSMutableDictionary *_deferredPersistentStanzaForKey;
    WAServiceExtensionProcessingWatchdog *_serviceExtensionProcessingWatchdog;
    CDUnknownBlockType _leavePassiveModeCompletionBlock;
    WAServiceExtensionProcessingFieldstats *_nseProcessingFieldstats;
    NSMutableArray *_blocksDeferredOnNSEProcessingCompletion;
    _Bool _hasPersistedAckStorageLock;
    WAPeerMessagesQueue *_peerMessagesQueue;
    WAMessageHandler *_incomingMessageHandler;
    id <XMPPConnectionMainPersistedMessageStanzaProcessingDelegate> _persistedStanzaProcessingDelegate;
}

+ (id)stanzaIDsInReceipt:(id)arg1;
+ (id)stringFromSpamReportOrigin:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasPersistedAckStorageLock; // @synthesize hasPersistedAckStorageLock=_hasPersistedAckStorageLock;
@property __weak id <XMPPConnectionMainPersistedMessageStanzaProcessingDelegate> persistedStanzaProcessingDelegate; // @synthesize persistedStanzaProcessingDelegate=_persistedStanzaProcessingDelegate;
@property(readonly) WAMessageHandler *incomingMessageHandler; // @synthesize incomingMessageHandler=_incomingMessageHandler;
@property(readonly, nonatomic) WAPeerMessagesQueue *peerMessagesQueue; // @synthesize peerMessagesQueue=_peerMessagesQueue;
- (void)sendPeerMessageStanza:(id)arg1;
- (void)serviceExtensionProcessingWatchdog:(id)arg1 requestsDroppingStanzasWithIdentifiers:(id)arg2;
- (void)appWakeReasonDidUpdate:(id)arg1;
- (void)finishedServiceExtensionProcessing;
- (void)clearPersistedStanzaKeys:(id)arg1;
- (void)finishedProcessingPersistedStanza:(id)arg1 withResult:(id)arg2;
- (void)processPersistedStanza:(id)arg1;
- (void)handleNextServiceExtensionOfflineBatch;
- (void)beginProcessingLocalOffline;
- (void)beginMergingDeviceListChanges;
- (void)internalBeginServiceExtensionProcessing;
- (_Bool)serviceExtensionProcessingIsRunning;
- (void)deferUntilServiceExtensionMessagesProcessed:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)beginServiceExtensionProcessing;
- (void)reallyRegisterHandlersForPersistentRequestManager:(id)arg1;
- (void)processIncomingCustomStanza:(id)arg1;
- (void)processIncomingCallStanza:(id)arg1;
- (void)updateStatusForIncomingReceipt:(id)arg1 withStanzaIDs:(id)arg2;
- (void)handleIncomingRetryReceipt:(id)arg1 stanzaIDs:(id)arg2;
- (void)processIncomingReceiptStanza:(id)arg1;
- (void)enqueueRequestsForMultiReceiptsOfAckWithUniqueKey:(id)arg1 receiptType:(unsigned long long)arg2;
- (void)processIncomingAckReceipt:(id)arg1;
- (void)processIncomingAck:(id)arg1;
- (void)processIncomingNonCallNegativeAck:(id)arg1;
- (void)processIncomingAckStanza:(id)arg1;
- (void)processIncomingChatStateStanza:(id)arg1;
- (void)processIncomingPresenceStanza:(id)arg1;
- (void)submitMissingDeviceFieldStats;
- (_Bool)handleIncomingMessageStanza:(id)arg1;
- (void)processIncomingMessageStanza:(id)arg1;
- (void)processIncomingLocationIQ:(id)arg1;
- (void)handleUserEnabledLocationSharingInChat:(id)arg1 incomingIQStanza:(id)arg2;
- (void)handleStopLocationReportingForIncomingIQStanza:(id)arg1;
- (void)startLocationReportingWithChatJID:(id)arg1 incomingIQStanza:(id)arg2 duration:(int)arg3;
- (void)processIncomingIQStanza:(id)arg1 isResponse:(_Bool)arg2;
- (void)performOnStreamClose;
- (void)performOnOfflineComplete;
- (void)performOnStreamOpen;
- (void)sendCallAckOrReceipt:(id)arg1 forOriginalStanza:(id)arg2;
- (void)sendCallStanza:(id)arg1;
- (void)endCallStanzaTimeout:(id)arg1;
- (void)startCallStanzaTimeout:(id)arg1;
- (_Bool)sendServerErrorReceiptForMessage:(id)arg1;
- (void)sendReadReceiptsForMessagesIfNeeded:(id)arg1;
- (void)sendPlayedReceiptForMessage:(id)arg1;
- (void)outgoingAckHandler:(id)arg1 processDeliveryReceipts:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendPreAcksWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dropPersistedAcksStorageLock;
- (id)outgoingAckHandler;
- (void)resendUnsentCallStanzas;
- (void)respondIfNeededWithPlaintextMediaRetryNotificationErrorToJID:(id)arg1 stanzaID:(id)arg2 participant:(id)arg3 result:(unsigned long long)arg4 rmrChild:(id)arg5;
- (void)respondIfNeededWithMediaRetryNotificationToJID:(id)arg1 forMessage:(id)arg2 participant:(id)arg3 result:(unsigned long long)arg4 rmrChild:(id)arg5;
- (void)serializeAndFlush:(CDUnknownBlockType)arg1;
- (void)serialize:(CDUnknownBlockType)arg1;
- (void)processMessageStatusChangeRequests:(id)arg1;
- (void)reportVoipPushDelay:(double)arg1;
- (void)sendGlobalPushConfig:(id)arg1 customSettings:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetPresenceStateOnStreamClose;
- (void)setPresenceInactiveForChat:(id)arg1;
- (void)sendRecoveryToken:(id)arg1 withBackupToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)queryABPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryServerPropertiesWithCompletion:(CDUnknownBlockType)arg1;
- (void)requestBroadcastListsWithCompletion:(CDUnknownBlockType)arg1;
- (void)deleteBroadcastListFromServer:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unsubscribeFromLocationUpdatesFromChatJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)subscribeToLocationUpdatesFromChatJID:(id)arg1 reportParticipants:(_Bool)arg2 includeMessageInParticipantInfo:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopLocationSharingWithContact:(id)arg1 sequenceNumber:(long long)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)stopLocationSharingWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)reportLocation:(id)arg1;
- (void)revokeGroupAddInvitationsForGroupWithJID:(id)arg1 participantJIDs:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)acceptGroupAddInvitationForGroupWithJID:(id)arg1 addRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePicture2ForJID:(id)arg1 withGroupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePicture2ForJID:(id)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePictureForJID:(id)arg1 withGroupAddRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getProfilePictureForJID:(id)arg1 withInviteCode:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)joinGroupUsingInviteCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInfoForGroupWithInviteCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)regenerateInviteCodeForGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestInviteCodeForGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestParticipatingGroupsWithRequestType:(unsigned long long)arg1 fetchOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteGroupWithJID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)leaveGroupWithJID:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)requestInfoForGroupWithJID:(id)arg1 requestType:(unsigned long long)arg2 addRequest:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)updateAdminsInGroupWithJID:(id)arg1 promoteJIDs:(id)arg2 demoteJIDs:(id)arg3 webClientRequestID:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)addParticipants:(id)arg1 toGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)removeParticipants:(id)arg1 fromGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setEphemeralitySetting:(id)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setFrequentlyForwardedRestricted:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAnnouncementOnly:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setLocked:(_Bool)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setDescription:(id)arg1 forGroupWithJID:(id)arg2 descriptionID:(id)arg3 previousID:(id)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)setSubject:(id)arg1 forGroupWithJID:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createGroupWithSubject:(id)arg1 description:(id)arg2 descriptionID:(id)arg3 participantJIDs:(id)arg4 key:(id)arg5 announcementOnly:(_Bool)arg6 locked:(_Bool)arg7 frequentlyForwardedRestricted:(_Bool)arg8 webClientRequestID:(id)arg9 completion:(CDUnknownBlockType)arg10;
- (void)getProfilePicture2ForJID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 retryOnNetworkFailure:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)getProfilePictureForJID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 retryOnNetworkFailure:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setProfilePictureForJID:(id)arg1 pictureData:(id)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)getStatusForJIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setStatus:(id)arg1 fromWebClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getGroupsBlacklistWithHash:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setPrivacySettingCategory:(id)arg1 value:(id)arg2 addedJIDs:(id)arg3 removedJIDs:(id)arg4 hash:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)queryPrivacySettingsWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)checkIfUserHasTwoFactorAuthenticationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setTwoFactorAuthenticationCode:(id)arg1 email:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeNumberWithUsername:(id)arg1 notify:(_Bool)arg2 notifyJIDs:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)normalizePhoneNumber:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteAccountWithFeedback:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)reportSpamCall:(id)arg1 calleeJID:(id)arg2 callerJID:(id)arg3 creatorJID:(id)arg4 isVideo:(_Bool)arg5 isGroupCall:(_Bool)arg6 durationInMilliseconds:(int)arg7 terminatorJID:(id)arg8 terminationReason:(id)arg9;
- (void)reportSpamJID:(id)arg1 origin:(unsigned long long)arg2 webClientRequestID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)reportSpamMessages:(id)arg1 interactions:(id)arg2 inChatSession:(id)arg3 origin:(unsigned long long)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)cleanDirtyBitType:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)registerDirtyBitHandlerForType:(unsigned long long)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setBlocklistV2WithDhash:(id)arg1 action:(long long)arg2 userJID:(id)arg3 bizOptOutInfo:(id)arg4 webClientRequestID:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)getBlocklistV2WithDhash:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendBlockedContactsList:(id)arg1 webClientRequestID:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getBlockedContactsListWithCompletion:(CDUnknownBlockType)arg1;
- (id)chatConnectionAttribution;
- (void)setConnectionAttribution:(id)arg1;
- (void)unsetBackgroundMaxConnectionAttemptOverrideWithKey:(id)arg1;
- (void)setBackgroundMaxConnectionAttemptOverrideWithKey:(id)arg1;
- (id)initWithNetworkUsageManager:(id)arg1 reachabilityHelper:(id)arg2 offlinePopStanzaQueue:(id)arg3 persistedAcksStanzaQueue:(id)arg4 peerMessagesQueue:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

