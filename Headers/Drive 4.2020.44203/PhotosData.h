//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <drive_extension_framework/GPBMessage.h>

@class AutoBackupEvent, DatabaseSizeEvent, FaceGaiaOptInFailedEvent, OnDeviceSharingSuggestionEvent, OptimisticActionEvent, PhotoEditorEvent, PhotoSearchQueryEvent, PhotoSearchResultEvent, PhotosAssistantMigrationReport, PhotosBuyStorageEvent, PhotosCompleteOnboardingEvent, PhotosDeltaSyncEvent, PhotosDeviceManagementEvent, PhotosInitialMetadataSyncEvent, PhotosIosExtension, PhotosLocationHeaderDataEvent, PhotosMetadataSyncEvent, PhotosNotificationSettingsEvent, PhotosOnDeviceClusteringEvent, PhotosOptimisticActionQueueState, PhotosPerformanceEvent, PhotosShareFlowEvent, PhotosUrlLaunchEvent, SLEPInteractionReliabilityEvent, SLEPMemoriesAvailabilityEvent, SLEPPhotoCounterSnapshot, TaskLifecycleEvent, ThirdPartyAppShareEvent, UserConnectivityInfo, VideoEditorEvent;

@interface PhotosData : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) PhotosAssistantMigrationReport *assistantMigrationReport; // @dynamic assistantMigrationReport;
@property(retain, nonatomic) AutoBackupEvent *autoBackupEvent; // @dynamic autoBackupEvent;
@property(retain, nonatomic) DatabaseSizeEvent *databaseSizeEvent; // @dynamic databaseSizeEvent;
@property(retain, nonatomic) PhotosDeltaSyncEvent *deltaSyncEvent; // @dynamic deltaSyncEvent;
@property(retain, nonatomic) PhotosDeviceManagementEvent *deviceManagementEvent; // @dynamic deviceManagementEvent;
@property(retain, nonatomic) FaceGaiaOptInFailedEvent *faceGaiaOptInFailedEvent; // @dynamic faceGaiaOptInFailedEvent;
@property(nonatomic) _Bool hasAssistantMigrationReport; // @dynamic hasAssistantMigrationReport;
@property(nonatomic) _Bool hasAutoBackupEvent; // @dynamic hasAutoBackupEvent;
@property(nonatomic) _Bool hasDatabaseSizeEvent; // @dynamic hasDatabaseSizeEvent;
@property(nonatomic) _Bool hasDeltaSyncEvent; // @dynamic hasDeltaSyncEvent;
@property(nonatomic) _Bool hasDeviceManagementEvent; // @dynamic hasDeviceManagementEvent;
@property(nonatomic) _Bool hasFaceGaiaOptInFailedEvent; // @dynamic hasFaceGaiaOptInFailedEvent;
@property(nonatomic) _Bool hasInitialMetadataSyncEvent; // @dynamic hasInitialMetadataSyncEvent;
@property(nonatomic) _Bool hasInteractionEvent; // @dynamic hasInteractionEvent;
@property(nonatomic) _Bool hasIosExtensionEvent; // @dynamic hasIosExtensionEvent;
@property(nonatomic) _Bool hasLocationHeaderDataEvent; // @dynamic hasLocationHeaderDataEvent;
@property(nonatomic) _Bool hasMemoriesAvailability; // @dynamic hasMemoriesAvailability;
@property(nonatomic) _Bool hasNotificationSettingsEvent; // @dynamic hasNotificationSettingsEvent;
@property(nonatomic) _Bool hasOnDeviceClusteringEvent; // @dynamic hasOnDeviceClusteringEvent;
@property(nonatomic) _Bool hasOnDeviceSharingSuggestionEvent; // @dynamic hasOnDeviceSharingSuggestionEvent;
@property(nonatomic) _Bool hasOptimisticActionEvent; // @dynamic hasOptimisticActionEvent;
@property(nonatomic) _Bool hasOptimisticActionQueueState; // @dynamic hasOptimisticActionQueueState;
@property(nonatomic) _Bool hasPerformanceEvent; // @dynamic hasPerformanceEvent;
@property(nonatomic) _Bool hasPhotoCounterSnapshot; // @dynamic hasPhotoCounterSnapshot;
@property(nonatomic) _Bool hasPhotoEditorEvent; // @dynamic hasPhotoEditorEvent;
@property(nonatomic) _Bool hasPhotoSearchQueryEvent; // @dynamic hasPhotoSearchQueryEvent;
@property(nonatomic) _Bool hasPhotosBuyStorageEvent; // @dynamic hasPhotosBuyStorageEvent;
@property(nonatomic) _Bool hasPhotosCompleteOnboardingEvent; // @dynamic hasPhotosCompleteOnboardingEvent;
@property(nonatomic) _Bool hasPhotosMetadataSyncEvent; // @dynamic hasPhotosMetadataSyncEvent;
@property(nonatomic) _Bool hasPhotosSearchResultsEvent; // @dynamic hasPhotosSearchResultsEvent;
@property(nonatomic) _Bool hasPhotosShareFlowEvent; // @dynamic hasPhotosShareFlowEvent;
@property(nonatomic) _Bool hasPhotosURLLaunchEvent; // @dynamic hasPhotosURLLaunchEvent;
@property(nonatomic) _Bool hasTaskLifecycleEvent; // @dynamic hasTaskLifecycleEvent;
@property(nonatomic) _Bool hasThirdPartyAppShareEvent; // @dynamic hasThirdPartyAppShareEvent;
@property(nonatomic) _Bool hasUserConnectivityInfo; // @dynamic hasUserConnectivityInfo;
@property(nonatomic) _Bool hasVideoEditorEvent; // @dynamic hasVideoEditorEvent;
@property(retain, nonatomic) PhotosInitialMetadataSyncEvent *initialMetadataSyncEvent; // @dynamic initialMetadataSyncEvent;
@property(retain, nonatomic) SLEPInteractionReliabilityEvent *interactionEvent; // @dynamic interactionEvent;
@property(retain, nonatomic) PhotosIosExtension *iosExtensionEvent; // @dynamic iosExtensionEvent;
@property(retain, nonatomic) PhotosLocationHeaderDataEvent *locationHeaderDataEvent; // @dynamic locationHeaderDataEvent;
@property(retain, nonatomic) SLEPMemoriesAvailabilityEvent *memoriesAvailability; // @dynamic memoriesAvailability;
@property(retain, nonatomic) PhotosNotificationSettingsEvent *notificationSettingsEvent; // @dynamic notificationSettingsEvent;
@property(retain, nonatomic) PhotosOnDeviceClusteringEvent *onDeviceClusteringEvent; // @dynamic onDeviceClusteringEvent;
@property(retain, nonatomic) OnDeviceSharingSuggestionEvent *onDeviceSharingSuggestionEvent; // @dynamic onDeviceSharingSuggestionEvent;
@property(retain, nonatomic) OptimisticActionEvent *optimisticActionEvent; // @dynamic optimisticActionEvent;
@property(retain, nonatomic) PhotosOptimisticActionQueueState *optimisticActionQueueState; // @dynamic optimisticActionQueueState;
@property(retain, nonatomic) PhotosPerformanceEvent *performanceEvent; // @dynamic performanceEvent;
@property(retain, nonatomic) SLEPPhotoCounterSnapshot *photoCounterSnapshot; // @dynamic photoCounterSnapshot;
@property(retain, nonatomic) PhotoEditorEvent *photoEditorEvent; // @dynamic photoEditorEvent;
@property(retain, nonatomic) PhotoSearchQueryEvent *photoSearchQueryEvent; // @dynamic photoSearchQueryEvent;
@property(retain, nonatomic) PhotosBuyStorageEvent *photosBuyStorageEvent; // @dynamic photosBuyStorageEvent;
@property(retain, nonatomic) PhotosCompleteOnboardingEvent *photosCompleteOnboardingEvent; // @dynamic photosCompleteOnboardingEvent;
@property(retain, nonatomic) PhotosMetadataSyncEvent *photosMetadataSyncEvent; // @dynamic photosMetadataSyncEvent;
@property(retain, nonatomic) PhotoSearchResultEvent *photosSearchResultsEvent; // @dynamic photosSearchResultsEvent;
@property(retain, nonatomic) PhotosShareFlowEvent *photosShareFlowEvent; // @dynamic photosShareFlowEvent;
@property(retain, nonatomic) PhotosUrlLaunchEvent *photosURLLaunchEvent; // @dynamic photosURLLaunchEvent;
@property(retain, nonatomic) TaskLifecycleEvent *taskLifecycleEvent; // @dynamic taskLifecycleEvent;
@property(retain, nonatomic) ThirdPartyAppShareEvent *thirdPartyAppShareEvent; // @dynamic thirdPartyAppShareEvent;
@property(retain, nonatomic) UserConnectivityInfo *userConnectivityInfo; // @dynamic userConnectivityInfo;
@property(retain, nonatomic) VideoEditorEvent *videoEditorEvent; // @dynamic videoEditorEvent;

@end

