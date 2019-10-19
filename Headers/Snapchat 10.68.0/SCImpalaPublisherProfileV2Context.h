//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCImpalaPublicProfileServiceConfig;
@protocol SCCBlizzardLogging, SCCStoryPlayerPlaying, SCCSubscriptionStore, SCComposerFoundationApplicationProtocol, SCComposerNetworkingClientProtocol, SCImpalaCommerceActionHandling, SCImpalaPresentationControlling, SCImpalaUrlActionHandling, SCImpalaWatchedStateCaching;

@interface SCImpalaPublisherProfileV2Context : SCComposerMarshallableObject
{
    id <SCComposerFoundationApplicationProtocol> _application;
    id <SCCBlizzardLogging> _blizzardLogger;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCStoryPlayerPlaying> _player;
    id <SCImpalaPresentationControlling> _presentationController;
    SCImpalaPublicProfileServiceConfig *_serviceConfig;
    id <SCCSubscriptionStore> _subscriptionStore;
    id <SCImpalaUrlActionHandling> _urlActionHandler;
    id <SCImpalaWatchedStateCaching> _watchedStateCache;
    id <SCImpalaCommerceActionHandling> _commerceActionHandler;
}

@property(retain, nonatomic) id <SCImpalaCommerceActionHandling> commerceActionHandler; // @synthesize commerceActionHandler=_commerceActionHandler;
@property(retain, nonatomic) id <SCImpalaWatchedStateCaching> watchedStateCache; // @synthesize watchedStateCache=_watchedStateCache;
@property(retain, nonatomic) id <SCImpalaUrlActionHandling> urlActionHandler; // @synthesize urlActionHandler=_urlActionHandler;
@property(retain, nonatomic) id <SCCSubscriptionStore> subscriptionStore; // @synthesize subscriptionStore=_subscriptionStore;
@property(retain, nonatomic) SCImpalaPublicProfileServiceConfig *serviceConfig; // @synthesize serviceConfig=_serviceConfig;
@property(retain, nonatomic) id <SCImpalaPresentationControlling> presentationController; // @synthesize presentationController=_presentationController;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
@property(retain, nonatomic) id <SCCBlizzardLogging> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
@property(retain, nonatomic) id <SCComposerFoundationApplicationProtocol> application; // @synthesize application=_application;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithApplication:(id)arg1 blizzardLogger:(id)arg2 networkingClient:(id)arg3 player:(id)arg4 presentationController:(id)arg5 serviceConfig:(id)arg6 subscriptionStore:(id)arg7 urlActionHandler:(id)arg8 watchedStateCache:(id)arg9;
- (id)initWithApplication:(id)arg1 blizzardLogger:(id)arg2 networkingClient:(id)arg3 player:(id)arg4 presentationController:(id)arg5 serviceConfig:(id)arg6 subscriptionStore:(id)arg7 urlActionHandler:(id)arg8 watchedStateCache:(id)arg9 commerceActionHandler:(id)arg10;

@end

