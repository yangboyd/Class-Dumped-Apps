//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTDataLoaderFactory, SPTHomeContentCache, SPTNetworkConnectivityController;
@protocol SPTFreeTierTasteOnboardingCurationProvider, SPTHomeTestManager, SPTLocalSettings, SPTOfflineModeState, SPTOfflineService, SPTOnDemandService, SPTPlayer, SPTPodcastUIContinueListeningService, SPTRecentlyPlayedService;

@interface SPTHomeContentOperationFactory : NSObject
{
    id <SPTOnDemandService> _onDemandService;
    id <SPTPodcastUIContinueListeningService> _podcastUIContinueListeningService;
    id <SPTRecentlyPlayedService> _recentlyPlayedService;
    id <SPTOfflineService> _offlineService;
    id <SPTOfflineModeState> _offlineModeState;
    SPTNetworkConnectivityController *_networkConnectivityController;
    SPTHomeContentCache *_homeContentCache;
    SPTDataLoaderFactory *_dataLoaderFactory;
    id <SPTHomeTestManager> _testManager;
    id <SPTPlayer> _player;
    id <SPTFreeTierTasteOnboardingCurationProvider> _tasteOnboardingCurationProvider;
    id <SPTLocalSettings> _localSettings;
}

@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTFreeTierTasteOnboardingCurationProvider> tasteOnboardingCurationProvider; // @synthesize tasteOnboardingCurationProvider=_tasteOnboardingCurationProvider;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTHomeTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) SPTDataLoaderFactory *dataLoaderFactory; // @synthesize dataLoaderFactory=_dataLoaderFactory;
@property(readonly, nonatomic) SPTHomeContentCache *homeContentCache; // @synthesize homeContentCache=_homeContentCache;
@property(readonly, nonatomic) SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) __weak id <SPTOfflineService> offlineService; // @synthesize offlineService=_offlineService;
@property(readonly, nonatomic) __weak id <SPTRecentlyPlayedService> recentlyPlayedService; // @synthesize recentlyPlayedService=_recentlyPlayedService;
@property(readonly, nonatomic) __weak id <SPTPodcastUIContinueListeningService> podcastUIContinueListeningService; // @synthesize podcastUIContinueListeningService=_podcastUIContinueListeningService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
- (void).cxx_destruct;
- (id)provideDownloadsContentOperation;
- (id)provideHabitsContentOperation;
- (id)provideQuickPlayRecentlyPlayedDecoratorContentOperation;
- (id)provideQuickPlayContentOperation;
- (id)provideRemoteContentOperationWithSourceIdentifier:(id)arg1 contentURL:(id)arg2;
- (id)provideErrorHandlingContentOperation;
- (id)provideCachedContentOperation;
- (id)provideContinueListeningContentOperation;
- (id)provideRemoveComponentContentOperation;
- (id)provideOnDemandExtractorContentOperation;
- (id)provideOnDemandDecoratorContentOperation;
- (id)provideCardAccessibilityContentOperation;
- (id)provideRecentlyPlayedContentOperation;
- (id)initWithOnDemandService:(id)arg1 recentlyPlayedService:(id)arg2 podcastUIContinueListeningService:(id)arg3 offlineService:(id)arg4 offlineModeState:(id)arg5 networkConnectivityController:(id)arg6 homeContentCache:(id)arg7 dataLoaderFactory:(id)arg8 testManager:(id)arg9 player:(id)arg10 tasteOnboardingCurationProvider:(id)arg11 localSettings:(id)arg12;

@end

