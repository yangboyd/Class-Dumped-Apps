//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSUsersApiUserManager-Protocol.h"

@class ComGoogleAppsXplatJobsJobConfig, ComGoogleAppsXplatJobsJobConfig_Builder, ComGoogleAppsXplatJobsJobLauncher, DYNSDataUiMemberConverter, DYNSDataUiRosterConverter, DYNSSyncV2EntitiesGroupEntityManagerRegistry, JavaUtilConcurrentConcurrentHashMap, NSString, OrgJodaTimeDuration;
@protocol ComGoogleAppsXplatObserveSettable, DYNSAnalyticsClearcutEventsLogger, DYNSCommonDynamiteClock, DYNSStorageApiMembershipStorageController, DYNSStorageApiRosterStorageController, DYNSStorageApiUserStorageController, DYNSUsersApiUserReadTimestampManager, DYNSUsersApiUserSyncManager, JavaxInjectProvider;

@interface DYNSUsersUserManagerImpl : NSObject <DYNSUsersApiUserManager>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    OrgJodaTimeDuration *maxOutOfDate_;
    OrgJodaTimeDuration *tempUnavailableMaxOutOfDate_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    DYNSSyncV2EntitiesGroupEntityManagerRegistry *groupEntityManagerRegistry_;
    ComGoogleAppsXplatJobsJobLauncher *jobLauncher_;
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSStorageApiMembershipStorageController> membershipStorageController_;
    id <DYNSStorageApiRosterStorageController> rosterStorageController_;
    id <ComGoogleAppsXplatObserveSettable> uiMembersUpdatedEventSettable_;
    DYNSDataUiMemberConverter *uiMemberConverter_;
    DYNSDataUiRosterConverter *uiRosterConverter_;
    id <DYNSUsersApiUserReadTimestampManager> userReadTimestampManager_;
    id <DYNSStorageApiUserStorageController> userStorageController_;
    id <DYNSUsersApiUserSyncManager> userSyncManager_;
    ComGoogleAppsXplatJobsJobConfig_Builder *syncMissingUsersJobConfigBuilder_;
    ComGoogleAppsXplatJobsJobConfig *syncOutdatedUsersJobConfig_;
    ComGoogleAppsXplatJobsJobConfig_Builder *syncMembersWithLimitedProfileJobConfigBuilder_;
    JavaUtilConcurrentConcurrentHashMap *usersWithoutEmailRefreshed_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getMemberIdsToRefreshWithJavaUtilCollection:(id)arg1;
- (id)getLocalMembersWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getJoinedMemberCountMapWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getNumberOfJoinedMembersWithDYNSCommonGroupId:(id)arg1;
- (id)syncMembersWithLimitedProfileInGroupWithDYNSCommonGroupId:(id)arg1;
- (id)syncMembersWithLimitedProfileWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)syncOutdatedUsers;
- (id)syncMissingUsersWithJavaUtilOptional:(id)arg1;
- (id)getMembersWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getMembershipStateToUiMembersWithDYNSCommonGroupId:(id)arg1 withJavaUtilOptional:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

