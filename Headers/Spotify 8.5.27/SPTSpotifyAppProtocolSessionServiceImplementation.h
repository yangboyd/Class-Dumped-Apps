//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTService-Protocol.h"

@class NSString, SPTAllocationContext, SPTSpotifyAppProtocolServiceImplementation;
@protocol GaiaFeature, SPTExternalIntegrationPlatformService, SPTSessionService;

@interface SPTSpotifyAppProtocolSessionServiceImplementation : NSObject <SPTService>
{
    SPTSpotifyAppProtocolServiceImplementation *_appProtocolService;
    id <SPTExternalIntegrationPlatformService> _externalIntegrationPlatformService;
    id <GaiaFeature> _gaiaFeature;
    id <SPTSessionService> _sessionService;
}

+ (id)serviceIdentifier;
@property(readonly, nonatomic) __weak id <SPTSessionService> sessionService; // @synthesize sessionService=_sessionService;
@property(readonly, nonatomic) __weak id <GaiaFeature> gaiaFeature; // @synthesize gaiaFeature=_gaiaFeature;
@property(readonly, nonatomic) __weak id <SPTExternalIntegrationPlatformService> externalIntegrationPlatformService; // @synthesize externalIntegrationPlatformService=_externalIntegrationPlatformService;
@property(readonly, nonatomic) __weak SPTSpotifyAppProtocolServiceImplementation *appProtocolService; // @synthesize appProtocolService=_appProtocolService;
- (void).cxx_destruct;
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

