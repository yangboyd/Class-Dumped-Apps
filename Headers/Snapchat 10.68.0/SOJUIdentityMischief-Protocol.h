//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString, SOJUIdentityMischiefMetadata, SOJULastMischiefChatAction, SOJULastMischiefContent, SOJUVideoChatParams;

@protocol SOJUIdentityMischief <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *migrationState;
@property(readonly, copy, nonatomic) NSNumber *isCognacNotificationMuted;
@property(readonly, copy, nonatomic) NSNumber *mentionNotificationStatus;
@property(readonly, copy, nonatomic) NSArray *messageEraseMessages;
@property(readonly, copy, nonatomic) NSDictionary *seenChatSequenceNumbers;
@property(readonly, copy, nonatomic) NSString *mischiefCreationSource;
@property(readonly, copy, nonatomic) NSString *creatorId;
@property(readonly, copy, nonatomic) NSNumber *isStoryMuted;
@property(readonly, copy, nonatomic) NSString *mischiefMobId;
@property(readonly, copy, nonatomic) NSDictionary *participantLastContent;
@property(readonly, copy, nonatomic) NSDictionary *pageLatestSequenceNumbers;
@property(readonly, copy, nonatomic) NSDictionary *blockedParticipantExceptions;
@property(readonly, copy, nonatomic) SOJULastMischiefContent *lastMischiefContent;
@property(readonly, copy, nonatomic) NSNumber *laterContentExists;
@property(readonly, copy, nonatomic) NSArray *snapStateMessages;
@property(readonly, copy, nonatomic) NSArray *messageStateMessages;
@property(readonly, copy, nonatomic) NSDictionary *earliestSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *earlierContentExists;
@property(readonly, copy, nonatomic) SOJUVideoChatParams *videoChatParams;
@property(readonly, copy, nonatomic) NSNumber *notificationStatus;
@property(readonly, copy, nonatomic) NSArray *updateMessages;
@property(readonly, copy, nonatomic) NSArray *releaseMessages;
@property(readonly, copy, nonatomic) NSArray *chatMessages;
@property(readonly, copy, nonatomic) NSArray *contentOrder;
@property(readonly, copy, nonatomic) NSArray *content;
@property(readonly, copy, nonatomic) NSString *contentType;
@property(readonly, copy, nonatomic) NSString *iterToken;
@property(readonly, copy, nonatomic) NSArray *stickerFavorites;
@property(readonly, copy, nonatomic) SOJULastMischiefChatAction *lastMischiefChatAction;
@property(readonly, copy, nonatomic) NSDictionary *latestSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *lastClearedTimestamp;
@property(readonly, copy, nonatomic) NSNumber *lastInteractionTimestamp;
@property(readonly, copy, nonatomic) NSNumber *createMischiefTimestamp;
@property(readonly, copy, nonatomic) NSArray *exParticipants;
@property(readonly, copy, nonatomic) NSArray *participants;
@property(readonly, copy, nonatomic) NSString *mischiefName;
@property(readonly, copy, nonatomic) SOJUIdentityMischiefMetadata *mischiefMetadata;
@property(readonly, copy, nonatomic) NSString *mischiefId;
@end

