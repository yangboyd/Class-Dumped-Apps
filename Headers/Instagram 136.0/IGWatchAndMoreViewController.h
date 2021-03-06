//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedNetworkSourceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGWatchAndMoreViewDelegate-Protocol.h>

@class IGBrowserSession, IGFeedItem, IGFeedNetworkSource, IGFeedScrollViewAnnouncer, IGListAdapter, IGUserSession, IGWatchAndBrowseAnimationController, IGWatchAndMoreLoggingContext, NSString, UIView;
@protocol IGFeedConfigurationType, IGFeedItemConfigurationType, IGFeedSectionControllerComponentsType, IGFeedTheme, IGWatchAndMoreAdapterProtocol, IGWatchAndMoreViewControllerDelegate, IGWatchAndMoreViewProtocol;

@interface IGWatchAndMoreViewController : IGViewController <IGWatchAndMoreViewDelegate, IGFeedNetworkSourceDelegate, IGListAdapterDataSource>
{
    UIView *_videoView;
    UIView *_contentView;
    UIView<IGWatchAndMoreViewProtocol> *_watchAndMoreView;
    IGWatchAndMoreLoggingContext *_loggingContext;
    _Bool _hasLoggedImpression;
    id <IGWatchAndMoreAdapterProtocol> _watchAndMoreAdapter;
    long long _videoViewerType;
    IGUserSession *_userSession;
    id <IGFeedConfigurationType> _feedConfiguration;
    id <IGFeedItemConfigurationType> _itemConfiguration;
    IGFeedNetworkSource *_feedNetworkSource;
    IGFeedItem *_feedItem;
    id <IGFeedSectionControllerComponentsType> _feedSectionControllerComponents;
    IGListAdapter *_adapter;
    IGFeedScrollViewAnnouncer *_scrollViewAnnouncer;
    id <IGFeedTheme> _feedTheme;
    IGBrowserSession *_browserSession;
    IGWatchAndBrowseAnimationController *_watchBrowseAnimationHelper;
    _Bool _didEndDisplayingVideoInFeed;
    _Bool _fixContentViewPositionEnabled;
    id <IGWatchAndMoreViewControllerDelegate> _delegate;
}

@property(nonatomic, getter=isFixContentViewPositionEnabled) _Bool fixContentViewPositionEnabled; // @synthesize fixContentViewPositionEnabled=_fixContentViewPositionEnabled;
@property(nonatomic) _Bool didEndDisplayingVideoInFeed; // @synthesize didEndDisplayingVideoInFeed=_didEndDisplayingVideoInFeed;
@property(nonatomic) __weak id <IGWatchAndMoreViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)prefersNavigationBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (id)analyticsModule;
- (void)_dismissWithExitSource:(unsigned long long)arg1;
- (id)_setupCollectionView;
- (struct CGSize)_calculateSizeForCollectionView;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)watchAndMoreViewDidScroll;
- (void)watchAndMoreViewContentViewDidNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreViewContentViewWillNavigate:(unsigned long long)arg1 navigationAction:(unsigned long long)arg2;
- (void)watchAndMoreView:(id)arg1 setPlayVideo:(_Bool)arg2;
- (void)watchAndMoreViewDidCollapseVideoView;
- (void)watchAndMoreViewDidExpandVideoView;
- (void)watchAndMoreViewDidTapDismissVideoButton;
- (void)watchAndMoreViewDidSwipeDownVideo;
- (void)watchAndMoreViewDidChangeBrowserLayoutState:(unsigned long long)arg1;
- (_Bool)isVideoCollapsed;
- (void)removeContentView;
- (void)addVideoView;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithVideoView:(id)arg1 watchAndMoreAdapter:(id)arg2 videoViewerType:(long long)arg3 loggingContext:(id)arg4 feedItem:(id)arg5 userSession:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

