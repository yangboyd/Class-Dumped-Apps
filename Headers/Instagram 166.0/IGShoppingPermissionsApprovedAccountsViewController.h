//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <InstagramAppCoreFramework/IGFeedScrollViewListener-Protocol.h>
#import <InstagramAppCoreFramework/IGListAdapterDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGListSingleSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGSearchBarDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPermissionsAccountSectionControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPermissionsAddApprovedAccountsViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGShoppingPermissionsApprovedAccountViewControllerDelegate-Protocol.h>
#import <InstagramAppCoreFramework/IGTextViewSectionControllerDelegate-Protocol.h>

@class IGActionableConfirmationToastController, IGFullscreenSearchTransitionController, IGFullscreenSearchViewController, IGListAdapter, IGSearchBar, IGSearchThrottler, IGShoppingPermissionsApprovedAccountsFeedDataModel, IGShoppingPermissionsLogger, IGShoppingPermissionsNetworker, IGStatefulNetworker, IGUserSession, NSString, UICollectionView;

@interface IGShoppingPermissionsApprovedAccountsViewController : IGViewController <IGFeedScrollViewListener, IGListAdapterDataSource, IGListSingleSectionControllerDelegate, IGSearchBarDelegate, IGShoppingPermissionsApprovedAccountViewControllerDelegate, IGShoppingPermissionsAddApprovedAccountsViewControllerDelegate, IGShoppingPermissionsAccountSectionControllerDelegate, IGTextViewSectionControllerDelegate>
{
    IGUserSession *_userSession;
    IGStatefulNetworker *_networker;
    IGStatefulNetworker *_searchNetworker;
    IGShoppingPermissionsNetworker *_permissionsNetworker;
    IGShoppingPermissionsLogger *_logger;
    IGSearchBar *_searchBar;
    UICollectionView *_collectionView;
    IGListAdapter *_listAdapter;
    IGActionableConfirmationToastController *_toastController;
    IGFullscreenSearchViewController *_searchViewController;
    IGFullscreenSearchTransitionController *_searchTransitionController;
    IGShoppingPermissionsApprovedAccountsFeedDataModel *_approvedAccountsDataModel;
    IGShoppingPermissionsApprovedAccountsFeedDataModel *_searchApprovedAccountsDataModel;
    _Bool _isPresentingSearch;
    IGSearchThrottler *_searchThrottler;
}

- (void).cxx_destruct;
- (void)_updateToastControllerContainerView;
- (id)_currentNavigationController;
- (void)_searchCancelTapped;
- (void)_onSuccessfulUndoRemoveUser:(id)arg1;
- (void)_addUserBackToWhitelist:(id)arg1;
- (void)_presentUndoActionableToastViewForUser:(id)arg1;
- (void)_onSuccessfulRemoveUser:(id)arg1 shouldPresentToast:(_Bool)arg2;
- (void)_presentShoppingFromCreatorsEducationFlow;
- (void)_presentIntroductoryNuxIfNeeded;
- (void)_searchNetworkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_feedNetworkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_searchNetworkFetchStateUpdated:(id)arg1;
- (void)_feedNetworkFetchStateUpdated:(id)arg1;
- (void)_requestFeedWithAction:(long long)arg1 networker:(id)arg2 shouldCancelPendingRequests:(_Bool)arg3;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)shoppingPermissionsApprovedAccountViewController:(id)arg1 didRemoveApprovedAccount:(id)arg2;
- (void)textViewSectionController:(id)arg1 didTapOnNonLinkedString:(id)arg2 touchEvent:(unsigned long long)arg3;
- (void)textViewSectionController:(id)arg1 didLongTapOnString:(id)arg2 URL:(id)arg3;
- (void)textViewSectionController:(id)arg1 didTapOnString:(id)arg2 URL:(id)arg3;
- (void)didSelectTextViewSectionController:(id)arg1;
- (void)didSelectSectionController:(id)arg1 withObject:(id)arg2;
- (void)shoppingAddApprovedAccountsViewControllerDidUpdateAccounts:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewWillScrollNearTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndScrolling:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillScrollNearBottom:(id)arg1;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectDismissUser:(id)arg2;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectViewProfile:(id)arg2;
- (void)shoppingPermissionsAccountSectionController:(id)arg1 didSelectViewApprovedAccount:(id)arg2;
- (id)emptyViewForListAdapter:(id)arg1;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (long long)preferredTabBarBehavior;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 priorModule:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

