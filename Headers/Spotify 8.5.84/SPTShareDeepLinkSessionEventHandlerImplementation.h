//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"
#import "SPTShareDeepLinkApplicationEventHandlerDelegate-Protocol.h"

@class NSString, SPTShareFeatureProperties;
@protocol SPTPlayer, SPTShareEventSenderLogger;

@interface SPTShareDeepLinkSessionEventHandlerImplementation : NSObject <SPTPlayerObserver, SPTShareDeepLinkApplicationEventHandlerDelegate>
{
    id <SPTShareEventSenderLogger> _eventSenderLogger;
    id <SPTPlayer> _player;
    SPTShareFeatureProperties *_featureProperties;
    NSString *_sessionIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(readonly, nonatomic) __weak SPTShareFeatureProperties *featureProperties; // @synthesize featureProperties=_featureProperties;
@property(readonly, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(readonly, nonatomic) id <SPTShareEventSenderLogger> eventSenderLogger; // @synthesize eventSenderLogger=_eventSenderLogger;
- (_Bool)isPlayingSomethingNewGivenPlayerState:(id)arg1 oldPlayerState:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2 fromState:(id)arg3;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)didUpdateSessionIdentifer:(id)arg1;
- (void)setupObservers;
- (void)dealloc;
- (id)initWithShareEventSenderLogger:(id)arg1 player:(id)arg2 featureProperties:(id)arg3 lastSessionIdentifier:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

