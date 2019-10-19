//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAppStartupReasonProtocol-Protocol.h"
#import "YTOfflineGuideUserDefaultsProtocol-Protocol.h"
#import "YTOfflineSettingsUserDefaultsProtocol-Protocol.h"

@class NSArray, NSData, NSDate, NSDictionary, NSHashTable, NSString, NSUserDefaults, UIImage, YTAppStateInfo, YTIGetSearchSuggestionsResponse, YTIMusicAppMetadataRenderer, YTIPivotBarRenderer, YTUserDefaultsKeys;
@protocol YTUserDefaultKeysProvider, YTUserIDProviderProtocol;

@interface YTUserDefaults : NSObject <YTAppStartupReasonProtocol, YTOfflineGuideUserDefaultsProtocol, YTOfflineSettingsUserDefaultsProtocol>
{
    NSHashTable *_observers;
    id <YTUserIDProviderProtocol> _userIDProvider;
    NSString *_prefix;
    NSUserDefaults *_defaults;
    NSUserDefaults *_sharedDefaults;
    long long _sharedKeysVersionNumber;
    YTUserDefaultsKeys<YTUserDefaultKeysProvider> *_keysProvider;
}

@property(readonly, nonatomic) YTUserDefaultsKeys<YTUserDefaultKeysProvider> *keysProvider; // @synthesize keysProvider=_keysProvider;
- (void).cxx_destruct;
- (void)deleteAllSettings;
- (void)deleteDefaultSettings;
- (void)deleteUserSettings;
- (id)allDefaults;
- (_Bool)isUserDictionaryFullKey:(id)arg1;
- (void)migrateKey:(id)arg1 from:(id)arg2 to:(id)arg3;
- (id)defaultsForKey:(id)arg1;
- (id)prefixedKeyForKey:(id)arg1;
- (id)objectInUserDefaults:(id)arg1 forKey:(id)arg2;
- (void)removeObjectInUserDefaults:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 inUserDefaults:(id)arg2 forKey:(id)arg3;
- (_Bool)isUserSpecificKey:(id)arg1;
- (void)notifyValueDidChangeForKey:(id)arg1;
- (id)userSettingsDictionaryInDefaults:(id)arg1;
- (id)sharedKeys;
- (void)migrateKeysFromSharedContainerToStandardContainer:(id)arg1;
- (void)migrateKeysFromStandardContainerToSharedContainer:(id)arg1;
- (id)prefix;
- (id)standardUserSettingsDictionary;
- (id)sharedUserSettingsDictionary;
- (id)keyForCurrentUserID;
- (id)uniqueIDForKey:(id)arg1;
- (id)dictionaryForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (_Bool)boolForKey:(id)arg1;
- (void)setLonglong:(long long)arg1 forKey:(id)arg2;
- (long long)longlongForKey:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (unsigned long long)unsignedIntegerForKey:(id)arg1;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (long long)integerForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)setSharedKeysVersionNumber:(long long)arg1;
- (long long)sharedKeysVersionNumber;
- (void)purgeKey:(id)arg1;
- (void)removeUserDefaultsObserver:(id)arg1;
- (void)addUserDefaultsObserver:(id)arg1;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 prefix:(id)arg3 sharedGroupName:(id)arg4 defaults:(id)arg5 sharedDefaults:(id)arg6;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 prefix:(id)arg3 sharedGroupName:(id)arg4;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 sharedGroupName:(id)arg3;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2 prefix:(id)arg3;
- (id)initWithKeysProvider:(id)arg1 userIDProvider:(id)arg2;
@property(nonatomic) double lastDismissPreviewSelectTooltipTimeInterval;
@property(readonly, nonatomic) _Bool hasDismissedPreviewSelectTooltip;
- (void)setAllowGaialessHandleIAP:(_Bool)arg1;
- (_Bool)allowGaialessHandleIAP;
- (id)transactionLockerData;
- (void)setTransactionLockerData:(id)arg1;
- (id)clientInfoForKey:(id)arg1;
- (void)setClientInfo:(id)arg1 forKey:(id)arg2;
- (id)offerInfoForKey:(id)arg1;
- (void)setOfferInfo:(id)arg1 forKey:(id)arg2;
- (void)setLastAsyncActivityRenderer:(id)arg1;
- (id)lastAsyncActivityRenderer;
- (void)setLastClientLocationContext:(id)arg1;
- (id)lastClientLocationContext;
- (void)setLastOfferSelectionDate:(id)arg1;
- (id)lastOfferSelectionDate;
- (void)setLastOfferParams:(id)arg1;
- (id)lastOfferParams;
- (void)setLastProductID:(id)arg1;
- (id)lastProductID;
- (unsigned long long)legacyOfflineMixtapeState;
- (_Bool)autoOffline;
- (_Bool)canShowTooltipWithModel:(id)arg1;
- (void)didShowTooltipWithModel:(id)arg1;
@property(nonatomic) _Bool suppressWazeBannerOnConnectionToCar;
@property(nonatomic) unsigned long long animatedThumbnailDisplayOption;
@property(nonatomic, getter=wasBackgroundLocationEventReceived) _Bool backgroundLocationEventReceived;
@property(nonatomic, getter=wasLocationAuthorizationRequested) _Bool locationAuthorizationRequested;
@property(copy, nonatomic) YTIPivotBarRenderer *cachedPivotBarRenderer;
@property(retain, nonatomic) NSDate *lastHomePageBackgroundFetchDate;
@property(retain, nonatomic) NSDate *lastOSBackgroundFetchDate;
@property(nonatomic, getter=wasAlwaysLocationAuthorizationRequested) _Bool alwaysLocationAuthorizationRequested;
@property(copy, nonatomic) NSDictionary *checkinServiceValues;
@property(readonly, nonatomic, getter=isAudioQualitySettingsEnabled) _Bool audioQualitySettingsEnabled;
- (void)setAudioQualitySettingsEnabled:(_Bool)arg1;
@property(nonatomic) unsigned long long audioPlaybackQualityMobile;
@property(nonatomic) unsigned long long audioPlaybackQualityWiFi;
@property(nonatomic) int activityMasterSwitchState;
@property(nonatomic) int locationMasterSwitchState;
@property(readonly, nonatomic) int locationMasterSwitchState_Deprecated;
@property(nonatomic, getter=isNerdStatsEnabled) _Bool nerdStatsEnabled;
@property(copy, nonatomic) NSString *vixSnapshotId;
@property(nonatomic) long long MDXServerEnvironment;
@property(nonatomic, getter=wasULRPromptShown) _Bool ULRPromptShown;
@property(retain, nonatomic) NSDate *firstLaunchDate;
@property(nonatomic) unsigned long long offlineMixtapeState;
@property(retain, nonatomic) NSDate *firstSavedPlaylistDate;
@property(retain, nonatomic) NSDate *watchSwipeHintLastShownDate;
@property(retain, nonatomic) NSDate *firstCreatedPlaylistDate;
@property(nonatomic) long long doubleTapToSeekDuration;
@property(nonatomic) _Bool sharePanelEnabled;
- (void)setDoNotCount:(_Bool)arg1;
- (_Bool)doNotCount;
@property(nonatomic) _Bool restrictedMode;
@property(retain, nonatomic) YTIGetSearchSuggestionsResponse *cachedEmptySuggestionsResponse;
@property(retain, nonatomic) NSData *cachedSuggestions;
@property(copy, nonatomic) NSString *contentRegion;
@property(nonatomic) _Bool searchHistoryPaused;
@property(nonatomic) _Bool watchHistoryPaused;
@property(nonatomic) _Bool voicePromptsEnabled;
@property(nonatomic) _Bool onlyStreamOverWifi;
@property(copy, nonatomic) NSArray *forcedPromoIDs;
@property(copy, nonatomic) NSArray *forcedExperimentParams;
@property(copy, nonatomic) NSArray *forcedExperimentIDs;
@property(copy, nonatomic) NSDictionary *clingsTriggerCountDictionary;
@property(copy, nonatomic) NSDictionary *clingsLastShownDatesDictionary;
@property(nonatomic, getter=hasBackgroundOnboardingHintShown) _Bool backgroundOnboardingHintShown;
@property(nonatomic) unsigned long long ATVModeButtonTappedCount;
@property(nonatomic) _Bool noVideoModeEnabled;
@property(copy, nonatomic) YTIMusicAppMetadataRenderer *musicAppMetadataRenderer;
@property(nonatomic) int automixTunerSetting;
@property(nonatomic) int autoOfflineVideoQuality;
@property(nonatomic) unsigned long long autoOfflineMaximumTracks;
@property(copy, nonatomic) NSDate *offlineRemovalHintLastShownDate;
@property(copy, nonatomic) NSDate *autoOfflineSyncDate;
@property(copy, nonatomic) NSArray *removedOfflineMixtapeVideoIds;
@property(copy, nonatomic) NSArray *removedOfflineMixtapeTokens;
@property(copy, nonatomic) NSDate *offlineContentLastSyncedDate;
@property(nonatomic) _Bool forceOfflineQualityCheck;
@property(nonatomic) _Bool forceOfflineSync;
@property(copy, nonatomic) NSDate *likesDialogLastShownDate;
@property(nonatomic) _Bool clingsAlwaysShown;
@property(nonatomic) _Bool autoplayEnabled;
@property(nonatomic) _Bool audioOnly;
- (id)musicKeysProvider;
- (void)didShowHintForKey:(id)arg1;
- (_Bool)shouldShowHintForKey:(id)arg1;
- (void)didShowEnableOfflineHint;
- (_Bool)shouldShowEnableOfflineHint;
- (void)incrementLaunchCounter;
- (unsigned long long)applicationLaunchCounter;
- (id)legacyLastSelectedIdentity;
@property(nonatomic) _Bool hasDismissedGoIncognitoConfirmDialog;
@property(nonatomic) _Bool shouldSuppressFrictionlessSignIn;
@property(retain, nonatomic) NSDate *lastActiveIncognitoTime;
@property(retain, nonatomic) NSDictionary *serializedPreIncognitoIdentity;
@property(retain, nonatomic) NSDictionary *serializedLastSelectedIdentity;
@property(retain, nonatomic) UIImage *cachedUserImage;
- (void)setLastObservedAppVersion:(id)arg1;
- (id)lastObservedAppVersion;
- (void)savePushNotificationDialogDecision:(id)arg1;
- (id)pushNotificationDialogData;
- (void)saveLastNotificationsEnabledStatus:(id)arg1;
- (id)lastNotificationsEnabledStatus;
- (void)saveLastNotificationsEnabledStatusChangeTime:(id)arg1;
- (id)lastNotificationsEnabledStatusChangeTime;
- (void)setLastSetNotificationRegistrationTime:(id)arg1;
- (id)lastSetNotificationRegistrationTime;
- (void)saveLastSendDeviceContextTime:(id)arg1;
- (id)lastSendDeviceContextTime;
- (void)saveFCMTokenUsed:(_Bool)arg1;
- (_Bool)wasFCMTokenUsed;
- (void)saveDisableUnseenItemStaleWindow:(_Bool)arg1;
- (_Bool)disableUnseenItemStaleWindow;
- (void)savePushNotificationOSDialogShown;
- (_Bool)invalidationDebugToastSelection;
- (void)saveInvalidationDebugToastSelection:(_Bool)arg1;
- (void)savePushNotificationDialogDecisionCancel;
- (void)savePushNotificationDialogDecisionConfirm;
- (_Bool)wasPushNotificationOSDialogShown;
- (_Bool)hasPushNotificationDialogDecisionCancel;
- (_Bool)hasPushNotificationDialogDecisionConfirm;
- (_Bool)hasPushNotificationDialogApplicationDecision;
- (_Bool)hasPushNotificationDialogDecision;
@property(nonatomic, getter=isOfflinePlaylistStoreMigrationComplete) _Bool offlinePlaylistStoreMigrationComplete;
@property(nonatomic, getter=isOfflineImageMigrationComplete) _Bool offlineImageMigrationComplete;
@property(nonatomic, getter=isOfflineVideoStoreMigrationComplete) _Bool offlineVideoStoreMigrationComplete;
- (void)setOfflineHamplayerDownloadsDisabled:(_Bool)arg1;
- (_Bool)offlineHamplayerDownloadsDisabled;
- (id)lastEligibleIDsForRemoval;
- (void)setLastEligibleIDsForRemoval:(id)arg1;
- (void)setOfflineBackupRepairDate:(id)arg1;
- (id)offlineBackupRepairDate;
- (void)setOfflineStateGELHasVideos:(_Bool)arg1;
- (_Bool)offlineStateGELHasVideos;
- (void)setOfflineStateGELDate:(id)arg1;
- (id)offlineStateGELDate;
- (void)setOfflineEntitlementRefreshDate:(id)arg1;
- (id)offlineEntitlementRefreshDate;
- (void)setOfflineRefreshInterval:(double)arg1;
- (double)offlineRefreshInterval;
- (void)setOfflineRefreshDate:(id)arg1;
- (id)offlineRefreshDate;
- (void)setMaximumOfflineVideoQuality:(int)arg1;
- (int)maximumOfflineVideoQuality;
- (void)setMaximumOfflineAudioQuality:(int)arg1;
- (int)maximumOfflineAudioQuality;
- (void)setOfflineImageRepairDate:(id)arg1;
- (id)offlineImageRepairDate;
- (void)setOfflineUserRemovalCheckDate:(id)arg1;
- (id)offlineUserRemovalCheckDate;
- (void)setOfflinePlaylistSyncDate:(id)arg1;
- (id)offlinePlaylistSyncDate;
- (void)setOfflinePlaylistSyncFast:(_Bool)arg1;
- (_Bool)offlinePlaylistSyncFast;
- (void)setEnableOfflinePlaylistAutoSync:(_Bool)arg1;
- (_Bool)enableOfflinePlaylistAutoSync;
- (void)setOnlyDownloadOverWiFi:(_Bool)arg1;
- (_Bool)onlyDownloadOverWiFi;
- (void)setOfflineAdFrequencyCapsIgnored:(_Bool)arg1;
- (_Bool)areOfflineAdFrequencyCapsIgnored;
- (void)setOfflineRefreshFast:(_Bool)arg1;
- (_Bool)isOfflineRefreshFast;
@property(nonatomic) unsigned long long crashStallMinidumpCount;
@property(retain, nonatomic) NSString *crashRestoreCurrentUserID;
@property(retain, nonatomic) NSDate *crashRestoreDateLastOpenedVideo;
@property(nonatomic) unsigned long long crashRestoreIndex;
@property(retain, nonatomic) NSString *crashRestoreStartTime;
@property(retain, nonatomic) NSString *crashRestorePlaylistID;
@property(retain, nonatomic) NSString *crashRestoreVideoID;
@property(nonatomic) _Bool shouldShowAppStartupReasonDialog;
@property(retain, nonatomic) NSDate *dateCrashCountControllerLastSent;
@property(retain, nonatomic) NSDate *dateCrashCountControllerLastRun;
@property(nonatomic) _Bool hasDisplayedCrashReportsPrompt;
@property(nonatomic) _Bool shouldSendCrashReports;
@property(retain, nonatomic) YTAppStateInfo *appStateInfo;
@property(retain, nonatomic) NSDate *systemBootTime;
@property(copy, nonatomic) NSDictionary *delayedEventMetricsParameters;
- (void)setForceAdsWithDummyMidroll:(_Bool)arg1;
- (_Bool)doForceAdsWithDummyMidroll;
- (void)setDisableFrequencyCap:(_Bool)arg1;
- (_Bool)isDisableFrequencyCap;
- (void)didShowNotificationForKey:(id)arg1;
- (_Bool)shouldShowNotificationForKey:(id)arg1;
- (void)didShowBackgroundNotification;
- (_Bool)shouldShowBackgroundNotification;
- (void)setRecurrenceThrottleDisabled:(_Bool)arg1;
- (_Bool)recurrenceThrottleDisabled;
@property(nonatomic) _Bool hasSeenVideoZoomUserEdu;
- (void)setAdultContentConfirmed:(_Bool)arg1;
- (_Bool)isAdultContentConfirmed;
- (id)lastSpeedyGPromoDisplayDate;
- (void)setLastSpeedyGPromoDisplayDate:(id)arg1;
- (void)setDisableHDOnCellular:(_Bool)arg1;
- (_Bool)disableHDOnCellular;
- (id)manualQualitySelectionEventDate;
- (int)manualQualitySelectionPrecedingResolution;
- (int)manualQualitySelectionChosenResolution;
- (void)setManualQualitySelectionWithChosenResolution:(int)arg1 precedingResolution:(int)arg2 eventDate:(id)arg3;
- (void)setInAppReviewEligibleDate:(id)arg1;
- (id)inAppReviewEligibleDate;
- (void)setForcedPromoInterval:(id)arg1;
- (id)forcedPromoInterval;
- (void)setLastPromoDisplayedTime:(id)arg1;
- (id)lastPromoDisplayedTime;
@property(copy, nonatomic) NSDate *cellSwipeHintLastShownDate;
@property(retain, nonatomic) NSDictionary *pivotBarLastTapDateMap;
@property(copy, nonatomic) NSString *emlDevServerHost;
@property(nonatomic, getter=isEmlHotReloadEnabled) _Bool emlHotReloadEnabled;
@property(nonatomic, getter=isEmlDevServerEnabled) _Bool emlDevServerEnabled;
@property(copy, nonatomic) NSDictionary *clientEventIdCounters;
@property(copy, nonatomic) NSDictionary *serializedEventIds;
@property(retain, nonatomic) NSData *attributionData;
@property(nonatomic) double appSettingsSnapshotLastCaptureTimestamp;
@property(copy, nonatomic) NSDictionary *periodicLoggingParameters;
@property(copy, nonatomic) NSDictionary *retentionTrackingParameters;
- (void)setApiaryDeviceCrypto:(id)arg1;
- (id)apiaryDeviceCrypto;
- (id)hotConfigStoreDate;
- (id)hotConfigGroupHash;
- (void)setHotConfigGroupHash:(id)arg1;
- (id)hotConfigGroupData;
- (void)setHotConfigGroupData:(id)arg1;
- (id)coldConfigClientVersion;
- (id)coldConfigGroupHash;
- (void)setColdConfigGroupHash:(id)arg1;
- (id)coldConfigGroupData;
- (void)setColdConfigGroupData:(id)arg1;
- (void)setDetourTraceID:(id)arg1;
- (id)detourTraceID;
- (void)setForceAdParameters:(id)arg1;
- (id)forceAdParameters;
- (void)setForcedViralCampaignID:(id)arg1;
- (id)forcedViralCampaignID;
- (void)setForcedPyvAdGroupID:(id)arg1;
- (id)forcedPyvAdGroupID;
- (void)setForcedHomepageAdType:(id)arg1;
- (id)forcedHomepageAdType;
- (void)setForcedViralAdResponseURL:(id)arg1;
- (id)forcedViralAdResponseURL;
- (void)setForcedHomepageAdURL:(id)arg1;
- (id)forcedHomepageAdURL;
- (void)setDebugMastheadKeyword:(id)arg1;
- (id)debugMastheadKeyword;
- (void)setOfflineSettingsItems:(id)arg1;
- (id)offlineSettingsItems;
- (void)setOfflineGuideItems:(id)arg1;
- (id)offlineGuideItems;
- (id)installationID;
- (void)setLastSeenActivityTabIdentifier:(id)arg1;
- (id)lastSeenActivityTabIdentifier;
- (void)setDebugCompleteServerURL:(id)arg1;
- (id)debugCompleteServerURL;
- (void)setConfigWorkerLastRequestAppVersion:(id)arg1;
- (id)configWorkerLastRequestAppVersion;
- (void)setConfigWorkerLastRequestDate:(id)arg1;
- (id)configWorkerLastRequestDate;
- (void)setCustomExperimentsToken:(id)arg1;
- (id)customExperimentsToken;
- (void)setOSVersionOverride:(id)arg1;
- (id)OSVersionOverride;
- (void)setVersionOverride:(id)arg1;
- (id)versionOverride;
- (void)setLanguageOverride:(id)arg1;
- (id)languageOverride;
- (void)setInternalGeoOverride:(id)arg1;
- (id)internalGeoOverride;
- (void)setInteractionLoggingDebugEnabled:(_Bool)arg1;
- (_Bool)isInteractionLoggingDebugEnabled;
- (void)setPPGHost:(id)arg1;
- (id)PPGHost;
- (void)setServerEnvironment:(long long)arg1;
- (long long)serverEnvironment;
- (id)objectsForKeyPrefix:(id)arg1 removePrefix:(_Bool)arg2;
@property(nonatomic, getter=isDelayedEventExpirationMigrationComplete) _Bool delayedEventExpirationMigrationComplete;
- (id)incognitoVisitorData;
- (_Bool)isIncognitoActive;
- (void)setIncognitoVisitorData:(id)arg1;
- (void)setVisitorData:(id)arg1;
- (id)visitorData;
- (void)setLogNetworkRequests:(_Bool)arg1;
- (_Bool)logNetworkRequests;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

