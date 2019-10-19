//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTCommutePlaylistsObserverProtocol.h"
#import "YTCommuteShelfViewModelDelegate.h"
#import "YTOfflinePlaylistControllerObserver.h"

@class GIMMe, NSString, YTArraySectionViewModel, YTCommuteShelfViewModel, YTOfflinePlaylistController;

@interface YTCommutePlaylistsObserver : NSObject <YTCommutePlaylistsObserverProtocol, YTOfflinePlaylistControllerObserver, YTCommuteShelfViewModelDelegate>
{
    YTArraySectionViewModel *_viewModel;
    YTOfflinePlaylistController *_playlistController;
    YTCommuteShelfViewModel *_commuteShelfViewModel;
    _Bool _userNotInterested;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)offlinePlayablePlaylistsFromPlaylists:(id)arg1;
- (void)updateViewModelWithPlaylists:(id)arg1;
- (void)didSaveMetadataWithPlaylistID:(id)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(id)arg1;
- (void)didDeleteAllOfflinePlaylists;
- (void)refreshViewModel;
- (void)didChangeUserNotInterested:(_Bool)arg1;
@property(readonly, nonatomic) YTCommuteShelfViewModel *commuteShelfViewModel;
- (id)initWithCommuteShelfRenderer:(id)arg1 viewModel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

