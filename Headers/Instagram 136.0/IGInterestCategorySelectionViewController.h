//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import <FBSharedFramework/IGBusinessViewControllerLoadingAware-Protocol.h>
#import <FBSharedFramework/IGDismissableViewController-Protocol.h>
#import <FBSharedFramework/IGEmbeddedListItemSectionControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGEmbeddedListViewControllerDelegate-Protocol.h>
#import <FBSharedFramework/IGInterestAccountConverterDelegate-Protocol.h>
#import <FBSharedFramework/IGInterestAccountPrivacyUpdating-Protocol.h>
#import <FBSharedFramework/IGSearchBarDelegate-Protocol.h>
#import <FBSharedFramework/UIGestureRecognizerDelegate-Protocol.h>

@class IG4BLogger, IGBottomButtonsView, IGBusinessCategoryService, IGBusinessConversionFacebookPageCategory, IGBusinessConversionFacebookPageDataSource, IGBusinessSelectionFlowHeaderView, IGEmbeddedListViewController, IGInterestAccountConverter, IGInterestCategorySelectionViewControllerConfiguration, IGInterestProfileSwitchView, IGSearchBar, IGStepperHeaderControl, IGUserSession, NSArray, NSMutableArray, NSString, UILabel, UIView;
@protocol IGInterestCategorySelectionViewControllerDelegate;

@interface IGInterestCategorySelectionViewController : IGViewController <IGDismissableViewController, IGEmbeddedListViewControllerDelegate, IGEmbeddedListItemSectionControllerDelegate, UIGestureRecognizerDelegate, IGInterestAccountConverterDelegate, IGInterestAccountPrivacyUpdating, IGSearchBarDelegate, IGBusinessViewControllerLoadingAware>
{
    IGUserSession *_userSession;
    IGBusinessConversionFacebookPageDataSource *_dataSource;
    IGBusinessCategoryService *_categoryService;
    IGBusinessConversionFacebookPageCategory *_selectedCategory;
    IG4BLogger *_logger;
    IGInterestCategorySelectionViewControllerConfiguration *_config;
    IGBottomButtonsView *_dockedNavigationButtons;
    IGBusinessSelectionFlowHeaderView *_headerView;
    IGInterestProfileSwitchView *_switchView;
    IGSearchBar *_searchBar;
    UILabel *_noResultsText;
    UIView *_nullStateView;
    IGEmbeddedListViewController *_embeddedListViewController;
    NSMutableArray *_categoryViewModels;
    id <IGInterestCategorySelectionViewControllerDelegate> _delegate;
    NSString *_currentlyFetchedQueryString;
    NSArray *_cachedSuggestedCategoryViewModels;
    IGStepperHeaderControl *_stepperHeaderControl;
    _Bool _shouldShowCategory;
    _Bool _ignoreCancelEventLogging;
    IGInterestAccountConverter *_interestAccountConverter;
}

@property(retain, nonatomic) IGInterestAccountConverter *interestAccountConverter; // @synthesize interestAccountConverter=_interestAccountConverter;
@property(nonatomic) _Bool ignoreCancelEventLogging; // @synthesize ignoreCancelEventLogging=_ignoreCancelEventLogging;
- (void).cxx_destruct;
- (void)interestAccountConverter:(id)arg1 didCompletePublicizeWithSuccess:(_Bool)arg2 error:(id)arg3 privateAccount:(_Bool)arg4;
- (void)interestAccountConverterWillPublicizeAccount:(id)arg1;
- (id)titleForPublicizeAlert;
- (id)messageForPublicizeAlert;
- (id)ctaForPublicizeAlert;
- (void)interestAccountConverter:(id)arg1 didUpdateProfileWithError:(id)arg2;
- (void)interestAccountConverterDidFailConversionWithError:(id)arg1 errorString:(id)arg2 errorIdentifier:(id)arg3 phoneErrorMessage:(id)arg4 emailErrorMessage:(id)arg5 addressErrorMessage:(id)arg6;
- (void)_logSelectedValuesSubmitAndFinish;
- (void)interestAccountConverterDidCompleteWithSuccess;
- (void)interestAccountConverterWillConvertAccount:(id)arg1;
- (void)updateToLoadingState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didDismissViewController;
- (id)analyticsModule;
- (void)embeddedListItemSectionController:(id)arg1 didTapSelectButtonWithViewModel:(id)arg2;
- (id)embeddedListViewController:(id)arg1 sectionControllerForViewModel:(id)arg2;
- (void)searchBarDidTapReturnKey:(id)arg1;
- (void)searchBar:(id)arg1 didChangeSearchText:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (_Bool)_isCurrentlyShowingSuggestedCategory;
- (void)_viewTapped:(id)arg1;
- (void)_updateState;
- (void)_setupEmbeddedListViewController;
- (void)_finishStep;
- (void)_handleUpdateUserCategoryCompletedWithError:(id)arg1;
- (void)_updateUserCategory;
- (void)_completeCategorySelection;
- (void)_nextButtonTapped:(id)arg1;
- (void)_setupNavigationButtons;
- (void)_handleFetchRecommendedCategoriesWithVerticalIdCompletedForVerticalId:(long long)arg1 categories:(id)arg2 error:(id)arg3;
- (void)_handleFetchCategoriesWithVerticalIdCompletedForVerticalId:(long long)arg1 queryString:(id)arg2 categories:(id)arg3 error:(id)arg4;
- (void)_fetchSuggestedCategoriesWithQueryString:(id)arg1 verticalId:(long long)arg2;
- (void)_fetchMostCommonCategoriesWithQueryString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchSuggestedCategoriesWithQueryString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_fetchSuggestedCategories:(id)arg1;
- (void)_setupNullState;
- (void)_setupSearchBar;
- (void)_setupSwitchView;
- (void)_setupHeaderView;
- (void)_setupPreFillCategory;
- (_Bool)_isShowingPreFillCategory;
- (_Bool)_shouldShowPreFillCategory;
- (void)_setupStepperHeaderIfNecessary;
- (struct UIEdgeInsets)preferredContentInsets;
- (_Bool)prefersTabBarHidden;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithUserSession:(id)arg1 delegate:(id)arg2 logger:(id)arg3 config:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

