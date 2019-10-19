//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SPTNetworkConnectivityController;
@protocol SPTCollectionPlatformStateProvider, SPTCollectionPlatformTestManager, SPTExplicitContentAccessManager, SPTFollowModelFactory, SPTHubContentOperationFactory, SPTOnDemandService, SPTOnDemandTrialService, SPTPlayerFeature, SPTPodcastEpisodeFeaturedContentService, SPTProductState;

@interface SPTFreeTierArtistContentOperationFactory : NSObject
{
    id <SPTHubContentOperationFactory> _hubContentOperationFactory;
    id <SPTPlayerFeature> _playerService;
    id <SPTOnDemandService> _onDemandService;
    id <SPTOnDemandTrialService> _onDemandTrialService;
    SPTNetworkConnectivityController *_networkConnectivityController;
    id <SPTFollowModelFactory> _followModelFactory;
    id <SPTProductState> _productState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <SPTPodcastEpisodeFeaturedContentService> _podcastEpisodeFeaturedService;
    id <SPTCollectionPlatformStateProvider> _collectionPlaformStateProvider;
    id <SPTCollectionPlatformTestManager> _collectionPlatformTestManager;
}

@property(readonly, nonatomic) id <SPTCollectionPlatformTestManager> collectionPlatformTestManager; // @synthesize collectionPlatformTestManager=_collectionPlatformTestManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformStateProvider> collectionPlaformStateProvider; // @synthesize collectionPlaformStateProvider=_collectionPlaformStateProvider;
@property(readonly, nonatomic) __weak id <SPTPodcastEpisodeFeaturedContentService> podcastEpisodeFeaturedService; // @synthesize podcastEpisodeFeaturedService=_podcastEpisodeFeaturedService;
@property(readonly, nonatomic) __weak id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(readonly, nonatomic) __weak id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) __weak id <SPTFollowModelFactory> followModelFactory; // @synthesize followModelFactory=_followModelFactory;
@property(readonly, nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(readonly, nonatomic) __weak id <SPTOnDemandTrialService> onDemandTrialService; // @synthesize onDemandTrialService=_onDemandTrialService;
@property(readonly, nonatomic) __weak id <SPTOnDemandService> onDemandService; // @synthesize onDemandService=_onDemandService;
@property(readonly, nonatomic) __weak id <SPTPlayerFeature> playerService; // @synthesize playerService=_playerService;
@property(readonly, nonatomic) id <SPTHubContentOperationFactory> hubContentOperationFactory; // @synthesize hubContentOperationFactory=_hubContentOperationFactory;
- (void).cxx_destruct;
- (id)createArtistReleasesContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createArtistViewContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)createContentOperationsForViewURI:(id)arg1 referrerIdentifier:(id)arg2 reloadPageSignal:(id)arg3;
- (id)initWithHubContentOperationFactory:(id)arg1 playerService:(id)arg2 onDemandService:(id)arg3 onDemandTrialService:(id)arg4 networkConnectivityController:(id)arg5 followModelFactory:(id)arg6 productState:(id)arg7 explicitContentAccessManager:(id)arg8 collectionPlaformStateProvider:(id)arg9 collectionPlatformTestManager:(id)arg10 podcastEpisodeFeaturedService:(id)arg11;

@end

