//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSArray, NSDictionary, NSNumber, NSString;

@protocol SOJUIdentityMischiefRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSString *groupInviteType;
@property(readonly, copy, nonatomic) NSString *groupInviteId;
@property(readonly, copy, nonatomic) NSNumber *muteCognacNotification;
@property(readonly, copy, nonatomic) NSNumber *muteMischiefStory;
@property(readonly, copy, nonatomic) NSDictionary *sojuNewBlockedParticipantExceptions;
@property(readonly, copy, nonatomic) NSString *paginationType;
@property(readonly, copy, nonatomic) NSDictionary *earliestSequenceNumbers;
@property(readonly, copy, nonatomic) NSDictionary *latestSequenceNumbers;
@property(readonly, copy, nonatomic) NSNumber *turnNotificationOn;
@property(readonly, copy, nonatomic) NSArray *participantsToAdd;
@property(readonly, copy, nonatomic) NSString *mischiefName;
@property(readonly, copy, nonatomic) NSString *mischiefAction;
@property(readonly, copy, nonatomic) NSString *mischiefId;
@property(readonly, copy, nonatomic) NSString *username;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSString *timestamp;
@end

