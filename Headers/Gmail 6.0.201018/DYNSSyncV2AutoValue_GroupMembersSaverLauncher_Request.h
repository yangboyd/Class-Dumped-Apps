//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSSyncV2GroupMembersSaverLauncher_Request.h"

@class ComGoogleCommonCollectImmutableList, DYNSCommonGroupId, DYNSCommonInternalRequestContext, DYNSCommonInternalRevision;

@interface DYNSSyncV2AutoValue_GroupMembersSaverLauncher_Request : DYNSSyncV2GroupMembersSaverLauncher_Request
{
    DYNSCommonInternalRequestContext *requestContext_;
    DYNSCommonGroupId *groupId_;
    ComGoogleCommonCollectImmutableList *joinedUserIds_;
    ComGoogleCommonCollectImmutableList *invitedMemberIds_;
    DYNSCommonInternalRevision *revision_;
}

- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)getRevision;
- (id)getInvitedMemberIds;
- (id)getJoinedUserIds;
- (id)getGroupId;
- (id)getRequestContext;

@end

