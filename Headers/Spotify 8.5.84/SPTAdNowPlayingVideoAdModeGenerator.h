//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAdPlayerObserver-Protocol.h"
#import "SPTAdsBaseRegistryObserver-Protocol.h"

@class NSString, SPTAdNowPlayingVideoShowStateManager, SPTAdPlayerObservable;
@protocol SPTAdsBaseRegistry, SPTNowPlayingMode, SPTNowPlayingModesRegistry;

@interface SPTAdNowPlayingVideoAdModeGenerator : NSObject <SPTAdPlayerObserver, SPTAdsBaseRegistryObserver>
{
    id <SPTNowPlayingMode> _npvAdMode;
    SPTAdNowPlayingVideoShowStateManager *_showStateManager;
    SPTAdPlayerObservable *_playerObserver;
    id <SPTAdsBaseRegistry> _adRegistry;
    id <SPTNowPlayingModesRegistry> _npvModeRegistry;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SPTNowPlayingModesRegistry> npvModeRegistry; // @synthesize npvModeRegistry=_npvModeRegistry;
@property(retain, nonatomic) id <SPTAdsBaseRegistry> adRegistry; // @synthesize adRegistry=_adRegistry;
@property(retain, nonatomic) SPTAdPlayerObservable *playerObserver; // @synthesize playerObserver=_playerObserver;
@property(retain, nonatomic) SPTAdNowPlayingVideoShowStateManager *showStateManager; // @synthesize showStateManager=_showStateManager;
@property(readonly, nonatomic) id <SPTNowPlayingMode> npvAdMode; // @synthesize npvAdMode=_npvAdMode;
- (void)adPlayerStateDidChangeToTrack:(id)arg1;
- (id)contentDecorationController;
- (id)infoController;
- (id)durationController;
- (id)navigationController;
- (void)updateVisibilityDelegate;
- (void)updateAdModeWithAdEntity:(id)arg1;
- (void)adRegistry:(id)arg1 didProcessAdEntity:(id)arg2 event:(long long)arg3;
- (void)dealloc;
- (id)initWithAdManager:(id)arg1 adRegistry:(id)arg2 playerObserver:(id)arg3 theme:(id)arg4 adNowPlayingManager:(id)arg5 modeRegistry:(id)arg6 featureChecker:(id)arg7 featureProperties:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

