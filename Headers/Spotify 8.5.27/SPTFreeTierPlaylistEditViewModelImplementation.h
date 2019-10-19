//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTFreeTierPlaylistEditViewModel-Protocol.h"
#import "SPTFreeTierPlaylistModelObserver-Protocol.h"

@class NSMutableArray, NSString, NSURL;
@protocol SPTCollectionPlatformConfiguration, SPTFreeTierPlaylistEditViewModelDelegate, SPTFreeTierPlaylistModel, SPTFreeTierPlaylistTestManager, SPTPodcastTestManager, SPTVISREFFlagsService;

@interface SPTFreeTierPlaylistEditViewModelImplementation : NSObject <SPTFreeTierPlaylistEditViewModel, SPTFreeTierPlaylistModelObserver>
{
    _Bool _renameEnabled;
    _Bool _hasBeenSaved;
    id <SPTFreeTierPlaylistEditViewModelDelegate> _delegate;
    NSString *_originalPlaylistName;
    NSString *_editedPlaylistName;
    NSString *_originalDescription;
    NSString *_editedDescription;
    id <SPTFreeTierPlaylistModel> _playlistModel;
    id <SPTCollectionPlatformConfiguration> _collectionConfiguration;
    id <SPTFreeTierPlaylistTestManager> _testManager;
    NSMutableArray *_tracks;
    NSURL *_playlistImageURL;
    NSMutableArray *_trackReorders;
    NSMutableArray *_trackDeletions;
    id <SPTVISREFFlagsService> _visualRefreshService;
    id <SPTPodcastTestManager> _podcastTestManager;
}

@property(nonatomic) __weak id <SPTPodcastTestManager> podcastTestManager; // @synthesize podcastTestManager=_podcastTestManager;
@property(nonatomic) __weak id <SPTVISREFFlagsService> visualRefreshService; // @synthesize visualRefreshService=_visualRefreshService;
@property(nonatomic) _Bool hasBeenSaved; // @synthesize hasBeenSaved=_hasBeenSaved;
@property(retain, nonatomic) NSMutableArray *trackDeletions; // @synthesize trackDeletions=_trackDeletions;
@property(retain, nonatomic) NSMutableArray *trackReorders; // @synthesize trackReorders=_trackReorders;
@property(nonatomic) _Bool renameEnabled; // @synthesize renameEnabled=_renameEnabled;
@property(retain, nonatomic) NSURL *playlistImageURL; // @synthesize playlistImageURL=_playlistImageURL;
@property(retain, nonatomic) NSMutableArray *tracks; // @synthesize tracks=_tracks;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic) id <SPTCollectionPlatformConfiguration> collectionConfiguration; // @synthesize collectionConfiguration=_collectionConfiguration;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistModel> playlistModel; // @synthesize playlistModel=_playlistModel;
@property(copy, nonatomic) NSString *editedDescription; // @synthesize editedDescription=_editedDescription;
@property(copy, nonatomic) NSString *originalDescription; // @synthesize originalDescription=_originalDescription;
@property(copy, nonatomic) NSString *editedPlaylistName; // @synthesize editedPlaylistName=_editedPlaylistName;
@property(copy, nonatomic) NSString *originalPlaylistName; // @synthesize originalPlaylistName=_originalPlaylistName;
@property(nonatomic) __weak id <SPTFreeTierPlaylistEditViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)freeTierPlaylistModel:(id)arg1 initialFollowCount:(unsigned long long)arg2;
- (void)freeTierPlaylistModel:(id)arg1 error:(id)arg2;
- (void)freeTierPlaylistModel:(id)arg1 playlistModelEntityDidChange:(id)arg2;
- (void)saveMovesWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveWithCompletion:(CDUnknownBlockType)arg1;
- (void)moveTrackAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)removeTrackAtIndexPath:(id)arg1;
- (void)handleError:(id)arg1 withContext:(id)arg2;
- (void)viewDidLoad;
- (id)trackViewModelAtIndexPath:(id)arg1;
@property(readonly, nonatomic, getter=isAddToPlaylistForAudioEpisodesEnabled) _Bool addToPlaylistForAudioEpisodesEnabled;
@property(readonly, nonatomic) _Bool editAnnotationEnabled;
@property(readonly, nonatomic) _Bool reorderEnabled;
@property(readonly, nonatomic) unsigned long long countOfTracks;
@property(readonly, nonatomic) NSURL *playlistURL;
- (id)initWithPlaylistModel:(id)arg1 collectionConfiguration:(id)arg2 testManager:(id)arg3 visualRefreshService:(id)arg4 podcastTestManager:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

