//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GCAFlags-Protocol.h"

@class HPHRemoteControlEligibilityConditions, NSArray, NSString, PHTPhenotypeFlags;
@protocol AnalyticsLogger, SSOService;

@interface GCAFlags : NSObject <GCAFlags>
{
    PHTPhenotypeFlags *_allFlags;
    id <SSOService> _SSOService;
    id <AnalyticsLogger> _analyticsLogger;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <AnalyticsLogger> analyticsLogger; // @synthesize analyticsLogger=_analyticsLogger;
@property(readonly, nonatomic) id <SSOService> SSOService; // @synthesize SSOService=_SSOService;
@property(readonly, nonatomic) PHTPhenotypeFlags *allFlags; // @synthesize allFlags=_allFlags;
- (id)protoParamsValueForFlag:(id)arg1;
@property(readonly, nonatomic) NSString *serverToken;
- (id)phenotypeApplicationProperties;
- (long long)accountState;
- (void)updatePhenotypeFlags;
- (void)registerWithPhenotype;
@property(readonly, nonatomic) _Bool enableAccountLinkingServiceVersionTwo;
@property(readonly, nonatomic) _Bool enableNetflixFSIPostOOBEFlow;
@property(readonly, nonatomic) _Bool enableNetflixCustomOOBEFlow;
@property(readonly, nonatomic) _Bool enableRebatesAndRewards;
@property(readonly, nonatomic) _Bool enableCallAppsLinkingDuringOOBE;
@property(readonly, nonatomic) _Bool enableFoyerBasedReportAccountLinkingRPC;
@property(readonly, nonatomic) _Bool enableFoyerBasedUnlinkAppRPC;
@property(readonly, nonatomic) _Bool enableFoyerBasedGetLinkableAppsRPC;
@property(readonly, nonatomic) long long maxLimitToShowSlingFSI;
@property(readonly, nonatomic) NSArray *liveTVEnabledSSIDSuffixes;
@property(readonly, nonatomic) _Bool watchLiveTvForAllStructuresEnabled;
@property(readonly, nonatomic) _Bool watchLiveTVEnabled;
@property(readonly, nonatomic) _Bool enableCustomerSupportCodeSetting;
@property(readonly, nonatomic) long long relayCastingDiscoveryTimeout;
@property(readonly, nonatomic) _Bool relayCastingEnabled;
@property(readonly, nonatomic) _Bool nowPlayingCardLayoutEnabled;
@property(readonly, nonatomic) _Bool nowPlayingStreamExpansionEnabled;
@property(readonly, nonatomic) _Bool nowPlayingImmersiveRefactorEnabled;
@property(readonly, nonatomic) _Bool feedbackCategoryEnabled;
@property(readonly, nonatomic) _Bool griffinAccountRestrictionsEnabled;
@property(readonly, nonatomic) _Bool enableRemoteCastState;
@property(readonly, nonatomic) NSArray *LANScanSupportedDeviceTypes;
@property(readonly, nonatomic) _Bool isLANScanEnabled;
@property(readonly, nonatomic) _Bool enableSurroundSoundSetting;
@property(readonly, nonatomic) _Bool showSetupMediaBannerPrimaryImage;
@property(readonly, nonatomic) NSArray *SSIDSuffixesEnabledForAmbientOobeReorder;
@property(readonly, nonatomic) _Bool enableAmbientFacebookConsentFlow;
@property(readonly, nonatomic) _Bool enableKeyCommandsOnMediaRemote;
@property(readonly, nonatomic) _Bool enableCloudAudioAccessibilitySettings;
@property(readonly, nonatomic) _Bool enableCloudAmbientSettings;
@property(readonly, nonatomic) _Bool enableCloudEstelleDeviceSettings;
@property(readonly, nonatomic) _Bool enableCloudNewmanDeviceSettings;
@property(readonly, nonatomic) _Bool isStructurePreferencesEnabled;
@property(readonly, nonatomic) _Bool showUDCConsentPageForChromecastOOBE;
@property(readonly, nonatomic) _Bool enableMediaPagesForChromecastOOBE;
@property(readonly, nonatomic) long long androidTvAccountTransferRetryCount;
@property(readonly, nonatomic) NSArray *filterAndroidTvMediaApps;
@property(readonly, nonatomic) long long waitForApplicationsTimeout;
@property(readonly, nonatomic) long long waitForDUSITimeout;
@property(readonly, nonatomic) _Bool enableAndroidTVAssistantPersonalization;
@property(readonly, nonatomic) _Bool enableAndroidTVCloudBridge;
@property(readonly, nonatomic) _Bool enableAndroidTVSkipAccountLinkingError;
@property(readonly, nonatomic) _Bool enableAndroidTVPromotionCarousel;
@property(readonly, nonatomic) _Bool enableAndroidTVDUSITransfer;
@property(readonly, nonatomic) _Bool enableFreeTrialAutoOptInFlow;
@property(readonly, nonatomic) _Bool enableConciergeHangingSubscriptionFlow;
@property(readonly, nonatomic) _Bool enableConciergeE911TestCall;
@property(readonly, nonatomic) _Bool enableConciergeSignup;
@property(readonly, nonatomic) _Bool enableConcierge;
@property(readonly, nonatomic) _Bool showAutomaticGameModeSetting;
@property(readonly, nonatomic) _Bool enableStadiaOfferPage;
@property(readonly, nonatomic) _Bool enableDefaultMusicSelector;
@property(readonly, nonatomic) _Bool enableMultiTierUserAccessSilverStarUI;
@property(readonly, nonatomic) _Bool enableMultiTierUserAccess;
@property(readonly, nonatomic) NSString *partnerConnectionsSettingURL;
@property(readonly, nonatomic) _Bool enablePartnerConnectionsSetting;
@property(readonly, nonatomic) NSArray *allowedUpdatableDeviceTypes;
@property(readonly, nonatomic) _Bool enableUpdatableDeviceType;
@property(readonly, nonatomic) NSArray *hideFromHomeGraphViewDeviceTypes;
@property(readonly, nonatomic) _Bool enablePartnerDeeplinkLinking;
@property(readonly, nonatomic) _Bool enableVentoDigitalUserGuide;
@property(readonly, nonatomic) _Bool enableWifiOnHubSupport;
@property(readonly, nonatomic) _Bool enableWifiCountryCompatibilityCheck;
@property(readonly, nonatomic) _Bool enableWifiVlanTagging;
@property(readonly, nonatomic) _Bool enableWifiDeviceArbitration;
@property(readonly, nonatomic) _Bool enableWifiBlockingUpdate;
@property(readonly, nonatomic) _Bool enableWifiApplicationPrioritization;
@property(readonly, nonatomic) _Bool enableWifi426OfflineFiltering;
@property(readonly, nonatomic) _Bool enableWifiHotspotSynchronousScanning;
@property(readonly, nonatomic) _Bool enableNewDowntimeDescription;
@property(readonly, nonatomic) _Bool enableWifiHotspotScanning;
@property(readonly, nonatomic) _Bool enableFamilyWifi;
@property(readonly, nonatomic) _Bool enableFamilyOnboarding;
@property(readonly, nonatomic) _Bool enableWifiMixedNetworkMigrationFlow;
@property(readonly, nonatomic) _Bool enableWifiDeviceControllers;
@property(readonly, nonatomic) _Bool enableWifiNonWeaveRecovery;
@property(readonly, nonatomic) _Bool enableWifiWeaveRecovery;
@property(readonly, nonatomic) _Bool enableWifiGamingMode;
@property(readonly, nonatomic) _Bool enableWifiVentoOOBESpeedbump;
@property(readonly, nonatomic) _Bool enableWifiBundleFlow;
@property(readonly, nonatomic) _Bool enableWifiOOBEWeaveWhitelist;
@property(readonly, nonatomic) NSArray *foyerSupportedDeviceTypes;
@property(readonly, nonatomic) long long lightControllerRealtimeCoalescedDelay;
@property(readonly, nonatomic) _Bool lightControllerRealtimeUpdatesEnabled;
@property(readonly, nonatomic) NSArray *trustedReportStatePartners;
@property(readonly, nonatomic) NSArray *deviceTypesSupportingStatefulHomeView;
@property(readonly, nonatomic) _Bool enableOptimisticDeviceStateCacheUpdates;
@property(readonly, nonatomic) _Bool enableHomeCoreInitialDeviceState;
@property(readonly, nonatomic) _Bool enableGetHomeGraphInitialDeviceState;
@property(readonly, nonatomic) _Bool enablePulsarDeviceStateCacheUpdates;
@property(readonly, nonatomic) _Bool deviceStateCacheEnabled;
@property(readonly, nonatomic) _Bool enableStatefulHomeView;
@property(readonly, nonatomic) _Bool enableSmartHomeSuggestions;
@property(readonly, nonatomic) long long mediaLinkingButtonType;
@property(readonly, nonatomic) _Bool enableExperimentalTitleInfoForMediaLinking;
@property(readonly, nonatomic) _Bool enableOOBEExperienceForAddMenuMediaLinking;
@property(readonly, nonatomic) _Bool enableOOBEExperienceForAppSettingMediaLinking;
@property(readonly, nonatomic) _Bool enableLiveTvOptionOnAddMenu;
@property(readonly, nonatomic) _Bool enableNonSkippableMediaLinking;
@property(readonly, nonatomic) _Bool enablePodcastFromSettings;
@property(readonly, nonatomic) _Bool enableUnlinkSupport;
@property(readonly, nonatomic) _Bool enableLiveTVSupport;
@property(readonly, nonatomic) _Bool enableMediaLinkingChips;
@property(readonly, nonatomic) _Bool enableLiveTvPagesOnSetup;
@property(readonly, nonatomic) _Bool enableRadioSupport;
@property(readonly, nonatomic) _Bool enableChOOBE;
@property(readonly, nonatomic) _Bool enablePulsarHomeGraphRefresh;
@property(readonly, nonatomic) double pulsarHeartbeatInterval;
@property(readonly, nonatomic) _Bool enablePulsarRealTimeUpdates;
@property(readonly, nonatomic) _Bool enableFeedFeedbackGeofence;
@property(readonly, nonatomic) _Bool enableFeedFeedbackDonateSoundClip;
@property(readonly, nonatomic) _Bool enableFeedFeedbackDonateVideoClip;
@property(readonly, nonatomic) _Bool enableStructureModeBlameDialog;
@property(readonly, nonatomic) _Bool enableFeedPersonalisation;
@property(readonly, nonatomic) _Bool enableFeedBadge;
@property(readonly, nonatomic) _Bool enableFeedBlur;
@property(readonly, nonatomic) long long feedLayoutType;
@property(readonly, nonatomic) double feedStaleTimeInterval;
@property(readonly, nonatomic) _Bool enableFirebaseAnalytics;
@property(readonly, nonatomic) _Bool enableGeofenceDebugUser;
@property(readonly, nonatomic) _Bool enableHAWOOBE;
@property(readonly, nonatomic) _Bool enableGeofence;
@property(readonly, nonatomic) _Bool enableAutomationErrorsOnHomeView;
@property(readonly, nonatomic) _Bool enable2FAChallengeFlow;
@property(readonly, nonatomic) NSArray *genericRemotePausableDeviceTypes;
@property(readonly, nonatomic) double genericRemotePollingTimerMaxTimeInterval;
@property(readonly, nonatomic) double genericRemotePollingTimerInitialTimeInterval;
@property(readonly, nonatomic) _Bool enableGenericRemotePollingTimer;
@property(readonly, nonatomic) NSString *inHomeConsultationURL;
@property(readonly, nonatomic) _Bool enableInHomeConsultationMenu;
@property(readonly, nonatomic) _Bool enablePushNotifications;
@property(readonly, nonatomic) _Bool enableCameraImmersive;
@property(readonly, nonatomic) _Bool enableCameraEmergencyServices;
@property(readonly, nonatomic) _Bool enableDeviceFaceLibrary;
@property(readonly, nonatomic) _Bool enableFamiliarFaces;
@property(readonly, nonatomic) _Bool enableEBRClipInfoFeature;
@property(readonly, nonatomic) _Bool enableEBRFeature;
@property(readonly, nonatomic) long long historyDateRangeDays;
@property(readonly, nonatomic) _Bool enableCameraSettingsOnOff;
@property(readonly, nonatomic) _Bool enableCameraKirbyFeature;
@property(readonly, nonatomic) _Bool enableCameraMetrics;
@property(readonly, nonatomic) _Bool enableCameraOnOffControl;
@property(readonly, nonatomic) _Bool enableNestTalkback;
@property(readonly, nonatomic) _Bool enableFrenchTransparencyInfo;
@property(readonly, nonatomic) _Bool enableStreamTransferToPairs;
@property(readonly, nonatomic) _Bool prettyPleaseSettingEnabled;
@property(readonly, nonatomic) long long structureModePollingTimerTimeInterval;
@property(readonly, nonatomic) _Bool structureModePollingTimerEnabled;
@property(readonly, nonatomic) _Bool homepageFetchStructureModeEnabled;
@property(readonly, nonatomic) _Bool structureModeEnabled;
@property(readonly, nonatomic) _Bool aoghCloudDiscoveredDevicesSupportHTTPS;
@property(readonly, nonatomic) _Bool aoghCloudDeviceDiscoveryEnabled;
@property(readonly, nonatomic) _Bool aoghSynchronousSetupEnabled;
@property(readonly, nonatomic) _Bool aoghIndividualDeviceRemovalEnabled;
@property(readonly, nonatomic) long long aoghSmartDeviceScanDelay;
@property(readonly, nonatomic) _Bool aoghSmartDeviceScannerEnabled;
@property(readonly, nonatomic) _Bool aoghDisplayUpdatedStrings;
@property(readonly, nonatomic) NSArray *aoghSupportedDeviceTypes;
@property(readonly, nonatomic) long long aoghCastDeviceScanDelay;
@property(readonly, nonatomic) long long aoghDevicesErrorRetryDelay;
@property(readonly, nonatomic) long long aoghDevicesNoResultsRetryDelay;
@property(readonly, nonatomic) long long aoghDevicesErrorRetryTimeout;
@property(readonly, nonatomic) long long aoghDevicesNoResultsRetryTimeout;
@property(readonly, nonatomic) long long aoghPostSetupWaitTimeout;
@property(readonly, nonatomic) long long aoghSetupTotalTimeout;
@property(readonly, nonatomic) NSString *aoghResetLearnMoreURL;
@property(readonly, nonatomic) long long homeGraphPollTimeout;
@property(readonly, nonatomic) long long homeGraphPollDelay;
@property(readonly, nonatomic) _Bool olive426WebViewEnabled;
@property(readonly, nonatomic) NSString *olive426RedirectURI;
@property(readonly, nonatomic) _Bool supportsNestApp;
@property(readonly, nonatomic) NSString *olive426DeeplinkRealm;
@property(readonly, nonatomic) _Bool inferNestEnvironmentFromApp;
@property(readonly, nonatomic) NSString *nestEnvironment;
@property(readonly, nonatomic) _Bool enablePlaySomething;
- (id)smartMicQuerySuggestionsForLanguage:(id)arg1;
@property(readonly, nonatomic) NSArray *enabledSmartMicClientOpNames;
@property(readonly, nonatomic) _Bool smartMicEnabled;
@property(readonly, nonatomic) _Bool settingsCoinEnabled;
@property(readonly, nonatomic) _Bool addCoinEnabled;
@property(readonly, nonatomic) _Bool lightImmersiveStateEnabled;
@property(readonly, nonatomic) _Bool routinesEnabled;
@property(readonly, nonatomic) _Bool callHomeCoinSetUpDuoFlowEnabled;
@property(readonly, nonatomic) _Bool callHomeCoinEnabled;
- (id)queriesForLanguage:(id)arg1 inConfig:(id)arg2;
- (id)broadcastQueryForAssistantLanguage:(id)arg1;
@property(readonly, nonatomic) _Bool broadcastCoinEnabled;
@property(readonly, nonatomic) long long customImageDownloaderDiskCacheCapacity;
@property(readonly, nonatomic) long long customImageDownloaderMemoryCacheCapacity;
@property(readonly, nonatomic) _Bool customImageCachingEnabled;
@property(readonly, nonatomic) NSArray *helpAndSupportSupportedTypes;
@property(readonly, nonatomic) _Bool darkModeSupported;
@property(readonly, nonatomic) _Bool createStructureAddress20Enabled;
@property(readonly, nonatomic) long long structureLimit;
@property(readonly, nonatomic) _Bool lightColorPickerLanguageEnabled;
@property(readonly, nonatomic) NSArray *supportedLocalesForRoutines;
@property(readonly, nonatomic) HPHRemoteControlEligibilityConditions *homeAutomationEligibilityConditions;
- (id)defaultEligibilityConditions;
@property(readonly, nonatomic) _Bool logGRPCNetworkEvents;
@property(readonly, nonatomic) NSString *deviceArbitrationAgreementURLString;
@property(readonly, nonatomic) _Bool categoryPickerEnabled;
@property(readonly, nonatomic) _Bool deviceArbitrationEnabled;
@property(readonly, nonatomic) _Bool isOpencastCheckboxCheckedByDefault;
@property(readonly, nonatomic) _Bool connectToWifiEnabled;
@property(readonly, nonatomic) _Bool canLeavePreviewChannel;
@property(readonly, nonatomic) _Bool isPreviewChannelEnabled;
@property(readonly, nonatomic) _Bool isPreviewChannelMarketingEmailEnabled;
@property(readonly, nonatomic) _Bool enableVerifyBluetoothLAT;
@property(readonly, nonatomic) _Bool enableVerifyBluetoothCertificate;
@property(readonly, nonatomic) NSArray *multiUserSupportedDeviceSSIDSuffixesInOOBE;
@property(readonly, nonatomic) _Bool isMultiUserEnrollmentEnabledInOOBE;
@property(readonly, nonatomic) _Bool userPlacesAsAddressSuggestionsEnabled;
@property(readonly, nonatomic) _Bool enableRevokedCastCertificateCheck;
@property(readonly, nonatomic) _Bool shouldSecureLegacyDeviceAPIs;
@property(readonly, nonatomic) _Bool shouldUseHTTPSForLocalRequests;
@property(readonly, nonatomic) _Bool useFoyerDeviceProfileData;
@property(readonly, nonatomic) _Bool useFoyerLearnFlowData;
@property(readonly, nonatomic) NSString *learnFlowSampleItemsURL;
@property(readonly, nonatomic) _Bool duoOOBEGaiaOnlyAccountLevelEnabled;
@property(readonly, nonatomic) NSArray *SSIDSuffixesEnabledForDuoGaiaOnlyOOBE;
@property(readonly, nonatomic) NSArray *SSIDSuffixesEnabledForDuoOOBE;
@property(readonly, nonatomic) NSString *OPAAssistantAppStoreURL;
@property(readonly, nonatomic) _Bool OTAUpdateDoesAssistantRespondEnabled;
@property(readonly, nonatomic) _Bool OTAUpdateTimedWaitScreenEnabled;
@property(readonly, nonatomic) long long OTAUpdateMaxTimedWaitScreenTime;
@property(readonly, nonatomic) long long OTAUpdateExtendedMaxTimedWaitScreenTime;
@property(readonly, nonatomic) NSArray *OTAUpdateExtendedTimeoutDeviceSSIDSuffixes;
@property(readonly, nonatomic) long long OTAUpdateExtendedDownloadOOBEWaitTime;
@property(readonly, nonatomic) long long OTAUpdateMaxLocalDiscoveryWaitTime;
@property(readonly, nonatomic) long long OTAUpdateWaitScreenTime;
@property(readonly, nonatomic) long long OTAUpdateDeviceReadyOOBEWaitTime;
@property(readonly, nonatomic) long long OTAUpdateInstallOOBEWaitTime;
@property(readonly, nonatomic) long long OTAUpdateDownloadOOBEWaitTime;
@property(readonly, nonatomic) long long OTAUpdateCheckReadyPollTimerInterval;
@property(readonly, nonatomic) long long OTAUpdateDownloadPollTimerInterval;
@property(readonly, nonatomic) long long OTAUpdateDownloadAssumeSuccessPercentage;
@property(readonly, nonatomic) _Bool stereoPairingCompatibilityMatrixEnabled;
@property(readonly, nonatomic) _Bool soundSettingsRoomEQEnabled;
@property(readonly, nonatomic) _Bool appReviewPromptEnabled;
@property(readonly, nonatomic) double appReviewPromptMinimumSecondsAfterFirstUse;
@property(readonly, nonatomic) long long appReviewPromptMinimumSessions;
@property(readonly, nonatomic) long long appReviewPromptVersionsToSkip;
@property(readonly, nonatomic) NSArray *supportedDeeplinks;
@property(readonly, nonatomic) double sherlockConfigurationRefreshTimeInterval;
@property(readonly, nonatomic) NSString *appStoreMainPageURL;
@property(readonly, nonatomic) _Bool appVersionOutOfDate;
- (void)setCurrentIdentity:(id)arg1;
- (id)initWithAnalyticsLogger:(id)arg1 e2ETestServiceForMigration:(id)arg2 SSOService:(id)arg3;
- (id)initWithFlags:(id)arg1 analyticsLogger:(id)arg2 SSOService:(id)arg3;

@end

