//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTExplicitContentEnabledStateObserver-Protocol.h"
#import "SPTNowPlayingEntityDecorationControllerObserver-Protocol.h"
#import "SPTPlayerObserver-Protocol.h"
#import "SPTPlayerQueueObserver-Protocol.h"
#import "SPTProductStateObserver-Protocol.h"
#import "SPTQueueViewModel-Protocol.h"
#import "_TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_-Protocol.h"

@class NSString, SPTNowPlayingEntityDecorationController, SPTPlayerQueue, SPTQueueViewModelDataSource;
@protocol OS_dispatch_queue, OS_dispatch_source, SPTExplicitContentAccessManager, SPTLogCenter, SPTPlayer, SPTProductState, SPTQueuePlaybackDelegateRegistry, SPTQueuePlaybackRestrictionHandler, SPTQueueViewModelDelegate, _TtP22AgeVerificationFeature26SPTAgeVerificationProvider_;

@interface SPTQueueViewModelImplementation : NSObject <SPTPlayerObserver, SPTPlayerQueueObserver, SPTProductStateObserver, SPTNowPlayingEntityDecorationControllerObserver, SPTExplicitContentEnabledStateObserver, _TtP22AgeVerificationFeature43SPTCanPlayAgeRestrictedContentStateObserver_, SPTQueueViewModel>
{
    id <SPTPlayer> _player;
    id <SPTProductState> _productState;
    id <SPTQueuePlaybackDelegateRegistry> _playbackDelegateRegistry;
    _Bool _updatesEnabled;
    SPTNowPlayingEntityDecorationController *_entityDecorationController;
    _Bool _disallowInsertingIntoNextTracks;
    _Bool _disallowInsertingIntoContextTracks;
    _Bool _disallowReorderingInNextTracks;
    _Bool _disallowReorderingInContextTracks;
    _Bool _disallowRemovingFromNextTracks;
    _Bool _disallowRemovingFromContextTracks;
    _Bool _disallowSetQueue;
    _Bool _inhibitUpdates;
    _Bool _shouldShowClearButton;
    id <SPTQueueViewModelDelegate> _delegate;
    NSObject<OS_dispatch_source> *_timer;
    NSObject<OS_dispatch_queue> *_queueFetchQueue;
    SPTQueueViewModelDataSource *_dataSource;
    SPTPlayerQueue *_queue;
    id <SPTLogCenter> _logCenter;
    unsigned long long _addToUpNextBehavior;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> _ageVerificationProvider;
    id <SPTQueuePlaybackRestrictionHandler> _playbackRestrictionHandler;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SPTQueuePlaybackRestrictionHandler> playbackRestrictionHandler; // @synthesize playbackRestrictionHandler=_playbackRestrictionHandler;
@property(readonly, nonatomic) id <_TtP22AgeVerificationFeature26SPTAgeVerificationProvider_> ageVerificationProvider; // @synthesize ageVerificationProvider=_ageVerificationProvider;
@property(readonly, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(nonatomic) _Bool shouldShowClearButton; // @synthesize shouldShowClearButton=_shouldShowClearButton;
@property(nonatomic) unsigned long long addToUpNextBehavior; // @synthesize addToUpNextBehavior=_addToUpNextBehavior;
@property(nonatomic) __weak id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
@property(nonatomic) _Bool disallowReorderingInContextTracks; // @synthesize disallowReorderingInContextTracks=_disallowReorderingInContextTracks;
@property(nonatomic) _Bool inhibitUpdates; // @synthesize inhibitUpdates=_inhibitUpdates;
@property(retain, nonatomic) SPTPlayerQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SPTQueueViewModelDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queueFetchQueue; // @synthesize queueFetchQueue=_queueFetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(nonatomic) __weak id <SPTQueueViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)productState:(id)arg1 stateDidChange:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)entityDecorationControllerDidUpdate:(id)arg1;
- (void)performUpdates:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)didChangeCanPlayAgeRestrictedContent:(_Bool)arg1;
- (void)explicitContentEnabledStateDidChange:(_Bool)arg1;
- (void)notifyDelegateDebounced;
- (id)contextURI;
- (id)unshuffleQueueTracks:(id)arg1;
- (id)shuffleQueueTracks:(id)arg1;
- (void)updatePlayerQueueWithDataSource:(id)arg1;
- (id)playerTracksForDataSource:(id)arg1;
- (void)player:(id)arg1 queueDidChange:(id)arg2;
- (void)player:(id)arg1 updateWithChangeQueue:(id)arg2;
- (id)playFutureTrackAtIndex:(unsigned long long)arg1;
- (id)playUpNextTrackAtIndex:(unsigned long long)arg1;
- (void)playCurrentTrack;
- (void)disableUpdates;
- (void)enableUpdates;
- (id)addFutureTracksToUpNext:(id)arg1;
- (id)removeAllTracksForSection:(unsigned long long)arg1;
- (id)removeTracks:(id)arg1;
- (id)moveTrackAtIndex:(unsigned long long)arg1 inSection:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 toSection:(unsigned long long)arg4;
- (_Bool)shouldShowClearButtonForSection:(unsigned long long)arg1;
- (id)headerTitleForSection:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1 productState:(id)arg2 playbackDelegateRegistry:(id)arg3 entityDecorationController:(id)arg4 logCenter:(id)arg5 addToUpNextBehavior:(unsigned long long)arg6 explicitContentAccessManager:(id)arg7 ageVerificationProvider:(id)arg8 playbackRestrictionHandler:(id)arg9 featureProperties:(id)arg10;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

