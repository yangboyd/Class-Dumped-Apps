//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GuidanceUnreadStruct, NSString, UrlStruct, VideoUnreadStruct;

@interface FamiliarUserStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) UrlStruct *avatar168X168; // @dynamic avatar168X168;
@property(retain, nonatomic) UrlStruct *avatar300X300; // @dynamic avatar300X300;
@property(retain, nonatomic) UrlStruct *avatarLarger; // @dynamic avatarLarger;
@property(retain, nonatomic) UrlStruct *avatarThumb; // @dynamic avatarThumb;
@property(nonatomic) int followStatus; // @dynamic followStatus;
@property(nonatomic) int followerStatus; // @dynamic followerStatus;
@property(retain, nonatomic) GuidanceUnreadStruct *guidanceUnreadInfo; // @dynamic guidanceUnreadInfo;
@property(nonatomic) _Bool hasAvatar168X168; // @dynamic hasAvatar168X168;
@property(nonatomic) _Bool hasAvatar300X300; // @dynamic hasAvatar300X300;
@property(nonatomic) _Bool hasAvatarLarger; // @dynamic hasAvatarLarger;
@property(nonatomic) _Bool hasAvatarThumb; // @dynamic hasAvatarThumb;
@property(nonatomic) _Bool hasFollowStatus; // @dynamic hasFollowStatus;
@property(nonatomic) _Bool hasFollowerStatus; // @dynamic hasFollowerStatus;
@property(nonatomic) _Bool hasGuidanceUnreadInfo; // @dynamic hasGuidanceUnreadInfo;
@property(nonatomic) _Bool hasIsGroupOwner; // @dynamic hasIsGroupOwner;
@property(nonatomic) _Bool hasNickname; // @dynamic hasNickname;
@property(nonatomic) _Bool hasRemarkName; // @dynamic hasRemarkName;
@property(nonatomic) _Bool hasSecUid; // @dynamic hasSecUid;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasVideoUnreadInfo; // @dynamic hasVideoUnreadInfo;
@property(nonatomic) _Bool isGroupOwner; // @dynamic isGroupOwner;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(copy, nonatomic) NSString *remarkName; // @dynamic remarkName;
@property(copy, nonatomic) NSString *secUid; // @dynamic secUid;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;
@property(copy, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(retain, nonatomic) VideoUnreadStruct *videoUnreadInfo; // @dynamic videoUnreadInfo;

@end

