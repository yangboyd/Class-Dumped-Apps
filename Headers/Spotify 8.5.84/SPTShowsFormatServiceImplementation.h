//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTShowsFormatService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTCollectionPlatformService, SPTContainerService, SPTEncoreIntegrationService, SPTFreeTierPlaylistService, SPTFreeTierPlaylistUIService, SPTGLUEService, SPTNetworkService, SPTPlayerFeature, SPTPodcastFeature, _TtP17PodcastDALFeature20SPTPodcastDALService_;

@interface SPTShowsFormatServiceImplementation : NSObject <SPTShowsFormatService>
{
    _Bool _handlerRegistered;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTCollectionPlatformService> _collectionPlatformService;
    id <SPTContainerService> _containerService;
    id <SPTGLUEService> _glueService;
    id <SPTNetworkService> _networkFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <_TtP17PodcastDALFeature20SPTPodcastDALService_> _podcastDALService;
    id <SPTFreeTierPlaylistUIService> _playlistUIService;
    id <SPTFreeTierPlaylistService> _playlistService;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isHandlerRegistered) _Bool handlerRegistered; // @synthesize handlerRegistered=_handlerRegistered;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistService> playlistService; // @synthesize playlistService=_playlistService;
@property(nonatomic) __weak id <SPTFreeTierPlaylistUIService> playlistUIService; // @synthesize playlistUIService=_playlistUIService;
@property(nonatomic) __weak id <_TtP17PodcastDALFeature20SPTPodcastDALService_> podcastDALService; // @synthesize podcastDALService=_podcastDALService;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTCollectionPlatformService> collectionPlatformService; // @synthesize collectionPlatformService=_collectionPlatformService;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
- (void)registerHandlerForShowsFormat;
- (id)provideContextMenuProvider;
- (void)configureShowsFormatPlaylistViewControllerWithURL:(id)arg1 context:(id)arg2 configurationBuilder:(id)arg3;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

