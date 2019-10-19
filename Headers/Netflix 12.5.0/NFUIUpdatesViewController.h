//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUIMessagingUIServiceDelegate-Protocol.h"
#import "NFUINetworkErrorViewControllerDelegate-Protocol.h"
#import "NFUIScrollViewSnappingUtilDelegate-Protocol.h"
#import "NFUITabContext-Protocol.h"
#import "NFUIUpdatesNotificationHeaderCellDelegate-Protocol.h"
#import "NFUIUpdatesTableViewCellDelegate-Protocol.h"
#import "NFUIVideoScrollLifecycleManagerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class NFUIExpiryDurationManager, NFUIMessagingUIService, NFUIMiniPlayerAnimator, NFUIMiniPlayerViewController, NFUINetworkErrorViewController, NFUIRotationSensorViewController, NFUIScrollViewSnappingUtil, NFUITabBarItem, NFUIUpdatesLogger, NFUIUpdatesPaginatedDatasource, NFUIVideoScrollLifecycleManager, NSIndexPath, NSString, UITableView, UIWindow;

@interface NFUIUpdatesViewController : UIViewController <UIScrollViewDelegate, NFUIMessagingUIServiceDelegate, NFUIUpdatesNotificationHeaderCellDelegate, UITableViewDelegate, UITableViewDataSource, NFUIVideoScrollLifecycleManagerDelegate, NFUINetworkErrorViewControllerDelegate, ViewControllerOverContextDelegateProtocol, NFUIUpdatesTableViewCellDelegate, NFUIScrollViewSnappingUtilDelegate, NFUITabContext>
{
    _Bool _isPresentingPlayerController;
    _Bool _shouldSnap;
    _Bool _hasPendingDeeplinkPresentation;
    NFUIMiniPlayerViewController *_activeVideoPlayerController;
    NFUITabBarItem *_nfui_tabBarItem;
    UITableView *_tableView;
    UIWindow *_rotationSensorWindow;
    NFUIMiniPlayerAnimator *_playerAnimator;
    NFUIRotationSensorViewController *_rotationSensor;
    NFUIUpdatesPaginatedDatasource *_dataSource;
    NFUIMessagingUIService *_notificationService;
    NFUIExpiryDurationManager *_expirySession;
    NFUIVideoScrollLifecycleManager *_playerScrollManager;
    NFUIScrollViewSnappingUtil *_snappingUtil;
    NSIndexPath *_currentIndexPathInFocus;
    NFUIUpdatesLogger *_updatesLogger;
    NFUINetworkErrorViewController *_errorController;
    NSString *_previousAudioCategory;
    long long _visibleMessagesCount;
    long long _postsCount;
}

