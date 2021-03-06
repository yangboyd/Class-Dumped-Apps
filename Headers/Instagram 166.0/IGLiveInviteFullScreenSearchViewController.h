//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGLiveInviteSearchServiceDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryViewerSectionControllerViewerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/UIScrollViewDelegate-Protocol.h>

@class IGListAdapter, IGLiveBroadcastLogger, IGLiveInviteSearchService, IGLiveInviteSheetFullScreenSearchDataSource, IGSearchBarWithCancel, IGUserSession, NSArray, NSMutableArray, NSString, UICollectionView;
@protocol IGLiveInviteFullScreenSearchViewControllerDelegate;

@interface IGLiveInviteFullScreenSearchViewController : IGViewController <IGLiveInviteSearchServiceDelegate, IGSearchBarDelegate, IGStoryViewerSectionControllerViewerDelegate, UIScrollViewDelegate>
{
    IGSearchBarWithCancel *_searchBar;
    UICollectionView *_collectionView;
    IGUserSession *_userSession;
    NSString *_broadcastId;
    IGLiveBroadcastLogger *_logger;
    NSMutableArray *_selectedUsers;
    NSMutableArray *_loadedUsers;
    IGLiveInviteSheetFullScreenSearchDataSource *_dataSource;
    IGListAdapter *_listAdapter;
    IGLiveInviteSearchService *_searchService;
    id <IGLiveInviteFullScreenSearchViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGLiveInviteFullScreenSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *selectedUsers; // @synthesize selectedUsers=_selectedUsers;
- (void)storyViewerSectionController:(id)arg1 presentStoryForReel:(id)arg2 media:(id)arg3 fromView:(id)arg4 profilePictureView:(id)arg5;
- (void)storyViewerSectionController:(id)arg1 didHideViewerSource:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapMoreButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapProductThumbnailInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapCheckmarkButtonInViewerCell:(id)arg2;
- (void)storyViewerSectionController:(id)arg1 didTapViewerSource:(id)arg2;
- (void)_handleTapWithViewerSource:(id)arg1;
- (void)liveInviteSearchService:(id)arg1 didLoadWithUsers:(id)arg2 appending:(_Bool)arg3 error:(id)arg4;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3 duration:(double)arg4 curve:(long long)arg5;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)_cancelSearch;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)activateSearchIfNeeded;
- (struct UIEdgeInsets)preferredContentInsets;
- (long long)preferredStatusBarStyle;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithUserSession:(id)arg1 broadcastId:(id)arg2 logger:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

