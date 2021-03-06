//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGDirectQuickReplyCreationListener-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectQuickReplyListSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGDirectQuickReplyServiceListener-Protocol.h>
#import <InstagramAppCoreFramework/IGEmptyFeedViewDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGGestureHandler-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>

@class IGDirectQuickReplyListCellSwipeActionManager, IGDirectQuickReplyService, IGListAdapter, IGRefreshControl, IGUserSession, NSString, UIBarButtonItem, UICollectionView;
@protocol IGDirectQuickReplyListViewControllerDelegate, IGQuickReplyLoggerProtocol;

@interface IGDirectQuickReplyListViewController : IGViewController <IGDirectQuickReplyListSectionControllerDelegate, IGDirectQuickReplyCreationListener, IGDirectQuickReplyServiceListener, IGEmptyFeedViewDelegate, IGListAdapterDataSource, IGGestureHandler>
{
    IGUserSession *_userSession;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGDirectQuickReplyService *_quickReplyService;
    IGRefreshControl *_refreshControl;
    id <IGQuickReplyLoggerProtocol> _logger;
    IGDirectQuickReplyListCellSwipeActionManager *_cellSwipeActionManager;
    _Bool _canEdit;
    UIBarButtonItem *_newQuickReplyItem;
    _Bool _shouldDisplayNewContent;
    id <IGDirectQuickReplyListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGDirectQuickReplyListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_showErrorMessage;
- (double)_unusableSpace;
- (_Bool)_isFullScreen;
- (id)_quickReplies;
- (void)_newQuickReply;
- (void)_refreshUI;
- (void)_updateRightBarButtonLoading:(_Bool)arg1;
- (_Bool)canRespondToGesture:(id)arg1;
- (void)directQuickReplyServiceDidFailSyncing;
- (void)directQuickReplyServiceDidSyncQuickReplies;
- (void)quickReplyCreationViewControllerDidDismiss;
- (void)quickReplyListSectionControllerDidTapDeleteQuickReply:(id)arg1;
- (void)quickReplyListSectionControllerDidTapEditQuickReply:(id)arg1;
- (void)quickReplyListSectionControllerDidSelectQuickReply:(id)arg1;
- (void)emptyViewPrimaryButtonWasTapped:(id)arg1;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)_didTapNewQuickReplyButtonItem:(id)arg1;
- (void)_dismissButtonTapped;
- (void)_backButtonTapped;
- (void)_setupListView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredTabBarBehavior;
- (id)title;
- (id)initWithUserSession:(id)arg1 canEdit:(_Bool)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

