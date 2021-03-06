//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGArchiveNavigationListener-Protocol.h>
#import <InstagramAppCoreFramework/IGArchiveStoryPresenterDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGEmptyFeedViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaGalleryControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaShellSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGMediaThumbnailSectionControllerSelectionDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGOnThisDaySectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGQuickScrubDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryAutoArchiveUpsellSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStorySettingsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSuggestedHighlightsControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTabControlSegment-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGArchiveStoryPresenter, IGEmptyFeedView, IGGalleryConfiguration, IGGalleryLayout, IGGalleryPreloadHandler, IGGalleryPreloadThrottler, IGListAdapter, IGMediaGalleryController, IGQuickScrubController, IGScrollPerfLogger, IGStoryFocusHandler, IGSuggestedHighlightsController, IGUserSession, NSArray, NSDateFormatter, NSMutableSet, NSString, UICollectionView;
@protocol IGStoryArchiveNavigationHandler, IGStoryArchiveSelectionDelegate, IGStoryArchiveStoryViewerDelegate, IGStoryArchiveViewControllerDelegate;

@interface IGStoryArchiveViewController : IGViewController <IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGMediaGalleryControllerDelegate, IGMediaShellSectionControllerDelegate, IGMediaThumbnailSectionControllerSelectionDelegate, IGOnThisDaySectionControllerDelegate, IGQuickScrubDataSource, IGStoryAutoArchiveUpsellSectionControllerDelegate, IGStorySettingsViewControllerDelegate, IGSuggestedHighlightsControllerDelegate, UIScrollViewDelegate, IGArchiveNavigationListener, IGArchiveStoryPresenterDelegate, IGTabControlSegment>
{
    IGListAdapter *_adapter;
    long long _archiveAutoSaveStatus;
    UICollectionView *_collectionView;
    IGGalleryLayout *_collectionViewLayout;
    IGGalleryConfiguration *_configuration;
    struct UIEdgeInsets _deltaInsets;
    IGEmptyFeedView *_emptyView;
    _Bool _isDisclaimerVisible;
    _Bool _isScrollingToStart;
    IGGalleryPreloadHandler *_loadHandler;
    IGGalleryPreloadThrottler *_loadThrottler;
    id <IGStoryArchiveNavigationHandler> _navigationHandler;
    _Bool _prefersTabBarHidden;
    IGQuickScrubController *_quickScrubController;
    NSDateFormatter *_quickScrubDateFormatter;
    IGScrollPerfLogger *_scrollPerfLogger;
    NSMutableSet *_selectedItems;
    id <IGStoryArchiveSelectionDelegate> _selectionDelegate;
    IGStoryFocusHandler *_storyFocusHandler;
    IGUserSession *_userSession;
    IGMediaGalleryController *_galleryController;
    IGSuggestedHighlightsController *_suggestedHighlightsController;
    NSArray *_supplementaryGalleryFragments;
    long long _originalBadgeCount;
    _Bool _hasOnThisDayMemory;
    _Bool _didOpenMemoriesShareFlow;
    IGArchiveStoryPresenter *_archiveStoryPresenter;
    id <IGStoryArchiveViewControllerDelegate> _delegate;
    id <IGStoryArchiveStoryViewerDelegate> _storyViewerDelegate;
    long long _presentation;
    NSArray *_workingMedia;
}

+ (id)_generateEmptyViewForAutoArchiveStatus:(long long)arg1;
+ (id)_generateEmptyFeedModelForAutoArchiveStatus:(long long)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *workingMedia; // @synthesize workingMedia=_workingMedia;
@property(nonatomic) long long presentation; // @synthesize presentation=_presentation;
@property(nonatomic) __weak id <IGStoryArchiveStoryViewerDelegate> storyViewerDelegate; // @synthesize storyViewerDelegate=_storyViewerDelegate;
@property(nonatomic) __weak id <IGStoryArchiveViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_finishScrollToStartIfAppropriate;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onThisDaySectionControllerDidShareMemory:(id)arg1;
- (void)onThisDaySectionControllerDidCancelShare:(id)arg1;
- (void)onThisDaySectionControllerDidTapDismissButton:(id)arg1 mediaID:(id)arg2;
- (void)onThisDaySectionControllerWantsToNavigateBackToProfile:(id)arg1;
- (id)fallbackIcon;
- (id)title;
- (void)suggestedHighlightsController:(id)arg1 didPublishWithNavigationAction:(long long)arg2;
- (void)_updatePlayingStoryItem:(id)arg1;
- (void)archiveStoryPresenter:(id)arg1 didTapViewDayForStoryViewer:(id)arg2;
- (id)dismissingToViewForArchiveStoryPresenter:(id)arg1;
- (void)didDismissArchiveStoryPresenter:(id)arg1;
- (void)archiveStoryPresenter:(id)arg1 didPresentStoryItem:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didFocusonReelWithPK:(id)arg2 forStoryViewer:(id)arg3;
- (void)archiveStoryPresenter:(id)arg1 didFinishStoryViewer:(id)arg2;
- (void)archiveStoryPresenter:(id)arg1 didNavigateToStoryItem:(id)arg2;
- (void)storyAutoArchiveUpsellSectionControllerDidTapUpsell:(id)arg1;
- (void)quickScrubControllerDidUpdateScrubbing:(id)arg1;
- (id)quickScrubController:(id)arg1 displayStringForItemAtIndexPath:(id)arg2;
- (void)_handleFeedItemSelection:(id)arg1;
- (void)_handleFeedItemOpen:(id)arg1;
- (void)didSelectFeedItem:(id)arg1 usingForceTouch:(_Bool)arg2;
- (void)mediaShellSectionControllerDidSelect:(id)arg1;
- (void)_persistWorkingMediaStates:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)mediaGalleryController:(id)arg1 loadingDidFailWithError:(id)arg2;
- (void)mediaGalleryControllerDidUpdate:(id)arg1;
- (void)_scrollToObject:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToDisclaimerAnimated:(_Bool)arg1;
- (void)scrollToStartAnimated:(_Bool)arg1;
- (void)mediaGalleryControllerDidLoad:(id)arg1;
- (void)_updateAutoArchiveStatus:(long long)arg1;
- (void)_generateEmptyViewIfNecessary;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)storySettingsViewControllerDidTapDone:(id)arg1;
- (void)_openStorySettings;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (void)didLoadDayReelInfos:(id)arg1 feedItems:(id)arg2;
- (void)didChangeActiveMapFeedItem:(id)arg1;
- (id)analyticsExtras;
- (void)_tryToShowSurveyWithIntegrationPoint:(id)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contentInset;
- (void)setItem:(id)arg1 selected:(_Bool)arg2;
- (void)setSelectionDelegate:(id)arg1;
- (id)selectionDelegate;
@property(readonly, nonatomic) unsigned long long archiveItemCount;
- (id)selectedItems;
- (long long)preferredTabBarBehavior;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)_updateContentInsets;
- (void)viewSafeAreaInsetsDidChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithConfiguration:(id)arg1 contentInsets:(struct UIEdgeInsets)arg2 disclaimerVisible:(_Bool)arg3 originalBadgeCount:(long long)arg4 navigationHandler:(id)arg5 prefersTabBarHidden:(_Bool)arg6 userSession:(id)arg7 currentReelPk:(id)arg8 entryPoint:(long long)arg9;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

