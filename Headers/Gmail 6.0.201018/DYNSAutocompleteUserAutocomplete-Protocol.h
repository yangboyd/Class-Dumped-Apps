//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JavaObject-Protocol.h"

@class ComGoogleCommonCollectImmutableList, ComGoogleCommonCollectImmutableMap, DYNSAutocompletePopulousApplicabilityInternalRequest, DYNSAutocompletePopulousApplicabilityInternalResponse;
@protocol ComGoogleCommonUtilConcurrentListenableFuture, JavaUtilSet;

@protocol DYNSAutocompleteUserAutocomplete <JavaObject>
- (DYNSAutocompletePopulousApplicabilityInternalResponse *)getPopulousApplicabilityInternalResponseSynchronously:(DYNSAutocompletePopulousApplicabilityInternalRequest *)arg1;
- (id <ComGoogleCommonUtilConcurrentListenableFuture>)getPopulousApplicabilityInternalResponseWithDYNSAutocompletePopulousApplicabilityInternalRequest:(DYNSAutocompletePopulousApplicabilityInternalRequest *)arg1;
- (ComGoogleCommonCollectImmutableList *)getUiMemberListWithPresenceWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg2;
- (ComGoogleCommonCollectImmutableList *)getUiUserListWithPresenceWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableMap:(ComGoogleCommonCollectImmutableMap *)arg2;
- (ComGoogleCommonCollectImmutableList *)getFilteredMembersFromMembersWithIdWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2;
- (ComGoogleCommonCollectImmutableList *)getFilteredMembersFromAutocompleteUsersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2 withBoolean:(_Bool)arg3;
- (ComGoogleCommonCollectImmutableList *)getNonAddedNonGroupBotsFromAutocompleteBotsWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2 withJavaUtilSet:(id <JavaUtilSet>)arg3;
- (ComGoogleCommonCollectImmutableList *)getFilteredMembersFromMembersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2;
- (ComGoogleCommonCollectImmutableList *)getNonGroupMembersFromAutocompleteUsersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2;
- (ComGoogleCommonCollectImmutableList *)getNonGroupUsersFromAutocompleteUsersWithComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg1 withComGoogleCommonCollectImmutableList:(ComGoogleCommonCollectImmutableList *)arg2;
@end

