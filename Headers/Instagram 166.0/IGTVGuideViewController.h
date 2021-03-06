//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterUpdateListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVChannelDataSourceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGTVCreationFlowViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTVVideoPreviewSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGListAdapter, IGMedia, IGScrollPerfLogger, IGTVDestinationNavigationPerfComponents, IGTVGuideActionsConfig, IGTVGuideEmptyLoadingView, IGTVGuideEmptyView, IGTVGuideLoadingObject, IGTVGuideView, IGTVPendingUploadSectionCoordinator, IGTVViewerLoggingContext, IGUserSession, NSString;
@protocol IGTVChannelDataSourceType, IGTVGuideViewControllerDelegate;

@interface IGTVGuideViewController : IGViewController <IGListAdapterDataSource, IGListAdapterUpdateListener, IGTVChannelDataSourceListener, IGTVCreationFlowViewControllerDelegate, IGTVVideoPreviewSectionControllerDelegate, UIScrollViewDelegate, IGGestureHandler>
{
    IGUserSession *_userSession;
    IGTVGuideLoadingObject *_loadingObject;
    IGTVGuideEmptyLoadingView *_emptyLoadingView;
    IGTVGuideEmptyView *_emptyView;
    id <IGTVChannelDataSourceType> _channelDataSource;
    IGTVGuideActionsConfig *_tvGuideActionsConfig;
    IGTVViewerLoggingContext *_loggingContext;
    IGListAdapter *_listAdapter;
    IGTVGuideView *_tvGuideView;
    IGMedia *_nowPlayingItem;
    _Bool _hasManuallyScrolledOrInitiallySetFocus;
    _Bool _needsScrollToNowPlaying;
    IGTVDestinationNavigationPerfComponents *_perfComponents;
    _Bool _hasMeasuredInitialNavigationPerf;
    _Bool _hasStartedMeasuringFeedUpdate;
    IGScrollPerfLogger *_scrollPerfLogger;
    IGTVPendingUploadSectionCoordinator *_pendingUploadCoordinator;
    id <IGTVGuideViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGTVGuideViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)didSelectVideoPreviewSectionController:(id)arg1;
- (void)channelDataSourceDidUpdate:(id)arg1 fromAction:(long long)arg2 error:(id)arg3;
- (void)channelDataSourceWillUpdate:(id)arg1;
- (void)_loadMoreIfNeededForContentOffset:(struct CGPoint)arg1;
- (void)_loadMoreIfNeeded;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)listAdapter:(id)arg1 didFinishUpdate:(long long)arg2 animated:(_Bool)arg3;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_dismissUploadFlow;
- (void)tvCreationFlowViewControllerDidSaveAsDraft:(id)arg1;
- (void)tvCreationFlowViewControllerDidShare:(id)arg1;
- (void)tvCreationFlowViewControllerDidCancel:(id)arg1;
- (void)_presentUploadFlow;
- (void)_retryButtonTapped;
- (void)_uploadButtonTapped;
- (void)_handlePullToRefresh;
- (_Bool)_refreshControlEnabled;
- (void)_scrollToItem:(id)arg1;
- (long long)_nowPlayingIndex;
- (void)_scrollToNowPlayingIfNeeded;
- (void)_updateNowPlayingSelection;
- (void)tvGuideWillDismiss;
- (void)tvGuideWillPresent;
- (void)updateNowPlayingItem:(id)arg1;
- (double)preferredHeightInWidth:(double)arg1;
- (_Bool)prefersStatusBarHidden;
- (id)analyticsModule;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 channelDataSource:(id)arg2 tvGuideActionsConfig:(id)arg3 loggingContext:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

