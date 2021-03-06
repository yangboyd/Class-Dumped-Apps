//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ComGoogleAppsTasksSharedDataImplDatastoreApiAccountDataStore-Protocol.h"

@class ComGoogleCommonBaseOptional, ComGoogleCommonCollectImmutableMap, ComGoogleCommonCollectImmutableSet, ComGoogleProtobufTimestamp, NSString;
@protocol ComGoogleAppsTasksSharedDataImplExecutorApiTasksExecutor, ComGoogleAppsXplatClockXClock, ComGoogleAppsXplatUtilPerformanceclockPerformanceClock, JavaUtilSet;

@interface ComGoogleAppsTasksSharedDataImplDatastoreAccountDataStoreImpl : NSObject <ComGoogleAppsTasksSharedDataImplDatastoreApiAccountDataStore>
{
    _Bool released_;
    ComGoogleCommonBaseOptional *accountStorage_;
    id <ComGoogleAppsTasksSharedDataImplExecutorApiTasksExecutor> tasksExecutor_;
    id <ComGoogleAppsXplatClockXClock> clock_;
    id <ComGoogleAppsXplatUtilPerformanceclockPerformanceClock> performanceClock_;
    id <JavaUtilSet> listeners_;
    ComGoogleCommonCollectImmutableMap *cachedRoomsByIds_;
    ComGoogleProtobufTimestamp *lastDataRoomRefresh_;
    ComGoogleCommonCollectImmutableSet *unavailableRoomIds_;
    ComGoogleCommonCollectImmutableSet *failedToLoadRoomIds_;
}

+ (void)initialize;
- (void)dealloc;
- (id)release__;
- (void)registerListenerWithComGoogleAppsTasksSharedDataImplDatastoreApiAccountDataStoreListener:(id)arg1;
- (id)getLastDataRoomRefresh;
- (id)getRoomsWithJavaUtilCollection:(id)arg1;
- (id)getRoomWithNSString:(id)arg1;
- (id)setFailedStateIfNotAlreadyLoadedForWithJavaUtilCollection:(id)arg1;
- (id)replaceAllRoomsWithWithJavaUtilCollection:(id)arg1 withJavaUtilCollection:(id)arg2;
- (id)loadDataFromStorage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

