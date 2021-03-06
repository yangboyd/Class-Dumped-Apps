//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataImplDatastoreApiDataCacheReader-Protocol.h"

@class ComGoogleAppsTasksSharedDataImplDatastoreChangeAccumulator, ComGoogleAppsTasksSharedDataImplDatastoreInvariantViolationLogger, ComGoogleAppsTasksSharedDataImplDatastoreTaskCaches, ComGoogleAppsTasksSharedUtilsLocalEntity, ComGoogleAppsTasksSharedUtilsLocalEntityMap, ComGoogleCommonLoggingTasksTaskNotInStructureViolation_CacheOperation, NSString;
@protocol JavaUtilMap;

@interface ComGoogleAppsTasksSharedDataImplDatastoreDataCache : NSObject <ComGoogleAppsTasksSharedDataImplDatastoreApiDataCacheReader>
{
    ComGoogleAppsTasksSharedDataImplDatastoreInvariantViolationLogger *invariantViolationLogger_;
    ComGoogleAppsTasksSharedDataImplDatastoreTaskCaches *taskCaches_;
    ComGoogleAppsTasksSharedUtilsLocalEntityMap *taskListMap_;
    ComGoogleAppsTasksSharedUtilsLocalEntityMap *taskRecurrenceMap_;
    id <JavaUtilMap> mutableTaskListStructureMap_;
    id <JavaUtilMap> completedTaskIdsByTaskListId_;
    ComGoogleAppsTasksSharedDataImplDatastoreChangeAccumulator *changeAccumulator_;
    ComGoogleAppsTasksSharedUtilsLocalEntity *userMetadata_;
    ComGoogleAppsTasksSharedUtilsLocalEntity *userPrefs_;
    ComGoogleAppsTasksSharedUtilsLocalEntity *userExperimental_;
    ComGoogleCommonLoggingTasksTaskNotInStructureViolation_CacheOperation *lastCacheOperation_;
}

+ (void)initialize;
- (void)dealloc;
- (id)getAllRoomIds;
- (int)updateCompletedTaskIndexWithTDLTask:(id)arg1;
- (id)setTaskListWithTDLTaskListBo:(id)arg1;
- (id)setTaskListWithTDLTaskListBo:(id)arg1 withComGoogleAppsTasksSharedOperationTaskListStructure:(id)arg2;
- (id)setTaskWithTDLTaskBo:(id)arg1;
- (id)setTaskRecurrenceWithTDLTaskRecurrenceBo:(id)arg1;
- (id)setUserExperimentalWithTDLUserExperimentalBo:(id)arg1;
- (id)getUserExperimentalOrDefault;
- (id)getUserExperimental;
- (id)setUserPrefsWithTDLUserPrefsBo:(id)arg1;
- (id)getUserPrefsOrDefault;
- (id)getUserPrefs;
- (id)setUserMetadataWithTDLUserMetadataBo:(id)arg1;
- (id)getUserMetadataOrDefault;
- (id)getUserMetadata;
- (id)putEntitiesWithComGoogleCommonCollectImmutableList:(id)arg1 withBoolean:(_Bool)arg2;
- (id)getTaskAbsolutePositionWithTDLTaskId:(id)arg1 withTDLTaskListId:(id)arg2;
- (id)getTaskNodeWithTDLTaskId:(id)arg1 withTDLTaskListId:(id)arg2;
- (id)getTaskHierarchyWithTDLTaskId:(id)arg1 withTDLTaskListId:(id)arg2;
- (id)getLoadedCompletedTasksWithTDLTaskListId:(id)arg1;
- (id)getAllCompletedTasksWithTDLTaskListId:(id)arg1;
- (id)getTopCompletedTasksWithTDLTaskListId:(id)arg1;
- (id)getTasksFromAllLists;
- (id)getCompletedTaskCountWithTDLTaskListId:(id)arg1;
- (id)getActiveTaskCountWithTDLTaskListId:(id)arg1;
- (id)getTasksWithRecurrenceWithTDLTaskRecurrenceId:(id)arg1;
- (id)getAllTaskRecurrences;
- (id)getTaskRecurrenceWithTDLTaskRecurrenceId:(id)arg1;
- (id)getTaskWithTDLTaskId:(id)arg1;
- (id)getTaskListMutableStructureWithTDLTaskListId:(id)arg1;
- (id)getTaskListWithTDLTaskListId:(id)arg1;
- (id)getTaskListsInUserOrder;
- (id)getTaskLists;
- (id)getTaskListBundleWithTDLTaskListId:(id)arg1;
- (id)getTaskListIds;
- (void)clear;
- (id)getAndClearChangeSet;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

