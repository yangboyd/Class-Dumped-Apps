//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlaylistExtenderService-Protocol.h"

@class NSString, SPTAllocationContext, SPTPlaylistExtenderImplementation;
@protocol SPTEncoreIntegrationService, SPTExplicitContentService, SPTNetworkService, SPTPlaylistPlatformService, SPTSessionService, SPTShelfService, SPTUBIService;

@interface SPTPlaylistExtenderServiceImplementation : NSObject <SPTPlaylistExtenderService>
{
    id <SPTPlaylistPlatformService> _playlistPlatformService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTNetworkService> _networkFeature;
    id <SPTEncoreIntegrationService> _encoreIntegrationService;
    id <SPTUBIService> _ubiService;
    id <SPTShelfService> _shelfService;
    id <SPTSessionService> _clientSessionService;
    SPTPlaylistExtenderImplementation *_playlistExtender;
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
@property(retain, nonatomic) SPTPlaylistExtenderImplementation *playlistExtender; // @synthesize playlistExtender=_playlistExtender;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTUBIService> ubiService; // @synthesize ubiService=_ubiService;
@property(nonatomic) __weak id <SPTEncoreIntegrationService> encoreIntegrationService; // @synthesize encoreIntegrationService=_encoreIntegrationService;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTPlaylistPlatformService> playlistPlatformService; // @synthesize playlistPlatformService=_playlistPlatformService;
- (void)unload;
- (void)load;
- (id)provideCellProviderWithDataLoader:(id)arg1 player:(id)arg2 playlistURI:(id)arg3 preferredNumberOfTracks:(unsigned long long)arg4 pageIdentifier:(id)arg5 trackActivePredicate:(id)arg6;
- (id)providePlaylistExtenderModelWithWithDataLoader:(id)arg1 player:(id)arg2 playlistURI:(id)arg3 preferredNumberOfTracks:(unsigned long long)arg4;
- (id)providePlaylistExtenderWithDataLoader:(id)arg1;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

