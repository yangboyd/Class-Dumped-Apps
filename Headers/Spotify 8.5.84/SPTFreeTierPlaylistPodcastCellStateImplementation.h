//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTPodcastEpisodeCellState-Protocol.h"

@class NSString;
@protocol SPTFreeTierPlaylistTrackViewModel;

@interface SPTFreeTierPlaylistPodcastCellStateImplementation : NSObject <SPTPodcastEpisodeCellState>
{
    _Bool _allowEpisodeDownload;
    _Bool _isCollaborative;
    _Bool _allowSaveEpisode;
    id <SPTFreeTierPlaylistTrackViewModel> _trackViewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool allowSaveEpisode; // @synthesize allowSaveEpisode=_allowSaveEpisode;
@property(readonly, nonatomic) _Bool isCollaborative; // @synthesize isCollaborative=_isCollaborative;
@property(readonly, nonatomic) _Bool allowEpisodeDownload; // @synthesize allowEpisodeDownload=_allowEpisodeDownload;
@property(readonly, nonatomic) id <SPTFreeTierPlaylistTrackViewModel> trackViewModel; // @synthesize trackViewModel=_trackViewModel;
- (id)addedByName;
- (id)addedByThumbnailURL;
- (id)musicAndTalkArtists;
- (_Bool)isEpisodeMusicAndTalk;
- (_Bool)isEpisodeUnfinished;
- (_Bool)isEpisodePlaying;
- (_Bool)isEpisodeActive;
- (_Bool)isInYourEpisodes;
- (_Bool)canBeSaved;
- (_Bool)canBeDownloaded;
- (_Bool)canBeMarkedAsPlayed;
- (_Bool)isEpisodePlayable;
- (_Bool)isEpisodeExplicit;
- (id)podcastImageURL;
- (_Bool)supportsGranularProgressUpdates;
- (double)syncProgress;
- (long long)offlineSyncStatus;
- (double)listeningProgress;
- (id)longDescription;
- (id)currentStatusWithFormatter:(id)arg1;
- (id)podcastSubtitle;
- (id)podcastTitle;
- (id)initWithPlaylistTrackViewModel:(id)arg1 allowEpisodeDownload:(_Bool)arg2 isCollaborative:(_Bool)arg3 allowSaveEpisode:(_Bool)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

