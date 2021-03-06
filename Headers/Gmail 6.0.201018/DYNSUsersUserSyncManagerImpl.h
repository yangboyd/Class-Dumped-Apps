//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DYNSUsersApiUserSyncManager-Protocol.h"

@class ComGoogleAppsXplatJobsJobConfig_Builder, ComGoogleAppsXplatJobsJobLauncher, DYNSDataUiMemberConverter, DYNSSyncCommonGetMembersSyncLauncher, DYNSUsersMemberSyncTokenManager, DYNSUsersMembersToSyncQueue, DYNSUsersUserSyncPublisher, JavaUtilConcurrentAtomicAtomicInteger, JavaUtilConcurrentConcurrentHashMap, NSString, OrgJodaTimeDuration, XPTExecutionGuard;
@protocol DYNSAnalyticsClearcutEventsLogger, DYNSCommonDynamiteClock, DYNSNetworkConnectivityNetworkConnectionState, DYNSStorageApiRosterStorageController, DYNSStorageApiUserProfileCoordinator, DYNSStorageApiUserStorageController, JavaUtilConcurrentScheduledExecutorService, JavaUtilSet, JavaxInjectProvider;

@interface DYNSUsersUserSyncManagerImpl : NSObject <DYNSUsersApiUserSyncManager>
{
    id <DYNSAnalyticsClearcutEventsLogger> clearcutEventsLogger_;
    id <DYNSCommonDynamiteClock> dynamiteClock_;
    id <JavaxInjectProvider> executorProvider_;
    DYNSSyncCommonGetMembersSyncLauncher *getMembersSyncLauncher_;
    ComGoogleAppsXplatJobsJobLauncher *jobLauncher_;
    OrgJodaTimeDuration *maxOutOfDate_;
    DYNSUsersMembersToSyncQueue *membersToSyncQueue_;
    DYNSUsersMemberSyncTokenManager *memberSyncTokenManager_;
    id <DYNSNetworkConnectivityNetworkConnectionState> networkConnectionState_;
    id <DYNSStorageApiRosterStorageController> rosterStorageController_;
    id <JavaUtilConcurrentScheduledExecutorService> scheduledExecutorService_;
    OrgJodaTimeDuration *tempUnavailableMaxOutOfDate_;
    DYNSDataUiMemberConverter *uiMemberConverter_;
    id <DYNSStorageApiUserProfileCoordinator> userProfileCoordinator_;
    id <DYNSStorageApiUserStorageController> userStorageController_;
    DYNSUsersUserSyncPublisher *userSyncPublisher_;
    id lock_;
    id <JavaUtilSet> pendingMemberIdsWithLimitedProfile_;
    XPTExecutionGuard *queueAccessSerializer_;
    JavaUtilConcurrentAtomicAtomicInteger *incrementingKey_;
    JavaUtilConcurrentConcurrentHashMap *syncsInProgress_;
    JavaUtilConcurrentConcurrentHashMap *missingUserSyncGuards_;
    XPTExecutionGuard *outdatedUserGuard_;
    XPTExecutionGuard *syncMembersWithLimitedProfileGuard_;
    ComGoogleAppsXplatJobsJobConfig_Builder *memberSyncJobConfigBuilder_;
}

+ (void)initialize;
- (void)dealloc;
- (id)syncMembersWithLimitedProfileWithComGoogleCommonCollectImmutableSet:(id)arg1;
- (id)syncOutdatedUsers;
- (id)syncMissingMembersWithJavaUtilOptional:(id)arg1;
- (id)syncMembersByIdWithComGoogleCommonCollectImmutableSet:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

