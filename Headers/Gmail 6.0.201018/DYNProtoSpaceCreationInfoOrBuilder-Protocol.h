//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsDynamiteV1FrontendApiSpaceDetails, ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType, DYNProtoAvatarInfo, DYNProtoGroupGuestAccessSettings, DYNProtoGroupVisibility, DYNProtoInviteeMemberInfo, DYNProtoRoomInviteNotificationSettings, DYNProtoSpaceCreationInfo_FlatGroup, DYNProtoSpaceCreationInfo_SpaceType, DYNProtoSpaceCreationInfo_ThreadedGroup, DYNProtoSpaceCreationInfo_ThreadedModelCase, NSString;
@protocol JavaUtilList;

@protocol DYNProtoSpaceCreationInfoOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (DYNProtoSpaceCreationInfo_ThreadedModelCase *)getThreadedModelCase;
- (NSString *)getSharedDriveName;
- (_Bool)hasSharedDriveName;
- (ComGoogleAppsDynamiteV1SharedAttributeCheckerGroupType *)getAttributeCheckerGroupType;
- (_Bool)hasAttributeCheckerGroupType;
- (ComGoogleAppsDynamiteV1FrontendApiSpaceDetails *)getSpaceDetails;
- (_Bool)hasSpaceDetails;
- (DYNProtoSpaceCreationInfo_SpaceType *)getSpaceType;
- (_Bool)hasSpaceType;
- (DYNProtoAvatarInfo *)getAvatarInfo;
- (_Bool)hasAvatarInfo;
- (DYNProtoRoomInviteNotificationSettings *)getNotificationSettings;
- (_Bool)hasNotificationSettings;
- (DYNProtoInviteeMemberInfo *)getInviteeMemberInfosWithInt:(int)arg1;
- (id <JavaUtilList>)getInviteeMemberInfosList;
- (int)getInviteeMemberInfosCount;
- (_Bool)getHasServerGeneratedName;
- (_Bool)hasHasServerGeneratedName;
- (DYNProtoSpaceCreationInfo_ThreadedGroup *)getThreadedGroup;
- (_Bool)hasThreadedGroup;
- (DYNProtoSpaceCreationInfo_FlatGroup *)getFlatGroup;
- (_Bool)hasFlatGroup;
- (DYNProtoGroupVisibility *)getVisibility;
- (_Bool)hasVisibility;
- (DYNProtoGroupGuestAccessSettings *)getGroupGuestAccessSettings;
- (_Bool)hasGroupGuestAccessSettings;
- (NSString *)getName;
- (_Bool)hasName;
@end

