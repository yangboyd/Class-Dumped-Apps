//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPlayerObserver-Protocol.h"

@class NSArray, NSAttributedString, NSIndexPath, NSString, NSURL, SPTChart, SPTPlayerContext;
@protocol SPTChartViewModelDelegate, SPTChartViewModelPlayerDelegate, SPTExplicitContentAccessManager, SPTOfflineModeState, SPTPlayer;

@interface SPTChartViewModel : NSObject <SPTPlayerObserver>
{
    _Bool _currentChartBeingPlayed;
    _Bool _usingNewFormatsUI;
    _Bool _playlistHasLoaded;
    NSIndexPath *_indexPathForTrackCurrentlyPlaying;
    NSURL *_URIForTrackCurrentlyPlayed;
    id <SPTChartViewModelDelegate> _delegate;
    id <SPTChartViewModelPlayerDelegate> _playerDelegate;
    SPTChart *_chart;
    id <SPTOfflineModeState> _offlineModeState;
    id <SPTExplicitContentAccessManager> _explicitContentAccessManager;
    NSURL *_currentPlayerStateOriginURL;
    id <SPTPlayer> _player;
    SPTPlayerContext *_playerContext;
    NSArray *_playerTracks;
}

@property(nonatomic) _Bool playlistHasLoaded; // @synthesize playlistHasLoaded=_playlistHasLoaded;
@property(retain, nonatomic) NSArray *playerTracks; // @synthesize playerTracks=_playerTracks;
@property(retain, nonatomic) SPTPlayerContext *playerContext; // @synthesize playerContext=_playerContext;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) NSURL *currentPlayerStateOriginURL; // @synthesize currentPlayerStateOriginURL=_currentPlayerStateOriginURL;
@property(retain, nonatomic) id <SPTExplicitContentAccessManager> explicitContentAccessManager; // @synthesize explicitContentAccessManager=_explicitContentAccessManager;
@property(retain, nonatomic) id <SPTOfflineModeState> offlineModeState; // @synthesize offlineModeState=_offlineModeState;
@property(readonly, nonatomic, getter=isUsingNewFormatsUI) _Bool usingNewFormatsUI; // @synthesize usingNewFormatsUI=_usingNewFormatsUI;
@property(retain, nonatomic) SPTChart *chart; // @synthesize chart=_chart;
@property(nonatomic) __weak id <SPTChartViewModelPlayerDelegate> playerDelegate; // @synthesize playerDelegate=_playerDelegate;
@property(nonatomic, getter=isCurrentChartBeingPlayed) _Bool currentChartBeingPlayed; // @synthesize currentChartBeingPlayed=_currentChartBeingPlayed;
@property(nonatomic) __weak id <SPTChartViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *URIForTrackCurrentlyPlayed; // @synthesize URIForTrackCurrentlyPlayed=_URIForTrackCurrentlyPlayed;
@property(retain, nonatomic) NSIndexPath *indexPathForTrackCurrentlyPlaying; // @synthesize indexPathForTrackCurrentlyPlaying=_indexPathForTrackCurrentlyPlaying;
- (void).cxx_destruct;
- (id)contextMenuActionsForCurrentViewWithFactory:(id)arg1 logContext:(id)arg2;
- (void)player:(id)arg1 stateDidChange:(id)arg2;
- (void)playlistDidLoad;
- (id)indexPathForTrackWithURL:(id)arg1;
- (id)chartEntryForIndexPath:(id)arg1;
- (id)rankTitleForIndexPath:(id)arg1;
- (id)trackContextMenuSubtitleForIndexPath:(id)arg1;
- (id)defaultPlaylistNameForEntryAtIndexPath:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfTracksInChart;
@property(readonly, nonatomic) NSArray *chartEntryURIs;
@property(readonly, nonatomic) NSURL *chartURI;
@property(readonly, nonatomic) NSURL *chartImageURL;
@property(readonly, nonatomic) NSString *chartDescription;
@property(readonly, nonatomic) NSString *chartDescriptionSubtitle;
@property(readonly, nonatomic) NSAttributedString *metadataAttributedText;
@property(readonly, nonatomic) NSString *metadataText;
@property(readonly, nonatomic) NSString *chartTitle;
- (unsigned long long)chartEntryStatusForIndex:(unsigned long long)arg1;
- (_Bool)isPlaybackAvailableForChartEntryAtIndexPath:(id)arg1;
- (unsigned long long)chartEntryPositionForIndex:(unsigned long long)arg1;
- (_Bool)isTrackExplicitContentPlaybackRestrictedAtIndex:(unsigned long long)arg1;
- (_Bool)isTrackExplicitAtIndex:(long long)arg1;
- (id)urlForTrackAtIndex:(long long)arg1;
- (id)subtitleForTrackAtIndex:(long long)arg1;
- (id)titleForTrackAtIndex:(long long)arg1;
@property(readonly, nonatomic, getter=isUserOffline) _Bool userOffline;
- (void)playTrackAtIndexPath:(id)arg1;
- (void)playContextShuffled:(_Bool)arg1 didUserTapTrackRow:(_Bool)arg2;
- (id)initWithPlayer:(id)arg1 offlineModeState:(id)arg2 explicitContentAccessManager:(id)arg3 URL:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

