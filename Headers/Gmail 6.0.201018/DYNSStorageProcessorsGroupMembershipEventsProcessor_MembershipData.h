//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ComGoogleCommonCollectImmutableList, JavaUtilOptional;
@protocol JavaUtilMap;

@interface DYNSStorageProcessorsGroupMembershipEventsProcessor_MembershipData : NSObject
{
    ComGoogleCommonCollectImmutableList *dmJoiningUserContextIds_;
    JavaUtilOptional *groupToBeUpdated_;
    id <JavaUtilMap> memberIdToUpdatedMembershipState_;
    _Bool didProcessNonAccountMember_;
    int numberOfJoinedMembersAfterUpdate_;
    int numberOfInvitedMembersAfterUpdate_;
    id <JavaUtilMap> dmJoiningUsers_;
}

- (void)dealloc;
- (id)getNoLongerInvitedMemberIds;
- (id)getNoLongerJoinedUserIds;
- (id)getRemovedMemberIds;
- (id)getInvitedMemberIds;
- (id)getJoinedUserIds;
- (id)getJoinedMemberIds;
- (void)markMemberRemovedWithDYNSCommonMemberId:(id)arg1;
- (void)markMemberInvitedWithDYNSCommonMemberId:(id)arg1;
- (void)markMemberJoinedWithDYNSCommonMemberId:(id)arg1;

@end

