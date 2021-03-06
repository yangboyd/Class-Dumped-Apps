//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL;
@protocol UBIInteractionEvent;

@protocol UBIInteractionEventFactory <NSObject>
- (id <UBIInteractionEvent>)disconnectFromRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <UBIInteractionEvent>)bookmarkAdWithAdId:(NSString *)arg1 adUri:(NSURL *)arg2;
- (id <UBIInteractionEvent>)settingDisable;
- (id <UBIInteractionEvent>)removeHideSongWithItemNoLongerHidden:(NSURL *)arg1;
- (id <UBIInteractionEvent>)setSleepTimerInMinutesWithSleepTimeInMinutes:(unsigned long long)arg1;
- (id <UBIInteractionEvent>)deselectEntityInListWithEntityToBeDeselected:(NSURL *)arg1;
- (id <UBIInteractionEvent>)removeStationWithStationToBeRemoved:(NSURL *)arg1;
- (id <UBIInteractionEvent>)followWithItemToBeFollowed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)trialPremiumFeatures;
- (id <UBIInteractionEvent>)addItemsToQueueWithNumberOfItemsToAddToQueue:(unsigned long long)arg1;
- (id <UBIInteractionEvent>)hideArtistWithItemToHide:(NSURL *)arg1;
- (id <UBIInteractionEvent>)pullPlaybackToLocalDevice;
- (id <UBIInteractionEvent>)uiNavigateWithDestination:(NSURL *)arg1;
- (id <UBIInteractionEvent>)sendEmailVerification;
- (id <UBIInteractionEvent>)makePlaylistSecretWithPlaylistToBeMadeSecret:(NSURL *)arg1;
- (id <UBIInteractionEvent>)continueWithFacebook;
- (id <UBIInteractionEvent>)logoutFromRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <UBIInteractionEvent>)retry;
- (id <UBIInteractionEvent>)noAction;
- (id <UBIInteractionEvent>)uiHide;
- (id <UBIInteractionEvent>)removeBookmarkAdWithAdId:(NSString *)arg1 adUri:(NSURL *)arg2;
- (id <UBIInteractionEvent>)seekByTimeWithMsSeekedOffset:(long long)arg1;
- (id <UBIInteractionEvent>)decreaseVocalsVolume;
- (id <UBIInteractionEvent>)makePlaylistNonCollaborativeWithPlaylistToBeMadeNonCollaborative:(NSURL *)arg1;
- (id <UBIInteractionEvent>)repeatEnable;
- (id <UBIInteractionEvent>)settingEnable;
- (id <UBIInteractionEvent>)changeDisplayName;
- (id <UBIInteractionEvent>)tuneEnabled;
- (id <UBIInteractionEvent>)refreshContent;
- (id <UBIInteractionEvent>)moveImage;
- (id <UBIInteractionEvent>)unfollowWithItemToBeUnfollowed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)addToPlaylistWithPlaylist:(NSURL *)arg1 itemToBeAdded:(NSURL *)arg2;
- (id <UBIInteractionEvent>)tuneDisabled;
- (id <UBIInteractionEvent>)uiReveal;
- (id <UBIInteractionEvent>)leaveSocialListeningSession;
- (id <UBIInteractionEvent>)setVolumeWithNewVolumePercentage:(long long)arg1;
- (id <UBIInteractionEvent>)removeHideArtistWithItemNoLongerHidden:(NSURL *)arg1;
- (id <UBIInteractionEvent>)launchCamera;
- (id <UBIInteractionEvent>)increaseVocalsVolume;
- (id <UBIInteractionEvent>)addInterest;
- (id <UBIInteractionEvent>)selectEntityInListWithEntityToBeSelected:(NSURL *)arg1;
- (id <UBIInteractionEvent>)resizeImage;
- (id <UBIInteractionEvent>)openOsSettings;
- (id <UBIInteractionEvent>)pauseWithItemToBePaused:(NSURL *)arg1;
- (id <UBIInteractionEvent>)sort;
- (id <UBIInteractionEvent>)joinSocialListeningSession;
- (id <UBIInteractionEvent>)removeSleepTimer;
- (id <UBIInteractionEvent>)quickScroll;
- (id <UBIInteractionEvent>)likeWithItemToBeLiked:(NSURL *)arg1;
- (id <UBIInteractionEvent>)reportAbuseWithItemToReport:(NSURL *)arg1;
- (id <UBIInteractionEvent>)shuffleEnable;
- (id <UBIInteractionEvent>)reportQuality;
- (id <UBIInteractionEvent>)removeItemFromQueueWithItemToRemoveFromQueue:(NSURL *)arg1;
- (id <UBIInteractionEvent>)shufflePlayWithContextToBePlayed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)downloadWithItemToDownload:(NSURL *)arg1;
- (id <UBIInteractionEvent>)disableReleaseNotificationsWithReleaseSourceToNotGetNotificationsFrom:(NSURL *)arg1;
- (id <UBIInteractionEvent>)dislikeWithItemToBeDisliked:(NSURL *)arg1;
- (id <UBIInteractionEvent>)uiNavigateBack;
- (id <UBIInteractionEvent>)deletePlaylistWithPlaylistToBeDeleted:(NSURL *)arg1;
- (id <UBIInteractionEvent>)clearFilter;
- (id <UBIInteractionEvent>)vocalRemovalDisabled;
- (id <UBIInteractionEvent>)makePlaylistCollaborativeWithPlaylistToBeMadeCollaborative:(NSURL *)arg1;
- (id <UBIInteractionEvent>)markAsUnplayedWithItemUnplayed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)makePlaylistPublicWithPlaylistToBeMadePublic:(NSURL *)arg1;
- (id <UBIInteractionEvent>)connectToRemoteDeviceWithRemoteDeviceId:(NSString *)arg1;
- (id <UBIInteractionEvent>)filter;
- (id <UBIInteractionEvent>)repeatOneEnable;
- (id <UBIInteractionEvent>)removeRecommendationWithRecommendedItemUri:(NSURL *)arg1;
- (id <UBIInteractionEvent>)setPlaybackSpeedWithCurrentlyPlayedItem:(NSURL *)arg1 playbackSpeed:(unsigned long long)arg2;
- (id <UBIInteractionEvent>)increaseVolume;
- (id <UBIInteractionEvent>)playSomething;
- (id <UBIInteractionEvent>)resumeWithItemToBeResumed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)decreaseVolume;
- (id <UBIInteractionEvent>)clearRecentSearches;
- (id <UBIInteractionEvent>)shareWithEntityToBeShared:(NSURL *)arg1 shareId:(NSString *)arg2;
- (id <UBIInteractionEvent>)skipToNextWithItemToBeSkipped:(NSURL *)arg1;
- (id <UBIInteractionEvent>)navigateToWebviewUriWithDestination:(NSURL *)arg1;
- (id <UBIInteractionEvent>)textClear;
- (id <UBIInteractionEvent>)search;
- (id <UBIInteractionEvent>)stopHostingSocialListeningSession;
- (id <UBIInteractionEvent>)login;
- (id <UBIInteractionEvent>)useAsGuest;
- (id <UBIInteractionEvent>)removeInterest;
- (id <UBIInteractionEvent>)setSleepTimerEndOfItemWithSleepItem:(NSURL *)arg1;
- (id <UBIInteractionEvent>)setPlaylistDescriptionWithPlaylistToChangeDescriptionOn:(NSURL *)arg1;
- (id <UBIInteractionEvent>)reportExplicitContentWithItemToReport:(NSURL *)arg1;
- (id <UBIInteractionEvent>)markAsPlayedWithItemPlayed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)playPreviewWithItemToBePreviewed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)vocalRemovalEnabled;
- (id <UBIInteractionEvent>)focusInputField;
- (id <UBIInteractionEvent>)addItemToQueueWithItemToAddToQueue:(NSURL *)arg1;
- (id <UBIInteractionEvent>)shuffleDisable;
- (id <UBIInteractionEvent>)uiElementToggle;
- (id <UBIInteractionEvent>)removeItemFromPlaylistWithItemToBeRemovedFromPlaylist:(NSURL *)arg1;
- (id <UBIInteractionEvent>)resetPassword;
- (id <UBIInteractionEvent>)addAppShortcutWithDestination:(NSURL *)arg1;
- (id <UBIInteractionEvent>)repeatDisable;
- (id <UBIInteractionEvent>)changeRemoteDeviceIncarnationWithRemoteDeviceId:(NSString *)arg1;
- (id <UBIInteractionEvent>)removeDislikeWithItemNoLongerDisliked:(NSURL *)arg1;
- (id <UBIInteractionEvent>)renamePlaylistWithPlaylistToBeRenamed:(NSURL *)arg1;
- (id <UBIInteractionEvent>)skipToPreviousWithItemToBeSkipped:(NSURL *)arg1;
- (id <UBIInteractionEvent>)removeItemsFromQueueWithNumberOfItemsToRemoveFromQueue:(unsigned long long)arg1;
- (id <UBIInteractionEvent>)pollVoteWithPollId:(NSString *)arg1 msPlayed:(long long)arg2;
- (id <UBIInteractionEvent>)createRadioWithBasedOnItem:(NSURL *)arg1;
- (id <UBIInteractionEvent>)addStationWithStationToBeAdded:(NSURL *)arg1;
- (id <UBIInteractionEvent>)hideSongWithItemToHide:(NSURL *)arg1;
- (id <UBIInteractionEvent>)seekToTimeWithMsToSeekTo:(long long)arg1;
- (id <UBIInteractionEvent>)logout;
- (id <UBIInteractionEvent>)createPlaylist;
- (id <UBIInteractionEvent>)removeLikeWithItemNoLongerLiked:(NSURL *)arg1;
- (id <UBIInteractionEvent>)navigateToExternalUriWithDestination:(NSURL *)arg1;
- (id <UBIInteractionEvent>)removeDownloadWithItemToRemoveFromDownloads:(NSURL *)arg1;
- (id <UBIInteractionEvent>)enableReleaseNotificationsWithReleaseSourceToGetNotificationsFrom:(NSURL *)arg1;
- (id <UBIInteractionEvent>)removeRecentSearchesItem;
- (id <UBIInteractionEvent>)stopDownloadWithItemToStopDownload:(NSURL *)arg1;
- (id <UBIInteractionEvent>)playWithItemToBePlayed:(NSURL *)arg1;
@end

