//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTLyricsFeature-Protocol.h"

@class NSString, SPTAllocationContext, SPTLyricsV2Service;
@protocol CosmosFeature, GaiaFeature, SPContextMenuFeature, SPTBannerFeature, SPTContainerService, SPTCoreService, SPTFeatureFlaggingService, SPTGLUEService, SPTInAppMessageService, SPTLyricsTrackChecker, SPTLyricsV2TestManager, SPTNetworkService, SPTNowPlayingPlatformService, SPTNowPlayingService, SPTPlayer, SPTPlayerFeature, SPTUIPresentationService, SPTURIDispatchService;

@interface SPTLyricsFeatureImplementation : NSObject <SPTLyricsFeature>
{
    id <SPTContainerService> _containerService;
    id <SPContextMenuFeature> _contextMenuService;
    id <SPTCoreService> _coreService;
    id <SPTFeatureFlaggingService> _featureFlaggingService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkService;
    id <SPTNowPlayingService> _nowPlayingService;
    id <SPTNowPlayingPlatformService> _nowPlayingPlatformService;
    id <SPTPlayerFeature> _playerService;
    id <SPTUIPresentationService> _uiPresentationService;
    id <SPTURIDispatchService> _uriDispatchService;
    id <SPTPlayer> _player;
    id <SPTLyricsTrackChecker> _trackChecker;
    id <SPTBannerFeature> _bannerService;
    id <CosmosFeature> _cosmosFeature;
    id <GaiaFeature> _gaiaFeature;
    id <SPTInAppMessageService> _inAppMessageService;
    id <SPTLyricsV2TestManager> _testManager;
    SPTLyricsV2Service *_lyricsV2Service;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) SPTLyricsV2Service *lyricsV2Service; // @synthesize lyricsV2Service=_lyricsV2Service;
@property(retain, nonatomic) id <SPTLyricsV2TestManager> testManager; // @synthesize testManager=_testManager;
@property(nonatomic) __weak id <SPTInAppMessageService> inAppMessageService; // @synthesize inAppMessageService=_inAppMessageService;
@property(nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(nonatomic) __weak id <CosmosFeature> cosmosFeature; // @synthesize cosmosFeature=_cosmosFeature;
@property(nonatomic) __weak id <SPTBannerFeature> bannerService; // @synthesize bannerService=_bannerService;
@property(retain, nonatomic) id <SPTLyricsTrackChecker> trackChecker; // @synthesize trackChecker=_trackChecker;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(nonatomic) __weak id <SPTURIDispatchService> uriDispatchService; // @synthesize uriDispatchService=_uriDispatchService;
@property(nonatomic) __weak id <SPTUIPresentationService> uiPresentationService; // @synthesize uiPresentationService=_uiPresentationService;
@property(nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(nonatomic) __weak id <SPTNowPlayingPlatformService> nowPlayingPlatformService; // @synthesize nowPlayingPlatformService=_nowPlayingPlatformService;
@property(nonatomic) __weak id <SPTNowPlayingService> nowPlayingService; // @synthesize nowPlayingService=_nowPlayingService;
@property(nonatomic) __weak id <SPTNetworkService> networkService; // @synthesize networkService=_networkService;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTFeatureFlaggingService> featureFlaggingService; // @synthesize featureFlaggingService=_featureFlaggingService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuService; // @synthesize contextMenuService=_contextMenuService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
- (void).cxx_destruct;
- (id)provideResolver;
- (void)registerNowPlayingScrollProvider;
- (id)provideLyricsV2Service;
- (id)providePlayer;
- (id)provideLyricsTrackChecker;
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

