//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVideoCoordinatorService-Protocol.h"

@class NSString, SPTAllocationContext, SPTVideoContextPlayerCoordinator, SPTVideoCoordinatorFeatureFlags, SPTVideoDynamicEventObserverFactory, SPTVideoPreferredSubtitleMessageFactory, SPTVideoSubtitleProvider;
@protocol CosmosFeature, SPContextMenuFeature, SPTAbbaService, SPTBannerFeature, SPTContainerService, SPTContainerUIService, SPTDebugService, SPTExternalIntegrationDriverDistractionService, SPTPlayer, SPTPlayerFeature, SPTUIPresentationService, SPTURIDispatchService, SPTVideoFeature;

@interface SPTVideoCoordinatorServiceImplementation : NSObject <SPTVideoCoordinatorService>
{
    id <SPTAbbaService> _abbaService;
    id <SPTVideoFeature> _videoService;
    id <CosmosFeature> _cosmosService;
    id <SPTBannerFeature> _bannerFeature;
    id <SPTContainerUIService> _containerUIService;
    id <SPTExternalIntegrationDriverDistractionService> _driverDistractionService;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTUIPresentationService> _presentationService;
    id <SPTContainerService> _containerService;
    id <SPTDebugService> _debugService;
    id <SPTURIDispatchService> _URIDispatchService;
    id <SPTPlayerFeature> _playerService;
    id <SPTPlayer> _contextPlayer;
    SPTVideoContextPlayerCoordinator *_coordinator;
    SPTVideoDynamicEventObserverFactory *_dynamicEventObserverFactory;
    SPTVideoSubtitleProvider *_subtitleProvider;
    SPTVideoPreferredSubtitleMessageFactory *_preferredSubtitleMessageFactory;
    SPTVideoCoordinatorFeatureFlags *_flags;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTVideoCoordinatorFeatureFlags *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) SPTVideoPreferredSubtitleMessageFactory *preferredSubtitleMessageFactory; // @synthesize preferredSubtitleMessageFactory=_preferredSubtitleMessageFactory;
@property(retain, nonatomic) SPTVideoSubtitleProvider *subtitleProvider; // @synthesize subtitleProvider=_subtitleProvider;
@property(retain, nonatomic) SPTVideoDynamicEventObserverFactory *dynamicEventObserverFactory; // @synthesize dynamicEventObserverFactory=_dynamicEventObserverFactory;
@property(retain, nonatomic) SPTVideoContextPlayerCoordinator *coordinator; // @synthesize coordinator=_coordinator;
@property(retain, nonatomic) id <SPTPlayer> contextPlayer; // @synthesize contextPlayer=_contextPlayer;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTURIDispatchService> URIDispatchService; // @synthesize URIDispatchService=_URIDispatchService;
@property(nonatomic) __weak id <SPTDebugService> debugService; // @synthesize debugService=_debugService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTExternalIntegrationDriverDistractionService> driverDistractionService; // @synthesize driverDistractionService=_driverDistractionService;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTBannerFeature> bannerFeature; // @synthesize bannerFeature=_bannerFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosService; // @synthesize cosmosService=_cosmosService;
@property(nonatomic) __weak id <SPTVideoFeature> videoService; // @synthesize videoService=_videoService;
@property(nonatomic) __weak id <SPTAbbaService> abbaService; // @synthesize abbaService=_abbaService;
- (void).cxx_destruct;
- (void)registerContextMenuActionWithCosmosSender:(id)arg1;
- (void)removeVideoPlaybackEventObserver:(id)arg1;
- (void)addVideoPlaybackEventObserver:(id)arg1;
- (id)providePlayerSource;
- (id)provideSurfaceManager;
- (void)registerPlaybackEventObserverFactoryBlock:(CDUnknownBlockType)arg1;
- (void)registerPlaybackEventObserverFactory:(id)arg1;
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

