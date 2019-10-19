//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTHomeMixTestManagerDelegate-Protocol.h"
#import "SPTHomeMixUIService-Protocol.h"

@class NSString, SPTAllocationContext, SPTHomeMixService, SPTHomeMixTestManager;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTExplicitContentService, SPTFeatureFlaggingService, SPTFormatListPlatformRegistration, SPTFormatListPlatformService, SPTFreeTierTooltipService, SPTGLUEService, SPTNavigationFeature, SPTPlayerFeature, SPTPlaylistPlatformService, SPTRemoteConfigurationResolver, SPTRemoteConfigurationService, SPTSessionService, SPTSnackbarService, SPTURIDispatchService, SlateFeature;

@interface SPTHomeMixUIServiceImplementation : NSObject <SPTHomeMixTestManagerDelegate, SPTHomeMixUIService>
{
    SPTHomeMixService *_homeMixService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTContainerUIService> _containerUIService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTFormatListPlatformService> _formatListPlatformService;
    id <SPTSnackbarService> _snackbarService;
    id <SPTFreeTierTooltipService> _tooltipService;
    id <SPTGLUEService> _glueService;
    id <SPTNavigationFeature> _navigationService;
    id <SPTPlayerFeature> _playbackFeature;
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTSessionService> _sessionService;
    id <SlateFeature> _slateService;
    id <SPTRemoteConfigurationService> _remoteConfigurationService;
    id <SPTFormatListPlatformRegistration> _formatListPlatformRegistrationToken;
    SPTHomeMixTestManager *_testManager;
    id <SPTRemoteConfigurationResolver> _remoteConfigurationResolver;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTRemoteConfigurationResolver> remoteConfigurationResolver; // @synthesize remoteConfigurationResolver=_remoteConfigurationResolver;
@property(retain, nonatomic) SPTHomeMixTestManager *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) id <SPTFormatListPlatformRegistration> formatListPlatformRegistrationToken; // @synthesize formatListPlatformRegistrationToken=_formatListPlatformRegistrationToken;
@property(nonatomic) __weak id <SPTRemoteConfigurationService> remoteConfigurationService; // @synthesize remoteConfigurationService=_remoteConfigurationService;
@property(nonatomic) __weak id <SlateFeature> slateService; // @synthesize slateService=_slateService;
@property(nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
@property(nonatomic) __weak id <SPTPlayerFeature> playbackFeature; // @synthesize playbackFeature=_playbackFeature;
@property(nonatomic) __weak id <SPTNavigationFeature> navigationService; // @synthesize navigationService=_navigationService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFreeTierTooltipService> tooltipService; // @synthesize tooltipService=_tooltipService;
@property(nonatomic) __weak id <SPTSnackbarService> snackbarService; // @synthesize snackbarService=_snackbarService;
@property(nonatomic) __weak id <SPTFormatListPlatformService> formatListPlatformService; // @synthesize formatListPlatformService=_formatListPlatformService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak SPTHomeMixService *homeMixService; // @synthesize homeMixService=_homeMixService;
- (void).cxx_destruct;
- (id)featureProperties;
- (id)provideHomeMixEnabledSignal;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (void)disableService;
- (void)enableService;
- (void)enabledSignalDidChange:(id)arg1 toState:(long long)arg2;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