@property(nonatomic) long long postsCount; // @synthesize postsCount=_postsCount;
@property(nonatomic) long long visibleMessagesCount; // @synthesize visibleMessagesCount=_visibleMessagesCount;
@property(retain, nonatomic) NSString *previousAudioCategory; // @synthesize previousAudioCategory=_previousAudioCategory;
@property(retain, nonatomic) NFUINetworkErrorViewController *errorController; // @synthesize errorController=_errorController;
@property _Bool hasPendingDeeplinkPresentation; // @synthesize hasPendingDeeplinkPresentation=_hasPendingDeeplinkPresentation;
@property(retain, nonatomic) NFUIUpdatesLogger *updatesLogger; // @synthesize updatesLogger=_updatesLogger;
@property(retain, nonatomic) NSIndexPath *currentIndexPathInFocus; // @synthesize currentIndexPathInFocus=_currentIndexPathInFocus;
@property(nonatomic) _Bool shouldSnap; // @synthesize shouldSnap=_shouldSnap;
@property(retain, nonatomic) NFUIScrollViewSnappingUtil *snappingUtil; // @synthesize snappingUtil=_snappingUtil;
@property(retain, nonatomic) NFUIVideoScrollLifecycleManager *playerScrollManager; // @synthesize playerScrollManager=_playerScrollManager;
@property(retain, nonatomic) NFUIExpiryDurationManager *expirySession; // @synthesize expirySession=_expirySession;
@property(retain, nonatomic) NFUIMessagingUIService *notificationService; // @synthesize notificationService=_notificationService;
@property(retain, nonatomic) NFUIUpdatesPaginatedDatasource *dataSource; // @synthesize dataSource=_dataSource;
@property _Bool isPresentingPlayerController; // @synthesize isPresentingPlayerController=_isPresentingPlayerController;
@property(retain, nonatomic) NFUIRotationSensorViewController *rotationSensor; // @synthesize rotationSensor=_rotationSensor;
@property(retain, nonatomic) NFUIMiniPlayerAnimator *playerAnimator; // @synthesize playerAnimator=_playerAnimator;
@property(retain, nonatomic) UIWindow *rotationSensorWindow; // @synthesize rotationSensorWindow=_rotationSensorWindow;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NFUITabBarItem *nfui_tabBarItem; // @synthesize nfui_tabBarItem=_nfui_tabBarItem;
@property(retain, nonatomic) NFUIMiniPlayerViewController *activeVideoPlayerController; // @synthesize activeVideoPlayerController=_activeVideoPlayerController;
- (void).cxx_destruct;
- (void)presentedImageDidChange:(id)arg1;
- (void)shareItemUsingEntity:(id)arg1;
- (void)setDeeplinkPayload:(id)arg1;
- (void)viewControllerOverContextDidDisappear:(id)arg1;
- (void)viewControllerOverContextWillDisappear:(id)arg1;
- (void)viewControllerOverContextWillAppear:(id)arg1;
- (void)setFeaturedVideoId:(id)arg1;
- (void)resetAndInvalidateCellFrames;
- (void)registerVisibleCell:(id)arg1 withIndexPath:(id)arg2;
- (void)retryAfterError;
- (void)showErrorDialogForError:(id)arg1;
- (_Bool)accessibilityScroll:(long long)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)logPresentationForCurrentlyVisibleItem;
- (void)logPresentedEventForIndexPath:(id)arg1;
- (void)endPresentationSession;
- (void)beginPresentationSessionForIndexPath:(id)arg1;
- (void)playTopPlayableItem:(id)arg1;
- (long long)compareItemA:(id)arg1 toItemB:(id)arg2 forComparisonStateType:(unsigned long long)arg3;
- (void)playableStateDidChangeForPlayable:(id)arg1 pausable:(id)arg2 stoppable:(id)arg3 whileScrolling:(_Bool)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)shouldAutorotate;
- (void)dismissRotationSensor;
- (void)configureRotationSensor;
- (_Bool)isPlaybackActive;
- (void)exitFullScreenInVideoController:(id)arg1 toDestinationView:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)enterFullScreenInVideoController:(id)arg1;
- (void)presentActiveVideoController;
- (struct CGSize)sizeForNotification:(id)arg1;
- (double)estimatedHeightForIndexPath:(id)arg1 useEstimate:(_Bool)arg2;
- (_Bool)isNotificationsSection:(long long)arg1;
- (id)orderedPrefetchIndexesfromIndex:(long long)arg1;
- (void)prefetchVideoAtIndex:(long long)arg1;
- (void)prefetchViewablesFromIndex:(unsigned long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)heightForWooWoo;
- (_Bool)hasNotifications;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)indexPathsForRange:(struct _NSRange)arg1 andSection:(long long)arg2;
- (struct CGSize)sizeForNotificationHeaderCell;
- (void)didTapNotificationItemAtIndex:(long long)arg1;
- (void)didTapNotificationHeader;
- (void)updateBadgeWithCount:(long long)arg1;
- (void)reloadNotificationsForVisibleView:(_Bool)arg1;
- (void)messageReadTimerDidFinish;
- (void)unreadMessageCountDidChange:(long long)arg1;
- (_Bool)shouldShowNotifications;
- (void)clearAndReloadListWithCompletion:(CDUnknownBlockType)arg1;
- (void)refresh:(id)arg1;
- (void)selectedTab:(id)arg1 comingFromTab:(id)arg2;
- (void)setNFUITabBarItem:(id)arg1;
- (_Bool)sectionShouldSnap:(long long)arg1;
- (long long)sectionForFeed;
- (id)cellIndexInFocus;
- (void)updateVisibleCellFocusStateForceRefresh:(_Bool)arg1;
- (void)updateWooWooState;
- (void)insertNextPageIfNeededCompletion:(CDUnknownBlockType)arg1;
- (void)handlePostDataChange:(CDUnknownBlockType)arg1 error:(id)arg2 result:(id)arg3;
- (void)postAccessibilityNotificationForIndexPath:(id)arg1;
- (void)scrollViewDidEndScrolling;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)setupTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

