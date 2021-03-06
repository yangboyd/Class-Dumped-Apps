//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol SPTUBIInteractionEvent;

@protocol SPTUBIInteractionEventFactory <NSObject>
- (id <SPTUBIInteractionEvent>)disconnectFromRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <SPTUBIInteractionEvent>)bookmarkAdWithAdId:(NSString *)arg1 adUri:(NSURL *)arg2;
- (id <SPTUBIInteractionEvent>)settingDisable;
- (id <SPTUBIInteractionEvent>)removeHideSongWithItemNoLongerHidden:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)setSleepTimerInMinutesWithSleepTimeInMinutes:(unsigned long long)arg1;
- (id <SPTUBIInteractionEvent>)deselectEntityInListWithEntityToBeDeselected:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)removeStationWithStationToBeRemoved:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)followWithItemToBeFollowed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)trialPremiumFeatures;
- (id <SPTUBIInteractionEvent>)addItemsToQueueWithNumberOfItemsToAddToQueue:(unsigned long long)arg1;
- (id <SPTUBIInteractionEvent>)hideArtistWithItemToHide:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)pullPlaybackToLocalDevice;
- (id <SPTUBIInteractionEvent>)uiNavigateWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)sendEmailVerification;
- (id <SPTUBIInteractionEvent>)requestOsPermissionWithPermissionToBeRequested:(NSString *)arg1;
- (id <SPTUBIInteractionEvent>)makePlaylistSecretWithPlaylistToBeMadeSecret:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)continueWithFacebook;
- (id <SPTUBIInteractionEvent>)logoutFromRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <SPTUBIInteractionEvent>)retry;
- (id <SPTUBIInteractionEvent>)noAction;
- (id <SPTUBIInteractionEvent>)uiHide;
- (id <SPTUBIInteractionEvent>)removeBookmarkAdWithAdId:(NSString *)arg1 adUri:(NSURL *)arg2;
- (id <SPTUBIInteractionEvent>)seekByTimeWithMsSeekedOffset:(long long)arg1;
- (id <SPTUBIInteractionEvent>)decreaseVocalsVolume;
- (id <SPTUBIInteractionEvent>)makePlaylistNonCollaborativeWithPlaylistToBeMadeNonCollaborative:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)repeatEnable;
- (id <SPTUBIInteractionEvent>)settingEnable;
- (id <SPTUBIInteractionEvent>)changeDisplayName;
- (id <SPTUBIInteractionEvent>)tuneEnabled;
- (id <SPTUBIInteractionEvent>)refreshContent;
- (id <SPTUBIInteractionEvent>)moveImage;
- (id <SPTUBIInteractionEvent>)unfollowWithItemToBeUnfollowed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)addToPlaylistWithPlaylist:(NSURL *)arg1 itemToBeAdded:(NSURL *)arg2;
- (id <SPTUBIInteractionEvent>)tuneDisabled;
- (id <SPTUBIInteractionEvent>)uiReveal;
- (id <SPTUBIInteractionEvent>)leaveSocialListeningSession;
- (id <SPTUBIInteractionEvent>)setVolumeWithNewVolumePercentage:(long long)arg1;
- (id <SPTUBIInteractionEvent>)removeHideArtistWithItemNoLongerHidden:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)launchCamera;
- (id <SPTUBIInteractionEvent>)increaseVocalsVolume;
- (id <SPTUBIInteractionEvent>)addInterest;
- (id <SPTUBIInteractionEvent>)selectEntityInListWithEntityToBeSelected:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)resizeImage;
- (id <SPTUBIInteractionEvent>)openOsSettings;
- (id <SPTUBIInteractionEvent>)pauseWithItemToBePaused:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)sort;
- (id <SPTUBIInteractionEvent>)joinSocialListeningSession;
- (id <SPTUBIInteractionEvent>)removeSleepTimer;
- (id <SPTUBIInteractionEvent>)quickScroll;
- (id <SPTUBIInteractionEvent>)likeWithItemToBeLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)reportAbuseWithItemToReport:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)shuffleEnable;
- (id <SPTUBIInteractionEvent>)reportQuality;
- (id <SPTUBIInteractionEvent>)removeItemFromQueueWithItemToRemoveFromQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)shufflePlayWithContextToBePlayed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)reportNotExplicitContentWithItemToReport:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)downloadWithItemToDownload:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)disableReleaseNotificationsWithReleaseSourceToNotGetNotificationsFrom:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)dislikeWithItemToBeDisliked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)uiNavigateBack;
- (id <SPTUBIInteractionEvent>)deletePlaylistWithPlaylistToBeDeleted:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)clearFilter;
- (id <SPTUBIInteractionEvent>)vocalRemovalDisabled;
- (id <SPTUBIInteractionEvent>)makePlaylistCollaborativeWithPlaylistToBeMadeCollaborative:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)markAsUnplayedWithItemUnplayed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)makePlaylistPublicWithPlaylistToBeMadePublic:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)connectToRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <SPTUBIInteractionEvent>)filter;
- (id <SPTUBIInteractionEvent>)repeatOneEnable;
- (id <SPTUBIInteractionEvent>)removeRecommendationWithRecommendedItemUri:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)setPlaybackSpeedWithCurrentlyPlayedItem:(NSURL *)arg1 playbackSpeed:(unsigned long long)arg2;
- (id <SPTUBIInteractionEvent>)increaseVolume;
- (id <SPTUBIInteractionEvent>)playSomething;
- (id <SPTUBIInteractionEvent>)resumeWithItemToBeResumed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)decreaseVolume;
- (id <SPTUBIInteractionEvent>)clearRecentSearches;
- (id <SPTUBIInteractionEvent>)shareWithEntityToBeShared:(NSURL *)arg1 shareId:(NSString *)arg2;
- (id <SPTUBIInteractionEvent>)skipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)navigateToWebviewUriWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)textClear;
- (id <SPTUBIInteractionEvent>)search;
- (id <SPTUBIInteractionEvent>)stopHostingSocialListeningSession;
- (id <SPTUBIInteractionEvent>)login;
- (id <SPTUBIInteractionEvent>)useAsGuest;
- (id <SPTUBIInteractionEvent>)removeInterest;
- (id <SPTUBIInteractionEvent>)setSleepTimerEndOfItemWithSleepItem:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)setPlaylistDescriptionWithPlaylistToChangeDescriptionOn:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)reportExplicitContentWithItemToReport:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)markAsPlayedWithItemPlayed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)playPreviewWithItemToBePreviewed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)vocalRemovalEnabled;
- (id <SPTUBIInteractionEvent>)focusInputField;
- (id <SPTUBIInteractionEvent>)addItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)shuffleDisable;
- (id <SPTUBIInteractionEvent>)uiElementToggle;
- (id <SPTUBIInteractionEvent>)removeItemFromPlaylistWithItemToBeRemovedFromPlaylist:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)resetPassword;
- (id <SPTUBIInteractionEvent>)enableNotificationCategoryInChannelWithNotificationChannelToBeEnabled:(NSString *)arg1 notificationCategoryToBeEnabled:(NSString *)arg2;
- (id <SPTUBIInteractionEvent>)addAppShortcutWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)repeatDisable;
- (id <SPTUBIInteractionEvent>)changeRemoteDeviceIncarnationWithRemoteDeviceId:(NSString *)arg1;
- (id <SPTUBIInteractionEvent>)removeDislikeWithItemNoLongerDisliked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)renamePlaylistWithPlaylistToBeRenamed:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)skipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)removeItemsFromQueueWithNumberOfItemsToRemoveFromQueue:(unsigned long long)arg1;
- (id <SPTUBIInteractionEvent>)pollVoteWithPollId:(NSString *)arg1 msPlayed:(long long)arg2;
- (id <SPTUBIInteractionEvent>)createRadioWithBasedOnItem:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)addStationWithStationToBeAdded:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)hideSongWithItemToHide:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)seekToTimeWithMsToSeekTo:(long long)arg1;
- (id <SPTUBIInteractionEvent>)logout;
- (id <SPTUBIInteractionEvent>)createPlaylist;
- (id <SPTUBIInteractionEvent>)removeLikeWithItemNoLongerLiked:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)navigateToExternalUriWithDestination:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)removeDownloadWithItemToRemoveFromDownloads:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)enableReleaseNotificationsWithReleaseSourceToGetNotificationsFrom:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)removeRecentSearchesItem;
- (id <SPTUBIInteractionEvent>)stopDownloadWithItemToStopDownload:(NSURL *)arg1;
- (id <SPTUBIInteractionEvent>)playWithItemToBePlayed:(NSURL *)arg1;
@end

