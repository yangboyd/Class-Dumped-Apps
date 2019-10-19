//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTAssistedCurationCardModelActionsDelegate-Protocol.h"
#import "SPTAssistedCurationCardsProviderDelegate-Protocol.h"
#import "SPTAssistedCurationModel-Protocol.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSURL;
@protocol SPTAssistedCurationAddTrackHandler, SPTAssistedCurationModelDelegate, SPTOfflineModeState, SPTPlaylistModel, SPTPlaylistPlatformPlaylistDataLoader;

@interface SPTAssistedCurationModelImplementation : NSObject <SPTAssistedCurationCardModelActionsDelegate, SPTAssistedCurationModel, SPTAssistedCurationCardsProviderDelegate>
{
    _Bool _loaded;
    NSURL *_playlistURI;
    id <SPTAssistedCurationModelDelegate> _delegate;
    NSString *_playlistName;
    id <SPTPlaylistModel> _playlistModel;
    id <SPTPlaylistPlatformPlaylistDataLoader> _playlistDataLoader;
    NSArray *_cardProviders;
    NSMutableSet *_providersWaitingSet;
    NSMutableArray *_cards;
    id <SPTAssistedCurationAddTrackHandler> _addTrackHandler;
    id <SPTOfflineModeState> _offlineModeState;
}

@property(readonly, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic) id <SPTAssistedCurationAddTrackHandler> addTrackHandler; // @synthesize addTrackHandler=_addTrackHandler;
@property(retain, nonatomic) NSMutableArray *cards; // @synthesize cards=_cards;
@property(retain, nonatomic) NSMutableSet *providersWaitingSet; // @synthesize providersWaitingSet=_providersWaitingSet;
@property(retain, nonatomic) NSArray *cardProviders; // @synthesize cardProviders=_cardProviders;
@property(retain, nonatomic) id <SPTPlaylistPlatformPlaylistDataLoader> playlistDataLoader; // @synthesize playlistDataLoader=_playlistDataLoader;
@property(retain, nonatomic) id <SPTPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(nonatomic, getter=isLoaded) _Bool loaded; // @synthesize loaded=_loaded;
@property(copy, nonatomic) NSString *playlistName; // @synthesize playlistName=_playlistName;
@property(nonatomic) __weak id <SPTAssistedCurationModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURL *playlistURI; // @synthesize playlistURI=_playlistURI;
- (void).cxx_destruct;
- (void)assistedCurationCardModelActions:(id)arg1 addTrack:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cardProvider:(id)arg1 filterTracks:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cardProvider:(id)arg1 newCards:(id)arg2;
- (void)noCardsAvailableFromCardProvider:(id)arg1;
- (void)removeEmptyCard:(id)arg1;
- (void)removeProviderFromWaitingSet:(id)arg1;
- (_Bool)allProvidersLoaded;
- (void)fetchPlaylistDataWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long numberOfCards;
- (void)load;
- (id)cardAtIndex:(unsigned long long)arg1;
- (void)unpackNotification:(id)arg1 then:(CDUnknownBlockType)arg2;
- (void)trackWasAddedNotToPlaylistBecauseError:(id)arg1;
- (void)trackWasAddedNotToPlaylistBecauseDuplicated:(id)arg1;
- (void)trackWasAddedToPlaylist:(id)arg1;
- (id)initWithPlaylistURL:(id)arg1 playlistModel:(id)arg2 playlistDataLoader:(id)arg3 cardProviders:(id)arg4 addTrackHandler:(id)arg5 notificationCenter:(id)arg6 offlineModeState:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

