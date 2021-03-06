//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageControllersRosterStorageControllerImpl.h"

@class ComGoogleCommonBaseConverter;
@protocol DYNSStorageSchemaRosterDao;

@interface DYNSStorageControllersRosterStorageControllerXplat : DYNSStorageControllersRosterStorageControllerImpl
{
    id <DYNSStorageSchemaRosterDao> rosterDao_;
    ComGoogleCommonBaseConverter *writer_;
    ComGoogleCommonBaseConverter *reader_;
}

- (void)dealloc;
- (id)insertOrUpdateRostersInternalWithComGoogleCommonCollectImmutableList:(id)arg1 withBoolean:(_Bool)arg2;
- (id)updateLastReadWithJavaUtilCollection:(id)arg1;
- (id)getRostersInternalWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withComGoogleCommonCollectImmutableList:(id)arg2;
- (id)getInvitedRostersWithDYNSCommonGroupId:(id)arg1;
- (id)deleteOutdatedRostersWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withLong:(long long)arg2;
- (id)getRosterIdsNeedingSyncWithDYNSCommonGroupId:(id)arg1;
- (id)getRosterIdsNeedingSyncWithLong:(long long)arg1;

@end

