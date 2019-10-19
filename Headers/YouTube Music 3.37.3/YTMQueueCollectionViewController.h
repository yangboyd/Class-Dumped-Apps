//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTMPlaybackQueueAutoplayHeaderDelegate-Protocol.h"
#import "YTMPlaylistPanelVideoCellDelegate-Protocol.h"
#import "YTMQueueControllerObserverProtocol-Protocol.h"
#import "YTMSettingsObserver-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"

@class GIMMe, NSDate, NSIndexPath, NSSet, NSString, UICollectionView, YTImageService, YTMButtonVisibilityLogger, YTMCellFactory, YTMEqualizerView, YTMLightsourcePalette, YTMOfflineVideoStatusController, YTMPageLoadController, YTMQueueCollectionViewFlowLayout, YTMQueueController, YTMSettings, YTSystemNotifications, YTUserDefaults;
@protocol YTMPlayerPageResponderProvider, YTResponder;

@interface YTMQueueCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UIGestureRecognizerDelegate, YTMPlaybackQueueAutoplayHeaderDelegate, YTMQueueControllerObserverProtocol, YTMPlaylistPanelVideoCellDelegate, YTMSettingsObserver, YTSystemNotificationsObserver, YTResponder>
{
    id <YTResponder> _parentResponder;
    YTMCellFactory *_cellFactory;
    NSSet *_knownRendererReuseIdentifiers;
    YTMQueueController *_queueController;
    YTMQueueCollectionViewFlowLayout *_collectionViewLayout;
    YTImageService *_imageService;
    NSDate *_lastScrollTime;
    YTUserDefaults *_userDefaults;
    YTMButtonVisibilityLogger *_autoplayButtonVisibilityLogger;
    _Bool _showAutoplaySection;
    YTMOfflineVideoStatusController *_offlineVideoStatusController;
    id <YTMPlayerPageResponderProvider> _provider;
    YTMSettings *_settings;
    YTMPageLoadController *_csiPageLoadController;
    YTSystemNotifications *_systemNotifications;
    _Bool _appIsInBackground;
    _Bool _isReordering;
    double _reorderCellEdgePaddingY;
    NSIndexPath *_reorderingSourcePath;
    NSIndexPath *_nowPlayingIndexPath;
    _Bool _userVisible;
    _Bool _playing;
    GIMMe *_gimme;
    YTMLightsourcePalette *_lightsourcePalette;
    UICollectionView *_collectionView;
    YTMEqualizerView *_equalizerView;
}

+ (id)indexPathsWithSection:(long long)arg1 startItem:(long long)arg2 count:(long long)arg3;
@property(retain, nonatomic) YTMEqualizerView *equalizerView; // @synthesize equalizerView=_equalizerView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(retain, nonatomic) YTMLightsourcePalette *lightsourcePalette; // @synthesize lightsourcePalette=_lightsourcePalette;
@property(nonatomic) _Bool userVisible; // @synthesize userVisible=_userVisible;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)updateCollectionViewAccessibility;
- (void)handleNowPlayingDropIntoAutoplayQueueAt:(long long)arg1;
- (_Bool)shouldAppendVideoLengthToBylineLabelForEntry:(id)arg1;
- (void)sendInteractionLoggingForButtons;
- (void)setMDXAutoplayEnabled:(_Bool)arg1;
- (void)updateShowAutoplaySection;
- (_Bool)shouldShowAutoplaySection;
- (id)clippedAutoplayIndexPathsForIndexes:(id)arg1;
- (void)setNowPlayingIndexPath:(id)arg1;
- (void)endReordering;
- (void)cancelReordering;
- (void)continueReorderingAtPoint:(struct CGPoint)arg1;
- (void)beginReorderingAtPoint:(struct CGPoint)arg1;
- (void)handleReorderingWithRecognizer:(id)arg1;
- (void)updateEqualizerAnimation;
- (_Bool)isCellAtIndexPathFullyVisible:(id)arg1;
- (void)beginPageLoadMonitoring;
- (void)cancelPageLoadMonitoring;
- (void)reloadDataMaintainingBottomOffset;
- (unsigned long long)scrollPositionFromSelectedItemToItem:(id)arg1;
- (id)reuseIdentifierForEntry:(id)arg1;
- (void)registerCells;
- (void)didLongPress:(id)arg1;
- (void)playItemAtIndexPath:(id)arg1;
- (void)playbackQueueAutoplayHeaderReusableView:(id)arg1 autopayEnabled:(_Bool)arg2;
- (void)playlistPanelVideoCellRemoveButtonWasTapped:(id)arg1;
- (_Bool)playlistPanelVideoCellShouldShowHint:(id)arg1;
- (void)playlistPanelVideoCellWillBeginSwiping:(id)arg1;
- (void)queueControllerDidPromoteAutoplayItemToPlaylist:(id)arg1;
- (void)queueController:(id)arg1 didRemoveAutomixRenderersAtIndexes:(id)arg2;
- (void)queueController:(id)arg1 didInsertAutomixRenderersAtIndexes:(id)arg2;
- (void)queueController:(id)arg1 didShuffleQueueWithPreviousIndexPaths:(id)arg2;
- (void)queueController:(id)arg1 didInsertVideoCount:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)videosWillBeInsertedInQueueController:(id)arg1;
- (void)queueController:(id)arg1 willMoveVideoAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)queueController:(id)arg1 didRemoveVideoAtIndexPath:(id)arg2;
- (void)queueController:(id)arg1 willRemoveVideoAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 didUpdateVideoAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 numberOfItemsDidChangeFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;
- (void)numberOfItemsWillChangeInQueueController:(id)arg1;
- (void)queueController:(id)arg1 nowPlayingItemAtIndex:(unsigned long long)arg2;
- (void)queueController:(id)arg1 didReplacePlaylistWithPlaylistPanel:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)handleAutoplayQueueAutoInsertionOrDeletion:(long long)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)settings:(id)arg1 didSetAutoplayEnabled:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)attachAllButtons;
- (void)updateHeaderControls;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 queueController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

