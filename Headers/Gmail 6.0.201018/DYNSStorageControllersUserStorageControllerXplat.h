//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageControllersUserStorageControllerImpl.h"

@class ComGoogleAppsXplatStorageDbTransactionPromiseFactory, ComGoogleCommonBaseConverter, DYNStorageControllersConvertersGroupMembershipStorageConverter, DYNStorageControllersConvertersUserContextIdConverter;
@protocol ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser, DYNSStorageSchemaGroupDao, DYNSStorageSchemaGroupMembershipDao, DYNSStorageSchemaUserDao;

@interface DYNSStorageControllersUserStorageControllerXplat : DYNSStorageControllersUserStorageControllerImpl
{
    id <ComGoogleAppsDynamiteV1SharedUtilAccountuserAccountUser> accountUser_;
    id <DYNSStorageSchemaUserDao> userDao_;
    id <DYNSStorageSchemaGroupMembershipDao> groupMembershipDao_;
    id <DYNSStorageSchemaGroupDao> groupDao_;
    ComGoogleCommonBaseConverter *reader_;
    ComGoogleCommonBaseConverter *writer_;
    DYNStorageControllersConvertersGroupMembershipStorageConverter *groupMembershipStorageConverter_;
    DYNStorageControllersConvertersUserContextIdConverter *userContextIdConverter_;
    ComGoogleAppsXplatStorageDbTransactionPromiseFactory *transactionPromiseFactory_;
}

- (void)dealloc;
- (id)clearServerConfirmedDataWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getHumanPartnerIdToEmailAddressAndDngIds;
- (id)getHumanDmPartnerIdToEmailAddressAndDmIds;
- (id)getOutdatedNonMembersWithLong:(long long)arg1 withComGoogleAppsXplatSqlSqlTransaction:(id)arg2;
- (id)getUsersWithoutFullProfileWithDYNSCommonGroupId:(id)arg1;
- (id)getUsersWithoutFullProfile;
- (id)getAllStaleUsersWithLong:(long long)arg1 withLong:(long long)arg2 withComGoogleAppsXplatSqlSqlTransaction:(id)arg3;
- (id)getUserOrganizationInfoForAllUsersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)getUsersNeedingSyncWithJavaUtilList:(id)arg1 withLong:(long long)arg2 withLong:(long long)arg3 withComGoogleAppsXplatSqlSqlTransaction:(id)arg4;
- (id)getUsersNeedingSyncWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1;
- (id)markUsersAsNeedingSyncWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getUsersWithContextWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;
- (id)deleteUsersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getDecoratedUsersByGroupIdOrderedByNameWithDYNSCommonGroupId:(id)arg1;
- (id)getUsersByGroupIdAndMembershipStateOrderedByNameWithDYNSCommonGroupId:(id)arg1 withDYNSCommonMembershipState:(id)arg2;
- (id)getUserByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withDYNSCommonUserContextId:(id)arg2;
- (id)insertOrReplaceUsersInternalWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)filterNonLocalUserContextIdsWithComGoogleCommonCollectImmutableList:(id)arg1;
- (id)getUsersByIdWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withJavaUtilList:(id)arg2;

@end

