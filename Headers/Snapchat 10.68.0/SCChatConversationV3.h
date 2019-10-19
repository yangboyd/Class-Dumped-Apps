//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatConversation-Protocol.h"
#import "SCChatConversationMetadataProtocol-Protocol.h"
#import "SCChatConversationV3-Protocol.h"
#import "SCChatRenderingConversation-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSSet, NSString, SCChatDraft, SOJULastMischiefContent;
@protocol SCChatGroup;

@interface SCChatConversationV3 : NSObject <SCChatRenderingConversation, SCChatConversationMetadataProtocol, SCChatConversation, SCChatConversationV3>
{
    _Bool _earlierContentExists;
    _Bool _notificationStatus;
    _Bool _isCognacNotificationMuted;
    NSString *_id;
    id <SCChatGroup> _group;
    long long _historyLoadingStatus;
    long long _loadingStatus;
    NSArray *_messages;
    long long _sequenceSyncState;
    struct NSDictionary *_knownChatSequenceNums;
    struct NSDictionary *_knownStateUpdateSequenceNums;
    struct NSDictionary *_knownSnapSequenceNums;
    struct NSDictionary *_pageKnownChatSequenceNums;
    struct NSDictionary *_earliestKnownChatSequenceNums;
    NSDictionary *_seenChatSequenceNums;
    struct NSDictionary *_stickerUsageHistory;
    NSArray *_failedSilentWireMessages;
    NSDictionary *_pendingSnapUpdates;
    SCChatDraft *_chatDraft;
    NSDate *_lastInteractionTimestamp;
    NSDate *_lastClearedTimestamp;
    NSDictionary *_lastReleasedSnapTimestamp;
    NSDictionary *_lastReleasedSnapId;
    SOJULastMischiefContent *_lastMischiefContent;
    long long _lastSyncContentType;
    NSDate *_lastOpenSnapTimestamp;
    NSDate *_lastOpenChatTimestamp;
    NSArray *_participantUsernames;
    NSString *_iterToken;
    NSString *_authMac;
    NSString *_authPayload;
    NSString *_conversationAuthType;
    unsigned long long _messageRetentionInMinutes;
    NSSet *_unknownMessageTypes;
    long long _migrationState;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (id)markContentTypeDeltaIfNecessaryForConversation:(id)arg1;
+ (id)conversationWithChatConversationV3:(id)arg1 modifyMessageIds:(id)arg2 withMutationBlock:(CDUnknownBlockType)arg3 enforceMessagesExist:(_Bool)arg4 autoShakeToReporter:(id)arg5;
+ (id)conversationWithChatConversationV3:(id)arg1 modifyAllMessageswithMutationBlock:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long migrationState; // @synthesize migrationState=_migrationState;
@property(readonly, nonatomic) _Bool isCognacNotificationMuted; // @synthesize isCognacNotificationMuted=_isCognacNotificationMuted;
@property(readonly, copy, nonatomic) NSSet *unknownMessageTypes; // @synthesize unknownMessageTypes=_unknownMessageTypes;
@property(readonly, nonatomic) unsigned long long messageRetentionInMinutes; // @synthesize messageRetentionInMinutes=_messageRetentionInMinutes;
@property(readonly, copy, nonatomic) NSString *conversationAuthType; // @synthesize conversationAuthType=_conversationAuthType;
@property(readonly, copy, nonatomic) NSString *authPayload; // @synthesize authPayload=_authPayload;
@property(readonly, copy, nonatomic) NSString *authMac; // @synthesize authMac=_authMac;
@property(readonly, copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(readonly, copy, nonatomic) NSArray *participantUsernames; // @synthesize participantUsernames=_participantUsernames;
@property(readonly, copy, nonatomic) NSDate *lastOpenChatTimestamp; // @synthesize lastOpenChatTimestamp=_lastOpenChatTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastOpenSnapTimestamp; // @synthesize lastOpenSnapTimestamp=_lastOpenSnapTimestamp;
@property(readonly, nonatomic) long long lastSyncContentType; // @synthesize lastSyncContentType=_lastSyncContentType;
@property(readonly, copy, nonatomic) SOJULastMischiefContent *lastMischiefContent; // @synthesize lastMischiefContent=_lastMischiefContent;
@property(readonly, copy, nonatomic) NSDictionary *lastReleasedSnapId; // @synthesize lastReleasedSnapId=_lastReleasedSnapId;
@property(readonly, copy, nonatomic) NSDictionary *lastReleasedSnapTimestamp; // @synthesize lastReleasedSnapTimestamp=_lastReleasedSnapTimestamp;
@property(readonly, nonatomic) _Bool notificationStatus; // @synthesize notificationStatus=_notificationStatus;
@property(readonly, copy, nonatomic) NSDate *lastClearedTimestamp; // @synthesize lastClearedTimestamp=_lastClearedTimestamp;
@property(readonly, copy, nonatomic) NSDate *lastInteractionTimestamp; // @synthesize lastInteractionTimestamp=_lastInteractionTimestamp;
@property(readonly, copy, nonatomic) SCChatDraft *chatDraft; // @synthesize chatDraft=_chatDraft;
@property(readonly, copy, nonatomic) NSDictionary *pendingSnapUpdates; // @synthesize pendingSnapUpdates=_pendingSnapUpdates;
@property(readonly, copy, nonatomic) NSArray *failedSilentWireMessages; // @synthesize failedSilentWireMessages=_failedSilentWireMessages;
@property(readonly, copy, nonatomic) NSDictionary *stickerUsageHistory; // @synthesize stickerUsageHistory=_stickerUsageHistory;
@property(readonly, nonatomic) _Bool earlierContentExists; // @synthesize earlierContentExists=_earlierContentExists;
@property(readonly, copy, nonatomic) NSDictionary *seenChatSequenceNums; // @synthesize seenChatSequenceNums=_seenChatSequenceNums;
@property(readonly, copy, nonatomic) NSDictionary *earliestKnownChatSequenceNums; // @synthesize earliestKnownChatSequenceNums=_earliestKnownChatSequenceNums;
@property(readonly, copy, nonatomic) NSDictionary *pageKnownChatSequenceNums; // @synthesize pageKnownChatSequenceNums=_pageKnownChatSequenceNums;
@property(readonly, copy, nonatomic) NSDictionary *knownSnapSequenceNums; // @synthesize knownSnapSequenceNums=_knownSnapSequenceNums;
@property(readonly, copy, nonatomic) NSDictionary *knownStateUpdateSequenceNums; // @synthesize knownStateUpdateSequenceNums=_knownStateUpdateSequenceNums;
@property(readonly, copy, nonatomic) NSDictionary *knownChatSequenceNums; // @synthesize knownChatSequenceNums=_knownChatSequenceNums;
@property(readonly, nonatomic) long long sequenceSyncState; // @synthesize sequenceSyncState=_sequenceSyncState;
@property(readonly, copy, nonatomic) NSArray *messages; // @synthesize messages=_messages;
@property(readonly, nonatomic) long long loadingStatus; // @synthesize loadingStatus=_loadingStatus;
@property(readonly, nonatomic) long long historyLoadingStatus; // @synthesize historyLoadingStatus=_historyLoadingStatus;
@property(readonly, copy, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
@property(readonly, copy, nonatomic) NSString *id; // @synthesize id=_id;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setUInt64:(unsigned long long)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setSInt32:(int)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setBool:(_Bool)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithId:(id)arg1 group:(id)arg2 historyLoadingStatus:(long long)arg3 loadingStatus:(long long)arg4 messages:(id)arg5 sequenceSyncState:(long long)arg6 knownChatSequenceNums:(struct NSDictionary *)arg7 knownStateUpdateSequenceNums:(struct NSDictionary *)arg8 knownSnapSequenceNums:(struct NSDictionary *)arg9 pageKnownChatSequenceNums:(struct NSDictionary *)arg10 earliestKnownChatSequenceNums:(struct NSDictionary *)arg11 seenChatSequenceNums:(id)arg12 earlierContentExists:(_Bool)arg13 stickerUsageHistory:(struct NSDictionary *)arg14 failedSilentWireMessages:(id)arg15 pendingSnapUpdates:(id)arg16 chatDraft:(id)arg17 lastInteractionTimestamp:(id)arg18 lastClearedTimestamp:(id)arg19 notificationStatus:(_Bool)arg20 lastReleasedSnapTimestamp:(id)arg21 lastReleasedSnapId:(id)arg22 lastMischiefContent:(id)arg23 lastSyncContentType:(long long)arg24 lastOpenSnapTimestamp:(id)arg25 lastOpenChatTimestamp:(id)arg26 participantUsernames:(id)arg27 iterToken:(id)arg28 authMac:(id)arg29 authPayload:(id)arg30 conversationAuthType:(id)arg31 messageRetentionInMinutes:(unsigned long long)arg32 unknownMessageTypes:(id)arg33 isCognacNotificationMuted:(_Bool)arg34 migrationState:(long long)arg35;
- (_Bool)hadAnyMessages;
- (id)lastSnapTimestamp;
- (id)title;
- (id)recipientUsernameForOneOnOneWithCurrentUser:(id)arg1;
- (id)lastSeenMessageTimestamp;
- (id)messagesForRendering;
- (_Bool)hasAuth;
- (_Bool)hasUnreadMessagesForUser:(id)arg1;
- (_Bool)doNotDisturbMentions;
- (_Bool)doNotDisturb;
- (_Bool)isPending;
- (_Bool)shouldExcludeFromFeed;
- (_Bool)isArroyoConversation;
- (_Bool)isGroupConversation;
- (id)participants;
- (_Bool)hasLaterContent;
- (id)knownSequences;
- (id)lastSeenMessageIdForUserId:(id)arg1;
- (id)lastCommitedMessageId;
- (struct NSDictionary *)knownChatSequenceNumsForViewing;
- (id)shortDescription;
- (id)getMessageIds;
- (id)getDeliveredMessagesFrom:(struct NSDictionary *)arg1 upTo:(struct NSDictionary *)arg2 withMinVersion:(unsigned long long)arg3;
- (id)getDeliveredMessagesUpTo:(struct NSDictionary *)arg1 withMinVersion:(unsigned long long)arg2;
- (id)getUnseenMessagesBy:(id)arg1;
- (struct NSDictionary *)getSeenChatSequenceNumsOf:(id)arg1;
- (id)getMessageByIds:(id)arg1;
- (id)messagesDictionary;
- (id)getMessageBySnapId:(id)arg1;
- (id)getMessageById:(id)arg1;
- (_Bool)hasMessageById:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

