//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVoiceService-Protocol.h"
#import "SPTVoiceTabBarViewManagerDelegate-Protocol.h"
#import "SPTVoiceTestManagerObserver-Protocol.h"
#import "SPTVoiceTestManagerSettingsDelegate-Protocol.h"

@class NSString, SPTAllocationContext, SPTDataLoaderKeymasterAuthoriser, SPTVoiceOnboardingManager, SPTVoiceSessionHandlingOptions, SPTVoiceTabBarViewManager, SPTVoiceTestManagerImplementation;
@protocol SPTBannerFeature, SPTCollectionPlatformService, SPTContainerService, SPTCoreService, SPTExternalIntegrationPlaybackService, SPTFeatureFlaggingService, SPTFreeTierService, SPTGLUEService, SPTNetworkService, SPTPageRegistrationToken, SPTPlayerFeature, SPTPlaylistPlatformService, SPTPodcastFeature, SPTRadioManager, SPTSessionService, SPTSettingsFeature, SPTURIDispatchService, SPTVoiceAudioRecorderFactory, SPTVoiceLoggerProtocol, SPTVoiceOnboardingRecordPermissionsState, SPTVoiceSessionViewControllerFactory;

@interface SPTVoiceServiceImplementation : NSObject <SPTVoiceTestManagerObserver, SPTVoiceTestManagerSettingsDelegate, SPTVoiceTabBarViewManagerDelegate, SPTVoiceService>
{
    id <SPTVoiceAudioRecorderFactory> _audioRecorderFactory;
    id <SPTRadioManager> _radioManager;
    id <SPTNetworkService> _networkService;
    id <SPTSessionService> _sessionService;
    id <SPTContainerService> _containerService;
    id <SPTSettingsFeature> _settingsService;
    id <SPTExternalIntegrationPlaybackService> _playbackService;
    id <SPTPlayerFeature> _playerService;
    id <SPTGLUEService> _glueService;
    id <SPTURIDispatchService> _linkDispatchService;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTCoreService> _coreService;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFreeTierService> _freeTierService;
    id <SPTBannerFeature> _bannerService;
    SPTDataLoaderKeymasterAuthoriser *_keymasterAuthoriser;
    id <SPTVoiceSessionViewControllerFactory> _defaultViewControllerFactory;
    SPTVoiceTestManagerImplementation *_testManager;
    SPTVoiceTabBarViewManager *_tabBarViewManager;
    SPTVoiceOnboardingManager *_onboardingManager;
    id <SPTVoiceLoggerProtocol> _logger;
    id <SPTPageRegistrationToken> _defaultVoicePageRegistration;
    id <SPTVoiceOnboardingRecordPermissionsState> _permissionsReducer;
    SPTVoiceSessionHandlingOptions *_sessionHandlingOptions;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVoiceSessionHandlingOptions *sessionHandlingOptions; // @synthesize sessionHandlingOptions=_sessionHandlingOptions;
@property(retain, nonatomic) id <SPTVoiceOnboardingRecordPermissionsState> permissionsReducer; // @synthesize permissionsReducer=_permissionsReducer;
@property(retain, nonatomic) id <SPTPageRegistrationToken> defaultVoicePageRegistration; // @synthesize defaultVoicePageRegistration=_defaultVoicePageRegistration;
@property(retain, nonatomic) id <SPTVoiceLoggerProtocol> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) SPTVoiceOnboardingManager *onboardingManager; // @synthesize onboardingManager=_onboardingManager;
@property(retain, nonatomic) SPTVoiceTabBarViewManager *tabBarViewManager; // @synthesize tabBarViewManager=_tabBarViewManager;
@property(readonly, nonatomic) SPTVoiceTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTVoiceSessionViewControllerFactory> defaultViewControllerFactory; // @synthesize defaultViewControllerFactory=_defaultViewControllerFactory;
@property(nonatomic) __weak SPTDataLoaderKeymasterAuthoriser *keymasterAuthoriser; // @synthesize keymasterAuthoriser=_keymasterAuthoriser;
@property(nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(nonatomic) __weak id <SPTFreeTierService> freeTierService; // @synthesize freeTierService=_freeTierService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTURIDispatchService> linkDispatchService; // @synthesize linkDispatchService=_linkDispatchService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTExternalIntegrationPlaybackService> playbackService; // @synthesize playbackService=_playbackService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsService; // @synthesize settingsService=_settingsService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(readonly, nonatomic) id <SPTRadioManager> radioManager; // @synthesize radioManager=_radioManager;
- (void).cxx_destruct;
- (void)tabBarViewManager:(id)arg1 didTriggerGesture:(id)arg2 referrerIdentifer:(id)arg3;
- (id)resolveReferrerIdentiferForContext:(id)arg1;
- (id)authorisationHosts;
- (id)provideVoiceTabBarViewManager;
- (void)presentVoiceViewController;
- (id)createDefaultVoiceViewControllerWithURI:(id)arg1 context:(id)arg2;
- (id)createDefaultVoiceViewController;
@property(readonly, nonatomic) id <SPTVoiceAudioRecorderFactory> audioRecorderFactory; // @synthesize audioRecorderFactory=_audioRecorderFactory;
- (id)provideDefaultViewControllerFactory;
- (id)createVoiceRecognitionTaskFactoryWithPlayer:(id)arg1;
- (id)createVoiceDeeplinkCommandHandlerWithOptions:(id)arg1;
- (id)createEntityDecorationController;
- (id)createVoiceCommandHandlerWithReferrerIdentifier:(id)arg1 player:(id)arg2;
- (id)providePlayerWithReferrerIdentifier:(id)arg1;
- (void)testManager:(id)arg1 didSwitchEndpoint:(unsigned long long)arg2;
- (void)didRequestTurnOffOnboardingWithTestManager:(id)arg1;
- (void)didTapResetOnboardingWithTestManager:(id)arg1;
- (void)didTapOpenVoiceOverlayWithTestManager:(id)arg1;
- (void)testManager:(id)arg1 didChangeVoiceSearchEnabledState:(_Bool)arg2;
- (void)testManager:(id)arg1 didChangeVoiceServiceEnabledState:(_Bool)arg2;
- (void)setVoiceCalloutTooltipDidDisplay:(_Bool)arg1;
- (_Bool)didDisplayVoiceCalloutTooltip;
- (_Bool)didFinishVoiceOnboarding;
- (void)provideWithRadioManager:(id)arg1;
- (id)provideTestManager;
- (void)launchVoiceWithReferrerIdentifier:(id)arg1;
- (id)createViewControllerFactoryWithVoiceSessionFactory:(id)arg1 presentationOptions:(id)arg2 commandHandlingOptions:(id)arg3;
- (id)createVoiceSessionFactoryWithServiceIdentifier:(id)arg1 sessionHandlingOptions:(id)arg2;
- (void)disable;
- (void)unload;
- (void)enable;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

