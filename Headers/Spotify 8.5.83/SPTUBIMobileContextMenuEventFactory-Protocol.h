//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol SPTUBIEventAbsoluteLocation, SPTUBIEventLocation, SPTUBIMobileContextMenu_AddAppShortcutItemEventFactory, SPTUBIMobileContextMenu_AddItemToQueueEventFactory, SPTUBIMobileContextMenu_AddItemsToQueueEventFactory, SPTUBIMobileContextMenu_AddReportItemEventFactory, SPTUBIMobileContextMenu_AddShowLyricsItemEventFactory, SPTUBIMobileContextMenu_AddToPlaylistItemEventFactory, SPTUBIMobileContextMenu_AddVideoSubtitlesItemEventFactory, SPTUBIMobileContextMenu_BrowseAlbumItemEventFactory, SPTUBIMobileContextMenu_BrowseArtistItemEventFactory, SPTUBIMobileContextMenu_BrowseArtistsItemEventFactory, SPTUBIMobileContextMenu_BrowseEpisodeItemEventFactory, SPTUBIMobileContextMenu_BrowsePlaylistItemEventFactory, SPTUBIMobileContextMenu_BrowsePodcastItemEventFactory, SPTUBIMobileContextMenu_BrowseQueueItemEventFactory, SPTUBIMobileContextMenu_CanvasChangePlaybackSettingsItemEventFactory, SPTUBIMobileContextMenu_CanvasEnhancedPlaylistItemEventFactory, SPTUBIMobileContextMenu_CarThingItemEventFactory, SPTUBIMobileContextMenu_CreateRadioItemEventFactory, SPTUBIMobileContextMenu_DeletePlaylistItemEventFactory, SPTUBIMobileContextMenu_EditPlaylistItemEventFactory, SPTUBIMobileContextMenu_FindFriendsItemEventFactory, SPTUBIMobileContextMenu_FreeTierRenamePlaylistItemEventFactory, SPTUBIMobileContextMenu_HideSongItemEventFactory, SPTUBIMobileContextMenu_LessLikeThisEventFactory, SPTUBIMobileContextMenu_MoreLikeThisEventFactory, SPTUBIMobileContextMenu_OpenSleepTimerItemEventFactory, SPTUBIMobileContextMenu_PodcastMixDislikeShowItemEventFactory, SPTUBIMobileContextMenu_PodcastMixManageEpisodeItemEventFactory, SPTUBIMobileContextMenu_PromoDisclosureEventFactory, SPTUBIMobileContextMenu_QueueTrackPlayLaterItemEventFactory, SPTUBIMobileContextMenu_QueueTrackPlayNextItemEventFactory, SPTUBIMobileContextMenu_ReminderActionItemEventFactory, SPTUBIMobileContextMenu_RemoveFromPlaylistItemEventFactory, SPTUBIMobileContextMenu_RemoveSleepTimerItemEventFactory, SPTUBIMobileContextMenu_RenamePlaylistItemEventFactory, SPTUBIMobileContextMenu_ReportAbuseItemEventFactory, SPTUBIMobileContextMenu_SetPlaybackSpeedItemEventFactory, SPTUBIMobileContextMenu_SetSleepTimerEndOfTrackItemEventFactory, SPTUBIMobileContextMenu_SetSleepTimerInMinutesItemEventFactory, SPTUBIMobileContextMenu_ShareItemEventFactory, SPTUBIMobileContextMenu_ShowCreditsItemEventFactory, SPTUBIMobileContextMenu_ShowLyricsItemEventFactory, SPTUBIMobileContextMenu_ShowSubtitlesItemEventFactory, SPTUBIMobileContextMenu_ToggleDownloadItemEventFactory, SPTUBIMobileContextMenu_ToggleExplicitContentItemEventFactory, SPTUBIMobileContextMenu_ToggleFollowItemEventFactory, SPTUBIMobileContextMenu_ToggleHideArtistItemEventFactory, SPTUBIMobileContextMenu_ToggleHideSongItemEventFactory, SPTUBIMobileContextMenu_ToggleLikeItemEventFactory, SPTUBIMobileContextMenu_ToggleMarkAsPlayedItemEventFactory, SPTUBIMobileContextMenu_TogglePlaylistCollaborativeItemEventFactory, SPTUBIMobileContextMenu_TogglePlaylistPublicEventFactory, SPTUBIMobileContextMenu_ToggleRepeatModeItemEventFactory, SPTUBIMobileContextMenu_ToggleShuffleModeItemEventFactory, SPTUBIMobileContextMenu_WatchUiDownloadActionItemEventFactory;

