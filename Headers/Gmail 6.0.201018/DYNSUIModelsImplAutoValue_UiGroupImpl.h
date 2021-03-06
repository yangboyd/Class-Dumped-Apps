//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSUIModelsImplUiGroupImpl.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableSet, DYNSCommonAvatarInfo, DYNSCommonGroupId, DYNSCommonGroupNotificationSetting, DYNSCommonHelperGroupAttributeInfo, DYNSCommonUserId, DYNSModelsCommonDasherDomainPolicies, DYNSModelsCommonGroupSupportLevel, JavaUtilOptional, NSString;
@protocol DYNSCapabilitiesApiSharedGroupScopedCapabilities;

@interface DYNSUIModelsImplAutoValue_UiGroupImpl : DYNSUIModelsImplUiGroupImpl
{
    DYNSCommonGroupId *groupId_;
    DYNSCommonHelperGroupAttributeInfo *groupAttributeInfo_;
    DYNSModelsCommonGroupSupportLevel *groupSupportLevel_;
    NSString *name_;
    _Bool blocked_;
    _Bool hidden_;
    _Bool suppressed_;
    _Bool starred_;
    _Bool muted_;
    _Bool flat_;
    _Bool botDm_;
    _Bool unnamedSpace_;
    JavaUtilOptional *primaryDmPartnerUserId_;
    long long sortTimeMicros_;
    _Bool isGuestAccessEnabled_;
    JavaUtilOptional *organizationInfo_;
    JavaUtilOptional *isAccountUserGuestInGroup_;
    JavaUtilOptional *accountUserCapabilitiesInGroup_;
    _Bool dmInvitePending_;
    _Bool spamDmInvite_;
    _Bool spamInvite_;
    _Bool isInvite_;
    JavaUtilOptional *meetInvitationId_;
    DYNSCommonGroupNotificationSetting *groupNotificationSetting_;
    ComGoogleCommonCollectImmutableSet *allowedGroupNotificationSettings_;
    JavaUtilOptional *roomAvatarUrl_;
    DYNSCommonAvatarInfo *avatarInfo_;
    ComGoogleCommonCollectImmutableList *spaceIntegrationPayloads_;
    JavaUtilOptional *nameUsers_;
    JavaUtilOptional *groupIntegrationSettings_;
    DYNSCommonUserId *creatorId_;
    long long createTimeAtMicros_;
    long long lastViewedAtMicros_;
    _Bool interopWithClassic_;
    JavaUtilOptional *isOffTheRecord_;
    JavaUtilOptional *rosterEmail_;
    id <DYNSCapabilitiesApiSharedGroupScopedCapabilities> groupScopedCapabilities_;
    JavaUtilOptional *numJoinedMembers_;
    DYNSModelsCommonDasherDomainPolicies *dasherDomainPolicies_;
    JavaUtilOptional *markAsUnreadTimestamp_;
    _Bool notificationCardShownInStream_;
    JavaUtilOptional *notificationsCardTopicId_;
    JavaUtilOptional *groupDetails_;
}

- (void)dealloc;
- (id)toBuilder;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)getGroupDetails;
- (id)getNotificationsCardTopicId;
- (_Bool)isNotificationCardShownInStream;
- (id)getMarkAsUnreadTimestamp;
- (id)getDasherDomainPolicies;
- (id)getNumJoinedMembers;
- (id)getGroupScopedCapabilities;
- (id)getRosterEmail;
- (id)getIsOffTheRecord;
- (_Bool)isInteropWithClassic;
- (long long)getLastViewedAtMicros;
- (long long)getCreateTimeAtMicros;
- (id)getCreatorId;
- (id)getGroupIntegrationSettings;
- (id)getNameUsers;
- (id)getSpaceIntegrationPayloads;
- (id)getAvatarInfo;
- (id)getRoomAvatarUrl;
- (id)getAllowedGroupNotificationSettings;
- (id)getGroupNotificationSetting;
- (id)getMeetInvitationId;
- (_Bool)getIsInvite;
- (_Bool)isSpamInvite;
- (_Bool)isSpamDmInvite;
- (_Bool)isDmInvitePending;
- (id)getAccountUserCapabilitiesInGroup;
- (id)getIsAccountUserGuestInGroup;
- (id)getOrganizationInfo;
- (_Bool)getIsGuestAccessEnabled;
- (long long)getSortTimeMicros;
- (id)getPrimaryDmPartnerUserId;
- (_Bool)isUnnamedSpace;
- (_Bool)isBotDm;
- (_Bool)isFlat;
- (_Bool)isMuted;
- (_Bool)isStarred;
- (_Bool)isSuppressed;
- (_Bool)isHidden;
- (_Bool)isBlocked;
- (id)getName;
- (id)getGroupSupportLevel;
- (id)getGroupAttributeInfo;
- (id)getGroupId;

@end

