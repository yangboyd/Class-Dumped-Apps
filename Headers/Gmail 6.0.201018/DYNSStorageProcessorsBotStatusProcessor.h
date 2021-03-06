//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DYNSStorageProcessorsAbstractEventsProcessor.h"

@class DYNSAnalyticsStopwatchManager, DYNSSyncCommonUserProfileUpdater, DYNSSyncV2SubscriptionsEventDispatcher;
@protocol ComGoogleAppsXplatObserveSettable, DYNSSettingsSettingsManager, DYNSStorageControllersUserSettingsStorageControllerInternal, DYNSStorageControllersUserStorageControllerInternal, DYNSStorageCoordinatorsUserProfileCoordinatorInternal;

@interface DYNSStorageProcessorsBotStatusProcessor : DYNSStorageProcessorsAbstractEventsProcessor
{
    DYNSSyncV2SubscriptionsEventDispatcher *eventDispatcher_;
    id <ComGoogleAppsXplatObserveSettable> dmNameUpdatedSettable_;
    id <ComGoogleAppsXplatObserveSettable> worldUpdatedEventSettable_;
    id <DYNSSettingsSettingsManager> settingsManager_;
    DYNSAnalyticsStopwatchManager *stopwatchManager_;
    id <DYNSStorageCoordinatorsUserProfileCoordinatorInternal> userProfileCoordinatorInternal_;
    DYNSSyncCommonUserProfileUpdater *userProfileUpdater_;
    id <DYNSStorageControllersUserSettingsStorageControllerInternal> userSettingsStorageController_;
    id <DYNSStorageControllersUserStorageControllerInternal> userStorageController_;
}

+ (void)initialize;
- (void)dealloc;
- (void)postProcessEventResultsWithBoolean:(_Bool)arg1 withId:(id)arg2;
- (id)writeToDatabaseWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2;
- (id)processEventBodyWithId:(id)arg1 withId:(id)arg2;
- (id)readFromDatabaseWithComGoogleAppsXplatSqlSqlTransaction:(id)arg1 withId:(id)arg2;
- (id)preProcessEventBodiesWithComGoogleCommonCollectImmutableList:(id)arg1;

@end