@protocol SPTUBIMobileContextMenuEventFactory <NSObject>
- (id <SPTUBIMobileContextMenu_PromoDisclosureEventFactory>)promoDisclosureFactory;
- (id <SPTUBIMobileContextMenu_LessLikeThisEventFactory>)lessLikeThisFactory;
- (id <SPTUBIMobileContextMenu_MoreLikeThisEventFactory>)moreLikeThisFactory;
- (id <SPTUBIMobileContextMenu_ShowSubtitlesItemEventFactory>)showSubtitlesItemFactory;
- (id <SPTUBIMobileContextMenu_ShowLyricsItemEventFactory>)showLyricsItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleHideArtistItemEventFactory>)toggleHideArtistItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleExplicitContentItemEventFactory>)toggleExplicitContentItemFactory;
- (id <SPTUBIMobileContextMenu_QueueTrackPlayLaterItemEventFactory>)queueTrackPlayLaterItemFactory;
- (id <SPTUBIMobileContextMenu_QueueTrackPlayNextItemEventFactory>)queueTrackPlayNextItemFactory;
- (id <SPTUBIMobileContextMenu_PodcastMixDislikeShowItemEventFactory>)podcastMixDislikeShowItemFactory;
- (id <SPTUBIMobileContextMenu_PodcastMixManageEpisodeItemEventFactory>)podcastMixManageEpisodeItemFactory;
- (id <SPTUBIMobileContextMenu_CanvasEnhancedPlaylistItemEventFactory>)canvasEnhancedPlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_WatchUiDownloadActionItemEventFactory>)watchUiDownloadActionItemFactory;
- (id <SPTUBIMobileContextMenu_AddReportItemEventFactory>)addReportItemFactory;
- (id <SPTUBIMobileContextMenu_CanvasChangePlaybackSettingsItemEventFactory>)canvasChangePlaybackSettingsItemFactory;
- (id <SPTUBIMobileContextMenu_AddVideoSubtitlesItemEventFactory>)addVideoSubtitlesItemFactory;
- (id <SPTUBIMobileContextMenu_CarThingItemEventFactory>)carThingItemFactory;
- (id <SPTUBIMobileContextMenu_ReminderActionItemEventFactory>)reminderActionItemFactory;
- (id <SPTUBIMobileContextMenu_AddShowLyricsItemEventFactory>)addShowLyricsItemFactory;
- (id <SPTUBIMobileContextMenu_FreeTierRenamePlaylistItemEventFactory>)freeTierRenamePlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_RenamePlaylistItemEventFactory>)renamePlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleShuffleModeItemEventFactory>)toggleShuffleModeItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleRepeatModeItemEventFactory>)toggleRepeatModeItemFactory;
- (id <SPTUBIMobileContextMenu_SetPlaybackSpeedItemEventFactory>)setPlaybackSpeedItemFactory;
- (id <SPTUBIMobileContextMenu_RemoveSleepTimerItemEventFactory>)removeSleepTimerItemFactory;
- (id <SPTUBIMobileContextMenu_SetSleepTimerEndOfTrackItemEventFactory>)setSleepTimerEndOfTrackItemFactory;
- (id <SPTUBIMobileContextMenu_SetSleepTimerInMinutesItemEventFactory>)setSleepTimerInMinutesItemFactory;
- (id <SPTUBIMobileContextMenu_OpenSleepTimerItemEventFactory>)openSleepTimerItemFactory;
- (id <SPTUBIMobileContextMenu_BrowseArtistsItemEventFactory>)browseArtistsItemFactory;
- (id <SPTUBIMobileContextMenu_FindFriendsItemEventFactory>)findFriendsItemFactory;
- (id <SPTUBIMobileContextMenu_TogglePlaylistPublicEventFactory>)togglePlaylistPublicFactory;
- (id <SPTUBIMobileContextMenu_TogglePlaylistCollaborativeItemEventFactory>)togglePlaylistCollaborativeItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleFollowItemEventFactory>)toggleFollowItemFactory;
- (id <SPTUBIMobileContextMenu_CreateRadioItemEventFactory>)createRadioItemFactory;
- (id <SPTUBIMobileContextMenu_ShowCreditsItemEventFactory>)showCreditsItemFactory;
- (id <SPTUBIMobileContextMenu_ShareItemEventFactory>)shareItemFactory;
- (id <SPTUBIMobileContextMenu_ReportAbuseItemEventFactory>)reportAbuseItemFactory;
- (id <SPTUBIMobileContextMenu_DeletePlaylistItemEventFactory>)deletePlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_RemoveFromPlaylistItemEventFactory>)removeFromPlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_AddItemsToQueueEventFactory>)addItemsToQueueFactory;
- (id <SPTUBIMobileContextMenu_AddItemToQueueEventFactory>)addItemToQueueFactory;
- (id <SPTUBIMobileContextMenu_ToggleLikeItemEventFactory>)toggleLikeItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleHideSongItemEventFactory>)toggleHideSongItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleDownloadItemEventFactory>)toggleDownloadItemFactory;
- (id <SPTUBIMobileContextMenu_ToggleMarkAsPlayedItemEventFactory>)toggleMarkAsPlayedItemFactory;
- (id <SPTUBIMobileContextMenu_BrowseQueueItemEventFactory>)browseQueueItemFactory;
- (id <SPTUBIMobileContextMenu_EditPlaylistItemEventFactory>)editPlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_BrowsePodcastItemEventFactory>)browsePodcastItemFactory;
- (id <SPTUBIMobileContextMenu_BrowsePlaylistItemEventFactory>)browsePlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_BrowseEpisodeItemEventFactory>)browseEpisodeItemFactory;
- (id <SPTUBIMobileContextMenu_BrowseArtistItemEventFactory>)browseArtistItemFactory;
- (id <SPTUBIMobileContextMenu_BrowseAlbumItemEventFactory>)browseAlbumItemFactory;
- (id <SPTUBIMobileContextMenu_HideSongItemEventFactory>)hideSongItemFactory;
- (id <SPTUBIMobileContextMenu_AddToPlaylistItemEventFactory>)addToPlaylistItemFactory;
- (id <SPTUBIMobileContextMenu_AddAppShortcutItemEventFactory>)addAppShortcutItemFactory;
- (id <SPTUBIEventAbsoluteLocation>)absoluteLocation;
- (id <SPTUBIEventLocation>)_location;
@end

